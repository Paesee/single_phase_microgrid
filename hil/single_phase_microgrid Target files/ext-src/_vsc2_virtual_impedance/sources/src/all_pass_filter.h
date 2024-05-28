#ifndef ALL_PASS_FILTER_H
#define ALL_PASS_FILTER_H

// All Pass Filter Constants
#define COT_PI_BY_2 5.912355021465797

// All Pass Filter Struct definition
typedef struct AllPassFilter
{
  // general
  float sampling_time;
  float phase_shift;
  float omega;
  float tau;

  // recurrence equation gains
  float phi1;
  float phi2;
  float phi3;
  float phi4;
  float phi5;

  // previous interest variables
  float input_kminus1;
  float input_kminus2;
  float output_kminus1;
  float output_kminus2;
} AllPassFilter;

// All Pass Filter functions definition
void initAllPassFilter(AllPassFilter *apf, float sampling_time, float phase_shift, float omega, float tau);
void executeAllPassFilter(AllPassFilter *apf, float input, float *output);
void setSamplingTime(AllPassFilter *apf, float sampling_time);
void setPhaseShift(AllPassFilter *apf, float phase_shift);
void setOmega(AllPassFilter *apf, float omega);
void setTau(AllPassFilter *apf, float tau);
void calculateAPFcoefficients(AllPassFilter *apf);

#endif