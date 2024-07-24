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

#ifndef DROOP_H
#define DROOP_H

// Droop controller constants
#define TWOPI 6.28318530718
#define SQRT2 1.41421356237
#define ONE_BY_SQRT2 0.70710678118

/// @brief Droop with Two Integrators
typedef struct ImprovedDroop
{
  // general
  float sampling_time;

  // variables to implement first order low pass filter
  float cutoff_frequency;
  float phi1;
  float phi2;
  float phi3;
  // for active power
  float p_kminus1;
  float pf_kminus1;
  // for reactive power
  float q_kminus1;
  float qf_kminus1;

  // classical droop variables
  float p_max;
  float q_max;
  float p0;
  float q0;
  float v0;
  float w0;
  float m;
  float n;

  // improved droop variables
  float ki;
  float kv;
  float kq;

  // integrator variables
  float phi_integral;
  // for voltage integration
  float vin_kminus1;
  float vout_kminus1;
  // for frequency integration
  float w_kminus1;
  float theta_kminus1;
} ImprovedDroop;

// Droop Controller Functions
void initDroop(ImprovedDroop *droop, float ts, float v0, float w0, float p_max, float q_max, float delta_v, float delta_w, float wc, float ki, float kv);
void executeDroop(ImprovedDroop *droop, float v_alpha, float v_beta, float i_alpha, float i_beta, float *v, float *pf, float *qf);
void setP0(ImprovedDroop *droop, float p0);
void setQ0(ImprovedDroop *droop, float q0);
void setV0(ImprovedDroop *droop, float v0);
void setW0(ImprovedDroop *droop, float w0);
void setKi(ImprovedDroop *droop, float ki);
void setKv(ImprovedDroop *droop, float kv);
void setDeltaV(ImprovedDroop *droop, float delta_v);
void setDeltaW(ImprovedDroop *droop, float delta_w);
void computePhi(ImprovedDroop *droop);
// Droop Controller Inline Functions
extern inline float computeP(float v_alpha, float v_beta, float i_alpha, float i_beta);
extern inline float computeQ(float v_alpha, float v_beta, float i_alpha, float i_beta);
extern inline float computeLPF(ImprovedDroop *droop, float input, float input_kminus1, float output_kminus1);
extern inline float computeIntegral(ImprovedDroop *droop, float input, float input_kminus1, float output_kminus1, float ki);
extern inline float computeVrms(float v_alpha, float v_beta);

#endif