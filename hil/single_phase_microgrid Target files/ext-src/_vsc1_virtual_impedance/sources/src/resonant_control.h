#ifndef RESONANT_CONTROL_H
#define RESONANT_CONTROL_H

// Ressonant Controller Struct
typedef struct {
  // sampling time
  float sampling_time;
  // characteristic transfer function coefficients
  float kp;
  float zero_dumping;
  float pole_dumping;
  float omega0;
  // recurrence equation gains
  float aux_4ts2;
  float aux_4ts;
  float k1;
  float k2;
  float k3;
  float k4;
  float k5;
  // past control variables
  float err_kminus1;
  float err_kminus2;
  float u_kminus1;
  float u_kminus2;
} ResonantController;

// Ressonant Controller functions
void resonantInit(ResonantController *rc, float kp, float zero_dumping, float pole_dumping, float omega0, float ts);
void resonantControlInitMatlab(ResonantController *rc, float k1, float k2, float k3, float k4, float k5);
void setResonantGains(ResonantController *rc, float kp, float zero_dumping, float pole_dumping, float omega0);
void setResonantKp(ResonantController *rc, float kp);
void setResonantZeroDumping(ResonantController *rc, float zero_dumping);
void setResonantPoleDumping(ResonantController *rc, float pole_dumping);
void setResonantOmega0(ResonantController *rc, float omega0);
void executeResonant(ResonantController *rc, float reference, float measurement, float *ctrl_action, float *erro);

#endif