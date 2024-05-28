#include "resonant_control.h"

/// @brief initializes a resonant controller
/// @param rc resonant controller struct
/// @param kp proportional controller gain
/// @param zero_dumping zeros dumping coefficient
/// @param pole_dumping poles dumping coefficient
/// @param omega0 center frequency
/// @param sampling_time sampling time in seconds (ts = 1/fs)
void resonantInit(ResonantController *rc, float kp, float zero_dumping, float pole_dumping, float omega0, float ts)
{
  // execution rate
  rc->sampling_time = ts;
  // characteristic transfer function coefficients
  rc->kp = kp;
  rc->zero_dumping = zero_dumping;
  rc->pole_dumping = pole_dumping;
  rc->omega0 = omega0;
  // recurrence equation gains
  rc->aux_4ts2 = 4.0 / (ts * ts);
  rc->aux_4ts = 4.0 / ts;
  setResonantGains(rc, kp, zero_dumping, pole_dumping, omega0);
  // past control variables
  rc->err_kminus1 = 0;
  rc->err_kminus2 = 0;
  rc->u_kminus1 = 0;
  rc->u_kminus2 = 0;
}

/// @brief initializes a resonant controller from matlab given coefficients
/// @param rc
/// @param k1
/// @param k2
/// @param k3
/// @param k4
/// @param k5
/// @param sampling_time sampling time in seconds (ts = 1/fs)
void resonantControlInitMatlab(ResonantController *rc, float k1, float k2, float k3, float k4, float k5)
{
  // execution rate
  rc->sampling_time = 0;
  // characteristic transfer function coefficients
  rc->kp = 0;
  rc->zero_dumping = 0;
  rc->pole_dumping = 0;
  rc->omega0 = 0;
  // recurrence equation gains
  rc->k1 = k1;
  rc->k2 = k2;
  rc->k3 = k3;
  rc->k4 = k4;
  rc->k5 = k5;
  // past control variables
  rc->err_kminus1 = 0;
  rc->err_kminus2 = 0;
  rc->u_kminus1 = 0;
  rc->u_kminus2 = 0;
}

/// @brief
/// @param rc
/// @param kp
/// @param zero_dumping
/// @param pole_dumping
/// @param omega0
void setResonantGains(ResonantController *rc, float kp, float zero_dumping, float pole_dumping, float omega0)
{
  // resonant gains definition
  float aux_a = rc->aux_4ts2 * kp;
  float aux_b = rc->aux_4ts * kp * zero_dumping * omega0;
  float aux_c = rc->aux_4ts2;
  float aux_d = rc->aux_4ts * pole_dumping * omega0;
  float aux_e2 = omega0 * omega0;
  float aux_e1 = kp * aux_e2;
  float divider = 1.0 / (aux_c + aux_d + aux_e2);
  rc->k1 = (aux_a + aux_b + aux_e1) * divider;
  rc->k2 = 2 * (-aux_a + aux_e1) * divider;
  rc->k3 = (aux_a - aux_b + aux_e1) * divider;
  rc->k4 = 2 * (-aux_c + aux_e2) * divider;
  rc->k5 = (aux_c - aux_d + aux_e2) * divider;
  //printf("k1: %.4f k2: %.4f k3: %.4f k4: %.4f k5: %.4f\n", rc->k1, rc->k2, rc->k3, rc->k4, rc->k5);
}

/// @brief
/// @param rc
/// @param kp
void setResonantKp(ResonantController *rc, float kp)
{
  // proportional gain definition
  setResonantGains(rc, kp, rc->zero_dumping, rc->pole_dumping, rc->omega0);
}

/// @brief
/// @param rc
/// @param zero_dumping
void setResonantZeroDumping(ResonantController *rc, float zero_dumping)
{
  setResonantGains(rc, rc->kp, zero_dumping, rc->pole_dumping, rc->omega0);
}

/// @brief
/// @param rc
/// @param pole_dumping
void setResonantPoleDumping(ResonantController *rc, float pole_dumping)
{
  setResonantGains(rc, rc->kp, rc->zero_dumping, pole_dumping, rc->omega0);
}

/// @brief
/// @param rc
/// @param omega0
void setResonantOmega0(ResonantController *rc, float omega0)
{
  setResonantGains(rc, rc->kp, rc->zero_dumping, rc->pole_dumping, omega0);
}

/// @brief
/// @param rc
/// @param reference
/// @param measurement
/// @return control action
void executeResonant(ResonantController *rc, float reference, float measurement, float *ctrl_action, float *erro)
{
  // error calculation
  float err = reference - measurement;
  // control action calculation
  float u = rc->k1 * err + rc->k2 * rc->err_kminus1 + rc->k3 * rc->err_kminus2 - rc->k4 * rc->u_kminus1 - rc->k5 * rc->u_kminus2;
  // store next iterations values
  rc->err_kminus2 = rc->err_kminus1;
  rc->err_kminus1 = err;
  rc->u_kminus2 = rc->u_kminus1;
  rc->u_kminus1 = u;
  // return control action
  *erro = err;
  *ctrl_action = u;
}