#ifndef SOGI_QSG_H
#define SOGI_QSG_H

/* SOGI QSG + FLL */

#define PI 3.14159265359
#define INT_GAIN 0.0001

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