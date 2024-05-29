#include "improved_droop.h"
#include <math.h>

/* DROOP CONTROLLER FUNCTIONS IMPLEMENTATION */
void initDroop(ImprovedDroop *droop, float ts, float v0, float w0, float p_max, float q_max, float delta_v, float delta_w, float wc, float ki, float kv)
{
  // general
  droop->sampling_time = ts;

  // variables to implement first order low pass filter
  droop->cutoff_frequency = wc;

  computePhi(droop);
  // for active power
  droop->p_kminus1 = 0;
  droop->pf_kminus1 = 0;
  // for reactive power
  droop->q_kminus1 = 0;
  droop->qf_kminus1 = 0;

  // classical droop variables
  droop->p_max = p_max;
  droop->q_max = q_max;
  droop->p0 = 0;
  droop->q0 = 0;
  droop->v0 = v0;
  droop->w0 = w0;
  droop->m = delta_w / (2.0 * p_max);
  droop->n = delta_v / (2.0 * q_max);

  // improved droop variables
  droop->ki = ki;
  droop->kv = kv;
  droop->is_islanded = 1;
  // integrator variables
  droop->phi_integral = 0.5 * droop->sampling_time;
  droop->vin_kminus1 = 0;
  droop->vout_kminus1 = 0;
  // for omega integration
  droop->w_kminus1 = 0;
  droop->theta_kminus1 = 0;
}

void executeDroop(ImprovedDroop *droop, float v_alpha, float v_beta, float i_alpha, float i_beta, float *v, float *pf, float *qf)
{
  // compute filtered active power
  float p = computeP(v_alpha, v_beta, i_alpha, i_beta);
  float p_filtered = computeLPF(droop, p, droop->p_kminus1, droop->pf_kminus1);
  droop->p_kminus1 = p;
  droop->pf_kminus1 = p_filtered;

  // compute filtered reactive power
  float q = computeQ(v_alpha, v_beta, i_alpha, i_beta);
  float q_filtered = computeLPF(droop, q, droop->q_kminus1, droop->qf_kminus1);
  droop->q_kminus1 = q;
  droop->qf_kminus1 = q_filtered;

  // compute classical droop voltage and frequency variation
  float delta_v = droop->n * (droop->q0 - q_filtered);
  float delta_w = droop->m * (droop->p0 - p_filtered);

  // handle voltage/kVAr control loop
  float vout = 0;
  if (droop->is_islanded == 1)
  {
    // classical method
    vout = droop->v0 + delta_v;
    droop->vin_kminus1 = vout;
    droop->vout_kminus1 = vout;
  }
  else
  {
    // improved droop with two integrator
    float v_improved = droop->kv * (droop->v0 - computeVrms(v_alpha, v_beta));
    float v = v_improved + delta_v;
    vout = computeIntegral(droop, v, droop->vin_kminus1, droop->vout_kminus1, droop->ki);
    droop->vin_kminus1 = v;
    droop->vout_kminus1 = vout;
  }

  // handle frequency/kW control loop
  float w = droop->w0 + delta_w;
  float theta_out = computeIntegral(droop, w, droop->w_kminus1, droop->theta_kminus1, 1.0);
  if (theta_out >= TWOPI)
    theta_out -= TWOPI;
  droop->w_kminus1 = w;
  droop->theta_kminus1 = theta_out;

  // output results
  *v = SQRT2 * vout * sin(theta_out);
  *pf = p_filtered;
  *qf = q_filtered;
}

void setP0(ImprovedDroop *droop, float p0)
{
  droop->p0 = p0;
}

void setQ0(ImprovedDroop *droop, float q0)
{
  droop->q0 = q0;
}

void setV0(ImprovedDroop *droop, float v0)
{
  droop->v0 = v0;
}

void setW0(ImprovedDroop *droop, float w0)
{
  droop->w0 = w0;
}

void setKi(ImprovedDroop *droop, float ki)
{
  droop->ki = ki;
}

void setKv(ImprovedDroop *droop, float kv)
{
  droop->kv = kv;
}

void setDeltaV(ImprovedDroop *droop, float delta_v)
{
  droop->n = delta_v / (2.0 * droop->q_max);
}

void setDeltaW(ImprovedDroop *droop, float delta_w)
{
  droop->m = delta_w / (2.0 * droop->p_max);
}

void setStatus(ImprovedDroop *droop, int status)
{
  droop->is_islanded = status;
}

void computePhi(ImprovedDroop *droop)
{
  float one_by_divider = 1.0 / (2.0 + droop->sampling_time * droop->cutoff_frequency);
  droop->phi1 = (droop->cutoff_frequency * droop->sampling_time) * one_by_divider;
  droop->phi2 = droop->phi1;
  droop->phi3 = (droop->cutoff_frequency * droop->sampling_time - 2.0) * one_by_divider;
}

/* DROOP CONTROLLER INLINE FUNCTIONS IMPLEMENTATION */

extern inline float computeP(float v_alpha, float v_beta, float i_alpha, float i_beta)
{
  return (0.5 * (v_alpha * i_alpha + v_beta * i_beta));
}

extern inline float computeQ(float v_alpha, float v_beta, float i_alpha, float i_beta)
{
  return (0.5 * (v_beta * i_alpha - v_alpha * i_beta));
}

extern inline float computeLPF(ImprovedDroop *droop, float input, float input_kminus1, float output_kminus1)
{
  return (droop->phi1 * input + droop->phi2 * input_kminus1 - droop->phi3 * output_kminus1);
}

extern inline float computeIntegral(ImprovedDroop *droop, float input, float input_kminus1, float output_kminus1, float ki)
{
  return (ki * droop->phi_integral * input + ki * droop->phi_integral * input_kminus1 + output_kminus1);
}

extern inline float computeVrms(float v_alpha, float v_beta)
{
  return (ONE_BY_SQRT2 * sqrt(v_alpha*v_alpha + v_beta*v_beta));
}