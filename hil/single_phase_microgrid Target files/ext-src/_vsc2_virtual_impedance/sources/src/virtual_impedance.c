#include "virtual_impedance.h"

// Virtual Impedance functions implementation
void initVirtualImpedance(VirtualImpedance *vz, float sampling_time, float inductance, float zeta, float pole)
{
  // general
  vz->sampling_time = sampling_time;
  vz->inductance = inductance;
  vz->zeta = zeta;
  vz->omega_pole = pole;

  // recurrence equation gains
  calculateVZcoefficients(vz);

  // previous interest variables
  vz->current_kminus1 = 0;
  vz->current_kminus2 = 0;
  vz->voltage_kminus1 = 0;
  vz->voltage_kminus2 = 0;
}

void executeVirtualImpedance(VirtualImpedance *vz, float current, float *voltage_drop)
{
  // calculate voltage drop
  float v_drop = vz->phi1 * current + vz->phi2 * vz->current_kminus2 - vz->phi3 * vz->voltage_kminus1 - vz->phi4 * vz->voltage_kminus2;
  // store previous variables
  vz->current_kminus2 = vz->current_kminus1;
  vz->current_kminus1 = current;
  vz->voltage_kminus2 = vz->voltage_kminus1;
  vz->voltage_kminus1 = v_drop;
  // output voltage drop
  *voltage_drop = v_drop;
}

void vz_setSamplingTime(VirtualImpedance *vz, float sampling_time)
{
  vz->sampling_time = sampling_time;
  calculateVZcoefficients(vz);
}

void setInductance(VirtualImpedance *vz, float inductance)
{
  vz->inductance = inductance;
  calculateVZcoefficients(vz);
}

void setDamping(VirtualImpedance *vz, float zeta)
{
  vz->zeta = zeta;
  calculateVZcoefficients(vz);
}

void setPole(VirtualImpedance *vz, float pole)
{
  vz->omega_pole = pole;
  calculateVZcoefficients(vz);
}

void calculateVZcoefficients(VirtualImpedance *vz)
{
  float omega_pole_2 = vz->omega_pole*vz->omega_pole;
  float sampling_time_2 = vz->sampling_time*vz->sampling_time;
  float one_by_divider = 1.0 / (omega_pole_2 * sampling_time_2 + 4 * vz->zeta * vz->omega_pole * vz->sampling_time + 4);
  vz->phi1 = (2 * omega_pole_2 * vz->inductance * vz->sampling_time) * one_by_divider;
  vz->phi2 = -vz->phi1;
  vz->phi3 = 2 - (8 * vz->zeta * vz->omega_pole * vz->sampling_time + 16) * one_by_divider;
  vz->phi4 = 1 - (8 * vz->zeta * vz->omega_pole * vz->sampling_time) * one_by_divider;
}