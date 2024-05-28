#include "all_pass_filter.h"

// Virtual Impedance functions implementation
void initAllPassFilter(AllPassFilter *apf, float sampling_time, float phase_shift, float omega, float tau)
{
  // general
  apf->sampling_time = sampling_time;
  apf->phase_shift = phase_shift;
  apf->omega = omega;
  apf->tau = tau;

  // recurrence equation gains
  calculateAPFcoefficients(apf);

  // previous interest variables
  apf->input_kminus1 = 0;
  apf->input_kminus2 = 0;
  apf->output_kminus1 = 0;
  apf->output_kminus2 = 0;
}

void executeAllPassFilter(AllPassFilter *apf, float input, float *output)
{
  // calculate voltage drop
  float out = apf->phi1 * input + apf->phi2 * apf->input_kminus1 + apf->phi3 * apf->input_kminus2 - apf->phi4 * apf->output_kminus1 - apf->phi5 * apf->output_kminus2;
  // store previous variables
  apf->input_kminus2 = apf->input_kminus1;
  apf->input_kminus1 = input;
  apf->output_kminus2 = apf->output_kminus1;
  apf->output_kminus1 = out;
  // output voltage drop
  *output = out;
}

void setSamplingTime(AllPassFilter *apf, float sampling_time)
{
  apf->sampling_time = sampling_time;
  calculateAPFcoefficients(apf);
}

void setPhaseShift(AllPassFilter *apf, float phase_shift)
{
  apf->phase_shift = phase_shift;
  calculateAPFcoefficients(apf);
}

void setOmega(AllPassFilter *apf, float omega)
{
  apf->omega = omega;
  calculateAPFcoefficients(apf);
}

void setTau(AllPassFilter *apf, float tau)
{
  apf->tau = tau;
  calculateAPFcoefficients(apf);
}

void calculateAPFcoefficients(AllPassFilter *apf)
{
  float k = (apf->omega * apf->tau) / (sin(apf->phase_shift));
  float omega0 = apf->omega * sqrt((k - 1) / (k + 1));
  float Q = COT_PI_BY_2 * (omega0 * apf->omega) / (apf->omega * apf->omega - omega0 * omega0);
  float omega0_2 = omega0 * omega0;
  float sampling_time_2 = apf->sampling_time * apf->sampling_time;
  float one_by_divider = 1.0 / (omega0_2 * sampling_time_2 * Q + 2 * omega0 * apf->sampling_time + 4 * Q);
  apf->phi1 = 1 - (4 * omega0 * apf->sampling_time) * one_by_divider;
  apf->phi2 = 2 - (4 * omega0 * apf->sampling_time + 16 * Q) * one_by_divider;
  apf->phi3 = 1;
  apf->phi4 = apf->phi2;
  apf->phi5 = apf->phi1;
}