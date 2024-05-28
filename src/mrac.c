#include "mrac.h"

// MRAC Controller Function Implementation
void initMRAC(MRAC *mrac, float sampling_time, float gamma, float settling_time, float eigen_value1, float eigen_value2)
{
  // general
  mrac->sampling_time = sampling_time;
  mrac->gamma = gamma;
  mrac->r_kminus1 = 0;
  mrac->y_kminus1 = 0;
  mrac->u_kminus1 = 0;
  mrac->e_kminus1 = 0;

  // reference model
  mrac->settling_time = settling_time;
  calculateMRcoefficients(mrac);
  mrac->yw_kminus1 = 0;

  // F, q pair
  mrac->eigen_value_1 = eigen_value1;
  mrac->eigen_value_2 = eigen_value2;
  // Fd matrix
  mrac->fd_a11 = 1 + sampling_time * eigen_value1;
  mrac->fd_a12 = 0;
  mrac->fd_a21 = 0;
  mrac->fd_a22 = 1 + sampling_time * eigen_value2;
  // qd matrix
  mrac->qd_a11 = -sampling_time * eigen_value1;
  mrac->qd_a21 = -sampling_time * eigen_value2;
  // Fd and qd solution variables
  mrac->omega1_a11_kminus1 = 0;
  mrac->omega1_a21_kminus1 = 0;
  mrac->omega2_a11_kminus1 = 0;
  mrac->omega2_a21_kminus1 = 0;

  // disturbance rejection
  mrac->sin_kminus1 = 0;
  mrac->cos_kminus1 = 0;
  mrac->zetasin_kminus1 = 0;
  mrac->zetacos_kminus1 = 0;

  // theta controller parameters solution variables
  mrac->theta1_a11_kminus1 = 0;
  mrac->theta1_a21_kminus1 = 0;
  mrac->theta2_a11_kminus1 = 0;
  mrac->theta2_a21_kminus1 = 0;
  mrac->thetay_kminus1 = 0;
  mrac->thetar_kminus1 = 0;
  mrac->thetasin_kminus1 = 0;
  mrac->thetacos_kminus1 = 0;
  // optimizing a repetitive product
  mrac->ts_times_gamma = sampling_time * gamma;

  // normalization signal
  mrac->one_by_m2_kminus1 = 0;
}

void setMRACgains(MRAC *mrac, float theta1_a11, float theta1_a21, float theta2_a11, float theta2_a21, float thetay, float thetar, float thetasin, float thetacos)
{
  mrac->theta1_a11_kminus1 = theta1_a11;
  mrac->theta1_a21_kminus1 = theta1_a21;
  mrac->theta2_a11_kminus1 = theta2_a11;
  mrac->theta2_a21_kminus1 = theta2_a21;
  mrac->thetay_kminus1 = thetay;
  mrac->thetar_kminus1 = thetar;
  mrac->thetasin_kminus1 = thetasin;
  mrac->thetacos_kminus1 = thetacos;
}

void getMRACgains(MRAC *mrac, float *theta1_a11, float *theta1_a21, float *theta2_a11, float *theta2_a21, float *thetay, float *thetar, float *thetasin, float *thetacos)
{
  *theta1_a11 = mrac->theta1_a11_kminus1;
  *theta1_a21 = mrac->theta1_a21_kminus1;
  *theta2_a11 = mrac->theta2_a11_kminus1;
  *theta2_a21 = mrac->theta2_a21_kminus1;
  *thetay = mrac->thetay_kminus1;
  *thetar = mrac->thetar_kminus1;
  *thetasin = mrac->thetasin_kminus1;
  *thetacos = mrac->thetacos_kminus1;
}

