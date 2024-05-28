#include "droop.h"

/* DROOP CONTROLLER FUNCTIONS IMPLEMENTATION */

void DroopControlInit(Droop *droop, float p_max, float q_max, float v0, float w0, float delta_v, float delta_w)
{
  droop->p_max = p_max;
  droop->q_max = q_max;
  droop->p_ref = 0;
  droop->q_ref = 0;
  droop->v0 = v0;
  droop->w0 = w0;
  droop->m = delta_w / (2.0 * p_max);
  droop->n = delta_v / (2.0 * q_max);
  droop->delta_v = 0.5 * delta_v;
  droop->delta_w = 0.5 * delta_w;
  // variables to implement butterworth second order low pass filter
  // for active power
  droop->p_kminus1 = 0;
  droop->p_kminus2 = 0;
  droop->pf_kminus1 = 0;
  droop->pf_kminus2 = 0;
  // for reactive power
  droop->q_kminus1 = 0;
  droop->q_kminus2 = 0;
  droop->qf_kminus1 = 0;
  droop->qf_kminus2 = 0;
}

// Function used to calculate power dispatched from the Converter
void calculateDroopPQ(Droop *droop, float v_alpha, float v_beta, float i_alpha, float i_beta, float *active_power, float *reactive_power)
{
  float p = 0.5 * (v_alpha * i_alpha + v_beta * i_beta);
  float q = 0.5 * (v_beta * i_alpha - v_alpha * i_beta);
  
  // Implements LOW PASS FILTER using the gains informed by the library user
  float pf = BETA1 * p + BETA0 * droop->p_kminus1 - ALPHA0 * droop->pf_kminus1;
  float qf = BETA1 * q + BETA0 * droop->q_kminus1 - ALPHA0 * droop->qf_kminus1;

  droop->p_kminus1 = p;
  droop->pf_kminus1 = pf;

  droop->q_kminus1 = q;
  droop->qf_kminus1 = qf;

  *active_power = pf;
  *reactive_power = qf;
}

// Set droop P0 and Q0 (only used when tied to grid)
void setDroopPQ(Droop *droop, float p_ref, float q_ref)
{
  droop->p_ref = p_ref;
  droop->q_ref = q_ref;
}

// Set droop nominal RMS voltage
void setDroopV0(Droop *droop, float v0)
{
  droop->v0 = v0;
}

// Set droop nominal frequency (rad/s)
void setDroopW0(Droop *droop, float w0)
{
  droop->w0 = w0;
}

// Set droop max frequency variation
void setDroopDeltaW(Droop *droop, float delta_w)
{
  droop->delta_w = 0.5 * delta_w;
  droop->m = delta_w / (2 * droop->p_max);
}

// Set droop max voltage variation
void setDroopDeltaV(Droop *droop, float delta_v)
{
  droop->delta_v = 0.5 * delta_v;
  droop->n = delta_v / (2 * droop->q_max);
}

// Execute Droop Control its dependent on calling calculateDroopPQ() and setDroopPQ(), these functions will update Droop Struct
void executeDroopControl(Droop *droop, float *v_ref, float *w_ref)
{
  float v_droop = droop->n * (-droop->qf_kminus1 + droop->q_ref); //droop->n * (-droop->qf_kminus1 + droop->q_ref);
  float w_droop = droop->m * (-droop->pf_kminus1 + droop->p_ref);

  //// limitando a maxima variacao de tensao
  //if (v_droop > droop->delta_v)
  //  v_droop = droop->delta_v;
  //if (v_droop < -droop->delta_v)
  //  v_droop = -droop->delta_v;
  //// limitando a maxima variacao de frequencia
  //if (w_droop > droop->delta_w)
  //  w_droop = droop->delta_w;
  //if (w_droop < -droop->delta_w)
  //  w_droop = -droop->delta_w;

  v_droop = v_droop;
  w_droop = droop->w0 + w_droop;

  *v_ref = v_droop;
  *w_ref = w_droop;
}