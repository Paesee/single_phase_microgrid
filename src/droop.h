#ifndef DROOP_H
#define DROOP_H

/* DROOP CONTROLLER */

// Droop Controller Struct
typedef struct
{
  // droop variables
  float p_max;
  float q_max;
  float p_ref;
  float q_ref;
  float v0;
  float w0;
  float m;
  float n;
  float delta_v;
  float delta_w;
  // variables to implement butterworth second order low pass filter
  // for active power
  float p_kminus1;
  float p_kminus2;
  float pf_kminus1;
  float pf_kminus2;
  // for reactive power
  float q_kminus1;
  float q_kminus2;
  float qf_kminus1;
  float qf_kminus2;
} Droop;

// Droop Controller Functions
void DroopControlInit(Droop *droop, float p_max, float q_max, float v0, float w0, float delta_v, float delta_w);
void calculateDroopPQ(Droop *pc, float v_alpha, float v_beta, float i_alpha, float i_beta, float *active_power, float *reactive_power);
void setDroopPQ(Droop *droop, float p_ref, float q_ref);
void setDroopV0(Droop *droop, float v0);
void setDroopW0(Droop *droop, float w0);
void setDroopDeltaW(Droop *droop, float delta_w);
void setDroopDeltaV(Droop *droop, float delta_v);
void executeDroopControl(Droop *droop, float *v_ref, float *w_ref);

// Droop Controller Gains

#define BETA1 1.546503900334699e-02
#define BETA0 1.546503900334699e-02
#define ALPHA0 -9.690699219933061e-01
#define ALPHA1 0
#define BETA2 0

#endif