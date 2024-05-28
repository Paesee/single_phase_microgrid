#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include ".\src\virtual_impedance.h"
#include ".\src\virtual_impedance.c"

int main(void)
{
  VirtualImpedance vz;

  float TS = 0.0001;
  float INDUCTANCE = 1.25e-3;
  float ZETA = 1;
  float POLE = 2*3.141592653589793*2500;

  initVirtualImpedance(&vz, TS, INDUCTANCE, ZETA, POLE);

  printf("PHI1aa: %f\n", vz.phi1);
  printf("PHI2: %f\n", vz.phi2);
  printf("PHI3: %f\n", vz.phi3);
  printf("PHI4: %f\n", vz.phi4);
}