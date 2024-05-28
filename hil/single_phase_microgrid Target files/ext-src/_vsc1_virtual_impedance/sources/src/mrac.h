#ifndef MRAC_H
#define MRAC_H

// MRAC Controller Struct definition
typedef struct MRAC
{
  // general
  float sampling_time;
  float gamma;
  float r_kminus1;
  float y_kminus1;
  float u_kminus1;
  float e_kminus1;

  // reference model
  float settling_time;
  // recurrence equation coefficients
  float beta1_w;
  float beta0_w;
  float alpha0_w;
  // recurrence equation variables
  float yw_kminus1;

  // F, q pair
  float eigen_value_1;
  float eigen_value_2;
  // Fd matrix
  float fd_a11;
  float fd_a12;
  float fd_a21;
  float fd_a22;
  // qd matrix
  float qd_a11;
  float qd_a21;
  // Fd and qd solution variables
  float omega1_a11_kminus1;
  float omega1_a21_kminus1;
  float omega2_a11_kminus1;
  float omega2_a21_kminus1;

  // disturbance rejection
  float sin_kminus1;
  float cos_kminus1;
  float zetasin_kminus1;
  float zetacos_kminus1;

  // theta controller parameters solution variables
  float theta1_a11_kminus1;
  float theta1_a21_kminus1;
  float theta2_a11_kminus1;
  float theta2_a21_kminus1;
  float thetay_kminus1;
  float thetar_kminus1;
  float thetasin_kminus1;
  float thetacos_kminus1;
  // optimizing a repetitive product
  float ts_times_gamma;

  // normalization signal
  float one_by_m2_kminus1;
} MRAC;

// MRAC Controller functions definition
void initMRAC(MRAC *mrac, float sampling_time, float gamma, float settling_time, float eigen_value1, float eigen_value2);
void setMRACgains(MRAC *mrac, float theta1_a11, float theta1_a21, float theta2_a11, float theta2_a21, float thetay, float thetar, float thetasin, float thetacos);
void getMRACgains(MRAC *mrac, float *theta1_a11, float *theta1_a21, float *theta2_a11, float *theta2_a21, float *thetay, float *thetar, float *thetasin, float *thetacos);
void executeMRAC(MRAC *mrac, float reference, float measurement, float sin, float cos, float *control_action);
void calculateMRcoefficients(MRAC *mrac);

#endif