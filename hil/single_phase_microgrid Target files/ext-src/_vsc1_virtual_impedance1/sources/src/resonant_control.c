/*
Proportional Resonant Controller

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
#include "resonant_control.h"
// include math.h (it must be included in the implementation file for Typhoon HIL Control Center Compatibility)
#include <math.h>

/// @brief 
/// @param rc 
/// @param kp 
/// @param zeta_z 
/// @param zeta_p 
/// @param w0 
/// @param ts 
void resonantInit(ResonantController *rc, float kp, float zeta_z, float zeta_p, float w0, float ts)
{
  // sampling time
  rc->ts = ts;
  rc->output_boundary = 999999.0;
  // recurrence equation gains
  setResonantGains(rc, kp, zeta_z, zeta_p, w0);
  // past control variables
  rc->err_kminus1 = 0;
  rc->err_kminus2 = 0;
  rc->u_kminus1 = 0;
  rc->u_kminus2 = 0;
}

/// @brief 
/// @param rc 
/// @param alpha0 
/// @param alpha1 
/// @param alpha2 
/// @param beta1 
/// @param beta2 
void resonantControlInitMatlab(ResonantController *rc, float alpha0, float alpha1, float alpha2, float beta1, float beta2)
{
  // sampling time
  rc->ts = 1.0;
  rc->output_boundary = 999999.0;
  // recurrence equation gains
  rc->alpha0 = alpha0;
  rc->alpha1 = alpha1;
  rc->alpha2 = alpha2;
  rc->beta1 = beta1;
  rc->beta2 = beta2;
  // past control variables
  rc->err_kminus1 = 0;
  rc->err_kminus2 = 0;
  rc->u_kminus1 = 0;
  rc->u_kminus2 = 0;
}

/// @brief 
/// @param rc 
/// @param kp 
/// @param zeta_z 
/// @param zeta_p 
/// @param w0 
void setResonantGains(ResonantController *rc, float kp, float zeta_z, float zeta_p, float w0)
{
  // resonant gains definition
  float ts_2 = rc->ts * rc->ts;
  float w0_2 = w0 * w0;
  float inv_den = 1.0 / (ts_2 * w0_2 + 4 * zeta_p * rc->ts * w0 + 4);
  rc->alpha0 = (4 * kp +  ts_2 * w0_2 * kp + 4 * rc->ts * zeta_z * w0 + 4 * rc->ts * zeta_p * kp * w0) * inv_den;
  rc->alpha1 = (2 * ts_2 * w0_2 * kp - 8 * kp) * inv_den;
  rc->alpha2 = (4 * kp +  ts_2 * w0_2 * kp - 4 * rc->ts * zeta_z * w0 - 4 * rc->ts * zeta_p * kp * w0) * inv_den;
  rc->beta1 = (2 * ts_2 * w0_2 - 8) * inv_den;
  rc->beta2 = (ts_2 * w0_2 - 4 * zeta_p * rc->ts * w0 + 4) * inv_den;
}

/// @brief 
/// @param rc 
/// @param output_boundary 
void setOutputBoundary(ResonantController *rc, float output_boundary)
{
  rc->output_boundary = output_boundary;
}

/// @brief 
/// @param rc 
/// @param ref 
/// @param meas 
/// @param ctrl 
void executeResonant(ResonantController *rc, float ref, float meas, float *ctrl)
{
  // error calculation
  float err = ref - meas;
  // control action calculation
  float u = rc->alpha0 * err + rc->alpha1 * rc->err_kminus1 + rc->alpha2 * rc->err_kminus2 - rc->beta1 * rc->u_kminus1 - rc->beta2 * rc->u_kminus2;
  // bounded output
  float u_bounded = u;
  float uu = u * u;
  float sqrt_uu = sqrt(uu);
  if ((uu / sqrt_uu) >= rc->output_boundary)
  {
    u_bounded = (rc->output_boundary * u) / sqrt_uu;
  }
  // store next iterations values
  rc->err_kminus2 = rc->err_kminus1;
  rc->err_kminus1 = err;
  rc->u_kminus2 = rc->u_kminus1;
  rc->u_kminus1 = u_bounded;
  // return control action
  *ctrl = u_bounded;
}