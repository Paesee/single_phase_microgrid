/*
Droop Controller with Two Integrators

Copyright 2024 Vítor Paese De Carli

This file is part of MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid.

MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid.  If not, see <https://www.gnu.org/licenses/>6.
*/

// include its header file
#include "improved_droop.h"
// include math.h (it must be included in the implementation file for Typhoon HIL Control Center Compatibility)
#include <math.h>

/// @brief 
/// @param droop 
/// @param ts 
/// @param v0 
/// @param w0 
/// @param p_max 
/// @param q_max 
/// @param delta_v 
/// @param delta_w 
/// @param wc 
/// @param ki 
/// @param kv 
void initDroop(ImprovedDroop *droop, float ts, float v0, float w0, float p_max, float q_max, float delta_v, float delta_w, float wc, float ki, float kv)
{
  // general
  droop->sampling_time = ts;

  // variables to implement first order low pass filter
  droop->cutoff_frequency = wc;

  computePhi(droop);
  // for active power
  droop->p_kminus1 = 0;
  droop->pf_kminus1 = 0;
  // for reactive power
  droop->q_kminus1 = 0;
  droop->qf_kminus1 = 0;

  // classical droop variables
  droop->p_max = p_max;
  droop->q_max = q_max;
  droop->p0 = 0;
  droop->q0 = 0;
  droop->v0 = v0;
  droop->w0 = w0;
  droop->m = delta_w / (2.0 * p_max);
  droop->n = delta_v / (2.0 * q_max);

  // improved droop variables
  droop->ki = ki;
  droop->kv = kv;
  droop->kq = droop->n * droop->kv;
  // integrator variables
  droop->phi_integral = 0.5 * droop->sampling_time;
  droop->vin_kminus1 = 0;
  droop->vout_kminus1 = 0;
  // for omega integration
  droop->w_kminus1 = 0;
  droop->theta_kminus1 = 0;
}

/// @brief 
/// @param droop 
/// @param v_alpha 
/// @param v_beta 
/// @param i_alpha 
/// @param i_beta 
/// @param v 
/// @param pf 
/// @param qf 
void executeDroop(ImprovedDroop *droop, float v_alpha, float v_beta, float i_alpha, float i_beta, float *v, float *pf, float *qf)
{
  // compute filtered active power
  float p = computeP(v_alpha, v_beta, i_alpha, i_beta);
  float p_filtered = computeLPF(droop, p, droop->p_kminus1, droop->pf_kminus1);
  droop->p_kminus1 = p;
  droop->pf_kminus1 = p_filtered;

  // compute filtered reactive power
  float q = computeQ(v_alpha, v_beta, i_alpha, i_beta);
  float q_filtered = computeLPF(droop, q, droop->q_kminus1, droop->qf_kminus1);
  droop->q_kminus1 = q;
  droop->qf_kminus1 = q_filtered;

  // handle voltage/kVAr control loop
  float v_improved = droop->kv * (droop->v0 - computeVrms(v_alpha, v_beta)) - droop->kq * (q_filtered - droop->q0);
  float vout = computeIntegral(droop, v_improved, droop->vin_kminus1, droop->vout_kminus1, droop->ki);
  // voltage output boundary computation
  if(vout > droop->v0 * 1.25)
    vout = droop->v0 * 1.25;
  if(vout < droop->v0 * 0.75)
    vout = droop->v0 * 0.75;
  // store variables for next iteration
  droop->vin_kminus1 = v_improved;
  droop->vout_kminus1 = vout;

  // handle frequency/kW control loop
  float delta_w = droop->m * (p_filtered - droop->p0);
  float w = droop->w0 - delta_w;
  float theta_out = computeIntegral(droop, w, droop->w_kminus1, droop->theta_kminus1, 1.0);
  if (theta_out >= TWOPI)
    theta_out -= TWOPI;
  // store variables for next iteration
  droop->w_kminus1 = w;
  droop->theta_kminus1 = theta_out;

  // output results
  *v = SQRT2 * vout * sin(theta_out);
  *pf = p_filtered; // p_filtered;
  *qf = q_filtered; // q_filtered;
}

/// @brief 
/// @param droop 
/// @param p0 
void setP0(ImprovedDroop *droop, float p0)
{
  droop->p0 = p0;
}

/// @brief 
/// @param droop 
/// @param q0 
void setQ0(ImprovedDroop *droop, float q0)
{
  droop->q0 = q0;
}

/// @brief 
/// @param droop 
/// @param v0 
void setV0(ImprovedDroop *droop, float v0)
{
  droop->v0 = v0;
}

/// @brief 
/// @param droop 
/// @param w0 
void setW0(ImprovedDroop *droop, float w0)
{
  droop->w0 = w0;
}

/// @brief 
/// @param droop 
/// @param ki 
void setKi(ImprovedDroop *droop, float ki)
{
  droop->ki = ki;
}

/// @brief 
/// @param droop 
/// @param kv 
void setKv(ImprovedDroop *droop, float kv)
{
  droop->kv = kv;
  droop->kq = droop->n * droop->kv;
}

/// @brief 
/// @param droop 
/// @param delta_v 
void setDeltaV(ImprovedDroop *droop, float delta_v)
{
  droop->n = delta_v / (2.0 * droop->q_max);
}

/// @brief 
/// @param droop 
/// @param delta_w 
void setDeltaW(ImprovedDroop *droop, float delta_w)
{
  droop->m = delta_w / (2.0 * droop->p_max);
}

/// @brief 
/// @param droop 
void computePhi(ImprovedDroop *droop)
{
  float one_by_divider = 1.0 / (2.0 + droop->sampling_time * droop->cutoff_frequency);
  droop->phi1 = (droop->cutoff_frequency * droop->sampling_time) * one_by_divider;
  droop->phi2 = droop->phi1;
  droop->phi3 = (droop->cutoff_frequency * droop->sampling_time - 2.0) * one_by_divider;
}

/// @brief 
/// @param v_alpha 
/// @param v_beta 
/// @param i_alpha 
/// @param i_beta 
/// @return 
extern inline float computeP(float v_alpha, float v_beta, float i_alpha, float i_beta)
{
  return (0.5 * (v_alpha * i_alpha + v_beta * i_beta));
}

/// @brief 
/// @param v_alpha 
/// @param v_beta 
/// @param i_alpha 
/// @param i_beta 
/// @return 
extern inline float computeQ(float v_alpha, float v_beta, float i_alpha, float i_beta)
{
  return (0.5 * (v_beta * i_alpha - v_alpha * i_beta));
}

/// @brief 
/// @param droop 
/// @param input 
/// @param input_kminus1 
/// @param output_kminus1 
/// @return 
extern inline float computeLPF(ImprovedDroop *droop, float input, float input_kminus1, float output_kminus1)
{
  return (droop->phi1 * input + droop->phi2 * input_kminus1 - droop->phi3 * output_kminus1);
}

/// @brief 
/// @param droop 
/// @param input 
/// @param input_kminus1 
/// @param output_kminus1 
/// @param ki 
/// @return 
extern inline float computeIntegral(ImprovedDroop *droop, float input, float input_kminus1, float output_kminus1, float ki)
{
  return ((ki * droop->phi_integral) * (input + input_kminus1) + output_kminus1);
}

/// @brief 
/// @param v_alpha 
/// @param v_beta 
/// @return 
extern inline float computeVrms(float v_alpha, float v_beta)
{
  return (ONE_BY_SQRT2 * sqrt(v_alpha * v_alpha + v_beta * v_beta));
}