void executeMRAC(MRAC *mrac, float reference, float measurement, float sin, float cos, float *control_action)
{
  // execute reference model
  float yw = mrac->beta1_w * reference + mrac->beta0_w * mrac->r_kminus1 - mrac->alpha0_w * mrac->yw_kminus1;

  // update theta1
  float theta1_a11 = mrac->theta1_a11_kminus1 - mrac->ts_times_gamma * mrac->omega1_a11_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  float theta1_a21 = mrac->theta1_a21_kminus1 - mrac->ts_times_gamma * mrac->omega1_a21_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  // update theta2
  float theta2_a11 = mrac->theta2_a11_kminus1 - mrac->ts_times_gamma * mrac->omega2_a11_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  float theta2_a21 = mrac->theta2_a21_kminus1 - mrac->ts_times_gamma * mrac->omega2_a21_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  // update thetay
  float thetay = mrac->thetay_kminus1 - mrac->ts_times_gamma * mrac->y_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  // update thetar
  float thetar = mrac->thetar_kminus1 - mrac->ts_times_gamma * mrac->r_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  // update thetasin
  float thetasin = mrac->thetasin_kminus1 - mrac->ts_times_gamma * mrac->zetasin_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;
  // update thetacos
  float thetacos = mrac->thetacos_kminus1 - mrac->ts_times_gamma * mrac->zetacos_kminus1 * mrac->e_kminus1 * mrac->one_by_m2_kminus1;

  // update omega1
  float omega1_a11 = mrac->fd_a11 * mrac->omega1_a11_kminus1 + mrac->fd_a12 * mrac->omega1_a21_kminus1 + mrac->qd_a11 * mrac->u_kminus1;
  float omega1_a21 = mrac->fd_a21 * mrac->omega1_a11_kminus1 + mrac->fd_a22 * mrac->omega1_a21_kminus1 + mrac->qd_a21 * mrac->u_kminus1;
  // update omega2
  float omega2_a11 = mrac->fd_a11 * mrac->omega2_a11_kminus1 + mrac->fd_a12 * mrac->omega2_a21_kminus1 + mrac->qd_a11 * mrac->y_kminus1;
  float omega2_a21 = mrac->fd_a21 * mrac->omega2_a11_kminus1 + mrac->fd_a22 * mrac->omega2_a21_kminus1 + mrac->qd_a21 * mrac->y_kminus1;
  // update zetasin
  float zetasin = mrac->beta1_w * sin + mrac->beta0_w * mrac->sin_kminus1 - mrac->alpha0_w * mrac->zetasin_kminus1;
  // update zetacos
  float zetacos = mrac->beta1_w * cos + mrac->beta0_w * mrac->cos_kminus1 - mrac->alpha0_w * mrac->zetacos_kminus1;

  // update control action
  float u = theta1_a11 * omega1_a11 + theta1_a21 * omega1_a21 + theta2_a11 * omega2_a11 + theta2_a21 * omega2_a21 + thetay * measurement + thetar * reference + thetasin * sin + thetacos * cos;

  // update error
  float e = measurement - yw;

  // update normalization signal;
  float m2 = 1 + omega1_a11 * omega1_a11 + omega1_a21 * omega1_a21 + omega2_a11 * omega2_a11 + omega2_a21 * omega2_a21 + measurement * measurement + reference * reference + zetasin * zetasin + zetacos * zetacos;

  // store variables for next iteration
  // general
  mrac->r_kminus1 = reference;
  mrac->y_kminus1 = measurement;
  mrac->sin_kminus1 = sin;
  mrac->cos_kminus1 = cos;
  mrac->yw_kminus1 = yw;
  mrac->u_kminus1 = u;
  mrac->e_kminus1 = e;
  mrac->one_by_m2_kminus1 = 1.0 / m2;
  // thetas
  mrac->theta1_a11_kminus1 = theta1_a11;
  mrac->theta1_a21_kminus1 = theta1_a21;
  mrac->theta2_a11_kminus1 = theta1_a11;
  mrac->theta2_a21_kminus1 = theta1_a21;
  mrac->thetay_kminus1 = thetay;
  mrac->thetar_kminus1 = thetar;
  mrac->thetasin_kminus1 = thetasin;
  mrac->thetacos_kminus1 = thetacos;
  // omegas
  mrac->omega1_a11_kminus1 = omega1_a11;
  mrac->omega1_a21_kminus1 = omega1_a21;
  mrac->omega2_a11_kminus1 = omega2_a11;
  mrac->omega2_a21_kminus1 = omega2_a21;
  // zetas
  mrac->zetasin_kminus1 = zetasin;
  mrac->zetacos_kminus1 = zetacos;

  // output control action
  *control_action = u;
}

void calculateMRcoefficients(MRAC *mrac)
{
  float tau = mrac->settling_time * 0.25;
  float beta_times_ts = (1.0 / tau) * mrac->sampling_time;
  mrac->beta1_w = beta_times_ts / (2 + beta_times_ts);
  mrac->beta0_w = mrac->beta1_w;
  mrac->alpha0_w = (beta_times_ts - 2.0) / (2 + beta_times_ts);
}