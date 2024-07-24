/*
Virtual Impedance

Copyright 2024 Vítor Paese De Carli

This file is part of MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid.

MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with MRAC for Grid-Forming Inverters applied to Single-Phase Microgrid.  If not, see <https://www.gnu.org/licenses/>6.
*/

#ifndef VIRTUAL_IMPEDANCE_H
#define VIRTUAL_IMPEDANCE_H

// Virtual Impedance Struct definition
typedef struct VirtualImpedance
{
  // general
  float sampling_time;
  float resistance;
  float inductance;
  float zeta;
  float omega_pole;

  // recurrence equation gains
  float alpha0;
  float alpha1;
  float alpha2;
  float beta1;
  float beta2;

  // previous interest variables
  float current_kminus1;
  float current_kminus2;
  float voltage_kminus1;
  float voltage_kminus2;
} VirtualImpedance;

// Virtual Impedance functions definition
void initVirtualImpedance(VirtualImpedance *vz, float sampling_time, float resistance, float inductance, float zeta, float pole);
void executeVirtualImpedance(VirtualImpedance *vz, float current, float *voltage_drop);
void vz_setSamplingTime(VirtualImpedance *vz, float sampling_time);
void setResistance(VirtualImpedance *vz, float resistance);
void setInductance(VirtualImpedance *vz, float inductance);
void setDamping(VirtualImpedance *vz, float zeta);
void setComplexPole(VirtualImpedance *vz, float pole);
void calculateVZcoefficients(VirtualImpedance *vz);

#endif