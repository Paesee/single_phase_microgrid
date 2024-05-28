#include "sogi_qsg.h"

/* SOGI FUNCTIONS IMPLEMENTATION */

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

void setCentralFrequency(SOGIqsg *sogi, float frequency)
{
  sogi->w0 = 2 * PI * frequency;
}

void setProportionalGain(SOGIqsg *sogi, float p_gain)
{
  sogi->proportional_gain = p_gain;
}

void setFLLGain(SOGIqsg *sogi, float f_gain)
{
  sogi->fll_gain = f_gain;
}

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