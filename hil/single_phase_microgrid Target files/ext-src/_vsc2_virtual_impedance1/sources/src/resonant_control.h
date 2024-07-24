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

#ifndef RESONANT_CONTROL_H
#define RESONANT_CONTROL_H

/// @brief Proportional Resonant Controller
typedef struct {
  // sampling time
  float ts;
  float output_boundary;
  // recurrence equation gains
  float alpha0;
  float alpha1;
  float alpha2;
  float beta1;
  float beta2;
  // past control variables
  float err_kminus1;
  float err_kminus2;
  float u_kminus1;
  float u_kminus2;
} ResonantController;

void resonantInit(ResonantController *rc, float kp, float zeta_z, float zeta_p, float w0, float ts);
void resonantControlInitMatlab(ResonantController *rc, float alpha0, float alpha1, float alpha2, float beta1, float beta2);
void setResonantGains(ResonantController *rc, float kp, float zeta_z, float zeta_p, float w0);
void setOutputBoundary(ResonantController *rc, float output_boundary);
void executeResonant(ResonantController *rc, float ref, float meas, float *ctrl);

#endif