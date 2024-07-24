/*
Second Order Generalized Integrator + Frequency Locked Loop (SOGI+FLL)

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

#ifndef SOGI_QSG_H
#define SOGI_QSG_H

#define PI 3.14159265359
#define INT_GAIN 0.00005

typedef struct {
  float w0;
  float last_alpha_signal;
  float last_beta_signal;
  float last_w_meas;
  float last_w;
  float proportional_gain;
  float fll_gain;
} SOGIqsg;

void SOGIInit(SOGIqsg *sogi, float frequency, float p_gain, float f_gain);
void setCentralFrequency(SOGIqsg *sogi, float frequency);
void setProportionalGain(SOGIqsg *sogi, float p_gain);
void setFLLGain(SOGIqsg *sogi, float f_gain);
void executeSOGI(SOGIqsg *sogi, float meas_signal, float *alpha_signal, float *beta_signal, float *frequency);

#endif