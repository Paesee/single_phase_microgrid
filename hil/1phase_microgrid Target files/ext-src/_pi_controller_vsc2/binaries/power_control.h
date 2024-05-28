#ifndef POWER_CONTROL_H
#define POWER_CONTROL_H

/* POWER CONTROLLER */

// Power Controller Struct
typedef struct{
  float p_ref;
  float q_ref;
  float last_p_error;
  float last_i_direct;
  float last_q_error;
  float last_i_quad;
  float last_pf_meas;
  float last_qf_meas;
} PowerControl;

// Power Controller Gains

/*
Having in mind that the implemented controller is a PI and its difference equation looks like this:
  p_ctrl_action = P_GAIN_1 * p_error + P_GAIN_2 * pc->last_p_error + P_GAIN_3 * pc->last_p_action;
  q_ctrl_action = Q_GAIN_1 * q_error + Q_GAIN_2 * pc->last_q_error + Q_GAIN_3 * pc->last_q_action;
Please, define the gains below.
*/

#define P_GAIN_1 +0.001174
#define P_GAIN_2 -0.001058
#define P_GAIN_3 -1
#define Q_GAIN_1 +0.001174
#define Q_GAIN_2 -0.001058
#define Q_GAIN_3 -1

/*
Having in mind that the implemented power calculation method uses a Low Pass Filter and its difference equation looks like this:
  P = LPF_GAIN_1 * p + LPF_GAIN_2 * ep->last_pf;
  Q = LPF_GAIN_1 * q + LPF_GAIN_2 * ep->last_qf;
Please, define the gains below.
*/

#define LPF_GAIN_1 0.01867
#define LPF_GAIN_2 -0.9813

// Power Controller Functions

void PowerControlInit(PowerControl *pc, float p_ref, float q_ref);
void setPQ(PowerControl *pc, float p_ref, float q_ref);
void calculatePQ(PowerControl *pc, float v_alpha, float v_beta, float i_alpha, float i_beta, float *active_power, float *reactive_power);
void executePQControl(PowerControl *pc, float *id, float *iq);

#endif