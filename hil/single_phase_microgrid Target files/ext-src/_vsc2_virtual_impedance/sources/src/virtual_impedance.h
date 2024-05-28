#ifndef VIRTUAL_IMPEDANCE_H
#define VIRTUAL_IMPEDANCE_H

// Virtual Impedance Struct definition
typedef struct VirtualImpedance
{
  // general
  float sampling_time;
  float inductance;
  float zeta;
  float omega_pole;

  // recurrence equation gains
  float phi1;
  float phi2;
  float phi3;
  float phi4;

  // previous interest variables
  float current_kminus1;
  float current_kminus2;
  float voltage_kminus1;
  float voltage_kminus2;
} VirtualImpedance;

// Virtual Impedance functions definition
void initVirtualImpedance(VirtualImpedance *vz, float sampling_time, float inductance, float zeta, float pole);
void executeVirtualImpedance(VirtualImpedance *vz, float current, float *voltage_drop);
void vz_setSamplingTime(VirtualImpedance *vz, float sampling_time);
void setInductance(VirtualImpedance *vz, float inductance);
void setDamping(VirtualImpedance *vz, float zeta);
void setPole(VirtualImpedance *vz, float pole);
void calculateVZcoefficients(VirtualImpedance *vz);

#endif