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

// include its header file
#include "sogi_qsg.h"

/// @brief 
/// @param sogi 
/// @param frequency 
/// @param p_gain 
/// @param f_gain 
void SOGIInit(SOGIqsg *sogi, float frequency, float p_gain, float f_gain)
{
  sogi->w0 = 2 * PI * frequency;
  sogi->last_alpha_signal = 0;
  sogi->last_beta_signal = 0;
  sogi->last_w_meas = 0;
  sogi->last_w = sogi->w0;
  sogi->proportional_gain = p_gain;
  sogi->fll_gain = f_gain;
}

/// @brief 
/// @param sogi 
/// @param frequency 
void setCentralFrequency(SOGIqsg *sogi, float frequency)
{
  sogi->w0 = 2 * PI * frequency;
}

/// @brief 
/// @param sogi 
/// @param p_gain 
void setProportionalGain(SOGIqsg *sogi, float p_gain)
{
  sogi->proportional_gain = p_gain;
}

/// @brief 
/// @param sogi 
/// @param f_gain 
void setFLLGain(SOGIqsg *sogi, float f_gain)
{
  sogi->fll_gain = f_gain;
}

/// @brief 
/// @param sogi 
/// @param meas_signal 
/// @param alpha_signal 
/// @param beta_signal 
/// @param frequency 
void executeSOGI(SOGIqsg *sogi, float meas_signal, float *alpha_signal, float *beta_signal, float *frequency)
{
  // QSG execution
  float phase_error_1 = meas_signal - sogi->last_alpha_signal;
  float phase_error_2 = sogi->proportional_gain * phase_error_1 - sogi->last_beta_signal;

  float alpha = INT_GAIN * sogi->last_w * phase_error_2 + sogi->last_alpha_signal;
  float beta = INT_GAIN * sogi->last_w * alpha + sogi->last_beta_signal;

  // FLL execution
  float fll_input = -sogi->fll_gain * phase_error_1 * beta;
  float w_meas = INT_GAIN * fll_input + sogi->last_w_meas;
  float w = w_meas + sogi->w0;

  // assign values for the next execution
  sogi->last_alpha_signal = alpha;
  sogi->last_beta_signal = beta;
  sogi->last_w_meas = w_meas;
  sogi->last_w = w;

  // output value to the pointers
  *alpha_signal = alpha;
  *beta_signal = beta;
  *frequency = w;
}