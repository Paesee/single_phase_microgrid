// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


#include "resonant_control.h"


#include "all_pass_filter.h"



#include "improved_droop.h"

#include "sogi_qsg.h"


#include "resonant_control.h"

#include "improved_droop.h"



#include "all_pass_filter.h"
#include "improved_droop.h"
#include "resonant_control.h"
#include "sogi_qsg.h"
#include "rms.h"
#include "virtual_impedance.h"
#include "mrac.h"
#include "power_control.h"

#include "virtual_impedance.h"

#include "all_pass_filter.h"
#include "improved_droop.h"
#include "resonant_control.h"
#include "sogi_qsg.h"
#include "rms.h"
#include "virtual_impedance.h"
#include "mrac.h"
#include "power_control.h"

#include "virtual_impedance.h"

#include "sogi_qsg.h"


#include "all_pass_filter.h"

// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines




























































































































































float  _load_meter_meter__Ts;
unsigned int   _load_meter_meter__flag_init;
float  _load_meter_meter__Ts2 , _load_meter_meter__ws , _load_meter_meter__ws_n1 , _load_meter_meter__Va , _load_meter_meter__Va_n1 , _load_meter_meter__Va_n2 , _load_meter_meter__Vb , _load_meter_meter__Vb_n1 , _load_meter_meter__Vb_n2;
float  _load_meter_meter__win , _load_meter_meter__win_n1 , _load_meter_meter__what , _load_meter_meter__what2 , _load_meter_meter__norm;
float  _load_meter_meter__GAMA , _load_meter_meter__KE , _load_meter_meter__Vgrid_n1 , _load_meter_meter__Vgrid_n2 , _load_meter_meter__k1 , _load_meter_meter__k2 , _load_meter_meter__k3 , _load_meter_meter__k4 , _load_meter_meter__k5;
float  _load_meter_meter__wg , _load_meter_meter__TWO_PI , _load_meter_meter__ct1 , _load_meter_meter__ct2;
float  _load_meter_meter__MAX_FREQ , _load_meter_meter__MIN_FREQ;
float  _load_meter_meter__Tsig;
unsigned int   _load_meter_meter__max_k;
unsigned int   _load_meter_meter__kMIN;
unsigned int   _load_meter_meter__kLIM;
float  _load_meter_meter__temp;
unsigned int   _load_meter_meter__cnt_cycles;
float  _load_meter_meter__nc;
float  _load_meter_meter__vk_0 , _load_meter_meter__vk_1;
float  _load_meter_meter__vt , _load_meter_meter__t0v , _load_meter_meter__tfv;
float  _load_meter_meter__sumV2;
float  _load_meter_meter__v_rms;
unsigned int   _load_meter_meter__kv;
float  _load_meter_meter__Va_k1;
float  _load_meter_meter__sumS , _load_meter_meter__Pw , _load_meter_meter__Pact;
float  _load_meter_meter__ik_0 , _load_meter_meter__ik_1;
float  _load_meter_meter__sumI2;
float  _load_meter_meter__i_rms;
float  _load_meter_meter__Qint , _load_meter_meter__Qt;













































float  _mgcc_meter_meter__Ts;
unsigned int   _mgcc_meter_meter__flag_init;
float  _mgcc_meter_meter__Ts2 , _mgcc_meter_meter__ws , _mgcc_meter_meter__ws_n1 , _mgcc_meter_meter__Va , _mgcc_meter_meter__Va_n1 , _mgcc_meter_meter__Va_n2 , _mgcc_meter_meter__Vb , _mgcc_meter_meter__Vb_n1 , _mgcc_meter_meter__Vb_n2;
float  _mgcc_meter_meter__win , _mgcc_meter_meter__win_n1 , _mgcc_meter_meter__what , _mgcc_meter_meter__what2 , _mgcc_meter_meter__norm;
float  _mgcc_meter_meter__GAMA , _mgcc_meter_meter__KE , _mgcc_meter_meter__Vgrid_n1 , _mgcc_meter_meter__Vgrid_n2 , _mgcc_meter_meter__k1 , _mgcc_meter_meter__k2 , _mgcc_meter_meter__k3 , _mgcc_meter_meter__k4 , _mgcc_meter_meter__k5;
float  _mgcc_meter_meter__wg , _mgcc_meter_meter__TWO_PI , _mgcc_meter_meter__ct1 , _mgcc_meter_meter__ct2;
float  _mgcc_meter_meter__MAX_FREQ , _mgcc_meter_meter__MIN_FREQ;
float  _mgcc_meter_meter__Tsig;
unsigned int   _mgcc_meter_meter__max_k;
unsigned int   _mgcc_meter_meter__kMIN;
unsigned int   _mgcc_meter_meter__kLIM;
float  _mgcc_meter_meter__temp;
unsigned int   _mgcc_meter_meter__cnt_cycles;
float  _mgcc_meter_meter__nc;
float  _mgcc_meter_meter__vk_0 , _mgcc_meter_meter__vk_1;
float  _mgcc_meter_meter__vt , _mgcc_meter_meter__t0v , _mgcc_meter_meter__tfv;
float  _mgcc_meter_meter__sumV2;
float  _mgcc_meter_meter__v_rms;
unsigned int   _mgcc_meter_meter__kv;
float  _mgcc_meter_meter__Va_k1;
float  _mgcc_meter_meter__sumS , _mgcc_meter_meter__Pw , _mgcc_meter_meter__Pact;
float  _mgcc_meter_meter__ik_0 , _mgcc_meter_meter__ik_1;
float  _mgcc_meter_meter__sumI2;
float  _mgcc_meter_meter__i_rms;
float  _mgcc_meter_meter__Qint , _mgcc_meter_meter__Qt;





















float  _vsc1_meter_meter__Ts;
unsigned int   _vsc1_meter_meter__flag_init;
float  _vsc1_meter_meter__Ts2 , _vsc1_meter_meter__ws , _vsc1_meter_meter__ws_n1 , _vsc1_meter_meter__Va , _vsc1_meter_meter__Va_n1 , _vsc1_meter_meter__Va_n2 , _vsc1_meter_meter__Vb , _vsc1_meter_meter__Vb_n1 , _vsc1_meter_meter__Vb_n2;
float  _vsc1_meter_meter__win , _vsc1_meter_meter__win_n1 , _vsc1_meter_meter__what , _vsc1_meter_meter__what2 , _vsc1_meter_meter__norm;
float  _vsc1_meter_meter__GAMA , _vsc1_meter_meter__KE , _vsc1_meter_meter__Vgrid_n1 , _vsc1_meter_meter__Vgrid_n2 , _vsc1_meter_meter__k1 , _vsc1_meter_meter__k2 , _vsc1_meter_meter__k3 , _vsc1_meter_meter__k4 , _vsc1_meter_meter__k5;
float  _vsc1_meter_meter__wg , _vsc1_meter_meter__TWO_PI , _vsc1_meter_meter__ct1 , _vsc1_meter_meter__ct2;
float  _vsc1_meter_meter__MAX_FREQ , _vsc1_meter_meter__MIN_FREQ;
float  _vsc1_meter_meter__Tsig;
unsigned int   _vsc1_meter_meter__max_k;
unsigned int   _vsc1_meter_meter__kMIN;
unsigned int   _vsc1_meter_meter__kLIM;
float  _vsc1_meter_meter__temp;
unsigned int   _vsc1_meter_meter__cnt_cycles;
float  _vsc1_meter_meter__nc;
float  _vsc1_meter_meter__vk_0 , _vsc1_meter_meter__vk_1;
float  _vsc1_meter_meter__vt , _vsc1_meter_meter__t0v , _vsc1_meter_meter__tfv;
float  _vsc1_meter_meter__sumV2;
float  _vsc1_meter_meter__v_rms;
unsigned int   _vsc1_meter_meter__kv;
float  _vsc1_meter_meter__Va_k1;
float  _vsc1_meter_meter__sumS , _vsc1_meter_meter__Pw , _vsc1_meter_meter__Pact;
float  _vsc1_meter_meter__ik_0 , _vsc1_meter_meter__ik_1;
float  _vsc1_meter_meter__sumI2;
float  _vsc1_meter_meter__i_rms;
float  _vsc1_meter_meter__Qint , _vsc1_meter_meter__Qt;

struct _vsc1_sogi_qsg__SOGIqsg {
    float  w0 ;

    float  last_alpha_signal ;

    float  last_beta_signal ;

    float  last_w_meas ;

    float  last_w ;

    float  proportional_gain ;

    float  fll_gain ;
}  ;
struct _vsc1_sogi_qsg__SOGIqsg  _vsc1_sogi_qsg__v_sogi;
float  _vsc1_sogi_qsg__v_alpha = 0;
float  _vsc1_sogi_qsg__v_beta = 0;
float  _vsc1_sogi_qsg__v_freq = 60;
struct _vsc1_sogi_qsg__SOGIqsg  _vsc1_sogi_qsg__i_sogi;
float  _vsc1_sogi_qsg__i_alpha = 0;
float  _vsc1_sogi_qsg__i_beta = 0;
float  _vsc1_sogi_qsg__i_freq = 60;



float  _vsc1_current_controller__err = 0;
float  _vsc1_current_controller__u = 0;
float  _vsc1_current_controller__u0 = 0;
float  _vsc1_current_controller__u_bounded = 0;
float  _vsc1_current_controller__KP = 0;
float  _vsc1_current_controller__U_BOUNDARY = 0;







float  _vsc2_meter_meter__Ts;
unsigned int   _vsc2_meter_meter__flag_init;
float  _vsc2_meter_meter__Ts2 , _vsc2_meter_meter__ws , _vsc2_meter_meter__ws_n1 , _vsc2_meter_meter__Va , _vsc2_meter_meter__Va_n1 , _vsc2_meter_meter__Va_n2 , _vsc2_meter_meter__Vb , _vsc2_meter_meter__Vb_n1 , _vsc2_meter_meter__Vb_n2;
float  _vsc2_meter_meter__win , _vsc2_meter_meter__win_n1 , _vsc2_meter_meter__what , _vsc2_meter_meter__what2 , _vsc2_meter_meter__norm;
float  _vsc2_meter_meter__GAMA , _vsc2_meter_meter__KE , _vsc2_meter_meter__Vgrid_n1 , _vsc2_meter_meter__Vgrid_n2 , _vsc2_meter_meter__k1 , _vsc2_meter_meter__k2 , _vsc2_meter_meter__k3 , _vsc2_meter_meter__k4 , _vsc2_meter_meter__k5;
float  _vsc2_meter_meter__wg , _vsc2_meter_meter__TWO_PI , _vsc2_meter_meter__ct1 , _vsc2_meter_meter__ct2;
float  _vsc2_meter_meter__MAX_FREQ , _vsc2_meter_meter__MIN_FREQ;
float  _vsc2_meter_meter__Tsig;
unsigned int   _vsc2_meter_meter__max_k;
unsigned int   _vsc2_meter_meter__kMIN;
unsigned int   _vsc2_meter_meter__kLIM;
float  _vsc2_meter_meter__temp;
unsigned int   _vsc2_meter_meter__cnt_cycles;
float  _vsc2_meter_meter__nc;
float  _vsc2_meter_meter__vk_0 , _vsc2_meter_meter__vk_1;
float  _vsc2_meter_meter__vt , _vsc2_meter_meter__t0v , _vsc2_meter_meter__tfv;
float  _vsc2_meter_meter__sumV2;
float  _vsc2_meter_meter__v_rms;
unsigned int   _vsc2_meter_meter__kv;
float  _vsc2_meter_meter__Va_k1;
float  _vsc2_meter_meter__sumS , _vsc2_meter_meter__Pw , _vsc2_meter_meter__Pact;
float  _vsc2_meter_meter__ik_0 , _vsc2_meter_meter__ik_1;
float  _vsc2_meter_meter__sumI2;
float  _vsc2_meter_meter__i_rms;
float  _vsc2_meter_meter__Qint , _vsc2_meter_meter__Qt;

struct _vsc2_sogi_qsg__SOGIqsg {
    float  w0 ;

    float  last_alpha_signal ;

    float  last_beta_signal ;

    float  last_w_meas ;

    float  last_w ;

    float  proportional_gain ;

    float  fll_gain ;
}  ;
struct _vsc2_sogi_qsg__SOGIqsg  _vsc2_sogi_qsg__v_sogi;
float  _vsc2_sogi_qsg__v_alpha = 0;
float  _vsc2_sogi_qsg__v_beta = 0;
float  _vsc2_sogi_qsg__v_freq = 60;
struct _vsc2_sogi_qsg__SOGIqsg  _vsc2_sogi_qsg__i_sogi;
float  _vsc2_sogi_qsg__i_alpha = 0;
float  _vsc2_sogi_qsg__i_beta = 0;
float  _vsc2_sogi_qsg__i_freq = 60;



float  _vsc2_current_controller__err = 0;
float  _vsc2_current_controller__u = 0;
float  _vsc2_current_controller__u0 = 0;
float  _vsc2_current_controller__u_bounded = 0;
float  _vsc2_current_controller__KP = 0;
float  _vsc2_current_controller__U_BOUNDARY = 0;





















































































const float   _vsc1_droop_controller2__VZERO = 220;
const float   _vsc1_droop_controller2__WZERO = 376.9911;
const float   _vsc1_droop_controller2__DELTA_V = 22;
const float   _vsc1_droop_controller2__DELTA_W = 18.8495559215;
const float   _vsc1_droop_controller2__TWOPI = 6.2831;
const float   _vsc1_droop_controller2__TS_10KHZ = 0.0001;
const float   _vsc1_droop_controller2__WC = 75.3982236862;
const int   _vsc1_droop_controller2__ISLANDED = 1;
const int   _vsc1_droop_controller2__TIED = 0;
struct _vsc1_droop_controller2__ImprovedDroop {
    float  sampling_time ;

    float  cutoff_frequency ;

    float  phi1 ;

    float  phi2 ;

    float  phi3 ;

    float  p_kminus1 ;

    float  pf_kminus1 ;

    float  q_kminus1 ;

    float  qf_kminus1 ;

    float  p_max ;

    float  q_max ;

    float  p0 ;

    float  q0 ;

    float  v0 ;

    float  w0 ;

    float  m ;

    float  n ;

    float  ki ;

    float  kv ;

    int  is_islanded ;

    float  phi_integral ;

    float  vin_kminus1 ;

    float  vout_kminus1 ;

    float  w_kminus1 ;

    float  theta_kminus1 ;
}  ;
struct _vsc1_droop_controller2__ImprovedDroop  _vsc1_droop_controller2__droop;
float  _vsc1_droop_controller2__v = 0;
float  _vsc1_droop_controller2__p = 0;
float  _vsc1_droop_controller2__q = 0;
float  _vsc1_droop_controller2__p_ref = 0;
float  _vsc1_droop_controller2__q_ref = 0;

struct _vsc1_apf__AllPassFilter {
    float  sampling_time ;

    float  phase_shift ;

    float  omega ;

    float  tau ;

    float  phi1 ;

    float  phi2 ;

    float  phi3 ;

    float  phi4 ;

    float  phi5 ;

    float  input_kminus1 ;

    float  input_kminus2 ;

    float  output_kminus1 ;

    float  output_kminus2 ;
}  ;
const float   _vsc1_apf__TS = 0.0001;
const float   _vsc1_apf__PHI = 2.192133540504878e-01;
const float   _vsc1_apf__OMEGA = 3.769911184307752e+02;
const float   _vsc1_apf__TAU = 8.333333333333334e-04;
struct _vsc1_apf__AllPassFilter  _vsc1_apf__apf;
float  _vsc1_apf__output = 0;














const float   _vsc2_droop_controller2__VZERO = 220;
const float   _vsc2_droop_controller2__WZERO = 376.9911;
const float   _vsc2_droop_controller2__DELTA_V = 22;
const float   _vsc2_droop_controller2__DELTA_W = 18.8495559215;
const float   _vsc2_droop_controller2__TWOPI = 6.2831;
const float   _vsc2_droop_controller2__TS_10KHZ = 0.0001;
const float   _vsc2_droop_controller2__WC = 75.3982236862;
const int   _vsc2_droop_controller2__ISLANDED = 1;
const int   _vsc2_droop_controller2__TIED = 0;
struct _vsc2_droop_controller2__ImprovedDroop {
    float  sampling_time ;

    float  cutoff_frequency ;

    float  phi1 ;

    float  phi2 ;

    float  phi3 ;

    float  p_kminus1 ;

    float  pf_kminus1 ;

    float  q_kminus1 ;

    float  qf_kminus1 ;

    float  p_max ;

    float  q_max ;

    float  p0 ;

    float  q0 ;

    float  v0 ;

    float  w0 ;

    float  m ;

    float  n ;

    float  ki ;

    float  kv ;

    int  is_islanded ;

    float  phi_integral ;

    float  vin_kminus1 ;

    float  vout_kminus1 ;

    float  w_kminus1 ;

    float  theta_kminus1 ;
}  ;
struct _vsc2_droop_controller2__ImprovedDroop  _vsc2_droop_controller2__droop;
float  _vsc2_droop_controller2__v = 0;
float  _vsc2_droop_controller2__p = 0;
float  _vsc2_droop_controller2__q = 0;
float  _vsc2_droop_controller2__p_ref = 0;
float  _vsc2_droop_controller2__q_ref = 0;

struct _vsc2_apf__AllPassFilter {
    float  sampling_time ;

    float  phase_shift ;

    float  omega ;

    float  tau ;

    float  phi1 ;

    float  phi2 ;

    float  phi3 ;

    float  phi4 ;

    float  phi5 ;

    float  input_kminus1 ;

    float  input_kminus2 ;

    float  output_kminus1 ;

    float  output_kminus2 ;
}  ;
const float   _vsc2_apf__TS = 0.0001;
const float   _vsc2_apf__PHI = 2.192133540504878e-01;
const float   _vsc2_apf__OMEGA = 3.769911184307752e+02;
const float   _vsc2_apf__TAU = 8.333333333333334e-04;
struct _vsc2_apf__AllPassFilter  _vsc2_apf__apf;
float  _vsc2_apf__output = 0;




#define _grid_vsp_sin1_tdf_sg_ctrl_sine1__no_of_points 1000
#define _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int40 (1099511627775)
#define _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int32 (4294967295)





























struct _vsc1_virtual_impedance__VirtualImpedance {
    float  sampling_time ;

    float  inductance ;

    float  zeta ;

    float  omega_pole ;

    float  phi1 ;

    float  phi2 ;

    float  phi3 ;

    float  phi4 ;

    float  current_kminus1 ;

    float  current_kminus2 ;

    float  voltage_kminus1 ;

    float  voltage_kminus2 ;
}  ;
const float   _vsc1_virtual_impedance__TS = 0.0001;
const float   _vsc1_virtual_impedance__INDUCTANCE = 1.25e-3;
const float   _vsc1_virtual_impedance__ZETA = 1.0;
const float   _vsc1_virtual_impedance__POLE = 1.570796326794897e4;
struct _vsc1_virtual_impedance__VirtualImpedance  _vsc1_virtual_impedance__vz;
float  _vsc1_virtual_impedance__output = 0;







struct _vsc2_virtual_impedance__VirtualImpedance {
    float  sampling_time ;

    float  inductance ;

    float  zeta ;

    float  omega_pole ;

    float  phi1 ;

    float  phi2 ;

    float  phi3 ;

    float  phi4 ;

    float  current_kminus1 ;

    float  current_kminus2 ;

    float  voltage_kminus1 ;

    float  voltage_kminus2 ;
}  ;
const float   _vsc2_virtual_impedance__TS = 0.0001;
const float   _vsc2_virtual_impedance__INDUCTANCE = 1.25e-3;
const float   _vsc2_virtual_impedance__ZETA = 1.0;
const float   _vsc2_virtual_impedance__POLE = 1.570796326794897e4;
struct _vsc2_virtual_impedance__VirtualImpedance  _vsc2_virtual_impedance__vz;
float  _vsc2_virtual_impedance__output = 0;


























struct _vsc1_voltage_controller__ResonantController {
    float  sampling_time ;

    float  kp ;

    float  zero_dumping ;

    float  pole_dumping ;

    float  omega0 ;

    float  aux_4ts ;

    float  aux_a ;

    float  k1 ;

    float  k2 ;

    float  k3 ;

    float  k4 ;

    float  k5 ;

    float  err_kminus1 ;

    float  err_kminus2 ;

    float  u_kminus1 ;

    float  u_kminus2 ;
}  ;
float  _vsc1_voltage_controller__u_bounded = 0;
float  _vsc1_voltage_controller__u = 0;
float  _vsc1_voltage_controller__ref0 = 0;
struct _vsc1_voltage_controller__ResonantController  _vsc1_voltage_controller__rc0;
float  _vsc1_voltage_controller__u0 = 0;
float  _vsc1_voltage_controller__err0 = 0;
struct _vsc1_voltage_controller__ResonantController  _vsc1_voltage_controller__rc3;
float  _vsc1_voltage_controller__u3 = 0;
float  _vsc1_voltage_controller__err3 = 0;
struct _vsc1_voltage_controller__ResonantController  _vsc1_voltage_controller__rc5;
float  _vsc1_voltage_controller__u5 = 0;
float  _vsc1_voltage_controller__err5 = 0;
float  _vsc1_voltage_controller__TWOPI = 0;
float  _vsc1_voltage_controller__omega0 = 0;
float  _vsc1_voltage_controller__TS_10KHZ = 0;
float  _vsc1_voltage_controller__SQRT2 = 0;
float  _vsc1_voltage_controller__U_BOUNDARY = 0;


struct _vsc2_voltage_controller__ResonantController {
    float  sampling_time ;

    float  kp ;

    float  zero_dumping ;

    float  pole_dumping ;

    float  omega0 ;

    float  aux_4ts ;

    float  aux_a ;

    float  k1 ;

    float  k2 ;

    float  k3 ;

    float  k4 ;

    float  k5 ;

    float  err_kminus1 ;

    float  err_kminus2 ;

    float  u_kminus1 ;

    float  u_kminus2 ;
}  ;
float  _vsc2_voltage_controller__u_bounded = 0;
float  _vsc2_voltage_controller__u = 0;
float  _vsc2_voltage_controller__ref0 = 0;
struct _vsc2_voltage_controller__ResonantController  _vsc2_voltage_controller__rc0;
float  _vsc2_voltage_controller__u0 = 0;
float  _vsc2_voltage_controller__err0 = 0;
struct _vsc2_voltage_controller__ResonantController  _vsc2_voltage_controller__rc3;
float  _vsc2_voltage_controller__u3 = 0;
float  _vsc2_voltage_controller__err3 = 0;
struct _vsc2_voltage_controller__ResonantController  _vsc2_voltage_controller__rc5;
float  _vsc2_voltage_controller__u5 = 0;
float  _vsc2_voltage_controller__err5 = 0;
float  _vsc2_voltage_controller__TWOPI = 0;
float  _vsc2_voltage_controller__omega0 = 0;
float  _vsc2_voltage_controller__TS_10KHZ = 0;
float  _vsc2_voltage_controller__SQRT2 = 0;
float  _vsc2_voltage_controller__U_BOUNDARY = 0;



































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



// const variables
const double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
const double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
const double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
const double _mgcc_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
const double _mgcc_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
const double _mgcc_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
//@cmp.var.start
// variables
double _grid_constant1__out = 0.0;
double _grid_f_nadir__out;
double _grid_flag__out;
double _grid_rocof__out;
double _grid_vrms__out;
double _grid_freq__out;
double _load_meter_grid_frequency__out = 60.0;
double _load_meter__ig_ia2__out;
double _load_meter__vg_va2__out;
X_UnInt32 _load_meter_ncycles__out = 1;
double _load_single_phase_variable_load_constant1__out = 1.0;
double _load_single_phase_variable_load_constant13__out = 0.5;
double _load_single_phase_variable_load_enable__out;
double _load_single_phase_variable_load_pref__out;
double _load_single_phase_variable_load_qref__out;
double _load_single_phase_variable_load_roc__out;
double _load_single_phase_variable_load_single_phase_core1_constant11__out = 268.88888888888846;
double _load_single_phase_variable_load_single_phase_core1_constant12__out = 0.024466705881649595;
double _load_single_phase_variable_load_single_phase_core1_constant3__out = 0.006000000000000009;
double _load_single_phase_variable_load_single_phase_core1_constant5__out = 0.0;
double _load_single_phase_variable_load_single_phase_core1_constant6__out = 0.08764840216069833;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_constant1__out = 0.05;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__out;
static X_Int32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_const_h__out[2] = { 1, 0 };
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_filtered_value;
double _load_single_phase_variable_load_single_phase_core1_i__out;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__out;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_filtered_value;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__out;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_filtered_value;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__out;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_filtered_value;
static X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_const_h__out[2] = { 1, 0 };
static X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_const_h__out[2] = { 1, 0 };
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_constant14__out = 1.0;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_constant15__out = 0.0;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__fsm_state;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pin;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_in;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__ramp_time_ms;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_constant14__out = 1.0;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_constant15__out = 0.0;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__fsm_state;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pin;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_in;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__ramp_time_ms;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out;
double _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__out;
double _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__out_n;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_constant2__out = 2;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__pi_reg_out_int;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_const__out = 376.99111843077515;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__in;

double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out;
double _load_single_phase_variable_load_single_phase_core1_transport_delay1__out;
double _load_single_phase_variable_load_single_phase_core1_transport_delay2__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay1__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay12__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay13__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay2__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay3__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay4__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay5__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay6__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay7__out;
double _load_single_phase_variable_load_single_phase_core1_unit_delay8__out;
double _load_single_phase_variable_load_single_phase_core1_v__out;
X_Int32 _load_single_phase_variable_load_single_phase_core1_const_one__out = 1;
X_Int32 _load_single_phase_variable_load_single_phase_core1_dimension__out = 1;
static X_Int32 _load_single_phase_variable_load_single_phase_core1_harmonic_vector__out[2] = { 1, 0 };
static X_Int32 _load_single_phase_variable_load_single_phase_core1_harmonic_vector1__out[2] = { 1, 0 };
static X_Int32 _load_single_phase_variable_load_single_phase_core1_harmonic_vector2__out[2] = { 1, 0 };
static X_Int32 _load_single_phase_variable_load_single_phase_core1_harmonic_vector3__out[2] = { 1, 0 };
static X_Int32 _load_single_phase_variable_load_single_phase_core1_harmonic_vector5__out[2] = { 1, 0 };
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_inc_applied;
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_inc_applied;
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable;

X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en;
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en;
double _mgcc_meter_grid_frequency__out = 60.0;
double _mgcc_meter__ig_ia2__out;
double _mgcc_meter__vg_va2__out;
X_UnInt32 _mgcc_meter_ncycles__out = 1;
double _mgcc_pref__out;
double _mgcc_qref__out;
double _mgcc_sts__out;
X_Int32 _mgcc_single_phase_pll1_constant2__out = 2;
double _mgcc_single_phase_pll1_i__out;
double _mgcc_single_phase_pll1_i__pi_reg_out_int;
double _mgcc_single_phase_pll1_integrator1__out;
double _mgcc_single_phase_pll1_integrator10__out;
double _mgcc_single_phase_pll1_integrator2__out;
double _mgcc_single_phase_pll1_integrator3__out;
double _mgcc_single_phase_pll1_integrator4__out;
double _mgcc_single_phase_pll1_integrator5__out;
double _mgcc_single_phase_pll1_integrator6__out;
double _mgcc_single_phase_pll1_integrator7__out;
double _mgcc_single_phase_pll1_integrator8__out;
double _mgcc_single_phase_pll1_integrator9__out;
double _mgcc_single_phase_pll1_const__out = 345.57519189487726;
double _mgcc_single_phase_pll1_integrator_with_reset__in;

double _mgcc_single_phase_pll1_integrator_with_reset__out;
double _mgcc_vgrid_va1__out;
double _mgcc_vpcc_va1__out;
double _mgcc_i_ia1__out;
double _vsc1_constant13__out = 1.0;
double _vsc1_constant14__out = 1.0;
double _vsc1_constant15__out = 1.0;
double _vsc1_constant19__out = 1.0;
double _vsc1_constant9__out = 15000.0;
double _vsc1_fc__out;
double _vsc1_il1_ia1__out;
double _vsc1_il2_ia1__out;
double _vsc1_ki__out;
double _vsc1_kv__out;
double _vsc1_meter_grid_frequency__out = 60.0;
double _vsc1_meter__ig_ia2__out;
double _vsc1_meter__vg_va2__out;
X_UnInt32 _vsc1_meter_ncycles__out = 1;
double _vsc1_rt19_output__out;
double _vsc1_rt30_output__out;
double _vsc1_rt42_output__out;
double _vsc1_rt43_output__out;
double _vsc1_rt61_output__out;
double _vsc1_rt80_output__out;
double _vsc1_rt81_output__out;
double _vsc1_rt83_output__out;
double _vsc1_vc_va1__out;
double _vsc1_vz__out;
double _vsc2_constant13__out = 1.0;
double _vsc2_constant14__out = 1.0;
double _vsc2_constant15__out = 1.0;
double _vsc2_constant19__out = 1.0;
double _vsc2_constant9__out = 15000.0;
double _vsc2_fc__out;
double _vsc2_il1_ia1__out;
double _vsc2_il2_ia1__out;
double _vsc2_ki__out;
double _vsc2_kv__out;
double _vsc2_meter_grid_frequency__out = 60.0;
double _vsc2_meter__ig_ia2__out;
double _vsc2_meter__vg_va2__out;
X_UnInt32 _vsc2_meter_ncycles__out = 1;
double _vsc2_rt19_output__out;
double _vsc2_rt30_output__out;
double _vsc2_rt42_output__out;
double _vsc2_rt43_output__out;
double _vsc2_rt61_output__out;
double _vsc2_rt80_output__out;
double _vsc2_rt81_output__out;
double _vsc2_rt83_output__out;
double _vsc2_vc_va1__out;
double _vsc2_vz__out;
double _grid_vsp_sin1_limit1__out;
double _grid_c_function2__F_Nadir;
double _grid_c_function2__ROCOF;
double _grid_c_function2__f_nom;
double _grid_c_function2__flag;

double _grid_c_function2__out_freq;
double _load_meter_meter__Igrid;
double _load_meter_meter__Vgrid;
double _load_meter_meter__f_grid;
X_UnInt32 _load_meter_meter__n_cycles;

double _load_meter_meter__Irms;
double _load_meter_meter__Po;
double _load_meter_meter__Qo;
double _load_meter_meter__So;
double _load_meter_meter__Valpha;
double _load_meter_meter__Vbeta;
double _load_meter_meter__Vrms;
double _load_meter_meter__f;
double _load_meter_meter__pf;
double _load_single_phase_variable_load_relational_operator3__out;
double _load_single_phase_variable_load_limit1__out;
double _load_single_phase_variable_load_limit2__out;
double _load_single_phase_variable_load_limit3__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__in;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out;
double _load_single_phase_variable_load_single_phase_core1_limit2__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w10__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w7__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w11__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w6__out;
float _load_single_phase_variable_load_mcb_status__tmp;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_freq_gain__out[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_f_to_w__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__f1;
X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__h[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__signal;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_freq_gain__out[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_freq_gain__out[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit4__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum4__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product2__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_w_to_f__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum9__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum11__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum13__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum14__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__theta_dq;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__va;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vb;

double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vd;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vq;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_trigonometric_function1__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__f1;
X_Int32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__h[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__signal;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__f1;
X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__h[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__signal;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum1__out;
X_Int32 _load_single_phase_variable_load_single_phase_core1_relational_operator3__out;
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_logical_operator22__out;
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_logical_operator23__out;
double _mgcc_meter_meter__Igrid;
double _mgcc_meter_meter__Vgrid;
double _mgcc_meter_meter__f_grid;
X_UnInt32 _mgcc_meter_meter__n_cycles;

double _mgcc_meter_meter__Irms;
double _mgcc_meter_meter__Po;
double _mgcc_meter_meter__Qo;
double _mgcc_meter_meter__So;
double _mgcc_meter_meter__Valpha;
double _mgcc_meter_meter__Vbeta;
double _mgcc_meter_meter__Vrms;
double _mgcc_meter_meter__f;
double _mgcc_meter_meter__pf;
double _mgcc_s1_ctc_wrapper__feedback_out = 0;
double _mgcc_single_phase_pll1_sum4__out;
double _mgcc_single_phase_pll1_product2__out;
double _mgcc_single_phase_pll1_w_to_f__out;
double _mgcc_single_phase_pll1_sum9__out;
double _mgcc_single_phase_pll1_sum11__out;
double _mgcc_single_phase_pll1_sum13__out;
double _mgcc_single_phase_pll1_sum14__out;
double _mgcc_single_phase_pll1_c_function1__theta_dq;
double _mgcc_single_phase_pll1_c_function1__va;
double _mgcc_single_phase_pll1_c_function1__vb;

double _mgcc_single_phase_pll1_c_function1__vd;
double _mgcc_single_phase_pll1_c_function1__vq;
double _mgcc_single_phase_pll1_trigonometric_function1__out;
double _mgcc_rms_value1__out;
X_UnInt32 _mgcc_rms_value1__zc;
double _mgcc_single_phase_pll1_sum1__out;
double _vsc1_meter_meter__Igrid;
double _vsc1_meter_meter__Vgrid;
double _vsc1_meter_meter__f_grid;
X_UnInt32 _vsc1_meter_meter__n_cycles;

double _vsc1_meter_meter__Irms;
double _vsc1_meter_meter__Po;
double _vsc1_meter_meter__Qo;
double _vsc1_meter_meter__So;
double _vsc1_meter_meter__Valpha;
double _vsc1_meter_meter__Vbeta;
double _vsc1_meter_meter__Vrms;
double _vsc1_meter_meter__f;
double _vsc1_meter_meter__pf;
double _vsc1_sogi_qsg__IN_IL2;
double _vsc1_sogi_qsg__IN_VGRID;

double _vsc1_sogi_qsg__OUT_I;
double _vsc1_sogi_qsg__OUT_I_QUAD;
double _vsc1_sogi_qsg__OUT_OMEGA;
double _vsc1_sogi_qsg__OUT_V;
double _vsc1_sogi_qsg__OUT_V_QUAD;
double _vsc1_lpf_internal_filter__fc;
double _vsc1_lpf_internal_filter__u;

double _vsc1_lpf_internal_filter__y;
double _vsc1_current_controller__IN_ENABLE;
double _vsc1_current_controller__IN_IL1;
double _vsc1_current_controller__IN_MICROGRID_STATUS;
double _vsc1_current_controller__IN_UV;

double _vsc1_current_controller__OUT_PWMA;
double _vsc1_current_controller__OUT_PWMB;
double _vsc2_meter_meter__Igrid;
double _vsc2_meter_meter__Vgrid;
double _vsc2_meter_meter__f_grid;
X_UnInt32 _vsc2_meter_meter__n_cycles;

double _vsc2_meter_meter__Irms;
double _vsc2_meter_meter__Po;
double _vsc2_meter_meter__Qo;
double _vsc2_meter_meter__So;
double _vsc2_meter_meter__Valpha;
double _vsc2_meter_meter__Vbeta;
double _vsc2_meter_meter__Vrms;
double _vsc2_meter_meter__f;
double _vsc2_meter_meter__pf;
double _vsc2_sogi_qsg__IN_IL2;
double _vsc2_sogi_qsg__IN_VGRID;

double _vsc2_sogi_qsg__OUT_I;
double _vsc2_sogi_qsg__OUT_I_QUAD;
double _vsc2_sogi_qsg__OUT_OMEGA;
double _vsc2_sogi_qsg__OUT_V;
double _vsc2_sogi_qsg__OUT_V_QUAD;
double _vsc2_lpf_internal_filter__fc;
double _vsc2_lpf_internal_filter__u;

double _vsc2_lpf_internal_filter__y;
double _vsc2_current_controller__IN_ENABLE;
double _vsc2_current_controller__IN_IL1;
double _vsc2_current_controller__IN_MICROGRID_STATUS;
double _vsc2_current_controller__IN_UV;

double _vsc2_current_controller__OUT_PWMA;
double _vsc2_current_controller__OUT_PWMB;
double _grid_vsp_sin1_limit2__out;
double _load_meter_out_bus__out[11];
float _load_single_phase_variable_load_enable_fb__tmp;
double _load_single_phase_variable_load_single_phase_core1_qmin_fun__in;

double _load_single_phase_variable_load_single_phase_core1_qmin_fun__out;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_gain1__out;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_gain1__out;
double _load_single_phase_variable_load_single_phase_core1_relational_operator1__out;
double _load_single_phase_variable_load_single_phase_core1_c_function4__Pref;
double _load_single_phase_variable_load_single_phase_core1_c_function4__Pref_late;

double _load_single_phase_variable_load_single_phase_core1_c_function4__out;
double _load_single_phase_variable_load_single_phase_core1_abs3__out;
double _load_single_phase_variable_load_single_phase_core1_c_function5__Qref;
double _load_single_phase_variable_load_single_phase_core1_c_function5__Qref_late;

double _load_single_phase_variable_load_single_phase_core1_c_function5__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_deg_gain__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_phs_gain__out[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_product6__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain5__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum12__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain7__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain8__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain10__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain11__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit5__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain3__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math_f1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math_f2__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_gain3__out[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_deg_gain__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_phs_gain__out[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit9__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_deg_gain__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_phs_gain__out[2];
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain2__out;
double _mgcc_meter_out_bus__out[11];
double _mgcc_single_phase_pll1_gain5__out;
double _mgcc_single_phase_pll1_sum12__out;
double _mgcc_single_phase_pll1_gain7__out;
double _mgcc_single_phase_pll1_gain8__out;
double _mgcc_single_phase_pll1_gain10__out;
double _mgcc_single_phase_pll1_gain11__out;
double _mgcc_single_phase_pll1_gain3__out;
double _mgcc_single_phase_pll1_math_f1__out;
double _mgcc_single_phase_pll1_math_f2__out;
double _mgcc_bus_join1__out[4];
double _mgcc_single_phase_pll1_gain2__out;
double _vsc1_meter_out_bus__out[11];
double _vsc1_droop_controller2__IN_ENABLE;
double _vsc1_droop_controller2__IN_I_DIR;
double _vsc1_droop_controller2__IN_I_QUAD;
double _vsc1_droop_controller2__IN_KI;
double _vsc1_droop_controller2__IN_KV;
double _vsc1_droop_controller2__IN_MICROGRID_STATUS;
double _vsc1_droop_controller2__IN_P0;
double _vsc1_droop_controller2__IN_Q0;
double _vsc1_droop_controller2__IN_V_DIR;
double _vsc1_droop_controller2__IN_V_QUAD;

double _vsc1_droop_controller2__OUT_PF;
double _vsc1_droop_controller2__OUT_QF;
double _vsc1_droop_controller2__OUT_V;
double _vsc1_apf__IN_IL2_F;

double _vsc1_apf__OUT_IL2_PC;
double _vsc1_bus_join1__out[3];
X_UnInt32 _vsc1_grid_forming_pwm_modulator__channels[2] = {0, 1};
double _vsc1_grid_forming_pwm_modulator__limited_in[2];
X_UnInt32 _vsc1_grid_forming_pwm_modulator__update_mask;

double _vsc2_meter_out_bus__out[11];
double _vsc2_droop_controller2__IN_ENABLE;
double _vsc2_droop_controller2__IN_I_DIR;
double _vsc2_droop_controller2__IN_I_QUAD;
double _vsc2_droop_controller2__IN_KI;
double _vsc2_droop_controller2__IN_KV;
double _vsc2_droop_controller2__IN_MICROGRID_STATUS;
double _vsc2_droop_controller2__IN_P0;
double _vsc2_droop_controller2__IN_Q0;
double _vsc2_droop_controller2__IN_V_DIR;
double _vsc2_droop_controller2__IN_V_QUAD;

double _vsc2_droop_controller2__OUT_PF;
double _vsc2_droop_controller2__OUT_QF;
double _vsc2_droop_controller2__OUT_V;
double _vsc2_apf__IN_IL2_F;

double _vsc2_apf__OUT_IL2_PC;
double _vsc2_bus_join1__out[3];
X_UnInt32 _vsc2_grid_forming_pwm_modulator__channels[2] = {2, 3};
double _vsc2_grid_forming_pwm_modulator__limited_in[2];
X_UnInt32 _vsc2_grid_forming_pwm_modulator__update_mask;

X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[1] = {0};
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__gain;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__period;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__phase_pu;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__offset;
X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__offset_uint;
X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_lo;
X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_hi;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_real;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__shift;
X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn_1;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn_1;
double _grid_vsp_sin1_tdf_sg_ctrl_sine1__k;
double _load_single_phase_variable_load_single_phase_core1_abs5__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator26__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_gain1__out[2];
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain9__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_product7__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum7__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum6__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[2];
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_gain1__out[2];
double _load_single_phase_variable_load_single_phase_core1_limit10__out;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_gain1__out[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI[2];
double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__P;
double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Q;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum2__out;
double _mgcc_single_phase_pll1_gain9__out;
double _mgcc_single_phase_pll1_sum7__out;
double _mgcc_single_phase_pll1_sum6__out;
double _vsc1_bus_split1__out;
double _vsc1_bus_split1__out1;
double _vsc1_bus_split1__out2;
double _vsc1_bus_split1__out3;
double _vsc2_bus_split1__out;
double _vsc2_bus_split1__out1;
double _vsc2_bus_split1__out2;
double _vsc2_bus_split1__out3;
double _mgcc_single_phase_pll1_sum2__out;
double _vsc1_virtual_impedance__IN_IL2_PC;
double _vsc1_virtual_impedance__IN_VIRTUAL_INDUCTANCE;

double _vsc1_virtual_impedance__OUT_VL_DROP;
double _vsc2_virtual_impedance__IN_IL2_PC;
double _vsc2_virtual_impedance__IN_VIRTUAL_INDUCTANCE;

double _vsc2_virtual_impedance__OUT_VL_DROP;
double _load_single_phase_variable_load_single_phase_core1_relational_operator2__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_sum2__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain4__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math1__out;
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Cs;
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__L;
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Pref;
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Qref;
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__R;
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms[2];
X_Int32 _load_single_phase_variable_load_single_phase_core1_active_power_losses__harmonics[2];
double _load_single_phase_variable_load_single_phase_core1_active_power_losses__w;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Ploss;
double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs;
double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qref;
double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__R;
double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V[2];
X_Int32 _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics[2];
double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qloss;
double _load_single_phase_variable_load_single_phase_core1_f_to_w8__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w9__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product1__out;
double _mgcc_single_phase_pll1_gain4__out;
double _mgcc_single_phase_pll1_math1__out;
double _vsc1_product1__out;
double _vsc1_product2__out;
double _vsc2_product1__out;
double _vsc2_product2__out;
double _mgcc_single_phase_pll1_product1__out;
double _vsc1_voltage_controller__IN_ENABLE;
double _vsc1_voltage_controller__IN_VC;
double _vsc1_voltage_controller__IN_VL_DROP;
double _vsc1_voltage_controller__IN_V_REF;

double _vsc1_voltage_controller__OUT_V_CTRL;
double _vsc1_voltage_controller__OUT_V_REF;
double _vsc2_voltage_controller__IN_ENABLE;
double _vsc2_voltage_controller__IN_VC;
double _vsc2_voltage_controller__IN_VL_DROP;
double _vsc2_voltage_controller__IN_V_REF;

double _vsc2_voltage_controller__OUT_V_CTRL;
double _vsc2_voltage_controller__OUT_V_REF;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_mathematical_function1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_limit1__out;
double _load_single_phase_variable_load_single_phase_core1_sum6__out;
double _load_single_phase_variable_load_single_phase_core1_sum5__out;
double _load_single_phase_variable_load_single_phase_core1_bus_join1__out[4];
double _mgcc_single_phase_pll1_limit1__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_product4__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product8__out;
double _load_single_phase_variable_load_single_phase_core1_limit6__out;
double _load_single_phase_variable_load_single_phase_core1_abs2__out;
double _load_single_phase_variable_load_single_phase_core1_gain1__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w5__out;
double _load_single_phase_variable_load_bus_split1__out;
double _load_single_phase_variable_load_bus_split1__out1;
double _load_single_phase_variable_load_bus_split1__out2;
double _load_single_phase_variable_load_bus_split1__out3;
double _mgcc_single_phase_pll1_product8__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_abs1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_abs1__out;
double _load_single_phase_variable_load_single_phase_core1_limit9__out;
double _load_single_phase_variable_load_single_phase_core1_limit11__out;
double _load_single_phase_variable_load_single_phase_core1_relational_operator4__out;
double _mgcc_single_phase_pll1_abs1__out;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__value;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_in = 0.0;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_tmp = 0.0;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down = 0.0;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_int_coeff = 0.0;

double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__value;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_in = 0.0;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_tmp = 0.0;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down = 0.0;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_int_coeff = 0.0;

double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__value;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_in = 0.0;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_tmp = 0.0;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down = 0.0;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_int_coeff = 0.0;

double _load_single_phase_variable_load_single_phase_core1_lref_calc__Qref;
double _load_single_phase_variable_load_single_phase_core1_lref_calc__V[2];
X_Int32 _load_single_phase_variable_load_single_phase_core1_lref_calc__harmonics[2];
double _load_single_phase_variable_load_single_phase_core1_lref_calc__w;

double _load_single_phase_variable_load_single_phase_core1_lref_calc__L;
double _load_single_phase_variable_load_single_phase_core1_c_function2__P;
double _load_single_phase_variable_load_single_phase_core1_c_function2__Q;
double _load_single_phase_variable_load_single_phase_core1_c_function2__V[2];
double _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms;
double _load_single_phase_variable_load_single_phase_core1_c_function2__harmonics[2];
double _load_single_phase_variable_load_single_phase_core1_c_function2__mod;
double _load_single_phase_variable_load_single_phase_core1_c_function2__w;

double _load_single_phase_variable_load_single_phase_core1_c_function2__R;
double _load_single_phase_variable_load_single_phase_core1_c_function2__c;
double _load_single_phase_variable_load_single_phase_core1_logical_operator2__out;
double _mgcc_single_phase_pll1_kd_lut__value;
double _mgcc_single_phase_pll1_kd_lut__x_in = 0.0;
X_Int32 _mgcc_single_phase_pll1_kd_lut__x_addr_tmp = 0.0;
X_Int32 _mgcc_single_phase_pll1_kd_lut__x_addr_down = 0.0;
double _mgcc_single_phase_pll1_kd_lut__x_int_coeff = 0.0;

double _mgcc_single_phase_pll1_ki_lut__value;
double _mgcc_single_phase_pll1_ki_lut__x_in = 0.0;
X_Int32 _mgcc_single_phase_pll1_ki_lut__x_addr_tmp = 0.0;
X_Int32 _mgcc_single_phase_pll1_ki_lut__x_addr_down = 0.0;
double _mgcc_single_phase_pll1_ki_lut__x_int_coeff = 0.0;

double _mgcc_single_phase_pll1_kp_lut__value;
double _mgcc_single_phase_pll1_kp_lut__x_in = 0.0;
X_Int32 _mgcc_single_phase_pll1_kp_lut__x_addr_tmp = 0.0;
X_Int32 _mgcc_single_phase_pll1_kp_lut__x_addr_down = 0.0;
double _mgcc_single_phase_pll1_kp_lut__x_int_coeff = 0.0;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_logical_operator1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product6__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product5__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product7__out;
double _mgcc_single_phase_pll1_product6__out;
double _mgcc_single_phase_pll1_product5__out;
double _mgcc_single_phase_pll1_product7__out;
double _load_single_phase_variable_load_single_phase_core1_counter__in;

double _load_single_phase_variable_load_single_phase_core1_counter__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.7475992484642695};
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__a_sum;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_sum;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__delay_line_in;
double _mgcc_single_phase_pll1_discrete_transfer_function1__out;
double _mgcc_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _mgcc_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.7475992484642695};
double _mgcc_single_phase_pll1_discrete_transfer_function1__a_sum;
double _mgcc_single_phase_pll1_discrete_transfer_function1__b_sum;
double _mgcc_single_phase_pll1_discrete_transfer_function1__delay_line_in;
double _load_single_phase_variable_load_single_phase_core1_logical_operator13__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator14__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator28__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator5__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum8__out;
double _mgcc_single_phase_pll1_sum8__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator10__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator27__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator17__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator6__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_limit2__out;
double _mgcc_single_phase_pll1_limit2__out;
double _load_single_phase_variable_load_single_phase_core1_signal_switch3__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator19__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator20__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator29__out;
double _load_single_phase_variable_load_single_phase_core1_signal_switch1__out;
double _load_single_phase_variable_load_single_phase_core1_signal_switch2__out;
double _load_single_phase_variable_load_single_phase_core1_logical_operator7__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum5__out;
double _mgcc_single_phase_pll1_sum5__out;
double _load_single_phase_variable_load_single_phase_core1_l_ref_reciprocal__out;
double _load_single_phase_variable_load_single_phase_core1_r_inc__C_in;
double _load_single_phase_variable_load_single_phase_core1_r_inc__Pref;
double _load_single_phase_variable_load_single_phase_core1_r_inc__R_in;
double _load_single_phase_variable_load_single_phase_core1_r_inc__V[2];
X_Int32 _load_single_phase_variable_load_single_phase_core1_r_inc__enable;
double _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics[2];
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_r_inc__pause;
double _load_single_phase_variable_load_single_phase_core1_r_inc__w;

double _load_single_phase_variable_load_single_phase_core1_r_inc__R;
double _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied;
double _load_single_phase_variable_load_single_phase_core1_c_inc__C_in;
double _load_single_phase_variable_load_single_phase_core1_c_inc__Qref;
double _load_single_phase_variable_load_single_phase_core1_c_inc__R_in;
double _load_single_phase_variable_load_single_phase_core1_c_inc__V[2];
X_Int32 _load_single_phase_variable_load_single_phase_core1_c_inc__enable;
double _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics[2];
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_c_inc__pause;
double _load_single_phase_variable_load_single_phase_core1_c_inc__w;

double _load_single_phase_variable_load_single_phase_core1_c_inc__C;
double _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied;
double _load_single_phase_variable_load_single_phase_core1_f_to_w1__out;
double _load_single_phase_variable_load_single_phase_core1_f_to_w2__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum10__out;
double _mgcc_single_phase_pll1_sum10__out;
double _load_single_phase_variable_load_single_phase_core1_limit1__out;
double _load_single_phase_variable_load_single_phase_core1_limit8__out;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain6__out;
double _mgcc_single_phase_pll1_gain6__out;
double _load_single_phase_variable_load_single_phase_core1_signal_switch10__out;
double _load_single_phase_variable_load_single_phase_core1_signal_switch11__out;
double _load_single_phase_variable_load_single_phase_core1_c_ref_reciprocal__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__state[1];
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__filtered_value;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_in;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__filtered_value;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_in;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__filtered_value;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_in;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__filtered_value;
double _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_in;
double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__b;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref;


double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__b;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i;

double _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref;


double _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__integrator_state;
X_Int32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__filter_state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__state;
double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out_calc;

double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__reset_value;


double _load_single_phase_variable_load_single_phase_core1_transport_delay1__state[1];
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi;
double _load_single_phase_variable_load_single_phase_core1_transport_delay2__state[1];
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi;
double _load_single_phase_variable_load_single_phase_core1_unit_delay1__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay12__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay13__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay2__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay3__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay4__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay5__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay6__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay7__state;
double _load_single_phase_variable_load_single_phase_core1_unit_delay8__state;
X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__counter;

X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__fault;

X_UnInt32 _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state;


double _mgcc_single_phase_pll1_i__integrator_state;
X_Int32 _mgcc_single_phase_pll1_i__av_active;
double _mgcc_single_phase_pll1_i__filter_state;
double _mgcc_single_phase_pll1_integrator1__state;
double _mgcc_single_phase_pll1_integrator10__state;
double _mgcc_single_phase_pll1_integrator2__state;
double _mgcc_single_phase_pll1_integrator3__state;
double _mgcc_single_phase_pll1_integrator4__state;
double _mgcc_single_phase_pll1_integrator5__state;
double _mgcc_single_phase_pll1_integrator6__state;
double _mgcc_single_phase_pll1_integrator7__state;
double _mgcc_single_phase_pll1_integrator8__state;
double _mgcc_single_phase_pll1_integrator9__state;
double _mgcc_single_phase_pll1_integrator_with_reset__out_calc;

double _mgcc_single_phase_pll1_integrator_with_reset__reset_value;


double _vsc1_rt19_output__state;
double _vsc1_rt30_output__state;
double _vsc1_rt42_output__state;
double _vsc1_rt43_output__state;
double _vsc1_rt61_output__state;
double _vsc1_rt80_output__state;
double _vsc1_rt81_output__state;
double _vsc1_rt83_output__state;
double _vsc2_rt19_output__state;
double _vsc2_rt30_output__state;
double _vsc2_rt42_output__state;
double _vsc2_rt43_output__state;
double _vsc2_rt61_output__state;
double _vsc2_rt80_output__state;
double _vsc2_rt81_output__state;
double _vsc2_rt83_output__state;
double _grid_c_function2__count;

double _grid_c_function2__Ts;

double _grid_c_function2__k;

double _grid_c_function2__flag_a;

double _grid_c_function2__pi;

double _grid_c_function2__timer_a;

double _grid_c_function2__freq;

double _grid_c_function2__kf;

double _grid_c_function2__w1;

double _grid_c_function2__aux;



double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__time_cnt;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__max_val;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__min_val;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out_state;


X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__reset;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp;

X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__k;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp_state[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_re[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_im[2];

X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__N;



X_Int32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__reset;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp;

X_Int32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__k;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp_state[2];

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state[2];

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im[2];

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re[2];

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_re[2];

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_im[2];

X_Int32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i;

double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__N;


double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__square_sum;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__sample_cnt;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__db_timer;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__previous_filtered_value;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__previous_correction;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__previous_value;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__correction;
double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out_state;
X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__reset;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp;

X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__k;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp_state[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_re[2];

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_im[2];

X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__N;




double _mgcc_rms_value1__square_sum;
double _mgcc_rms_value1__sample_cnt;
double _mgcc_rms_value1__period_cnt;
double _mgcc_rms_value1__db_timer;
double _mgcc_rms_value1__previous_filtered_value;
double _mgcc_rms_value1__previous_correction;
double _mgcc_rms_value1__previous_value;
double _mgcc_rms_value1__correction;
double _mgcc_rms_value1__filtered_value;
double _mgcc_rms_value1__out_state;

double _vsc1_lpf_internal_filter__y_old[2];

double _vsc1_lpf_internal_filter__y_old_2[2];

double _vsc1_lpf_internal_filter__u_old[2];

double _vsc1_lpf_internal_filter__u_old_2[2];

double _vsc1_lpf_internal_filter__y_next;

double _vsc1_lpf_internal_filter__A;

X_Int32 _vsc1_lpf_internal_filter__i;

double _vsc1_lpf_internal_filter__wc;

double _vsc1_lpf_internal_filter__ws;

double _vsc1_lpf_internal_filter__a0c[1];

double _vsc1_lpf_internal_filter__b0c[1];

double _vsc1_lpf_internal_filter__b1c[1];


X_UnInt32 _vsc1_lpf_internal_filter__load_ic;



double _vsc2_lpf_internal_filter__y_old[2];

double _vsc2_lpf_internal_filter__y_old_2[2];

double _vsc2_lpf_internal_filter__u_old[2];

double _vsc2_lpf_internal_filter__u_old_2[2];

double _vsc2_lpf_internal_filter__y_next;

double _vsc2_lpf_internal_filter__A;

X_Int32 _vsc2_lpf_internal_filter__i;

double _vsc2_lpf_internal_filter__wc;

double _vsc2_lpf_internal_filter__ws;

double _vsc2_lpf_internal_filter__a0c[1];

double _vsc2_lpf_internal_filter__b0c[1];

double _vsc2_lpf_internal_filter__b1c[1];


X_UnInt32 _vsc2_lpf_internal_filter__load_ic;


double _load_single_phase_variable_load_single_phase_core1_c_function4__n;

double _load_single_phase_variable_load_single_phase_core1_c_function4__old_Qref;


double _load_single_phase_variable_load_single_phase_core1_c_function5__n;

double _load_single_phase_variable_load_single_phase_core1_c_function5__old_Qref;






X_Int32 _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Psum;

double _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Qsum;




double _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap;

X_Int32 _load_single_phase_variable_load_single_phase_core1_active_power_losses__i;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Psum;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Isum;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__I;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__var6;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Rek;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xl;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xc;

double _load_single_phase_variable_load_single_phase_core1_active_power_losses__Iind;


X_Int32 _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Isum;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qsum;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xc;

double _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il;




double _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__state;
X_Int32 _load_single_phase_variable_load_single_phase_core1_lref_calc__i;

double _load_single_phase_variable_load_single_phase_core1_lref_calc__Vsum;


double _load_single_phase_variable_load_single_phase_core1_c_function2__S;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Z;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Xc;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Xl;

double _load_single_phase_variable_load_single_phase_core1_c_function2__rat;

double _load_single_phase_variable_load_single_phase_core1_c_function2__X;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Rr;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Qmin;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Iind;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Ploss;

X_Int32 _load_single_phase_variable_load_single_phase_core1_c_function2__i;

double _load_single_phase_variable_load_single_phase_core1_c_function2__wsum;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Isum;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Imeas;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Zh;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Ih;

double _load_single_phase_variable_load_single_phase_core1_c_function2__n;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Rk;

double _load_single_phase_variable_load_single_phase_core1_c_function2__Rs;


double _load_single_phase_variable_load_single_phase_core1_counter__cnt;

double _load_single_phase_variable_load_single_phase_core1_counter__out_state;


double _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__states[1];
double _mgcc_single_phase_pll1_discrete_transfer_function1__states[1];
double _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc;

double _load_single_phase_variable_load_single_phase_core1_r_inc__Ih;

double _load_single_phase_variable_load_single_phase_core1_r_inc__Isum;

X_Int32 _load_single_phase_variable_load_single_phase_core1_r_inc__i;

double _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc;

double _load_single_phase_variable_load_single_phase_core1_r_inc__P_tol;

double _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed;

double _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator;

double _load_single_phase_variable_load_single_phase_core1_r_inc__dR;

double _load_single_phase_variable_load_single_phase_core1_r_inc__dP;

double _load_single_phase_variable_load_single_phase_core1_r_inc__dP_old;

double _load_single_phase_variable_load_single_phase_core1_r_inc__status;

double _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc_old;

double _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc_new;


double _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc;

double _load_single_phase_variable_load_single_phase_core1_c_inc__Ih;

double _load_single_phase_variable_load_single_phase_core1_c_inc__Isum;

X_Int32 _load_single_phase_variable_load_single_phase_core1_c_inc__i;

double _load_single_phase_variable_load_single_phase_core1_c_inc__I_calc;

double _load_single_phase_variable_load_single_phase_core1_c_inc__Q_tol;

double _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator;

double _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum;

double _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed;

double _load_single_phase_variable_load_single_phase_core1_c_inc__dC;

double _load_single_phase_variable_load_single_phase_core1_c_inc__dQ;

double _load_single_phase_variable_load_single_phase_core1_c_inc__dQ_old;

double _load_single_phase_variable_load_single_phase_core1_c_inc__status;

double _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc_old;

double _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc_new;


//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    X_UnInt32 _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__i;
    for (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__i = 0; _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__i < 1; _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__i++) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__state[_load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__i] =  0.0;
    }
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi = 0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__filtered_value = 0.0 / (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_in = 0x0;
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_in = 0x0;
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_in = 0x0;
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__filtered_value = 0.0 / (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_in = 0x0;
    {
        _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__b = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i = 0 ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__b = 0 ;
        _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i = 0 ;
    }
    _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state =  0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__integrator_state =  0.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__filter_state =  0.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__state = 60.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__state = -311.1269837220809;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__state = 311.1269837220809;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__state = 311.1269837220809;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__state = 376.99111843077515;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__state = 376.99111843077515;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__state = 60.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__state = 60.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__state = 60.0;
    {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out_calc = 0.0 ;
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI ;
    }
    X_UnInt32 _load_single_phase_variable_load_single_phase_core1_transport_delay1__i;
    for (_load_single_phase_variable_load_single_phase_core1_transport_delay1__i = 0; _load_single_phase_variable_load_single_phase_core1_transport_delay1__i < 1; _load_single_phase_variable_load_single_phase_core1_transport_delay1__i++) {
        _load_single_phase_variable_load_single_phase_core1_transport_delay1__state[_load_single_phase_variable_load_single_phase_core1_transport_delay1__i] =  0.0;
    }
    _load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi = 0;
    X_UnInt32 _load_single_phase_variable_load_single_phase_core1_transport_delay2__i;
    for (_load_single_phase_variable_load_single_phase_core1_transport_delay2__i = 0; _load_single_phase_variable_load_single_phase_core1_transport_delay2__i < 1; _load_single_phase_variable_load_single_phase_core1_transport_delay2__i++) {
        _load_single_phase_variable_load_single_phase_core1_transport_delay2__state[_load_single_phase_variable_load_single_phase_core1_transport_delay2__i] =  0.0;
    }
    _load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi = 0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay1__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay12__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay13__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay2__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay3__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay4__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay5__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay6__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay7__state = 0.0;
    _load_single_phase_variable_load_single_phase_core1_unit_delay8__state = 0.0;
    {
        _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__fault = 0 ;
    }
    _mgcc_single_phase_pll1_i__integrator_state =  0.0;
    _mgcc_single_phase_pll1_i__filter_state =  0.0;
    _mgcc_single_phase_pll1_integrator1__state = 0.0;
    _mgcc_single_phase_pll1_integrator10__state = 55.0;
    _mgcc_single_phase_pll1_integrator2__state = -200.0;
    _mgcc_single_phase_pll1_integrator3__state = 200.0;
    _mgcc_single_phase_pll1_integrator4__state = 200.0;
    _mgcc_single_phase_pll1_integrator5__state = 345.57519189487726;
    _mgcc_single_phase_pll1_integrator6__state = 345.57519189487726;
    _mgcc_single_phase_pll1_integrator7__state = 55.0;
    _mgcc_single_phase_pll1_integrator8__state = 55.0;
    _mgcc_single_phase_pll1_integrator9__state = 55.0;
    {
        _mgcc_single_phase_pll1_integrator_with_reset__out_calc = 0.0 ;
        _mgcc_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI ;
    }
    _vsc1_rt19_output__state =  0.0;
    _vsc1_rt30_output__state =  0.0;
    _vsc1_rt42_output__state =  0.0;
    _vsc1_rt43_output__state =  0.0;
    _vsc1_rt61_output__state =  0.0;
    _vsc1_rt80_output__state =  0.0;
    _vsc1_rt81_output__state =  0.0;
    _vsc1_rt83_output__state =  0.0;
    _vsc2_rt19_output__state =  0.0;
    _vsc2_rt30_output__state =  0.0;
    _vsc2_rt42_output__state =  0.0;
    _vsc2_rt43_output__state =  0.0;
    _vsc2_rt61_output__state =  0.0;
    _vsc2_rt80_output__state =  0.0;
    _vsc2_rt81_output__state =  0.0;
    _vsc2_rt83_output__state =  0.0;
    HIL_OutAO(0x4000, 0.0f);
    {
        _grid_c_function2__count = 0 ;
        _grid_c_function2__Ts = 50e-6 ;
        _grid_c_function2__k = 10000000000 ;
        _grid_c_function2__flag_a = 0 ;
        _grid_c_function2__pi = 3.1415 ;
        _grid_c_function2__timer_a = 0 ;
        _grid_c_function2__freq = 0 ;
        _grid_c_function2__kf = 0 ;
        _grid_c_function2__w1 = 1 ;
        _grid_c_function2__aux = 0 ;
    }
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    {
        _load_meter_meter__TWO_PI = 2.0 * M_PI ;
        _load_meter_meter__KE = 1.414 ;
        _load_meter_meter__GAMA = 50.0 ;
        _load_meter_meter__Ts = 5e-05 ;
        _load_meter_meter__Ts2 = _load_meter_meter__Ts * _load_meter_meter__Ts ;
        _load_meter_meter__ws = 0.0 ;
        _load_meter_meter__ws_n1 = 0.0 ;
        _load_meter_meter__Va = 0.0 ;
        _load_meter_meter__Va_n1 = 0.0 ;
        _load_meter_meter__Va_n2 = 0.0 ;
        _load_meter_meter__Vb = 0.0 ;
        _load_meter_meter__Vb_n1 = 0.0 ;
        _load_meter_meter__Vb_n2 = 0.0 ;
        _load_meter_meter__win = 0.0 ;
        _load_meter_meter__win_n1 = 0.0 ;
        _load_meter_meter__Vgrid_n1 = 0.0 ;
        _load_meter_meter__Vgrid_n2 = 0.0 ;
        _load_meter_meter__ct1 = 0.5 * _load_meter_meter__Ts ;
        _load_meter_meter__ct2 = 2.0 * _load_meter_meter__Ts * _load_meter_meter__KE ;
        _load_meter_meter__MAX_FREQ = 90.0 * _load_meter_meter__TWO_PI ;
        _load_meter_meter__MIN_FREQ = 20.0 * _load_meter_meter__TWO_PI ;
        _load_meter_meter__flag_init = 15u ;
        if ( _load_meter_meter__Ts < 25e-6 ) _load_meter_meter__kMIN = 50 ;
        else if ( _load_meter_meter__Ts < 60e-6 ) _load_meter_meter__kMIN = 35 ;
        else if ( _load_meter_meter__Ts < 110e-6 ) _load_meter_meter__kMIN = 20 ;
        else _load_meter_meter__kMIN = 10 ;
        _load_meter_meter__cnt_cycles = 0 ;
        _load_meter_meter__max_k = 1200 ;
        _load_meter_meter__kLIM = _load_meter_meter__max_k - 10 ;
        _load_meter_meter__kv = 0 ;
        _load_meter_meter__vk_1 = 1.0 ;
        _load_meter_meter__vk_0 = _load_meter_meter__vk_1 ;
        _load_meter_meter__t0v = _load_meter_meter__Ts / 2.0 ;
        _load_meter_meter__sumV2 = 0.0 ;
        _load_meter_meter__v_rms = 0 ;
        _load_meter_meter__Va_k1 = 1 ;
        _load_meter_meter__ik_1 = 0.002 ;
        _load_meter_meter__ik_0 = _load_meter_meter__ik_1 ;
        _load_meter_meter__sumI2 = 0.0 ;
        _load_meter_meter__i_rms = 0 ;
        _load_meter_meter__sumS = 0.0 ;
        _load_meter_meter__Pw = 0.0 ;
        _load_meter_meter__Pact = 0.0 ;
        _load_meter_meter__Qint = 0.0 ;
        _load_meter_meter__Qt = 0.0 ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__max_val = 0.5 * 311.12698372208087 ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__time_cnt = 0 ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__min_val = 2 * 311.12698372208087 ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out_state = 0 ;
    }
    {
        for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__reset = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__N = 0 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__k = 1 ;
    }
    {
        for ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ) _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__reset = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__N = 0 ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__k = 1 ;
    }
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__square_sum = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__sample_cnt = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__db_timer = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__previous_filtered_value = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__previous_correction = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__correction = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__previous_value = 0x0;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out_state = 0x0;
    {
        for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__reset = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__N = 0 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__k = 1 ;
    }
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    {
        _mgcc_meter_meter__TWO_PI = 2.0 * M_PI ;
        _mgcc_meter_meter__KE = 1.414 ;
        _mgcc_meter_meter__GAMA = 50.0 ;
        _mgcc_meter_meter__Ts = 5e-05 ;
        _mgcc_meter_meter__Ts2 = _mgcc_meter_meter__Ts * _mgcc_meter_meter__Ts ;
        _mgcc_meter_meter__ws = 0.0 ;
        _mgcc_meter_meter__ws_n1 = 0.0 ;
        _mgcc_meter_meter__Va = 0.0 ;
        _mgcc_meter_meter__Va_n1 = 0.0 ;
        _mgcc_meter_meter__Va_n2 = 0.0 ;
        _mgcc_meter_meter__Vb = 0.0 ;
        _mgcc_meter_meter__Vb_n1 = 0.0 ;
        _mgcc_meter_meter__Vb_n2 = 0.0 ;
        _mgcc_meter_meter__win = 0.0 ;
        _mgcc_meter_meter__win_n1 = 0.0 ;
        _mgcc_meter_meter__Vgrid_n1 = 0.0 ;
        _mgcc_meter_meter__Vgrid_n2 = 0.0 ;
        _mgcc_meter_meter__ct1 = 0.5 * _mgcc_meter_meter__Ts ;
        _mgcc_meter_meter__ct2 = 2.0 * _mgcc_meter_meter__Ts * _mgcc_meter_meter__KE ;
        _mgcc_meter_meter__MAX_FREQ = 90.0 * _mgcc_meter_meter__TWO_PI ;
        _mgcc_meter_meter__MIN_FREQ = 20.0 * _mgcc_meter_meter__TWO_PI ;
        _mgcc_meter_meter__flag_init = 15u ;
        if ( _mgcc_meter_meter__Ts < 25e-6 ) _mgcc_meter_meter__kMIN = 50 ;
        else if ( _mgcc_meter_meter__Ts < 60e-6 ) _mgcc_meter_meter__kMIN = 35 ;
        else if ( _mgcc_meter_meter__Ts < 110e-6 ) _mgcc_meter_meter__kMIN = 20 ;
        else _mgcc_meter_meter__kMIN = 10 ;
        _mgcc_meter_meter__cnt_cycles = 0 ;
        _mgcc_meter_meter__max_k = 1200 ;
        _mgcc_meter_meter__kLIM = _mgcc_meter_meter__max_k - 10 ;
        _mgcc_meter_meter__kv = 0 ;
        _mgcc_meter_meter__vk_1 = 1.0 ;
        _mgcc_meter_meter__vk_0 = _mgcc_meter_meter__vk_1 ;
        _mgcc_meter_meter__t0v = _mgcc_meter_meter__Ts / 2.0 ;
        _mgcc_meter_meter__sumV2 = 0.0 ;
        _mgcc_meter_meter__v_rms = 0 ;
        _mgcc_meter_meter__Va_k1 = 1 ;
        _mgcc_meter_meter__ik_1 = 0.002 ;
        _mgcc_meter_meter__ik_0 = _mgcc_meter_meter__ik_1 ;
        _mgcc_meter_meter__sumI2 = 0.0 ;
        _mgcc_meter_meter__i_rms = 0 ;
        _mgcc_meter_meter__sumS = 0.0 ;
        _mgcc_meter_meter__Pw = 0.0 ;
        _mgcc_meter_meter__Pact = 0.0 ;
        _mgcc_meter_meter__Qint = 0.0 ;
        _mgcc_meter_meter__Qt = 0.0 ;
    }
    HIL_OutAO(0x401c, 0.0f);
    _mgcc_rms_value1__square_sum = 0x0;
    _mgcc_rms_value1__sample_cnt = 0x0;
    _mgcc_rms_value1__period_cnt = 0x0;
    _mgcc_rms_value1__db_timer = 0x0;
    _mgcc_rms_value1__previous_filtered_value = 0x0;
    _mgcc_rms_value1__previous_correction = 0x0;
    _mgcc_rms_value1__correction = 0x0;
    _mgcc_rms_value1__previous_value = 0x0;
    _mgcc_rms_value1__out_state = 0x0;
    _mgcc_rms_value1__filtered_value = 0x0;
    _mgcc_rms_value1__db_timer = 0x0;
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    {
        _vsc1_meter_meter__TWO_PI = 2.0 * M_PI ;
        _vsc1_meter_meter__KE = 1.414 ;
        _vsc1_meter_meter__GAMA = 50.0 ;
        _vsc1_meter_meter__Ts = 5e-05 ;
        _vsc1_meter_meter__Ts2 = _vsc1_meter_meter__Ts * _vsc1_meter_meter__Ts ;
        _vsc1_meter_meter__ws = 0.0 ;
        _vsc1_meter_meter__ws_n1 = 0.0 ;
        _vsc1_meter_meter__Va = 0.0 ;
        _vsc1_meter_meter__Va_n1 = 0.0 ;
        _vsc1_meter_meter__Va_n2 = 0.0 ;
        _vsc1_meter_meter__Vb = 0.0 ;
        _vsc1_meter_meter__Vb_n1 = 0.0 ;
        _vsc1_meter_meter__Vb_n2 = 0.0 ;
        _vsc1_meter_meter__win = 0.0 ;
        _vsc1_meter_meter__win_n1 = 0.0 ;
        _vsc1_meter_meter__Vgrid_n1 = 0.0 ;
        _vsc1_meter_meter__Vgrid_n2 = 0.0 ;
        _vsc1_meter_meter__ct1 = 0.5 * _vsc1_meter_meter__Ts ;
        _vsc1_meter_meter__ct2 = 2.0 * _vsc1_meter_meter__Ts * _vsc1_meter_meter__KE ;
        _vsc1_meter_meter__MAX_FREQ = 90.0 * _vsc1_meter_meter__TWO_PI ;
        _vsc1_meter_meter__MIN_FREQ = 20.0 * _vsc1_meter_meter__TWO_PI ;
        _vsc1_meter_meter__flag_init = 15u ;
        if ( _vsc1_meter_meter__Ts < 25e-6 ) _vsc1_meter_meter__kMIN = 50 ;
        else if ( _vsc1_meter_meter__Ts < 60e-6 ) _vsc1_meter_meter__kMIN = 35 ;
        else if ( _vsc1_meter_meter__Ts < 110e-6 ) _vsc1_meter_meter__kMIN = 20 ;
        else _vsc1_meter_meter__kMIN = 10 ;
        _vsc1_meter_meter__cnt_cycles = 0 ;
        _vsc1_meter_meter__max_k = 1200 ;
        _vsc1_meter_meter__kLIM = _vsc1_meter_meter__max_k - 10 ;
        _vsc1_meter_meter__kv = 0 ;
        _vsc1_meter_meter__vk_1 = 1.0 ;
        _vsc1_meter_meter__vk_0 = _vsc1_meter_meter__vk_1 ;
        _vsc1_meter_meter__t0v = _vsc1_meter_meter__Ts / 2.0 ;
        _vsc1_meter_meter__sumV2 = 0.0 ;
        _vsc1_meter_meter__v_rms = 0 ;
        _vsc1_meter_meter__Va_k1 = 1 ;
        _vsc1_meter_meter__ik_1 = 0.002 ;
        _vsc1_meter_meter__ik_0 = _vsc1_meter_meter__ik_1 ;
        _vsc1_meter_meter__sumI2 = 0.0 ;
        _vsc1_meter_meter__i_rms = 0 ;
        _vsc1_meter_meter__sumS = 0.0 ;
        _vsc1_meter_meter__Pw = 0.0 ;
        _vsc1_meter_meter__Pact = 0.0 ;
        _vsc1_meter_meter__Qint = 0.0 ;
        _vsc1_meter_meter__Qt = 0.0 ;
    }
    {
        _vsc1_sogi_qsg__v_alpha = 0 ;
        _vsc1_sogi_qsg__v_beta = 0 ;
        _vsc1_sogi_qsg__v_freq = 60 ;
        SOGIInit ( & _vsc1_sogi_qsg__v_sogi , _vsc1_sogi_qsg__v_freq , 0.2 , 0.02 ) ;
        _vsc1_sogi_qsg__i_alpha = 0 ;
        _vsc1_sogi_qsg__i_beta = 0 ;
        _vsc1_sogi_qsg__i_freq = 60 ;
        SOGIInit ( & _vsc1_sogi_qsg__i_sogi , _vsc1_sogi_qsg__i_freq , 0.6 , 0.02 ) ;
    }
    _vsc1_lpf_internal_filter__load_ic = 1;
    {
        _vsc1_current_controller__err = 0 ;
        _vsc1_current_controller__u = 0 ;
        _vsc1_current_controller__u0 = 0 ;
        _vsc1_current_controller__u_bounded = 0 ;
        _vsc1_current_controller__KP = 8 ;
        _vsc1_current_controller__U_BOUNDARY = 500 ;
    }
    HIL_OutAO(0x4037, 0.0f);
    HIL_OutAO(0x403f, 0.0f);
    {
        _vsc2_meter_meter__TWO_PI = 2.0 * M_PI ;
        _vsc2_meter_meter__KE = 1.414 ;
        _vsc2_meter_meter__GAMA = 50.0 ;
        _vsc2_meter_meter__Ts = 5e-05 ;
        _vsc2_meter_meter__Ts2 = _vsc2_meter_meter__Ts * _vsc2_meter_meter__Ts ;
        _vsc2_meter_meter__ws = 0.0 ;
        _vsc2_meter_meter__ws_n1 = 0.0 ;
        _vsc2_meter_meter__Va = 0.0 ;
        _vsc2_meter_meter__Va_n1 = 0.0 ;
        _vsc2_meter_meter__Va_n2 = 0.0 ;
        _vsc2_meter_meter__Vb = 0.0 ;
        _vsc2_meter_meter__Vb_n1 = 0.0 ;
        _vsc2_meter_meter__Vb_n2 = 0.0 ;
        _vsc2_meter_meter__win = 0.0 ;
        _vsc2_meter_meter__win_n1 = 0.0 ;
        _vsc2_meter_meter__Vgrid_n1 = 0.0 ;
        _vsc2_meter_meter__Vgrid_n2 = 0.0 ;
        _vsc2_meter_meter__ct1 = 0.5 * _vsc2_meter_meter__Ts ;
        _vsc2_meter_meter__ct2 = 2.0 * _vsc2_meter_meter__Ts * _vsc2_meter_meter__KE ;
        _vsc2_meter_meter__MAX_FREQ = 90.0 * _vsc2_meter_meter__TWO_PI ;
        _vsc2_meter_meter__MIN_FREQ = 20.0 * _vsc2_meter_meter__TWO_PI ;
        _vsc2_meter_meter__flag_init = 15u ;
        if ( _vsc2_meter_meter__Ts < 25e-6 ) _vsc2_meter_meter__kMIN = 50 ;
        else if ( _vsc2_meter_meter__Ts < 60e-6 ) _vsc2_meter_meter__kMIN = 35 ;
        else if ( _vsc2_meter_meter__Ts < 110e-6 ) _vsc2_meter_meter__kMIN = 20 ;
        else _vsc2_meter_meter__kMIN = 10 ;
        _vsc2_meter_meter__cnt_cycles = 0 ;
        _vsc2_meter_meter__max_k = 1200 ;
        _vsc2_meter_meter__kLIM = _vsc2_meter_meter__max_k - 10 ;
        _vsc2_meter_meter__kv = 0 ;
        _vsc2_meter_meter__vk_1 = 1.0 ;
        _vsc2_meter_meter__vk_0 = _vsc2_meter_meter__vk_1 ;
        _vsc2_meter_meter__t0v = _vsc2_meter_meter__Ts / 2.0 ;
        _vsc2_meter_meter__sumV2 = 0.0 ;
        _vsc2_meter_meter__v_rms = 0 ;
        _vsc2_meter_meter__Va_k1 = 1 ;
        _vsc2_meter_meter__ik_1 = 0.002 ;
        _vsc2_meter_meter__ik_0 = _vsc2_meter_meter__ik_1 ;
        _vsc2_meter_meter__sumI2 = 0.0 ;
        _vsc2_meter_meter__i_rms = 0 ;
        _vsc2_meter_meter__sumS = 0.0 ;
        _vsc2_meter_meter__Pw = 0.0 ;
        _vsc2_meter_meter__Pact = 0.0 ;
        _vsc2_meter_meter__Qint = 0.0 ;
        _vsc2_meter_meter__Qt = 0.0 ;
    }
    {
        _vsc2_sogi_qsg__v_alpha = 0 ;
        _vsc2_sogi_qsg__v_beta = 0 ;
        _vsc2_sogi_qsg__v_freq = 60 ;
        SOGIInit ( & _vsc2_sogi_qsg__v_sogi , _vsc2_sogi_qsg__v_freq , 0.2 , 0.02 ) ;
        _vsc2_sogi_qsg__i_alpha = 0 ;
        _vsc2_sogi_qsg__i_beta = 0 ;
        _vsc2_sogi_qsg__i_freq = 60 ;
        SOGIInit ( & _vsc2_sogi_qsg__i_sogi , _vsc2_sogi_qsg__i_freq , 0.6 , 0.02 ) ;
    }
    _vsc2_lpf_internal_filter__load_ic = 1;
    {
        _vsc2_current_controller__err = 0 ;
        _vsc2_current_controller__u = 0 ;
        _vsc2_current_controller__u0 = 0 ;
        _vsc2_current_controller__u_bounded = 0 ;
        _vsc2_current_controller__KP = 8 ;
        _vsc2_current_controller__U_BOUNDARY = 500 ;
    }
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    {
        _load_single_phase_variable_load_single_phase_core1_c_function4__n = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function4__old_Qref = 0 ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_c_function5__n = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function5__old_Qref = 0 ;
    }
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    {
        _vsc1_droop_controller2__v = 0 ;
        _vsc1_droop_controller2__p = 0 ;
        _vsc1_droop_controller2__q = 0 ;
        _vsc1_droop_controller2__p_ref = 0 ;
        _vsc1_droop_controller2__q_ref = 0 ;
        initDroop ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__TS_10KHZ , _vsc1_droop_controller2__VZERO , _vsc1_droop_controller2__WZERO , 15000 , 15000 , _vsc1_droop_controller2__DELTA_V , _vsc1_droop_controller2__DELTA_W , _vsc1_droop_controller2__WC , 25 , 0.01 ) ;
    }
    {
        initAllPassFilter ( & _vsc1_apf__apf , _vsc1_apf__TS , _vsc1_apf__PHI , _vsc1_apf__OMEGA , _vsc1_apf__TAU ) ;
        _vsc1_apf__output = 0 ;
    }
    HIL_OutAO(0x401d, 0.0f);
    _vsc1_grid_forming_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _vsc1_grid_forming_pwm_modulator__channels[0], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc1_grid_forming_pwm_modulator__channels[0], 2000);
    HIL_OutInt32(0x2000080 + _vsc1_grid_forming_pwm_modulator__channels[1], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc1_grid_forming_pwm_modulator__channels[1], 2000);
    HIL_OutInt32(0x20001c0 + _vsc1_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _vsc1_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _vsc1_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _vsc1_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _vsc1_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _vsc1_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _vsc1_grid_forming_pwm_modulator__channels[0], 3);
    HIL_OutInt32(0x2000300 + _vsc1_grid_forming_pwm_modulator__channels[1], 3);
    HIL_OutInt32(0x2000340 + _vsc1_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _vsc1_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _vsc1_grid_forming_pwm_modulator__update_mask);
    HIL_OutAO(0x4035, 0.0f);
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x4039, 0.0f);
    HIL_OutAO(0x403a, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    {
        _vsc2_droop_controller2__v = 0 ;
        _vsc2_droop_controller2__p = 0 ;
        _vsc2_droop_controller2__q = 0 ;
        _vsc2_droop_controller2__p_ref = 0 ;
        _vsc2_droop_controller2__q_ref = 0 ;
        initDroop ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__TS_10KHZ , _vsc2_droop_controller2__VZERO , _vsc2_droop_controller2__WZERO , 15000 , 15000 , _vsc2_droop_controller2__DELTA_V , _vsc2_droop_controller2__DELTA_W , _vsc2_droop_controller2__WC , 25 , 0.01 ) ;
    }
    {
        initAllPassFilter ( & _vsc2_apf__apf , _vsc2_apf__TS , _vsc2_apf__PHI , _vsc2_apf__OMEGA , _vsc2_apf__TAU ) ;
        _vsc2_apf__output = 0 ;
    }
    HIL_OutAO(0x4033, 0.0f);
    _vsc2_grid_forming_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _vsc2_grid_forming_pwm_modulator__channels[0], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc2_grid_forming_pwm_modulator__channels[0], 2000);
    HIL_OutInt32(0x2000080 + _vsc2_grid_forming_pwm_modulator__channels[1], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc2_grid_forming_pwm_modulator__channels[1], 2000);
    HIL_OutInt32(0x20001c0 + _vsc2_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _vsc2_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _vsc2_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _vsc2_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _vsc2_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _vsc2_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _vsc2_grid_forming_pwm_modulator__channels[0], 3);
    HIL_OutInt32(0x2000300 + _vsc2_grid_forming_pwm_modulator__channels[1], 3);
    HIL_OutInt32(0x2000340 + _vsc2_grid_forming_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _vsc2_grid_forming_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _vsc2_grid_forming_pwm_modulator__update_mask);
    // write initial SG parameters
    X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__i;
    X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__j;
    X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__enable_wg_update_uint;
    _grid_vsp_sin1_tdf_sg_ctrl_sine1__enable_wg_update_uint = 0;
    for (_grid_vsp_sin1_tdf_sg_ctrl_sine1__i = 0; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i < 1; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i++) {
        HIL_OutFloat(0x400200 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], 0.0f);  // set gain to 0 (initial value)
        HIL_OutInt32(0x400180 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], 0);      // set offset to 0 (initial value)
        HIL_OutInt32(0x400000 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], 1);
        HIL_OutInt32(0x400280 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], 0);
        HIL_OutFloat(0x400100 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], 2.0f);
        HIL_OutInt32(0x400300 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], _grid_vsp_sin1_tdf_sg_ctrl_sine1__enable_wg_update_uint);   // enable wave update
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value += 1 << _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i];
    }
    // calculate and write waveform data
    _grid_vsp_sin1_tdf_sg_ctrl_sine1__k = 2.0f * M_PI / _grid_vsp_sin1_tdf_sg_ctrl_sine1__no_of_points;
    // oscillator based sine implementation
    // oscillator init
    _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn_1 = sin(0.0f);
    _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn_1 = cos(0.0f);
    // oscillator
    for (_grid_vsp_sin1_tdf_sg_ctrl_sine1__i = 0; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i < _grid_vsp_sin1_tdf_sg_ctrl_sine1__no_of_points; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i++) {
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn = _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn_1 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__k * _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn_1;
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn = _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn_1 - _grid_vsp_sin1_tdf_sg_ctrl_sine1__k * _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn;
        // write the same data to all the channels
        for (_grid_vsp_sin1_tdf_sg_ctrl_sine1__j = 0; _grid_vsp_sin1_tdf_sg_ctrl_sine1__j < 1; _grid_vsp_sin1_tdf_sg_ctrl_sine1__j++) {
            HIL_OutFloat(0x600000 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__j] * 0x800 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__i, (float) _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn_1);
        }
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn_1 = _grid_vsp_sin1_tdf_sg_ctrl_sine1__xn;
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn_1 = _grid_vsp_sin1_tdf_sg_ctrl_sine1__yn;
    }
    HIL_OutInt32(0x400080, _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value);  // update both parameters and waveforms on all channels
    {
        _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Psum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Qsum = 0 ;
    }
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    {
        initVirtualImpedance ( & _vsc1_virtual_impedance__vz , _vsc1_virtual_impedance__TS , _vsc1_virtual_impedance__INDUCTANCE , _vsc1_virtual_impedance__ZETA , _vsc1_virtual_impedance__POLE ) ;
        _vsc1_virtual_impedance__output = 0 ;
    }
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4032, 0.0f);
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    HIL_OutAO(0x4034, 0.0f);
    {
        initVirtualImpedance ( & _vsc2_virtual_impedance__vz , _vsc2_virtual_impedance__TS , _vsc2_virtual_impedance__INDUCTANCE , _vsc2_virtual_impedance__ZETA , _vsc2_virtual_impedance__POLE ) ;
        _vsc2_virtual_impedance__output = 0 ;
    }
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x4048, 0.0f);
    {
        _load_single_phase_variable_load_single_phase_core1_active_power_losses__Psum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_active_power_losses__I = 0 ;
        _load_single_phase_variable_load_single_phase_core1_active_power_losses__Isum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap = 0 ;
        _load_single_phase_variable_load_single_phase_core1_active_power_losses__Iind ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il = 0 ;
        _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I = 0 ;
        _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Isum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek = 0 ;
        _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl = 0 ;
        _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xc = 0 ;
    }
    HIL_OutAO(0x402f, 0.0f);
    {
        _vsc1_voltage_controller__TWOPI = 6.2831 ;
        _vsc1_voltage_controller__omega0 = _vsc1_voltage_controller__TWOPI * 60 ;
        _vsc1_voltage_controller__TS_10KHZ = 0.0001 ;
        _vsc1_voltage_controller__SQRT2 = 1.41421356237 ;
        _vsc1_voltage_controller__U_BOUNDARY = 200 ;
        _vsc1_voltage_controller__u_bounded = 0 ;
        _vsc1_voltage_controller__u = 0 ;
        _vsc1_voltage_controller__ref0 = 0 ;
        _vsc1_voltage_controller__u0 = 0 ;
        _vsc1_voltage_controller__err0 = 0 ;
        _vsc1_voltage_controller__u3 = 0 ;
        _vsc1_voltage_controller__err3 = 0 ;
        _vsc1_voltage_controller__u5 = 0 ;
        _vsc1_voltage_controller__err5 = 0 ;
        resonantControlInitMatlab ( & _vsc1_voltage_controller__rc0 , 4.753711597365024e-01 , - 7.994286999974808e-01 , 3.246258254171082e-01 , - 1.998571749993702e+00 , 9.999924628840264e-01 ) ;
    }
    HIL_OutAO(0x4045, 0.0f);
    {
        _vsc2_voltage_controller__TWOPI = 6.2831 ;
        _vsc2_voltage_controller__omega0 = _vsc2_voltage_controller__TWOPI * 60 ;
        _vsc2_voltage_controller__TS_10KHZ = 0.0001 ;
        _vsc2_voltage_controller__SQRT2 = 1.41421356237 ;
        _vsc2_voltage_controller__U_BOUNDARY = 200 ;
        _vsc2_voltage_controller__u_bounded = 0 ;
        _vsc2_voltage_controller__u = 0 ;
        _vsc2_voltage_controller__ref0 = 0 ;
        _vsc2_voltage_controller__u0 = 0 ;
        _vsc2_voltage_controller__err0 = 0 ;
        _vsc2_voltage_controller__u3 = 0 ;
        _vsc2_voltage_controller__err3 = 0 ;
        _vsc2_voltage_controller__u5 = 0 ;
        _vsc2_voltage_controller__err5 = 0 ;
        resonantControlInitMatlab ( & _vsc2_voltage_controller__rc0 , 4.753711597365024e-01 , - 7.994286999974808e-01 , 3.246258254171082e-01 , - 1.998571749993702e+00 , 9.999924628840264e-01 ) ;
    }
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__state = 0.0f;
    {
        _load_single_phase_variable_load_single_phase_core1_lref_calc__Vsum = 0 ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_c_function2__Xc = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function2__Xl = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function2__wsum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function2__Isum ;
        _load_single_phase_variable_load_single_phase_core1_c_function2__Imeas = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function2__Ih = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_function2__n = 0 ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_counter__cnt = 0 ;
        _load_single_phase_variable_load_single_phase_core1_counter__out_state = 0 ;
    }
    X_UnInt32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i;
    for (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i = 0; _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i < 1; _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i++) {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__states[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i] = 0;
    }
    X_UnInt32 _mgcc_single_phase_pll1_discrete_transfer_function1__i;
    for (_mgcc_single_phase_pll1_discrete_transfer_function1__i = 0; _mgcc_single_phase_pll1_discrete_transfer_function1__i < 1; _mgcc_single_phase_pll1_discrete_transfer_function1__i++) {
        _mgcc_single_phase_pll1_discrete_transfer_function1__states[_mgcc_single_phase_pll1_discrete_transfer_function1__i] = 0;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_r_inc__dR = 0.001 ;
        _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator = 0 ;
        _load_single_phase_variable_load_single_phase_core1_r_inc__Isum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_r_inc__Ih = 0 ;
        _load_single_phase_variable_load_single_phase_core1_r_inc__dP = 0 ;
        _load_single_phase_variable_load_single_phase_core1_r_inc__P_tol = 0.002 ;
    }
    {
        _load_single_phase_variable_load_single_phase_core1_c_inc__dC = (-0.001) ;
        _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_inc__Isum = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_inc__Ih = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_inc__dQ = 0 ;
        _load_single_phase_variable_load_single_phase_core1_c_inc__Q_tol = 0.002 ;
    }
    HIL_OutFloat(137363458, 0.0);
    HIL_OutFloat(137363457, 0.0);
    HIL_OutFloat(137363456, 0.0);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Grid.Constant1
    // Generated from the component: Load.Meter.Grid frequency
    // Generated from the component: Load.Meter.ncycles
    // Generated from the component: Load.Single-phase Variable Load.Constant1
    // Generated from the component: Load.Single-phase Variable Load.Constant13
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Constant11
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Constant12
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Constant3
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Constant5
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Constant6
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Constant1
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.const_h
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.const_h
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.const_h
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change.Constant14
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change.Constant15
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change1.Constant14
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change1.Constant15
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Constant2
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.const
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.const_one
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.dimension
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.harmonic_vector
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.harmonic_vector1
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.harmonic_vector2
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.harmonic_vector3
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.harmonic_vector5
    // Generated from the component: MGCC.Meter.Grid frequency
    // Generated from the component: MGCC.Meter.ncycles
    // Generated from the component: MGCC.Single phase PLL1.Constant2
    // Generated from the component: MGCC.Single phase PLL1.const
    // Generated from the component: VSC1.Constant14
    // Generated from the component: VSC1.Constant15
    // Generated from the component: VSC1.Constant9
    // Generated from the component: VSC1.Meter.Grid frequency
    // Generated from the component: VSC1.Meter.ncycles
    // Generated from the component: VSC2.Constant14
    // Generated from the component: VSC2.Constant15
    // Generated from the component: VSC2.Constant9
    // Generated from the component: VSC2.Meter.Grid frequency
    // Generated from the component: VSC2.Meter.ncycles
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Grid.F_NADIR
    _grid_f_nadir__out = XIo_InFloat(0x55000100);
    // Generated from the component: Grid.Flag
    _grid_flag__out = XIo_InFloat(0x55000104);
    // Generated from the component: Grid.ROCOF
    _grid_rocof__out = XIo_InFloat(0x55000108);
    // Generated from the component: Grid.Vrms
    _grid_vrms__out = XIo_InFloat(0x5500010c);
    // Generated from the component: Grid.freq
    _grid_freq__out = XIo_InFloat(0x55000110);
    // Generated from the component: Load.Meter._Ig.Ia2
    _load_meter__ig_ia2__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: Load.Meter._Vg.Va2
    _load_meter__vg_va2__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Load.Single-phase Variable Load.Enable
    _load_single_phase_variable_load_enable__out = XIo_InFloat(0x55000114);
    // Generated from the component: Load.Single-phase Variable Load.Pref
    _load_single_phase_variable_load_pref__out = XIo_InFloat(0x55000118);
    // Generated from the component: Load.Single-phase Variable Load.Qref
    _load_single_phase_variable_load_qref__out = XIo_InFloat(0x5500011c);
    // Generated from the component: Load.Single-phase Variable Load.ROC
    _load_single_phase_variable_load_roc__out = XIo_InFloat(0x55000120);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Delay1
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__state[_load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Low-Pass Filter3
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_filtered_value = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__filtered_value;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__filtered_value = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_in * (6.283185307179586 * 5.0 * 5e-05) + _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_filtered_value * (1 - 6.283185307179586 * 5.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__filtered_value;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.I
    _load_single_phase_variable_load_single_phase_core1_i__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Low-Pass Filter2
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_filtered_value = _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__filtered_value;
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__filtered_value = _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__out = _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__filtered_value;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Low-Pass Filter8
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_filtered_value = _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__filtered_value;
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__filtered_value = _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__out = _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__filtered_value;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Low-Pass Filter9
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_filtered_value = _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__filtered_value;
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__filtered_value = _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_in * (6.283185307179586 * 500.0 * 5e-05) + _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_filtered_value * (1 - 6.283185307179586 * 500.0 * 5e-05 );
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__out = _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__filtered_value;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change.Ramping1.Ramping
    {
        _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a * 5e-05 * _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i + _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__b ;
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out > _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref && _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a >= 0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i + 1 ;
        }
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out < _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref && _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a <= 0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change1.Ramping1.Ramping
    {
        _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a * 5e-05 * _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i + _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__b ;
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out > _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref && _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a >= 0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i + 1 ;
        }
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out < _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref && _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a <= 0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i + 1 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.SR Flip Flop1
    _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__out = _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state;
    _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__out_n = _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state != -1 ? !_load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state : -1;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.I
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__pi_reg_out_int = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__integrator_state;
    if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active = -1;
    else if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active = 1;
    else
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active = 0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__pi_reg_out_int, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator10
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator3
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator4
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator5
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator6
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator7
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator8
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator9
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.integrator_with_reset
    {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out_calc ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Transport Delay1
    _load_single_phase_variable_load_single_phase_core1_transport_delay1__out = _load_single_phase_variable_load_single_phase_core1_transport_delay1__state[_load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Transport Delay2
    _load_single_phase_variable_load_single_phase_core1_transport_delay2__out = _load_single_phase_variable_load_single_phase_core1_transport_delay2__state[_load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay1
    _load_single_phase_variable_load_single_phase_core1_unit_delay1__out = _load_single_phase_variable_load_single_phase_core1_unit_delay1__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay12
    _load_single_phase_variable_load_single_phase_core1_unit_delay12__out = _load_single_phase_variable_load_single_phase_core1_unit_delay12__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay13
    _load_single_phase_variable_load_single_phase_core1_unit_delay13__out = _load_single_phase_variable_load_single_phase_core1_unit_delay13__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay2
    _load_single_phase_variable_load_single_phase_core1_unit_delay2__out = _load_single_phase_variable_load_single_phase_core1_unit_delay2__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay3
    _load_single_phase_variable_load_single_phase_core1_unit_delay3__out = _load_single_phase_variable_load_single_phase_core1_unit_delay3__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay4
    _load_single_phase_variable_load_single_phase_core1_unit_delay4__out = _load_single_phase_variable_load_single_phase_core1_unit_delay4__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay5
    _load_single_phase_variable_load_single_phase_core1_unit_delay5__out = _load_single_phase_variable_load_single_phase_core1_unit_delay5__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay6
    _load_single_phase_variable_load_single_phase_core1_unit_delay6__out = _load_single_phase_variable_load_single_phase_core1_unit_delay6__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay7
    _load_single_phase_variable_load_single_phase_core1_unit_delay7__out = _load_single_phase_variable_load_single_phase_core1_unit_delay7__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay8
    _load_single_phase_variable_load_single_phase_core1_unit_delay8__out = _load_single_phase_variable_load_single_phase_core1_unit_delay8__state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.V
    _load_single_phase_variable_load_single_phase_core1_v__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.zig_zag_handler
    {
        switch ( _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state )     {
        case 0 :
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en = _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en = 0 ;
            break;
        case 1 :
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en = 1 ;
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en = 0 ;
            break;
        case 2 :
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en = 1 ;
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en = 0 ;
            break;
        case 3 :
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en = 0 ;
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en = 1 ;
            break;
        case 4 :
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en = 0 ;
            _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en = 1 ;
            break;
        }
    }
    // Generated from the component: MGCC.Meter._Ig.Ia2
    _mgcc_meter__ig_ia2__out = (HIL_InFloat(0xc80000 + 0x1c));
    // Generated from the component: MGCC.Meter._Vg.Va2
    _mgcc_meter__vg_va2__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: MGCC.Pref
    _mgcc_pref__out = XIo_InFloat(0x55000124);
    // Generated from the component: MGCC.Qref
    _mgcc_qref__out = XIo_InFloat(0x55000128);
    // Generated from the component: MGCC.STS
    _mgcc_sts__out = XIo_InFloat(0x5500012c);
    // Generated from the component: MGCC.Single phase PLL1.I
    _mgcc_single_phase_pll1_i__pi_reg_out_int = _mgcc_single_phase_pll1_i__integrator_state;
    if (_mgcc_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586)
        _mgcc_single_phase_pll1_i__av_active = -1;
    else if (_mgcc_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586)
        _mgcc_single_phase_pll1_i__av_active = 1;
    else
        _mgcc_single_phase_pll1_i__av_active = 0;
    _mgcc_single_phase_pll1_i__out = MIN(MAX(_mgcc_single_phase_pll1_i__pi_reg_out_int, -62.83185307179586), 62.83185307179586);
    // Generated from the component: MGCC.Single phase PLL1.Integrator1
    _mgcc_single_phase_pll1_integrator1__out = _mgcc_single_phase_pll1_integrator1__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator10
    _mgcc_single_phase_pll1_integrator10__out = _mgcc_single_phase_pll1_integrator10__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator2
    _mgcc_single_phase_pll1_integrator2__out = _mgcc_single_phase_pll1_integrator2__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator3
    _mgcc_single_phase_pll1_integrator3__out = _mgcc_single_phase_pll1_integrator3__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator4
    _mgcc_single_phase_pll1_integrator4__out = _mgcc_single_phase_pll1_integrator4__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator5
    _mgcc_single_phase_pll1_integrator5__out = _mgcc_single_phase_pll1_integrator5__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator6
    _mgcc_single_phase_pll1_integrator6__out = _mgcc_single_phase_pll1_integrator6__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator7
    _mgcc_single_phase_pll1_integrator7__out = _mgcc_single_phase_pll1_integrator7__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator8
    _mgcc_single_phase_pll1_integrator8__out = _mgcc_single_phase_pll1_integrator8__state;
    // Generated from the component: MGCC.Single phase PLL1.Integrator9
    _mgcc_single_phase_pll1_integrator9__out = _mgcc_single_phase_pll1_integrator9__state;
    // Generated from the component: MGCC.Single phase PLL1.integrator_with_reset
    {
        _mgcc_single_phase_pll1_integrator_with_reset__out = _mgcc_single_phase_pll1_integrator_with_reset__out_calc ;
    }
    // Generated from the component: MGCC.Vgrid.Va1
    _mgcc_vgrid_va1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: MGCC.Vpcc.Va1
    _mgcc_vpcc_va1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: MGCC.i.Ia1
    _mgcc_i_ia1__out = (HIL_InFloat(0xc80000 + 0x1d));
    // Generated from the component: VSC1.IL1.Ia1
    _vsc1_il1_ia1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: VSC1.IL2.Ia1
    _vsc1_il2_ia1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: VSC1.Meter._Ig.Ia2
    _vsc1_meter__ig_ia2__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: VSC1.Meter._Vg.Va2
    _vsc1_meter__vg_va2__out = (HIL_InFloat(0xc80000 + 0x205));
    // Generated from the component: VSC1.RT30.Output
    _vsc1_rt30_output__out = _vsc1_rt30_output__state;
    // Generated from the component: VSC1.VC.Va1
    _vsc1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x206));
    // Generated from the component: VSC2.IL1.Ia1
    _vsc2_il1_ia1__out = (HIL_InFloat(0xc80000 + 0x407));
    // Generated from the component: VSC2.IL2.Ia1
    _vsc2_il2_ia1__out = (HIL_InFloat(0xc80000 + 0x408));
    // Generated from the component: VSC2.Meter._Ig.Ia2
    _vsc2_meter__ig_ia2__out = (HIL_InFloat(0xc80000 + 0x40a));
    // Generated from the component: VSC2.Meter._Vg.Va2
    _vsc2_meter__vg_va2__out = (HIL_InFloat(0xc80000 + 0x405));
    // Generated from the component: VSC2.RT30.Output
    _vsc2_rt30_output__out = _vsc2_rt30_output__state;
    // Generated from the component: VSC2.VC.Va1
    _vsc2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x406));
    // Generated from the component: Grid.flag
    HIL_OutAO(0x4000, (float)_grid_flag__out);
    // Generated from the component: Grid.Vsp_sin1.Limit1
    _grid_vsp_sin1_limit1__out = MAX(_grid_vrms__out, 0.0);
    // Generated from the component: Grid.C function2
    _grid_c_function2__F_Nadir = _grid_f_nadir__out;
    _grid_c_function2__ROCOF = _grid_rocof__out;
    _grid_c_function2__f_nom = _grid_freq__out;
    _grid_c_function2__flag = _grid_flag__out;
    {
        _grid_c_function2__aux = _grid_c_function2__f_nom - _grid_c_function2__F_Nadir ;
        if ( _grid_c_function2__aux > 0 )     {
            _grid_c_function2__w1 = _grid_c_function2__ROCOF / _grid_c_function2__aux ;
        }
        _grid_c_function2__kf = _grid_c_function2__pi / _grid_c_function2__w1 / _grid_c_function2__Ts ;
        if ( _grid_c_function2__flag > _grid_c_function2__flag_a ) _grid_c_function2__k = 0 ;
        if ( _grid_c_function2__k < _grid_c_function2__kf )     {
            _grid_c_function2__freq = _grid_c_function2__f_nom - ( _grid_c_function2__f_nom - _grid_c_function2__F_Nadir ) * sin ( _grid_c_function2__w1 * _grid_c_function2__k * _grid_c_function2__Ts ) ;
            _grid_c_function2__k = _grid_c_function2__k + 1 ;
        }
        else _grid_c_function2__freq = _grid_c_function2__f_nom ;
        _grid_c_function2__flag_a = _grid_c_function2__flag ;
        _grid_c_function2__out_freq = _grid_c_function2__freq ;
    }
    // Generated from the component: Load.Meter.I_t
    HIL_OutAO(0x4004, (float)_load_meter__ig_ia2__out);
    // Generated from the component: Load.Meter.V_t
    HIL_OutAO(0x400c, (float)_load_meter__vg_va2__out);
    // Generated from the component: Load.Meter.Meter
    _load_meter_meter__Igrid = _load_meter__ig_ia2__out;
    _load_meter_meter__Vgrid = _load_meter__vg_va2__out;
    _load_meter_meter__f_grid = _load_meter_grid_frequency__out;
    _load_meter_meter__n_cycles = _load_meter_ncycles__out;
    {
        if ( _load_meter_meter__flag_init )     {
            _load_meter_meter__flag_init = 0u ;
            if ( _load_meter_meter__f_grid > 80.0 )         {
                _load_meter_meter__wg = 80.0 * _load_meter_meter__TWO_PI ;
            }
            else if ( _load_meter_meter__f_grid < 30.0 )         {
                _load_meter_meter__wg = 30.0 * _load_meter_meter__TWO_PI ;
            }
            else         {
                _load_meter_meter__wg = _load_meter_meter__TWO_PI * _load_meter_meter__f_grid ;
            }
            _load_meter_meter__what = _load_meter_meter__wg ;
            _load_meter_meter__what2 = _load_meter_meter__what * _load_meter_meter__what ;
            _load_meter_meter__Vrms = 0.0 ;
            _load_meter_meter__Irms = 0.0 ;
            _load_meter_meter__Po = 0.0 ;
            _load_meter_meter__Qo = 0.0 ;
            _load_meter_meter__So = 0.0 ;
            _load_meter_meter__pf = 0.0 ;
            _load_meter_meter__Valpha = 0.0 ;
            _load_meter_meter__Vbeta = 0.0 ;
        }
        else     {
            _load_meter_meter__k1 = _load_meter_meter__ct2 * _load_meter_meter__what ;
            _load_meter_meter__k2 = _load_meter_meter__Ts2 * _load_meter_meter__what2 + _load_meter_meter__ct2 * _load_meter_meter__what + 4 ;
            _load_meter_meter__k3 = 2 * _load_meter_meter__Ts2 * _load_meter_meter__what2 - 8 ;
            _load_meter_meter__k4 = _load_meter_meter__Ts2 * _load_meter_meter__what2 - _load_meter_meter__ct2 * _load_meter_meter__what + 4 ;
            _load_meter_meter__k5 = _load_meter_meter__Ts2 * _load_meter_meter__KE * _load_meter_meter__what2 ;
            _load_meter_meter__Va = ( _load_meter_meter__k1 * ( _load_meter_meter__Vgrid - _load_meter_meter__Vgrid_n2 ) - _load_meter_meter__k3 * _load_meter_meter__Va_n1 - _load_meter_meter__k4 * _load_meter_meter__Va_n2 ) / _load_meter_meter__k2 ;
            _load_meter_meter__Vb = ( _load_meter_meter__k5 * ( _load_meter_meter__Vgrid + 2 * _load_meter_meter__Vgrid_n1 + _load_meter_meter__Vgrid_n2 ) - _load_meter_meter__k3 * _load_meter_meter__Vb_n1 - _load_meter_meter__k4 * _load_meter_meter__Vb_n2 ) / _load_meter_meter__k2 ;
            _load_meter_meter__norm = _load_meter_meter__Va * _load_meter_meter__Va + _load_meter_meter__Vb * _load_meter_meter__Vb ;
            if ( _load_meter_meter__norm < 0.01 ) _load_meter_meter__norm = 0.01 ;
            _load_meter_meter__win = ( - _load_meter_meter__GAMA * _load_meter_meter__KE * _load_meter_meter__what * _load_meter_meter__Vb ) / _load_meter_meter__norm * ( _load_meter_meter__Vgrid - _load_meter_meter__Va ) ;
            _load_meter_meter__ws = _load_meter_meter__ws_n1 + _load_meter_meter__ct1 * ( _load_meter_meter__win + _load_meter_meter__win_n1 ) ;
            _load_meter_meter__what = _load_meter_meter__ws + _load_meter_meter__wg ;
            if ( _load_meter_meter__what > _load_meter_meter__MAX_FREQ )         {
                _load_meter_meter__what = _load_meter_meter__MAX_FREQ ;
                _load_meter_meter__ws = _load_meter_meter__MAX_FREQ - _load_meter_meter__wg ;
            }
            else if ( _load_meter_meter__what < _load_meter_meter__MIN_FREQ )         {
                _load_meter_meter__what = _load_meter_meter__MIN_FREQ ;
                _load_meter_meter__ws = _load_meter_meter__MIN_FREQ - _load_meter_meter__wg ;
            }
            _load_meter_meter__what2 = _load_meter_meter__what * _load_meter_meter__what ;
            _load_meter_meter__ws_n1 = _load_meter_meter__ws ;
            _load_meter_meter__Va_n2 = _load_meter_meter__Va_n1 ;
            _load_meter_meter__Va_n1 = _load_meter_meter__Va ;
            _load_meter_meter__Vb_n2 = _load_meter_meter__Vb_n1 ;
            _load_meter_meter__Vb_n1 = _load_meter_meter__Vb ;
            _load_meter_meter__win_n1 = _load_meter_meter__win ;
            _load_meter_meter__Vgrid_n2 = _load_meter_meter__Vgrid_n1 ;
            _load_meter_meter__Vgrid_n1 = _load_meter_meter__Vgrid ;
            if ( _load_meter_meter__what >= 30.0 * _load_meter_meter__TWO_PI && _load_meter_meter__what <= 80.0 * _load_meter_meter__TWO_PI )         {
                _load_meter_meter__vk_0 = _load_meter_meter__Vgrid ;
                _load_meter_meter__ik_0 = _load_meter_meter__Igrid ;
                if ( ( ( ( _load_meter_meter__Va >= 0.0 && _load_meter_meter__Va_k1 < 0.0 ) || ( _load_meter_meter__Va <= 0.0 && _load_meter_meter__Va_k1 > 0.0 ) ) && _load_meter_meter__kv > _load_meter_meter__kMIN ) || _load_meter_meter__kv > _load_meter_meter__kLIM )             {
                    _load_meter_meter__vt = fabs ( _load_meter_meter__Va ) + fabs ( _load_meter_meter__Va_k1 ) ;
                    _load_meter_meter__Tsig = _load_meter_meter__kv ;
                    if ( _load_meter_meter__vt > 1e-9 )                 {
                        _load_meter_meter__tfv = fabs ( _load_meter_meter__Va_k1 ) / _load_meter_meter__vt ;
                    }
                    else                 {
                        _load_meter_meter__tfv = 0 ;
                    }
                    _load_meter_meter__sumV2 += _load_meter_meter__vk_1 * _load_meter_meter__vk_1 * _load_meter_meter__tfv ;
                    _load_meter_meter__sumV2 /= _load_meter_meter__Tsig ;
                    _load_meter_meter__v_rms += sqrt ( _load_meter_meter__sumV2 ) ;
                    _load_meter_meter__sumI2 += _load_meter_meter__ik_1 * _load_meter_meter__ik_1 * _load_meter_meter__tfv ;
                    _load_meter_meter__sumI2 /= _load_meter_meter__Tsig ;
                    _load_meter_meter__i_rms += sqrt ( _load_meter_meter__sumI2 ) ;
                    _load_meter_meter__Pw += _load_meter_meter__vk_1 * _load_meter_meter__ik_1 * _load_meter_meter__tfv ;
                    _load_meter_meter__Pact += _load_meter_meter__Pw / _load_meter_meter__Tsig ;
                    _load_meter_meter__Qint += _load_meter_meter__Vb * _load_meter_meter__ik_1 * _load_meter_meter__tfv ;
                    _load_meter_meter__Qt += _load_meter_meter__Qint / _load_meter_meter__Tsig ;
                    if ( _load_meter_meter__vt > 1e-9 )                 {
                        _load_meter_meter__t0v = fabs ( _load_meter_meter__Va ) / _load_meter_meter__vt ;
                    }
                    else                 {
                        _load_meter_meter__t0v = 0 ;
                    }
                    _load_meter_meter__kv = 0 ;
                    _load_meter_meter__sumV2 = _load_meter_meter__vk_0 * _load_meter_meter__vk_0 * _load_meter_meter__t0v ;
                    _load_meter_meter__Pw = _load_meter_meter__vk_0 * _load_meter_meter__ik_0 * _load_meter_meter__t0v ;
                    _load_meter_meter__Qint = _load_meter_meter__Vb * _load_meter_meter__ik_0 * _load_meter_meter__t0v ;
                    _load_meter_meter__sumI2 = _load_meter_meter__ik_0 * _load_meter_meter__ik_0 * _load_meter_meter__t0v ;
                    _load_meter_meter__cnt_cycles ++ ;
                }
                else             {
                    _load_meter_meter__sumV2 += _load_meter_meter__vk_0 * _load_meter_meter__vk_0 ;
                    _load_meter_meter__sumI2 += _load_meter_meter__ik_0 * _load_meter_meter__ik_0 ;
                    _load_meter_meter__Pw += _load_meter_meter__vk_0 * _load_meter_meter__ik_0 ;
                    _load_meter_meter__Qint += _load_meter_meter__Vb * _load_meter_meter__ik_0 ;
                }
                if ( _load_meter_meter__kv < _load_meter_meter__max_k ) _load_meter_meter__kv ++ ;
                _load_meter_meter__vk_1 = _load_meter_meter__vk_0 ;
                _load_meter_meter__Va_k1 = _load_meter_meter__Va ;
                _load_meter_meter__ik_1 = _load_meter_meter__ik_0 ;
            }
            else         {
                _load_meter_meter__Vrms = 0.0 ;
                _load_meter_meter__Irms = 0.0 ;
                _load_meter_meter__Po = 0.0 ;
                _load_meter_meter__Qo = 0.0 ;
                _load_meter_meter__So = 0.0 ;
                _load_meter_meter__pf = 0.0 ;
                _load_meter_meter__v_rms = 0.0 ;
                _load_meter_meter__i_rms = 0.0 ;
                _load_meter_meter__Pact = 0.0 ;
                _load_meter_meter__Qt = 0.0 ;
                _load_meter_meter__kv = 0u ;
                _load_meter_meter__cnt_cycles = 0u ;
                _load_meter_meter__sumV2 = 0.0 ;
                _load_meter_meter__sumI2 = 0.0 ;
                _load_meter_meter__Pw = 0.0 ;
                _load_meter_meter__Qint = 0.0 ;
            }
        }
        if ( _load_meter_meter__cnt_cycles >= ( _load_meter_meter__n_cycles * 2 ) )     {
            _load_meter_meter__nc = _load_meter_meter__cnt_cycles ;
            _load_meter_meter__cnt_cycles = 0 ;
            _load_meter_meter__Vrms = _load_meter_meter__v_rms / _load_meter_meter__nc ;
            _load_meter_meter__Irms = _load_meter_meter__i_rms / _load_meter_meter__nc ;
            _load_meter_meter__So = _load_meter_meter__Vrms * _load_meter_meter__Irms ;
            _load_meter_meter__Po = _load_meter_meter__Pact / _load_meter_meter__nc ;
            _load_meter_meter__Qo = _load_meter_meter__Qt / _load_meter_meter__nc ;
            if ( _load_meter_meter__So ) _load_meter_meter__pf = _load_meter_meter__Po / _load_meter_meter__So ;
            else _load_meter_meter__pf = 0 ;
            if ( _load_meter_meter__Qo < 0 )         {
                _load_meter_meter__pf = - 1.0 * _load_meter_meter__pf ;
            }
            _load_meter_meter__v_rms = 0.0 ;
            _load_meter_meter__i_rms = 0.0 ;
            _load_meter_meter__Pact = 0.0 ;
            _load_meter_meter__Qt = 0.0 ;
        }
        _load_meter_meter__Valpha = _load_meter_meter__Va ;
        _load_meter_meter__Vbeta = - 1.0 * _load_meter_meter__Vb ;
        _load_meter_meter__f = _load_meter_meter__what / _load_meter_meter__TWO_PI ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Relational operator3
    _load_single_phase_variable_load_relational_operator3__out = (_load_single_phase_variable_load_enable__out >= _load_single_phase_variable_load_constant13__out) ? 1 : 0;
    // Generated from the component: Load.Single-phase Variable Load.Limit1
    _load_single_phase_variable_load_limit1__out = MIN(MAX(_load_single_phase_variable_load_pref__out, 0.0), 1.0);
    // Generated from the component: Load.Single-phase Variable Load.Limit2
    _load_single_phase_variable_load_limit2__out = MIN(MAX(_load_single_phase_variable_load_qref__out, -1.0), 1.0);
    // Generated from the component: Load.Single-phase Variable Load.Limit3
    _load_single_phase_variable_load_limit3__out = MAX(_load_single_phase_variable_load_roc__out, 0.001);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Steady state check
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__in = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__out;
    {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out_state ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__time_cnt += 5e-05 ;
        if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__time_cnt >= 1 / ( 2 * 60.0 ) )     {
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__time_cnt = 0 ;
            if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__max_val - _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__min_val > 0.0125 * 311.12698372208087 ) _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out = 0 ;
            else _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out = 1 ;
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__max_val = 0.25 * 311.12698372208087 ;
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__min_val = 2 * 311.12698372208087 ;
        }
        if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__in >= _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__max_val )     {
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__max_val = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__in ;
        }
        if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__in <= _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__min_val )     {
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__min_val = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__in ;
        }
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out_state = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit2
    _load_single_phase_variable_load_single_phase_core1_limit2__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_low_pass_filter2__out, 1e-08), 0.08764840216069833);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w10
    _load_single_phase_variable_load_single_phase_core1_f_to_w10__out = 4.125e-05 * _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w7
    _load_single_phase_variable_load_single_phase_core1_f_to_w7__out = 0.001 * _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w11
    _load_single_phase_variable_load_single_phase_core1_f_to_w11__out = 5.5e-05 * _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w6
    _load_single_phase_variable_load_single_phase_core1_f_to_w6__out = 0.001 * _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Load.Single-phase Variable Load.MCB_status
    HIL_OutInt32(0xf00401, _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__out != 0x0);
    // Generated from the component: Load.Single-phase Variable Load.S1.CTC_Wrapper
    if (_load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Termination5
    // Generated from the component: Load.Single-phase Variable Load.Termination2
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.freq_gain
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_freq_gain__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_freq_gain__out[1] = 0.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.f_to_w
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_f_to_w__out = 6.283185307179586 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.FFT
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__f1 = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__h[0] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_const_h__out[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__h[1] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_const_h__out[1];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__signal = _load_single_phase_variable_load_single_phase_core1_i__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__reset )     {
            for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i )         {
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__N ;
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] * 2 / _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__N ;
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = sqrt ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] + _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] ) ;
                if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__h [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] /= 2 ;
                if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] == 0 )             {
                    if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] > 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = 90 ;
                    else if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] < 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = - 90 ;
                    else if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] == 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
                }
                else             {
                    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = atan2 ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] , _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] ) * 180 / M_PI ;
                }
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = 0 ;
            }
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__reset = 0 ;
        }
        for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] += _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__signal * sin ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__h [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] += _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__signal * cos ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__h [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp ) ;
        }
        for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__i ] ;
        }
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.freq_gain
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_freq_gain__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_freq_gain__out[1] = 0.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.freq_gain
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_freq_gain__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_freq_gain__out[1] = 0.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Peak calc.Limit4
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit4__out = MAX(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__out, 0.001);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum4
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum4__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Product2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product2__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__out * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.w_to_f
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum9
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum9__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum11
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum11__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum13
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum13__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum14
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum14__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.C function1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__theta_dq = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__va = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__out;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vb = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__out;
    {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vq = cos ( _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__theta_dq ) * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__va + sin ( _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__theta_dq ) * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vb ;
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vd = - sin ( _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__theta_dq ) * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__va + cos ( _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__theta_dq ) * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vb ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Trigonometric function1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_trigonometric_function1__out = sin(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Termination2
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.FFT
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__f1 = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__h[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_const_h__out[0];
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__h[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_const_h__out[1];
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__signal = _load_single_phase_variable_load_single_phase_core1_v__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__reset )     {
            for ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i )         {
                _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__N ;
                _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] * 2 / _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__N ;
                _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = sqrt ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] + _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] ) ;
                if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__h [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] /= 2 ;
                if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 )             {
                    if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] > 0 ) _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = 90 ;
                    else if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] < 0 ) _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = - 90 ;
                    else if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] == 0 ) _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
                }
                else             {
                    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = atan2 ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] , _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] ) * 180 / M_PI ;
                }
                _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = 0 ;
            }
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__reset = 0 ;
        }
        for ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] += _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__signal * sin ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__h [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] += _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__signal * cos ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__h [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp ) ;
        }
        for ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i )     {
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] ;
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__i ] ;
        }
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.RMS value1
    if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out_state = sqrt(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__square_sum / (2 * M_PI));
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__square_sum = 0.0f;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt = fmod(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out_state;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.FFT
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__f1 = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__h[0] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_const_h__out[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__h[1] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_const_h__out[1];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__signal = _load_single_phase_variable_load_single_phase_core1_v__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__reset )     {
            for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i )         {
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__N ;
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] * 2 / _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__N ;
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = sqrt ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] + _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] ) ;
                if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__h [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] /= 2 ;
                if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] == 0 )             {
                    if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] > 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = 90 ;
                    else if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] < 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = - 90 ;
                    else if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] == 0 ) _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
                }
                else             {
                    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = atan2 ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] , _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] ) * 180 / M_PI ;
                }
                _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = 0 ;
            }
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__reset = 0 ;
        }
        for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_re [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] += _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__signal * sin ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__h [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__sum_im [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] += _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__signal * cos ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__h [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp ) ;
        }
        for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i < 2 ; ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase_state [ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__i ] ;
        }
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum1__out =  - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__out + _load_single_phase_variable_load_single_phase_core1_v__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Relational operator3
    _load_single_phase_variable_load_single_phase_core1_relational_operator3__out = (_load_single_phase_variable_load_single_phase_core1_dimension__out > _load_single_phase_variable_load_single_phase_core1_const_one__out) ? 1 : 0;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator22
    _load_single_phase_variable_load_single_phase_core1_logical_operator22__out = !_load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_en;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator23
    _load_single_phase_variable_load_single_phase_core1_logical_operator23__out = !_load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_en;
    // Generated from the component: MGCC.Meter.I_t
    HIL_OutAO(0x4013, (float)_mgcc_meter__ig_ia2__out);
    // Generated from the component: MGCC.Meter.V_t
    HIL_OutAO(0x401b, (float)_mgcc_meter__vg_va2__out);
    // Generated from the component: MGCC.Meter.Meter
    _mgcc_meter_meter__Igrid = _mgcc_meter__ig_ia2__out;
    _mgcc_meter_meter__Vgrid = _mgcc_meter__vg_va2__out;
    _mgcc_meter_meter__f_grid = _mgcc_meter_grid_frequency__out;
    _mgcc_meter_meter__n_cycles = _mgcc_meter_ncycles__out;
    {
        if ( _mgcc_meter_meter__flag_init )     {
            _mgcc_meter_meter__flag_init = 0u ;
            if ( _mgcc_meter_meter__f_grid > 80.0 )         {
                _mgcc_meter_meter__wg = 80.0 * _mgcc_meter_meter__TWO_PI ;
            }
            else if ( _mgcc_meter_meter__f_grid < 30.0 )         {
                _mgcc_meter_meter__wg = 30.0 * _mgcc_meter_meter__TWO_PI ;
            }
            else         {
                _mgcc_meter_meter__wg = _mgcc_meter_meter__TWO_PI * _mgcc_meter_meter__f_grid ;
            }
            _mgcc_meter_meter__what = _mgcc_meter_meter__wg ;
            _mgcc_meter_meter__what2 = _mgcc_meter_meter__what * _mgcc_meter_meter__what ;
            _mgcc_meter_meter__Vrms = 0.0 ;
            _mgcc_meter_meter__Irms = 0.0 ;
            _mgcc_meter_meter__Po = 0.0 ;
            _mgcc_meter_meter__Qo = 0.0 ;
            _mgcc_meter_meter__So = 0.0 ;
            _mgcc_meter_meter__pf = 0.0 ;
            _mgcc_meter_meter__Valpha = 0.0 ;
            _mgcc_meter_meter__Vbeta = 0.0 ;
        }
        else     {
            _mgcc_meter_meter__k1 = _mgcc_meter_meter__ct2 * _mgcc_meter_meter__what ;
            _mgcc_meter_meter__k2 = _mgcc_meter_meter__Ts2 * _mgcc_meter_meter__what2 + _mgcc_meter_meter__ct2 * _mgcc_meter_meter__what + 4 ;
            _mgcc_meter_meter__k3 = 2 * _mgcc_meter_meter__Ts2 * _mgcc_meter_meter__what2 - 8 ;
            _mgcc_meter_meter__k4 = _mgcc_meter_meter__Ts2 * _mgcc_meter_meter__what2 - _mgcc_meter_meter__ct2 * _mgcc_meter_meter__what + 4 ;
            _mgcc_meter_meter__k5 = _mgcc_meter_meter__Ts2 * _mgcc_meter_meter__KE * _mgcc_meter_meter__what2 ;
            _mgcc_meter_meter__Va = ( _mgcc_meter_meter__k1 * ( _mgcc_meter_meter__Vgrid - _mgcc_meter_meter__Vgrid_n2 ) - _mgcc_meter_meter__k3 * _mgcc_meter_meter__Va_n1 - _mgcc_meter_meter__k4 * _mgcc_meter_meter__Va_n2 ) / _mgcc_meter_meter__k2 ;
            _mgcc_meter_meter__Vb = ( _mgcc_meter_meter__k5 * ( _mgcc_meter_meter__Vgrid + 2 * _mgcc_meter_meter__Vgrid_n1 + _mgcc_meter_meter__Vgrid_n2 ) - _mgcc_meter_meter__k3 * _mgcc_meter_meter__Vb_n1 - _mgcc_meter_meter__k4 * _mgcc_meter_meter__Vb_n2 ) / _mgcc_meter_meter__k2 ;
            _mgcc_meter_meter__norm = _mgcc_meter_meter__Va * _mgcc_meter_meter__Va + _mgcc_meter_meter__Vb * _mgcc_meter_meter__Vb ;
            if ( _mgcc_meter_meter__norm < 0.01 ) _mgcc_meter_meter__norm = 0.01 ;
            _mgcc_meter_meter__win = ( - _mgcc_meter_meter__GAMA * _mgcc_meter_meter__KE * _mgcc_meter_meter__what * _mgcc_meter_meter__Vb ) / _mgcc_meter_meter__norm * ( _mgcc_meter_meter__Vgrid - _mgcc_meter_meter__Va ) ;
            _mgcc_meter_meter__ws = _mgcc_meter_meter__ws_n1 + _mgcc_meter_meter__ct1 * ( _mgcc_meter_meter__win + _mgcc_meter_meter__win_n1 ) ;
            _mgcc_meter_meter__what = _mgcc_meter_meter__ws + _mgcc_meter_meter__wg ;
            if ( _mgcc_meter_meter__what > _mgcc_meter_meter__MAX_FREQ )         {
                _mgcc_meter_meter__what = _mgcc_meter_meter__MAX_FREQ ;
                _mgcc_meter_meter__ws = _mgcc_meter_meter__MAX_FREQ - _mgcc_meter_meter__wg ;
            }
            else if ( _mgcc_meter_meter__what < _mgcc_meter_meter__MIN_FREQ )         {
                _mgcc_meter_meter__what = _mgcc_meter_meter__MIN_FREQ ;
                _mgcc_meter_meter__ws = _mgcc_meter_meter__MIN_FREQ - _mgcc_meter_meter__wg ;
            }
            _mgcc_meter_meter__what2 = _mgcc_meter_meter__what * _mgcc_meter_meter__what ;
            _mgcc_meter_meter__ws_n1 = _mgcc_meter_meter__ws ;
            _mgcc_meter_meter__Va_n2 = _mgcc_meter_meter__Va_n1 ;
            _mgcc_meter_meter__Va_n1 = _mgcc_meter_meter__Va ;
            _mgcc_meter_meter__Vb_n2 = _mgcc_meter_meter__Vb_n1 ;
            _mgcc_meter_meter__Vb_n1 = _mgcc_meter_meter__Vb ;
            _mgcc_meter_meter__win_n1 = _mgcc_meter_meter__win ;
            _mgcc_meter_meter__Vgrid_n2 = _mgcc_meter_meter__Vgrid_n1 ;
            _mgcc_meter_meter__Vgrid_n1 = _mgcc_meter_meter__Vgrid ;
            if ( _mgcc_meter_meter__what >= 30.0 * _mgcc_meter_meter__TWO_PI && _mgcc_meter_meter__what <= 80.0 * _mgcc_meter_meter__TWO_PI )         {
                _mgcc_meter_meter__vk_0 = _mgcc_meter_meter__Vgrid ;
                _mgcc_meter_meter__ik_0 = _mgcc_meter_meter__Igrid ;
                if ( ( ( ( _mgcc_meter_meter__Va >= 0.0 && _mgcc_meter_meter__Va_k1 < 0.0 ) || ( _mgcc_meter_meter__Va <= 0.0 && _mgcc_meter_meter__Va_k1 > 0.0 ) ) && _mgcc_meter_meter__kv > _mgcc_meter_meter__kMIN ) || _mgcc_meter_meter__kv > _mgcc_meter_meter__kLIM )             {
                    _mgcc_meter_meter__vt = fabs ( _mgcc_meter_meter__Va ) + fabs ( _mgcc_meter_meter__Va_k1 ) ;
                    _mgcc_meter_meter__Tsig = _mgcc_meter_meter__kv ;
                    if ( _mgcc_meter_meter__vt > 1e-9 )                 {
                        _mgcc_meter_meter__tfv = fabs ( _mgcc_meter_meter__Va_k1 ) / _mgcc_meter_meter__vt ;
                    }
                    else                 {
                        _mgcc_meter_meter__tfv = 0 ;
                    }
                    _mgcc_meter_meter__sumV2 += _mgcc_meter_meter__vk_1 * _mgcc_meter_meter__vk_1 * _mgcc_meter_meter__tfv ;
                    _mgcc_meter_meter__sumV2 /= _mgcc_meter_meter__Tsig ;
                    _mgcc_meter_meter__v_rms += sqrt ( _mgcc_meter_meter__sumV2 ) ;
                    _mgcc_meter_meter__sumI2 += _mgcc_meter_meter__ik_1 * _mgcc_meter_meter__ik_1 * _mgcc_meter_meter__tfv ;
                    _mgcc_meter_meter__sumI2 /= _mgcc_meter_meter__Tsig ;
                    _mgcc_meter_meter__i_rms += sqrt ( _mgcc_meter_meter__sumI2 ) ;
                    _mgcc_meter_meter__Pw += _mgcc_meter_meter__vk_1 * _mgcc_meter_meter__ik_1 * _mgcc_meter_meter__tfv ;
                    _mgcc_meter_meter__Pact += _mgcc_meter_meter__Pw / _mgcc_meter_meter__Tsig ;
                    _mgcc_meter_meter__Qint += _mgcc_meter_meter__Vb * _mgcc_meter_meter__ik_1 * _mgcc_meter_meter__tfv ;
                    _mgcc_meter_meter__Qt += _mgcc_meter_meter__Qint / _mgcc_meter_meter__Tsig ;
                    if ( _mgcc_meter_meter__vt > 1e-9 )                 {
                        _mgcc_meter_meter__t0v = fabs ( _mgcc_meter_meter__Va ) / _mgcc_meter_meter__vt ;
                    }
                    else                 {
                        _mgcc_meter_meter__t0v = 0 ;
                    }
                    _mgcc_meter_meter__kv = 0 ;
                    _mgcc_meter_meter__sumV2 = _mgcc_meter_meter__vk_0 * _mgcc_meter_meter__vk_0 * _mgcc_meter_meter__t0v ;
                    _mgcc_meter_meter__Pw = _mgcc_meter_meter__vk_0 * _mgcc_meter_meter__ik_0 * _mgcc_meter_meter__t0v ;
                    _mgcc_meter_meter__Qint = _mgcc_meter_meter__Vb * _mgcc_meter_meter__ik_0 * _mgcc_meter_meter__t0v ;
                    _mgcc_meter_meter__sumI2 = _mgcc_meter_meter__ik_0 * _mgcc_meter_meter__ik_0 * _mgcc_meter_meter__t0v ;
                    _mgcc_meter_meter__cnt_cycles ++ ;
                }
                else             {
                    _mgcc_meter_meter__sumV2 += _mgcc_meter_meter__vk_0 * _mgcc_meter_meter__vk_0 ;
                    _mgcc_meter_meter__sumI2 += _mgcc_meter_meter__ik_0 * _mgcc_meter_meter__ik_0 ;
                    _mgcc_meter_meter__Pw += _mgcc_meter_meter__vk_0 * _mgcc_meter_meter__ik_0 ;
                    _mgcc_meter_meter__Qint += _mgcc_meter_meter__Vb * _mgcc_meter_meter__ik_0 ;
                }
                if ( _mgcc_meter_meter__kv < _mgcc_meter_meter__max_k ) _mgcc_meter_meter__kv ++ ;
                _mgcc_meter_meter__vk_1 = _mgcc_meter_meter__vk_0 ;
                _mgcc_meter_meter__Va_k1 = _mgcc_meter_meter__Va ;
                _mgcc_meter_meter__ik_1 = _mgcc_meter_meter__ik_0 ;
            }
            else         {
                _mgcc_meter_meter__Vrms = 0.0 ;
                _mgcc_meter_meter__Irms = 0.0 ;
                _mgcc_meter_meter__Po = 0.0 ;
                _mgcc_meter_meter__Qo = 0.0 ;
                _mgcc_meter_meter__So = 0.0 ;
                _mgcc_meter_meter__pf = 0.0 ;
                _mgcc_meter_meter__v_rms = 0.0 ;
                _mgcc_meter_meter__i_rms = 0.0 ;
                _mgcc_meter_meter__Pact = 0.0 ;
                _mgcc_meter_meter__Qt = 0.0 ;
                _mgcc_meter_meter__kv = 0u ;
                _mgcc_meter_meter__cnt_cycles = 0u ;
                _mgcc_meter_meter__sumV2 = 0.0 ;
                _mgcc_meter_meter__sumI2 = 0.0 ;
                _mgcc_meter_meter__Pw = 0.0 ;
                _mgcc_meter_meter__Qint = 0.0 ;
            }
        }
        if ( _mgcc_meter_meter__cnt_cycles >= ( _mgcc_meter_meter__n_cycles * 2 ) )     {
            _mgcc_meter_meter__nc = _mgcc_meter_meter__cnt_cycles ;
            _mgcc_meter_meter__cnt_cycles = 0 ;
            _mgcc_meter_meter__Vrms = _mgcc_meter_meter__v_rms / _mgcc_meter_meter__nc ;
            _mgcc_meter_meter__Irms = _mgcc_meter_meter__i_rms / _mgcc_meter_meter__nc ;
            _mgcc_meter_meter__So = _mgcc_meter_meter__Vrms * _mgcc_meter_meter__Irms ;
            _mgcc_meter_meter__Po = _mgcc_meter_meter__Pact / _mgcc_meter_meter__nc ;
            _mgcc_meter_meter__Qo = _mgcc_meter_meter__Qt / _mgcc_meter_meter__nc ;
            if ( _mgcc_meter_meter__So ) _mgcc_meter_meter__pf = _mgcc_meter_meter__Po / _mgcc_meter_meter__So ;
            else _mgcc_meter_meter__pf = 0 ;
            if ( _mgcc_meter_meter__Qo < 0 )         {
                _mgcc_meter_meter__pf = - 1.0 * _mgcc_meter_meter__pf ;
            }
            _mgcc_meter_meter__v_rms = 0.0 ;
            _mgcc_meter_meter__i_rms = 0.0 ;
            _mgcc_meter_meter__Pact = 0.0 ;
            _mgcc_meter_meter__Qt = 0.0 ;
        }
        _mgcc_meter_meter__Valpha = _mgcc_meter_meter__Va ;
        _mgcc_meter_meter__Vbeta = - 1.0 * _mgcc_meter_meter__Vb ;
        _mgcc_meter_meter__f = _mgcc_meter_meter__what / _mgcc_meter_meter__TWO_PI ;
    }
    // Generated from the component: MGCC.S1.CTC_Wrapper
    _mgcc_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80402);
    if (_mgcc_sts__out == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    // Generated from the component: MGCC.f_pcc
    HIL_OutAO(0x401c, (float)_mgcc_single_phase_pll1_integrator10__out);
    // Generated from the component: MGCC.Single phase PLL1.Sum4
    _mgcc_single_phase_pll1_sum4__out = _mgcc_single_phase_pll1_integrator3__out - _mgcc_single_phase_pll1_integrator4__out;
    // Generated from the component: MGCC.Termination6
    // Generated from the component: MGCC.Single phase PLL1.Product2
    _mgcc_single_phase_pll1_product2__out = (_mgcc_single_phase_pll1_integrator5__out * _mgcc_single_phase_pll1_integrator1__out);
    // Generated from the component: MGCC.Single phase PLL1.w_to_f
    _mgcc_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _mgcc_single_phase_pll1_integrator5__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum9
    _mgcc_single_phase_pll1_sum9__out = _mgcc_single_phase_pll1_integrator6__out - _mgcc_single_phase_pll1_integrator5__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum11
    _mgcc_single_phase_pll1_sum11__out = _mgcc_single_phase_pll1_integrator7__out - _mgcc_single_phase_pll1_integrator8__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum13
    _mgcc_single_phase_pll1_sum13__out = _mgcc_single_phase_pll1_integrator8__out - _mgcc_single_phase_pll1_integrator9__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum14
    _mgcc_single_phase_pll1_sum14__out = _mgcc_single_phase_pll1_integrator9__out - _mgcc_single_phase_pll1_integrator10__out;
    // Generated from the component: MGCC.Single phase PLL1.C function1
    _mgcc_single_phase_pll1_c_function1__theta_dq = _mgcc_single_phase_pll1_integrator_with_reset__out;
    _mgcc_single_phase_pll1_c_function1__va = _mgcc_single_phase_pll1_integrator1__out;
    _mgcc_single_phase_pll1_c_function1__vb = _mgcc_single_phase_pll1_integrator2__out;
    {
        _mgcc_single_phase_pll1_c_function1__vq = cos ( _mgcc_single_phase_pll1_c_function1__theta_dq ) * _mgcc_single_phase_pll1_c_function1__va + sin ( _mgcc_single_phase_pll1_c_function1__theta_dq ) * _mgcc_single_phase_pll1_c_function1__vb ;
        _mgcc_single_phase_pll1_c_function1__vd = - sin ( _mgcc_single_phase_pll1_c_function1__theta_dq ) * _mgcc_single_phase_pll1_c_function1__va + cos ( _mgcc_single_phase_pll1_c_function1__theta_dq ) * _mgcc_single_phase_pll1_c_function1__vb ;
    }
    // Generated from the component: MGCC.Single phase PLL1.Trigonometric function1
    _mgcc_single_phase_pll1_trigonometric_function1__out = sin(_mgcc_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: MGCC.Termination2
    // Generated from the component: MGCC.RMS value1
    _mgcc_rms_value1__previous_filtered_value = _mgcc_rms_value1__filtered_value;
    if (0)
        _mgcc_rms_value1__filtered_value = _mgcc_rms_value1__previous_filtered_value * 1 + _mgcc_vpcc_va1__out * 1;
    else
        _mgcc_rms_value1__filtered_value = _mgcc_rms_value1__previous_filtered_value * 0.1 + _mgcc_vpcc_va1__out * 0.9;
    _mgcc_rms_value1__db_timer += 5e-05;
    if( (_mgcc_rms_value1__filtered_value >= 0.0) && (_mgcc_rms_value1__previous_filtered_value < 0.0) && (_mgcc_rms_value1__db_timer >= 0.0) ) {
        _mgcc_rms_value1__zc = 1;
        _mgcc_rms_value1__db_timer = 0;
    } else
        _mgcc_rms_value1__zc = 0;
    _mgcc_rms_value1__out = _mgcc_rms_value1__out_state;
    // Generated from the component: MGCC.Single phase PLL1.Sum1
    _mgcc_single_phase_pll1_sum1__out =  - _mgcc_single_phase_pll1_integrator1__out + _mgcc_vpcc_va1__out;
    // Generated from the component: VSC1.RT42.Input
    _vsc1_rt42_output__state = _vsc1_il2_ia1__out;
    // Generated from the component: VSC1.RT61.Input
    _vsc1_rt61_output__state = _vsc1_il2_ia1__out;
    // Generated from the component: VSC1.Meter.I_t
    HIL_OutAO(0x4021, (float)_vsc1_meter__ig_ia2__out);
    // Generated from the component: VSC1.Meter.V_t
    HIL_OutAO(0x4029, (float)_vsc1_meter__vg_va2__out);
    // Generated from the component: VSC1.Meter.Meter
    _vsc1_meter_meter__Igrid = _vsc1_meter__ig_ia2__out;
    _vsc1_meter_meter__Vgrid = _vsc1_meter__vg_va2__out;
    _vsc1_meter_meter__f_grid = _vsc1_meter_grid_frequency__out;
    _vsc1_meter_meter__n_cycles = _vsc1_meter_ncycles__out;
    {
        if ( _vsc1_meter_meter__flag_init )     {
            _vsc1_meter_meter__flag_init = 0u ;
            if ( _vsc1_meter_meter__f_grid > 80.0 )         {
                _vsc1_meter_meter__wg = 80.0 * _vsc1_meter_meter__TWO_PI ;
            }
            else if ( _vsc1_meter_meter__f_grid < 30.0 )         {
                _vsc1_meter_meter__wg = 30.0 * _vsc1_meter_meter__TWO_PI ;
            }
            else         {
                _vsc1_meter_meter__wg = _vsc1_meter_meter__TWO_PI * _vsc1_meter_meter__f_grid ;
            }
            _vsc1_meter_meter__what = _vsc1_meter_meter__wg ;
            _vsc1_meter_meter__what2 = _vsc1_meter_meter__what * _vsc1_meter_meter__what ;
            _vsc1_meter_meter__Vrms = 0.0 ;
            _vsc1_meter_meter__Irms = 0.0 ;
            _vsc1_meter_meter__Po = 0.0 ;
            _vsc1_meter_meter__Qo = 0.0 ;
            _vsc1_meter_meter__So = 0.0 ;
            _vsc1_meter_meter__pf = 0.0 ;
            _vsc1_meter_meter__Valpha = 0.0 ;
            _vsc1_meter_meter__Vbeta = 0.0 ;
        }
        else     {
            _vsc1_meter_meter__k1 = _vsc1_meter_meter__ct2 * _vsc1_meter_meter__what ;
            _vsc1_meter_meter__k2 = _vsc1_meter_meter__Ts2 * _vsc1_meter_meter__what2 + _vsc1_meter_meter__ct2 * _vsc1_meter_meter__what + 4 ;
            _vsc1_meter_meter__k3 = 2 * _vsc1_meter_meter__Ts2 * _vsc1_meter_meter__what2 - 8 ;
            _vsc1_meter_meter__k4 = _vsc1_meter_meter__Ts2 * _vsc1_meter_meter__what2 - _vsc1_meter_meter__ct2 * _vsc1_meter_meter__what + 4 ;
            _vsc1_meter_meter__k5 = _vsc1_meter_meter__Ts2 * _vsc1_meter_meter__KE * _vsc1_meter_meter__what2 ;
            _vsc1_meter_meter__Va = ( _vsc1_meter_meter__k1 * ( _vsc1_meter_meter__Vgrid - _vsc1_meter_meter__Vgrid_n2 ) - _vsc1_meter_meter__k3 * _vsc1_meter_meter__Va_n1 - _vsc1_meter_meter__k4 * _vsc1_meter_meter__Va_n2 ) / _vsc1_meter_meter__k2 ;
            _vsc1_meter_meter__Vb = ( _vsc1_meter_meter__k5 * ( _vsc1_meter_meter__Vgrid + 2 * _vsc1_meter_meter__Vgrid_n1 + _vsc1_meter_meter__Vgrid_n2 ) - _vsc1_meter_meter__k3 * _vsc1_meter_meter__Vb_n1 - _vsc1_meter_meter__k4 * _vsc1_meter_meter__Vb_n2 ) / _vsc1_meter_meter__k2 ;
            _vsc1_meter_meter__norm = _vsc1_meter_meter__Va * _vsc1_meter_meter__Va + _vsc1_meter_meter__Vb * _vsc1_meter_meter__Vb ;
            if ( _vsc1_meter_meter__norm < 0.01 ) _vsc1_meter_meter__norm = 0.01 ;
            _vsc1_meter_meter__win = ( - _vsc1_meter_meter__GAMA * _vsc1_meter_meter__KE * _vsc1_meter_meter__what * _vsc1_meter_meter__Vb ) / _vsc1_meter_meter__norm * ( _vsc1_meter_meter__Vgrid - _vsc1_meter_meter__Va ) ;
            _vsc1_meter_meter__ws = _vsc1_meter_meter__ws_n1 + _vsc1_meter_meter__ct1 * ( _vsc1_meter_meter__win + _vsc1_meter_meter__win_n1 ) ;
            _vsc1_meter_meter__what = _vsc1_meter_meter__ws + _vsc1_meter_meter__wg ;
            if ( _vsc1_meter_meter__what > _vsc1_meter_meter__MAX_FREQ )         {
                _vsc1_meter_meter__what = _vsc1_meter_meter__MAX_FREQ ;
                _vsc1_meter_meter__ws = _vsc1_meter_meter__MAX_FREQ - _vsc1_meter_meter__wg ;
            }
            else if ( _vsc1_meter_meter__what < _vsc1_meter_meter__MIN_FREQ )         {
                _vsc1_meter_meter__what = _vsc1_meter_meter__MIN_FREQ ;
                _vsc1_meter_meter__ws = _vsc1_meter_meter__MIN_FREQ - _vsc1_meter_meter__wg ;
            }
            _vsc1_meter_meter__what2 = _vsc1_meter_meter__what * _vsc1_meter_meter__what ;
            _vsc1_meter_meter__ws_n1 = _vsc1_meter_meter__ws ;
            _vsc1_meter_meter__Va_n2 = _vsc1_meter_meter__Va_n1 ;
            _vsc1_meter_meter__Va_n1 = _vsc1_meter_meter__Va ;
            _vsc1_meter_meter__Vb_n2 = _vsc1_meter_meter__Vb_n1 ;
            _vsc1_meter_meter__Vb_n1 = _vsc1_meter_meter__Vb ;
            _vsc1_meter_meter__win_n1 = _vsc1_meter_meter__win ;
            _vsc1_meter_meter__Vgrid_n2 = _vsc1_meter_meter__Vgrid_n1 ;
            _vsc1_meter_meter__Vgrid_n1 = _vsc1_meter_meter__Vgrid ;
            if ( _vsc1_meter_meter__what >= 30.0 * _vsc1_meter_meter__TWO_PI && _vsc1_meter_meter__what <= 80.0 * _vsc1_meter_meter__TWO_PI )         {
                _vsc1_meter_meter__vk_0 = _vsc1_meter_meter__Vgrid ;
                _vsc1_meter_meter__ik_0 = _vsc1_meter_meter__Igrid ;
                if ( ( ( ( _vsc1_meter_meter__Va >= 0.0 && _vsc1_meter_meter__Va_k1 < 0.0 ) || ( _vsc1_meter_meter__Va <= 0.0 && _vsc1_meter_meter__Va_k1 > 0.0 ) ) && _vsc1_meter_meter__kv > _vsc1_meter_meter__kMIN ) || _vsc1_meter_meter__kv > _vsc1_meter_meter__kLIM )             {
                    _vsc1_meter_meter__vt = fabs ( _vsc1_meter_meter__Va ) + fabs ( _vsc1_meter_meter__Va_k1 ) ;
                    _vsc1_meter_meter__Tsig = _vsc1_meter_meter__kv ;
                    if ( _vsc1_meter_meter__vt > 1e-9 )                 {
                        _vsc1_meter_meter__tfv = fabs ( _vsc1_meter_meter__Va_k1 ) / _vsc1_meter_meter__vt ;
                    }
                    else                 {
                        _vsc1_meter_meter__tfv = 0 ;
                    }
                    _vsc1_meter_meter__sumV2 += _vsc1_meter_meter__vk_1 * _vsc1_meter_meter__vk_1 * _vsc1_meter_meter__tfv ;
                    _vsc1_meter_meter__sumV2 /= _vsc1_meter_meter__Tsig ;
                    _vsc1_meter_meter__v_rms += sqrt ( _vsc1_meter_meter__sumV2 ) ;
                    _vsc1_meter_meter__sumI2 += _vsc1_meter_meter__ik_1 * _vsc1_meter_meter__ik_1 * _vsc1_meter_meter__tfv ;
                    _vsc1_meter_meter__sumI2 /= _vsc1_meter_meter__Tsig ;
                    _vsc1_meter_meter__i_rms += sqrt ( _vsc1_meter_meter__sumI2 ) ;
                    _vsc1_meter_meter__Pw += _vsc1_meter_meter__vk_1 * _vsc1_meter_meter__ik_1 * _vsc1_meter_meter__tfv ;
                    _vsc1_meter_meter__Pact += _vsc1_meter_meter__Pw / _vsc1_meter_meter__Tsig ;
                    _vsc1_meter_meter__Qint += _vsc1_meter_meter__Vb * _vsc1_meter_meter__ik_1 * _vsc1_meter_meter__tfv ;
                    _vsc1_meter_meter__Qt += _vsc1_meter_meter__Qint / _vsc1_meter_meter__Tsig ;
                    if ( _vsc1_meter_meter__vt > 1e-9 )                 {
                        _vsc1_meter_meter__t0v = fabs ( _vsc1_meter_meter__Va ) / _vsc1_meter_meter__vt ;
                    }
                    else                 {
                        _vsc1_meter_meter__t0v = 0 ;
                    }
                    _vsc1_meter_meter__kv = 0 ;
                    _vsc1_meter_meter__sumV2 = _vsc1_meter_meter__vk_0 * _vsc1_meter_meter__vk_0 * _vsc1_meter_meter__t0v ;
                    _vsc1_meter_meter__Pw = _vsc1_meter_meter__vk_0 * _vsc1_meter_meter__ik_0 * _vsc1_meter_meter__t0v ;
                    _vsc1_meter_meter__Qint = _vsc1_meter_meter__Vb * _vsc1_meter_meter__ik_0 * _vsc1_meter_meter__t0v ;
                    _vsc1_meter_meter__sumI2 = _vsc1_meter_meter__ik_0 * _vsc1_meter_meter__ik_0 * _vsc1_meter_meter__t0v ;
                    _vsc1_meter_meter__cnt_cycles ++ ;
                }
                else             {
                    _vsc1_meter_meter__sumV2 += _vsc1_meter_meter__vk_0 * _vsc1_meter_meter__vk_0 ;
                    _vsc1_meter_meter__sumI2 += _vsc1_meter_meter__ik_0 * _vsc1_meter_meter__ik_0 ;
                    _vsc1_meter_meter__Pw += _vsc1_meter_meter__vk_0 * _vsc1_meter_meter__ik_0 ;
                    _vsc1_meter_meter__Qint += _vsc1_meter_meter__Vb * _vsc1_meter_meter__ik_0 ;
                }
                if ( _vsc1_meter_meter__kv < _vsc1_meter_meter__max_k ) _vsc1_meter_meter__kv ++ ;
                _vsc1_meter_meter__vk_1 = _vsc1_meter_meter__vk_0 ;
                _vsc1_meter_meter__Va_k1 = _vsc1_meter_meter__Va ;
                _vsc1_meter_meter__ik_1 = _vsc1_meter_meter__ik_0 ;
            }
            else         {
                _vsc1_meter_meter__Vrms = 0.0 ;
                _vsc1_meter_meter__Irms = 0.0 ;
                _vsc1_meter_meter__Po = 0.0 ;
                _vsc1_meter_meter__Qo = 0.0 ;
                _vsc1_meter_meter__So = 0.0 ;
                _vsc1_meter_meter__pf = 0.0 ;
                _vsc1_meter_meter__v_rms = 0.0 ;
                _vsc1_meter_meter__i_rms = 0.0 ;
                _vsc1_meter_meter__Pact = 0.0 ;
                _vsc1_meter_meter__Qt = 0.0 ;
                _vsc1_meter_meter__kv = 0u ;
                _vsc1_meter_meter__cnt_cycles = 0u ;
                _vsc1_meter_meter__sumV2 = 0.0 ;
                _vsc1_meter_meter__sumI2 = 0.0 ;
                _vsc1_meter_meter__Pw = 0.0 ;
                _vsc1_meter_meter__Qint = 0.0 ;
            }
        }
        if ( _vsc1_meter_meter__cnt_cycles >= ( _vsc1_meter_meter__n_cycles * 2 ) )     {
            _vsc1_meter_meter__nc = _vsc1_meter_meter__cnt_cycles ;
            _vsc1_meter_meter__cnt_cycles = 0 ;
            _vsc1_meter_meter__Vrms = _vsc1_meter_meter__v_rms / _vsc1_meter_meter__nc ;
            _vsc1_meter_meter__Irms = _vsc1_meter_meter__i_rms / _vsc1_meter_meter__nc ;
            _vsc1_meter_meter__So = _vsc1_meter_meter__Vrms * _vsc1_meter_meter__Irms ;
            _vsc1_meter_meter__Po = _vsc1_meter_meter__Pact / _vsc1_meter_meter__nc ;
            _vsc1_meter_meter__Qo = _vsc1_meter_meter__Qt / _vsc1_meter_meter__nc ;
            if ( _vsc1_meter_meter__So ) _vsc1_meter_meter__pf = _vsc1_meter_meter__Po / _vsc1_meter_meter__So ;
            else _vsc1_meter_meter__pf = 0 ;
            if ( _vsc1_meter_meter__Qo < 0 )         {
                _vsc1_meter_meter__pf = - 1.0 * _vsc1_meter_meter__pf ;
            }
            _vsc1_meter_meter__v_rms = 0.0 ;
            _vsc1_meter_meter__i_rms = 0.0 ;
            _vsc1_meter_meter__Pact = 0.0 ;
            _vsc1_meter_meter__Qt = 0.0 ;
        }
        _vsc1_meter_meter__Valpha = _vsc1_meter_meter__Va ;
        _vsc1_meter_meter__Vbeta = - 1.0 * _vsc1_meter_meter__Vb ;
        _vsc1_meter_meter__f = _vsc1_meter_meter__what / _vsc1_meter_meter__TWO_PI ;
    }
    // Generated from the component: VSC1.CURRENT_CONTROLLER
    _vsc1_current_controller__IN_ENABLE = _vsc1_constant14__out;
    _vsc1_current_controller__IN_IL1 = _vsc1_il1_ia1__out;
    _vsc1_current_controller__IN_MICROGRID_STATUS = _vsc1_vc_va1__out;
    _vsc1_current_controller__IN_UV = _vsc1_rt30_output__out;
    {
        if ( _vsc1_current_controller__IN_ENABLE == 1 )     {
            _vsc1_current_controller__err = _vsc1_current_controller__IN_UV - _vsc1_current_controller__IN_IL1 ;
            _vsc1_current_controller__u0 = _vsc1_current_controller__KP * _vsc1_current_controller__err + _vsc1_current_controller__IN_MICROGRID_STATUS ;
            _vsc1_current_controller__u = _vsc1_current_controller__u0 ;
            _vsc1_current_controller__u_bounded = _vsc1_current_controller__u ;
            if ( ( _vsc1_current_controller__u * _vsc1_current_controller__u ) / sqrt ( _vsc1_current_controller__u * _vsc1_current_controller__u ) >= _vsc1_current_controller__U_BOUNDARY )         {
                _vsc1_current_controller__u_bounded = _vsc1_current_controller__U_BOUNDARY * _vsc1_current_controller__u / sqrt ( _vsc1_current_controller__u * _vsc1_current_controller__u ) ;
            }
            _vsc1_current_controller__OUT_PWMA = + _vsc1_current_controller__u_bounded / _vsc1_current_controller__U_BOUNDARY ;
            _vsc1_current_controller__OUT_PWMB = - _vsc1_current_controller__u_bounded / _vsc1_current_controller__U_BOUNDARY ;
        }
        else     {
            _vsc1_current_controller__OUT_PWMA = 0 ;
            _vsc1_current_controller__OUT_PWMB = 0 ;
        }
    }
    // Generated from the component: VSC1.RT19.Input
    _vsc1_rt19_output__state = _vsc1_vc_va1__out;
    // Generated from the component: VSC1.RT43.Input
    _vsc1_rt43_output__state = _vsc1_vc_va1__out;
    // Generated from the component: VSC2.RT42.Input
    _vsc2_rt42_output__state = _vsc2_il2_ia1__out;
    // Generated from the component: VSC2.RT61.Input
    _vsc2_rt61_output__state = _vsc2_il2_ia1__out;
    // Generated from the component: VSC2.Meter.I_t
    HIL_OutAO(0x4037, (float)_vsc2_meter__ig_ia2__out);
    // Generated from the component: VSC2.Meter.V_t
    HIL_OutAO(0x403f, (float)_vsc2_meter__vg_va2__out);
    // Generated from the component: VSC2.Meter.Meter
    _vsc2_meter_meter__Igrid = _vsc2_meter__ig_ia2__out;
    _vsc2_meter_meter__Vgrid = _vsc2_meter__vg_va2__out;
    _vsc2_meter_meter__f_grid = _vsc2_meter_grid_frequency__out;
    _vsc2_meter_meter__n_cycles = _vsc2_meter_ncycles__out;
    {
        if ( _vsc2_meter_meter__flag_init )     {
            _vsc2_meter_meter__flag_init = 0u ;
            if ( _vsc2_meter_meter__f_grid > 80.0 )         {
                _vsc2_meter_meter__wg = 80.0 * _vsc2_meter_meter__TWO_PI ;
            }
            else if ( _vsc2_meter_meter__f_grid < 30.0 )         {
                _vsc2_meter_meter__wg = 30.0 * _vsc2_meter_meter__TWO_PI ;
            }
            else         {
                _vsc2_meter_meter__wg = _vsc2_meter_meter__TWO_PI * _vsc2_meter_meter__f_grid ;
            }
            _vsc2_meter_meter__what = _vsc2_meter_meter__wg ;
            _vsc2_meter_meter__what2 = _vsc2_meter_meter__what * _vsc2_meter_meter__what ;
            _vsc2_meter_meter__Vrms = 0.0 ;
            _vsc2_meter_meter__Irms = 0.0 ;
            _vsc2_meter_meter__Po = 0.0 ;
            _vsc2_meter_meter__Qo = 0.0 ;
            _vsc2_meter_meter__So = 0.0 ;
            _vsc2_meter_meter__pf = 0.0 ;
            _vsc2_meter_meter__Valpha = 0.0 ;
            _vsc2_meter_meter__Vbeta = 0.0 ;
        }
        else     {
            _vsc2_meter_meter__k1 = _vsc2_meter_meter__ct2 * _vsc2_meter_meter__what ;
            _vsc2_meter_meter__k2 = _vsc2_meter_meter__Ts2 * _vsc2_meter_meter__what2 + _vsc2_meter_meter__ct2 * _vsc2_meter_meter__what + 4 ;
            _vsc2_meter_meter__k3 = 2 * _vsc2_meter_meter__Ts2 * _vsc2_meter_meter__what2 - 8 ;
            _vsc2_meter_meter__k4 = _vsc2_meter_meter__Ts2 * _vsc2_meter_meter__what2 - _vsc2_meter_meter__ct2 * _vsc2_meter_meter__what + 4 ;
            _vsc2_meter_meter__k5 = _vsc2_meter_meter__Ts2 * _vsc2_meter_meter__KE * _vsc2_meter_meter__what2 ;
            _vsc2_meter_meter__Va = ( _vsc2_meter_meter__k1 * ( _vsc2_meter_meter__Vgrid - _vsc2_meter_meter__Vgrid_n2 ) - _vsc2_meter_meter__k3 * _vsc2_meter_meter__Va_n1 - _vsc2_meter_meter__k4 * _vsc2_meter_meter__Va_n2 ) / _vsc2_meter_meter__k2 ;
            _vsc2_meter_meter__Vb = ( _vsc2_meter_meter__k5 * ( _vsc2_meter_meter__Vgrid + 2 * _vsc2_meter_meter__Vgrid_n1 + _vsc2_meter_meter__Vgrid_n2 ) - _vsc2_meter_meter__k3 * _vsc2_meter_meter__Vb_n1 - _vsc2_meter_meter__k4 * _vsc2_meter_meter__Vb_n2 ) / _vsc2_meter_meter__k2 ;
            _vsc2_meter_meter__norm = _vsc2_meter_meter__Va * _vsc2_meter_meter__Va + _vsc2_meter_meter__Vb * _vsc2_meter_meter__Vb ;
            if ( _vsc2_meter_meter__norm < 0.01 ) _vsc2_meter_meter__norm = 0.01 ;
            _vsc2_meter_meter__win = ( - _vsc2_meter_meter__GAMA * _vsc2_meter_meter__KE * _vsc2_meter_meter__what * _vsc2_meter_meter__Vb ) / _vsc2_meter_meter__norm * ( _vsc2_meter_meter__Vgrid - _vsc2_meter_meter__Va ) ;
            _vsc2_meter_meter__ws = _vsc2_meter_meter__ws_n1 + _vsc2_meter_meter__ct1 * ( _vsc2_meter_meter__win + _vsc2_meter_meter__win_n1 ) ;
            _vsc2_meter_meter__what = _vsc2_meter_meter__ws + _vsc2_meter_meter__wg ;
            if ( _vsc2_meter_meter__what > _vsc2_meter_meter__MAX_FREQ )         {
                _vsc2_meter_meter__what = _vsc2_meter_meter__MAX_FREQ ;
                _vsc2_meter_meter__ws = _vsc2_meter_meter__MAX_FREQ - _vsc2_meter_meter__wg ;
            }
            else if ( _vsc2_meter_meter__what < _vsc2_meter_meter__MIN_FREQ )         {
                _vsc2_meter_meter__what = _vsc2_meter_meter__MIN_FREQ ;
                _vsc2_meter_meter__ws = _vsc2_meter_meter__MIN_FREQ - _vsc2_meter_meter__wg ;
            }
            _vsc2_meter_meter__what2 = _vsc2_meter_meter__what * _vsc2_meter_meter__what ;
            _vsc2_meter_meter__ws_n1 = _vsc2_meter_meter__ws ;
            _vsc2_meter_meter__Va_n2 = _vsc2_meter_meter__Va_n1 ;
            _vsc2_meter_meter__Va_n1 = _vsc2_meter_meter__Va ;
            _vsc2_meter_meter__Vb_n2 = _vsc2_meter_meter__Vb_n1 ;
            _vsc2_meter_meter__Vb_n1 = _vsc2_meter_meter__Vb ;
            _vsc2_meter_meter__win_n1 = _vsc2_meter_meter__win ;
            _vsc2_meter_meter__Vgrid_n2 = _vsc2_meter_meter__Vgrid_n1 ;
            _vsc2_meter_meter__Vgrid_n1 = _vsc2_meter_meter__Vgrid ;
            if ( _vsc2_meter_meter__what >= 30.0 * _vsc2_meter_meter__TWO_PI && _vsc2_meter_meter__what <= 80.0 * _vsc2_meter_meter__TWO_PI )         {
                _vsc2_meter_meter__vk_0 = _vsc2_meter_meter__Vgrid ;
                _vsc2_meter_meter__ik_0 = _vsc2_meter_meter__Igrid ;
                if ( ( ( ( _vsc2_meter_meter__Va >= 0.0 && _vsc2_meter_meter__Va_k1 < 0.0 ) || ( _vsc2_meter_meter__Va <= 0.0 && _vsc2_meter_meter__Va_k1 > 0.0 ) ) && _vsc2_meter_meter__kv > _vsc2_meter_meter__kMIN ) || _vsc2_meter_meter__kv > _vsc2_meter_meter__kLIM )             {
                    _vsc2_meter_meter__vt = fabs ( _vsc2_meter_meter__Va ) + fabs ( _vsc2_meter_meter__Va_k1 ) ;
                    _vsc2_meter_meter__Tsig = _vsc2_meter_meter__kv ;
                    if ( _vsc2_meter_meter__vt > 1e-9 )                 {
                        _vsc2_meter_meter__tfv = fabs ( _vsc2_meter_meter__Va_k1 ) / _vsc2_meter_meter__vt ;
                    }
                    else                 {
                        _vsc2_meter_meter__tfv = 0 ;
                    }
                    _vsc2_meter_meter__sumV2 += _vsc2_meter_meter__vk_1 * _vsc2_meter_meter__vk_1 * _vsc2_meter_meter__tfv ;
                    _vsc2_meter_meter__sumV2 /= _vsc2_meter_meter__Tsig ;
                    _vsc2_meter_meter__v_rms += sqrt ( _vsc2_meter_meter__sumV2 ) ;
                    _vsc2_meter_meter__sumI2 += _vsc2_meter_meter__ik_1 * _vsc2_meter_meter__ik_1 * _vsc2_meter_meter__tfv ;
                    _vsc2_meter_meter__sumI2 /= _vsc2_meter_meter__Tsig ;
                    _vsc2_meter_meter__i_rms += sqrt ( _vsc2_meter_meter__sumI2 ) ;
                    _vsc2_meter_meter__Pw += _vsc2_meter_meter__vk_1 * _vsc2_meter_meter__ik_1 * _vsc2_meter_meter__tfv ;
                    _vsc2_meter_meter__Pact += _vsc2_meter_meter__Pw / _vsc2_meter_meter__Tsig ;
                    _vsc2_meter_meter__Qint += _vsc2_meter_meter__Vb * _vsc2_meter_meter__ik_1 * _vsc2_meter_meter__tfv ;
                    _vsc2_meter_meter__Qt += _vsc2_meter_meter__Qint / _vsc2_meter_meter__Tsig ;
                    if ( _vsc2_meter_meter__vt > 1e-9 )                 {
                        _vsc2_meter_meter__t0v = fabs ( _vsc2_meter_meter__Va ) / _vsc2_meter_meter__vt ;
                    }
                    else                 {
                        _vsc2_meter_meter__t0v = 0 ;
                    }
                    _vsc2_meter_meter__kv = 0 ;
                    _vsc2_meter_meter__sumV2 = _vsc2_meter_meter__vk_0 * _vsc2_meter_meter__vk_0 * _vsc2_meter_meter__t0v ;
                    _vsc2_meter_meter__Pw = _vsc2_meter_meter__vk_0 * _vsc2_meter_meter__ik_0 * _vsc2_meter_meter__t0v ;
                    _vsc2_meter_meter__Qint = _vsc2_meter_meter__Vb * _vsc2_meter_meter__ik_0 * _vsc2_meter_meter__t0v ;
                    _vsc2_meter_meter__sumI2 = _vsc2_meter_meter__ik_0 * _vsc2_meter_meter__ik_0 * _vsc2_meter_meter__t0v ;
                    _vsc2_meter_meter__cnt_cycles ++ ;
                }
                else             {
                    _vsc2_meter_meter__sumV2 += _vsc2_meter_meter__vk_0 * _vsc2_meter_meter__vk_0 ;
                    _vsc2_meter_meter__sumI2 += _vsc2_meter_meter__ik_0 * _vsc2_meter_meter__ik_0 ;
                    _vsc2_meter_meter__Pw += _vsc2_meter_meter__vk_0 * _vsc2_meter_meter__ik_0 ;
                    _vsc2_meter_meter__Qint += _vsc2_meter_meter__Vb * _vsc2_meter_meter__ik_0 ;
                }
                if ( _vsc2_meter_meter__kv < _vsc2_meter_meter__max_k ) _vsc2_meter_meter__kv ++ ;
                _vsc2_meter_meter__vk_1 = _vsc2_meter_meter__vk_0 ;
                _vsc2_meter_meter__Va_k1 = _vsc2_meter_meter__Va ;
                _vsc2_meter_meter__ik_1 = _vsc2_meter_meter__ik_0 ;
            }
            else         {
                _vsc2_meter_meter__Vrms = 0.0 ;
                _vsc2_meter_meter__Irms = 0.0 ;
                _vsc2_meter_meter__Po = 0.0 ;
                _vsc2_meter_meter__Qo = 0.0 ;
                _vsc2_meter_meter__So = 0.0 ;
                _vsc2_meter_meter__pf = 0.0 ;
                _vsc2_meter_meter__v_rms = 0.0 ;
                _vsc2_meter_meter__i_rms = 0.0 ;
                _vsc2_meter_meter__Pact = 0.0 ;
                _vsc2_meter_meter__Qt = 0.0 ;
                _vsc2_meter_meter__kv = 0u ;
                _vsc2_meter_meter__cnt_cycles = 0u ;
                _vsc2_meter_meter__sumV2 = 0.0 ;
                _vsc2_meter_meter__sumI2 = 0.0 ;
                _vsc2_meter_meter__Pw = 0.0 ;
                _vsc2_meter_meter__Qint = 0.0 ;
            }
        }
        if ( _vsc2_meter_meter__cnt_cycles >= ( _vsc2_meter_meter__n_cycles * 2 ) )     {
            _vsc2_meter_meter__nc = _vsc2_meter_meter__cnt_cycles ;
            _vsc2_meter_meter__cnt_cycles = 0 ;
            _vsc2_meter_meter__Vrms = _vsc2_meter_meter__v_rms / _vsc2_meter_meter__nc ;
            _vsc2_meter_meter__Irms = _vsc2_meter_meter__i_rms / _vsc2_meter_meter__nc ;
            _vsc2_meter_meter__So = _vsc2_meter_meter__Vrms * _vsc2_meter_meter__Irms ;
            _vsc2_meter_meter__Po = _vsc2_meter_meter__Pact / _vsc2_meter_meter__nc ;
            _vsc2_meter_meter__Qo = _vsc2_meter_meter__Qt / _vsc2_meter_meter__nc ;
            if ( _vsc2_meter_meter__So ) _vsc2_meter_meter__pf = _vsc2_meter_meter__Po / _vsc2_meter_meter__So ;
            else _vsc2_meter_meter__pf = 0 ;
            if ( _vsc2_meter_meter__Qo < 0 )         {
                _vsc2_meter_meter__pf = - 1.0 * _vsc2_meter_meter__pf ;
            }
            _vsc2_meter_meter__v_rms = 0.0 ;
            _vsc2_meter_meter__i_rms = 0.0 ;
            _vsc2_meter_meter__Pact = 0.0 ;
            _vsc2_meter_meter__Qt = 0.0 ;
        }
        _vsc2_meter_meter__Valpha = _vsc2_meter_meter__Va ;
        _vsc2_meter_meter__Vbeta = - 1.0 * _vsc2_meter_meter__Vb ;
        _vsc2_meter_meter__f = _vsc2_meter_meter__what / _vsc2_meter_meter__TWO_PI ;
    }
    // Generated from the component: VSC2.CURRENT_CONTROLLER
    _vsc2_current_controller__IN_ENABLE = _vsc2_constant14__out;
    _vsc2_current_controller__IN_IL1 = _vsc2_il1_ia1__out;
    _vsc2_current_controller__IN_MICROGRID_STATUS = _vsc2_vc_va1__out;
    _vsc2_current_controller__IN_UV = _vsc2_rt30_output__out;
    {
        if ( _vsc2_current_controller__IN_ENABLE == 1 )     {
            _vsc2_current_controller__err = _vsc2_current_controller__IN_UV - _vsc2_current_controller__IN_IL1 ;
            _vsc2_current_controller__u0 = _vsc2_current_controller__KP * _vsc2_current_controller__err + _vsc2_current_controller__IN_MICROGRID_STATUS ;
            _vsc2_current_controller__u = _vsc2_current_controller__u0 ;
            _vsc2_current_controller__u_bounded = _vsc2_current_controller__u ;
            if ( ( _vsc2_current_controller__u * _vsc2_current_controller__u ) / sqrt ( _vsc2_current_controller__u * _vsc2_current_controller__u ) >= _vsc2_current_controller__U_BOUNDARY )         {
                _vsc2_current_controller__u_bounded = _vsc2_current_controller__U_BOUNDARY * _vsc2_current_controller__u / sqrt ( _vsc2_current_controller__u * _vsc2_current_controller__u ) ;
            }
            _vsc2_current_controller__OUT_PWMA = + _vsc2_current_controller__u_bounded / _vsc2_current_controller__U_BOUNDARY ;
            _vsc2_current_controller__OUT_PWMB = - _vsc2_current_controller__u_bounded / _vsc2_current_controller__U_BOUNDARY ;
        }
        else     {
            _vsc2_current_controller__OUT_PWMA = 0 ;
            _vsc2_current_controller__OUT_PWMB = 0 ;
        }
    }
    // Generated from the component: VSC2.RT19.Input
    _vsc2_rt19_output__state = _vsc2_vc_va1__out;
    // Generated from the component: VSC2.RT43.Input
    _vsc2_rt43_output__state = _vsc2_vc_va1__out;
    // Generated from the component: Grid.Vsp_sin1.Limit2
    _grid_vsp_sin1_limit2__out = MIN(MAX(_grid_c_function2__out_freq, 0.1), 10000.0);
    // Generated from the component: Grid.freq_ref
    HIL_OutAO(0x4001, (float)_grid_c_function2__out_freq);
    // Generated from the component: Load.Meter.Freq
    HIL_OutAO(0x4002, (float)_load_meter_meter__f);
    // Generated from the component: Load.Meter.I_RMS
    HIL_OutAO(0x4003, (float)_load_meter_meter__Irms);
    // Generated from the component: Load.Meter.POWER_P
    HIL_OutAO(0x4005, (float)_load_meter_meter__Po);
    // Generated from the component: Load.Meter.POWER_PF
    HIL_OutAO(0x4006, (float)_load_meter_meter__pf);
    // Generated from the component: Load.Meter.POWER_Q
    HIL_OutAO(0x4007, (float)_load_meter_meter__Qo);
    // Generated from the component: Load.Meter.POWER_S
    HIL_OutAO(0x4008, (float)_load_meter_meter__So);
    // Generated from the component: Load.Meter.V_RMS
    HIL_OutAO(0x4009, (float)_load_meter_meter__Vrms);
    // Generated from the component: Load.Meter.V_alpha
    HIL_OutAO(0x400a, (float)_load_meter_meter__Valpha);
    // Generated from the component: Load.Meter.V_beta
    HIL_OutAO(0x400b, (float)_load_meter_meter__Vbeta);
    // Generated from the component: Load.Meter.out_bus
    _load_meter_out_bus__out[0] = _load_meter__vg_va2__out;
    _load_meter_out_bus__out[1] = _load_meter__ig_ia2__out;
    _load_meter_out_bus__out[2] = _load_meter_meter__f;
    _load_meter_out_bus__out[3] = _load_meter_meter__Vrms;
    _load_meter_out_bus__out[4] = _load_meter_meter__Irms;
    _load_meter_out_bus__out[5] = _load_meter_meter__Po;
    _load_meter_out_bus__out[6] = _load_meter_meter__Qo;
    _load_meter_out_bus__out[7] = _load_meter_meter__So;
    _load_meter_out_bus__out[8] = _load_meter_meter__pf;
    _load_meter_out_bus__out[9] = _load_meter_meter__Valpha;
    _load_meter_out_bus__out[10] = _load_meter_meter__Vbeta;
    // Generated from the component: Load.Single-phase Variable Load.Enable_fb
    HIL_OutInt32(0xf00400, _load_single_phase_variable_load_relational_operator3__out != 0x0);
    // Generated from the component: Load.Single-phase Variable Load.Termination1
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Qmin_fun
    _load_single_phase_variable_load_single_phase_core1_qmin_fun__in = _load_single_phase_variable_load_limit2__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_qmin_fun__in <= 0 )     {
            _load_single_phase_variable_load_single_phase_core1_qmin_fun__out = - fabs ( (-0.0034554789051392813) ) / 18000.0 ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_qmin_fun__out = 90.0 / 18000.0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change.Ramping1.Gain1
    _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_gain1__out = 24000.0 * _load_single_phase_variable_load_limit3__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change1.Ramping1.Gain1
    _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_gain1__out = 18000.0 * _load_single_phase_variable_load_limit3__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Relational operator1
    _load_single_phase_variable_load_single_phase_core1_relational_operator1__out = (_load_single_phase_variable_load_single_phase_core1_constant3__out >= _load_single_phase_variable_load_single_phase_core1_f_to_w10__out) ? 1 : 0;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C function4
    _load_single_phase_variable_load_single_phase_core1_c_function4__Pref = _load_single_phase_variable_load_single_phase_core1_f_to_w7__out;
    _load_single_phase_variable_load_single_phase_core1_c_function4__Pref_late = _load_single_phase_variable_load_single_phase_core1_transport_delay2__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_c_function4__Pref == _load_single_phase_variable_load_single_phase_core1_c_function4__Pref_late )     {
            _load_single_phase_variable_load_single_phase_core1_c_function4__out = 1 ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_c_function4__out = 0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Abs3
    _load_single_phase_variable_load_single_phase_core1_abs3__out = fabs(_load_single_phase_variable_load_single_phase_core1_f_to_w11__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C function5
    _load_single_phase_variable_load_single_phase_core1_c_function5__Qref = _load_single_phase_variable_load_single_phase_core1_f_to_w6__out;
    _load_single_phase_variable_load_single_phase_core1_c_function5__Qref_late = _load_single_phase_variable_load_single_phase_core1_transport_delay1__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_c_function5__Qref == _load_single_phase_variable_load_single_phase_core1_c_function5__Qref_late )     {
            _load_single_phase_variable_load_single_phase_core1_c_function5__out = 1 ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_c_function5__out = 0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Termination6
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Limit3
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_f_to_w__out, 188.49555921538757), 628.3185307179587);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.deg_gain
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_deg_gain__out = 57.29577951308232 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.phs_gain
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_phs_gain__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_phs_gain__out[1] = 1.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__phase[1];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Termination13
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Termination11
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Peak calc.Product6
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_product6__out = (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit4__out * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit4__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain5
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain5__out = 125.66370614359172 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum4__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum12
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum12__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_w_to_f__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain7
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain7__out = 628.3185307179587 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum9__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain8
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain8__out = 62.83185307179586 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum11__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain10
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain10__out = 62.83185307179586 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum13__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain11
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain11__out = 62.83185307179586 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum14__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Peak calc.Limit5
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit5__out = MAX(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vq, 0.001);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain3
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain3__out = -1.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vd;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Math_f1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math_f1__out = pow(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vq, _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_constant2__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Math_f2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math_f2__out = pow(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vd, _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_constant2__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Termination3
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Gain3
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_gain3__out[0] = 0.7071067811865476 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp[0];
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_gain3__out[1] = 0.7071067811865476 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__amp[1];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.deg_gain
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_deg_gain__out = 57.29577951308232 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.phs_gain
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_phs_gain__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase[0];
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_phs_gain__out[1] = 1.0 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__phase[1];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Limit9
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit9__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__out, 0.001), 31112.698372208088);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.deg_gain
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_deg_gain__out = 57.29577951308232 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.phs_gain
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_phs_gain__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_phs_gain__out[1] = 1.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__phase[1];
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain2__out = 0.4 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum1__out;
    // Generated from the component: MGCC.Meter.Freq
    HIL_OutAO(0x4011, (float)_mgcc_meter_meter__f);
    // Generated from the component: MGCC.Meter.I_RMS
    HIL_OutAO(0x4012, (float)_mgcc_meter_meter__Irms);
    // Generated from the component: MGCC.Meter.POWER_P
    HIL_OutAO(0x4014, (float)_mgcc_meter_meter__Po);
    // Generated from the component: MGCC.Meter.POWER_PF
    HIL_OutAO(0x4015, (float)_mgcc_meter_meter__pf);
    // Generated from the component: MGCC.Meter.POWER_Q
    HIL_OutAO(0x4016, (float)_mgcc_meter_meter__Qo);
    // Generated from the component: MGCC.Meter.POWER_S
    HIL_OutAO(0x4017, (float)_mgcc_meter_meter__So);
    // Generated from the component: MGCC.Meter.V_RMS
    HIL_OutAO(0x4018, (float)_mgcc_meter_meter__Vrms);
    // Generated from the component: MGCC.Meter.V_alpha
    HIL_OutAO(0x4019, (float)_mgcc_meter_meter__Valpha);
    // Generated from the component: MGCC.Meter.V_beta
    HIL_OutAO(0x401a, (float)_mgcc_meter_meter__Vbeta);
    // Generated from the component: MGCC.Meter.out_bus
    _mgcc_meter_out_bus__out[0] = _mgcc_meter__vg_va2__out;
    _mgcc_meter_out_bus__out[1] = _mgcc_meter__ig_ia2__out;
    _mgcc_meter_out_bus__out[2] = _mgcc_meter_meter__f;
    _mgcc_meter_out_bus__out[3] = _mgcc_meter_meter__Vrms;
    _mgcc_meter_out_bus__out[4] = _mgcc_meter_meter__Irms;
    _mgcc_meter_out_bus__out[5] = _mgcc_meter_meter__Po;
    _mgcc_meter_out_bus__out[6] = _mgcc_meter_meter__Qo;
    _mgcc_meter_out_bus__out[7] = _mgcc_meter_meter__So;
    _mgcc_meter_out_bus__out[8] = _mgcc_meter_meter__pf;
    _mgcc_meter_out_bus__out[9] = _mgcc_meter_meter__Valpha;
    _mgcc_meter_out_bus__out[10] = _mgcc_meter_meter__Vbeta;
    // Generated from the component: MGCC.Single phase PLL1.Gain5
    _mgcc_single_phase_pll1_gain5__out = 125.66370614359172 * _mgcc_single_phase_pll1_sum4__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum12
    _mgcc_single_phase_pll1_sum12__out = _mgcc_single_phase_pll1_w_to_f__out - _mgcc_single_phase_pll1_integrator7__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain7
    _mgcc_single_phase_pll1_gain7__out = 628.3185307179587 * _mgcc_single_phase_pll1_sum9__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain8
    _mgcc_single_phase_pll1_gain8__out = 62.83185307179586 * _mgcc_single_phase_pll1_sum11__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain10
    _mgcc_single_phase_pll1_gain10__out = 62.83185307179586 * _mgcc_single_phase_pll1_sum13__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain11
    _mgcc_single_phase_pll1_gain11__out = 62.83185307179586 * _mgcc_single_phase_pll1_sum14__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain3
    _mgcc_single_phase_pll1_gain3__out = -1.0 * _mgcc_single_phase_pll1_c_function1__vd;
    // Generated from the component: MGCC.Single phase PLL1.Math_f1
    _mgcc_single_phase_pll1_math_f1__out = pow(_mgcc_single_phase_pll1_c_function1__vq, _mgcc_single_phase_pll1_constant2__out);
    // Generated from the component: MGCC.Single phase PLL1.Math_f2
    _mgcc_single_phase_pll1_math_f2__out = pow(_mgcc_single_phase_pll1_c_function1__vd, _mgcc_single_phase_pll1_constant2__out);
    // Generated from the component: MGCC.Termination7
    // Generated from the component: MGCC.Termination1
    // Generated from the component: MGCC.Bus Join1
    _mgcc_bus_join1__out[0] = _mgcc_pref__out;
    _mgcc_bus_join1__out[1] = _mgcc_qref__out;
    _mgcc_bus_join1__out[2] = _mgcc_s1_ctc_wrapper__feedback_out;
    _mgcc_bus_join1__out[3] = _mgcc_rms_value1__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain2
    _mgcc_single_phase_pll1_gain2__out = 0.4 * _mgcc_single_phase_pll1_sum1__out;
    // Generated from the component: VSC1.Meter.Freq
    HIL_OutAO(0x401f, (float)_vsc1_meter_meter__f);
    // Generated from the component: VSC1.Meter.I_RMS
    HIL_OutAO(0x4020, (float)_vsc1_meter_meter__Irms);
    // Generated from the component: VSC1.Meter.POWER_P
    HIL_OutAO(0x4022, (float)_vsc1_meter_meter__Po);
    // Generated from the component: VSC1.Meter.POWER_PF
    HIL_OutAO(0x4023, (float)_vsc1_meter_meter__pf);
    // Generated from the component: VSC1.Meter.POWER_Q
    HIL_OutAO(0x4024, (float)_vsc1_meter_meter__Qo);
    // Generated from the component: VSC1.Meter.POWER_S
    HIL_OutAO(0x4025, (float)_vsc1_meter_meter__So);
    // Generated from the component: VSC1.Meter.V_RMS
    HIL_OutAO(0x4026, (float)_vsc1_meter_meter__Vrms);
    // Generated from the component: VSC1.Meter.V_alpha
    HIL_OutAO(0x4027, (float)_vsc1_meter_meter__Valpha);
    // Generated from the component: VSC1.Meter.V_beta
    HIL_OutAO(0x4028, (float)_vsc1_meter_meter__Vbeta);
    // Generated from the component: VSC1.Meter.out_bus
    _vsc1_meter_out_bus__out[0] = _vsc1_meter__vg_va2__out;
    _vsc1_meter_out_bus__out[1] = _vsc1_meter__ig_ia2__out;
    _vsc1_meter_out_bus__out[2] = _vsc1_meter_meter__f;
    _vsc1_meter_out_bus__out[3] = _vsc1_meter_meter__Vrms;
    _vsc1_meter_out_bus__out[4] = _vsc1_meter_meter__Irms;
    _vsc1_meter_out_bus__out[5] = _vsc1_meter_meter__Po;
    _vsc1_meter_out_bus__out[6] = _vsc1_meter_meter__Qo;
    _vsc1_meter_out_bus__out[7] = _vsc1_meter_meter__So;
    _vsc1_meter_out_bus__out[8] = _vsc1_meter_meter__pf;
    _vsc1_meter_out_bus__out[9] = _vsc1_meter_meter__Valpha;
    _vsc1_meter_out_bus__out[10] = _vsc1_meter_meter__Vbeta;
    // Generated from the component: VSC1.Bus Join1
    _vsc1_bus_join1__out[0] = _vsc1_constant15__out;
    _vsc1_bus_join1__out[1] = _vsc1_current_controller__OUT_PWMA;
    _vsc1_bus_join1__out[2] = _vsc1_current_controller__OUT_PWMB;
    // Generated from the component: VSC1.GRID FORMING.PWM_Modulator
    _vsc1_grid_forming_pwm_modulator__limited_in[0] = MIN(MAX(_vsc1_current_controller__OUT_PWMA, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _vsc1_grid_forming_pwm_modulator__channels[0], ((X_UnInt32)((_vsc1_grid_forming_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    _vsc1_grid_forming_pwm_modulator__limited_in[1] = MIN(MAX(_vsc1_current_controller__OUT_PWMB, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _vsc1_grid_forming_pwm_modulator__channels[1], ((X_UnInt32)((_vsc1_grid_forming_pwm_modulator__limited_in[1] - (-1.0)) * 10000.0)));
    if (_vsc1_constant15__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc1_grid_forming_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _vsc1_grid_forming_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc1_grid_forming_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _vsc1_grid_forming_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _vsc1_grid_forming_pwm_modulator__update_mask);
    // Generated from the component: VSC2.Meter.Freq
    HIL_OutAO(0x4035, (float)_vsc2_meter_meter__f);
    // Generated from the component: VSC2.Meter.I_RMS
    HIL_OutAO(0x4036, (float)_vsc2_meter_meter__Irms);
    // Generated from the component: VSC2.Meter.POWER_P
    HIL_OutAO(0x4038, (float)_vsc2_meter_meter__Po);
    // Generated from the component: VSC2.Meter.POWER_PF
    HIL_OutAO(0x4039, (float)_vsc2_meter_meter__pf);
    // Generated from the component: VSC2.Meter.POWER_Q
    HIL_OutAO(0x403a, (float)_vsc2_meter_meter__Qo);
    // Generated from the component: VSC2.Meter.POWER_S
    HIL_OutAO(0x403b, (float)_vsc2_meter_meter__So);
    // Generated from the component: VSC2.Meter.V_RMS
    HIL_OutAO(0x403c, (float)_vsc2_meter_meter__Vrms);
    // Generated from the component: VSC2.Meter.V_alpha
    HIL_OutAO(0x403d, (float)_vsc2_meter_meter__Valpha);
    // Generated from the component: VSC2.Meter.V_beta
    HIL_OutAO(0x403e, (float)_vsc2_meter_meter__Vbeta);
    // Generated from the component: VSC2.Meter.out_bus
    _vsc2_meter_out_bus__out[0] = _vsc2_meter__vg_va2__out;
    _vsc2_meter_out_bus__out[1] = _vsc2_meter__ig_ia2__out;
    _vsc2_meter_out_bus__out[2] = _vsc2_meter_meter__f;
    _vsc2_meter_out_bus__out[3] = _vsc2_meter_meter__Vrms;
    _vsc2_meter_out_bus__out[4] = _vsc2_meter_meter__Irms;
    _vsc2_meter_out_bus__out[5] = _vsc2_meter_meter__Po;
    _vsc2_meter_out_bus__out[6] = _vsc2_meter_meter__Qo;
    _vsc2_meter_out_bus__out[7] = _vsc2_meter_meter__So;
    _vsc2_meter_out_bus__out[8] = _vsc2_meter_meter__pf;
    _vsc2_meter_out_bus__out[9] = _vsc2_meter_meter__Valpha;
    _vsc2_meter_out_bus__out[10] = _vsc2_meter_meter__Vbeta;
    // Generated from the component: VSC2.Bus Join1
    _vsc2_bus_join1__out[0] = _vsc2_constant15__out;
    _vsc2_bus_join1__out[1] = _vsc2_current_controller__OUT_PWMA;
    _vsc2_bus_join1__out[2] = _vsc2_current_controller__OUT_PWMB;
    // Generated from the component: VSC2.GRID FORMING.PWM_Modulator
    _vsc2_grid_forming_pwm_modulator__limited_in[0] = MIN(MAX(_vsc2_current_controller__OUT_PWMA, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _vsc2_grid_forming_pwm_modulator__channels[0], ((X_UnInt32)((_vsc2_grid_forming_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    _vsc2_grid_forming_pwm_modulator__limited_in[1] = MIN(MAX(_vsc2_current_controller__OUT_PWMB, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _vsc2_grid_forming_pwm_modulator__channels[1], ((X_UnInt32)((_vsc2_grid_forming_pwm_modulator__limited_in[1] - (-1.0)) * 10000.0)));
    if (_vsc2_constant15__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc2_grid_forming_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _vsc2_grid_forming_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc2_grid_forming_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _vsc2_grid_forming_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _vsc2_grid_forming_pwm_modulator__update_mask);
    // Generated from the component: Grid.Vsp_sin1.tdf_sg_ctrl_sine1
    // calculate and write SG parameters
    X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__i;
    _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value = 0;
    for (_grid_vsp_sin1_tdf_sg_ctrl_sine1__i = 0; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i < 1; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i++) {
        // calculate amplitude
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__gain = _grid_vsp_sin1_limit1__out * M_SQRT2;
        // calculate period
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__period = 1.0f / _grid_vsp_sin1_limit2__out;
        // calculate sample_cnt increment value
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_real = _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int40 / (_grid_vsp_sin1_tdf_sg_ctrl_sine1__period / 5e-07);
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_lo = (X_UnInt32)(fmod(_grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_real, _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int32));
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_hi = (X_UnInt32)(_grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_real / _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int32);
        //calculate offset for each channel
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__shift = (double)(_grid_vsp_sin1_tdf_sg_ctrl_sine1__i) * 0.0;
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__phase_pu = fmod((_grid_constant1__out / 360.0f + _grid_vsp_sin1_tdf_sg_ctrl_sine1__shift / (2.0f * M_PI)), 1.0f);
        if (_grid_vsp_sin1_tdf_sg_ctrl_sine1__phase_pu < 0.0f) {
            _grid_vsp_sin1_tdf_sg_ctrl_sine1__phase_pu = _grid_vsp_sin1_tdf_sg_ctrl_sine1__phase_pu + 1.0f;
        }
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__offset = (_grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int32 * _grid_vsp_sin1_tdf_sg_ctrl_sine1__phase_pu);  // offset in SP
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__offset_uint = (X_UnInt32)_grid_vsp_sin1_tdf_sg_ctrl_sine1__offset;  // offset in fp32
        // write parameters
        HIL_OutFloat(0x400200 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], (float) _grid_vsp_sin1_tdf_sg_ctrl_sine1__gain);
        HIL_OutInt32(0x400180 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], _grid_vsp_sin1_tdf_sg_ctrl_sine1__offset_uint); // offset in fp32
        HIL_OutInt32(0x400000 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_lo);
        HIL_OutInt32(0x400280 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_hi);
        HIL_OutFloat(0x400100 + _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i], (float) _grid_vsp_sin1_tdf_sg_ctrl_sine1__no_of_points);
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value += 1 << _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[_grid_vsp_sin1_tdf_sg_ctrl_sine1__i];
    }
    HIL_OutInt32(0x400080, _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value);  // update SG parameters for all channels
    // Generated from the component: Load.Meter.meas out
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Abs5
    _load_single_phase_variable_load_single_phase_core1_abs5__out = fabs(_load_single_phase_variable_load_single_phase_core1_qmin_fun__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator26
    _load_single_phase_variable_load_single_phase_core1_logical_operator26__out = _load_single_phase_variable_load_single_phase_core1_c_function5__out && _load_single_phase_variable_load_single_phase_core1_c_function4__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.Gain1
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_gain1__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_deg_gain__out;
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_gain1__out[1] = 0.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_deg_gain__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain9
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain9__out = 62.83185307179586 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum12__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Peak calc.Product7
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_product7__out = (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit5__out * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_limit5__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum7
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum7__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain3__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum6
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum6__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math_f1__out + _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math_f2__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Limit7
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0] = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_gain3__out[0], 0.0001), 31112.698372208088);
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1] = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_gain3__out[1], 0.0001), 31112.698372208088);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.Gain1
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_gain1__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_gain1__out[1] = 0.0 * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_deg_gain__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Termination1
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit10
    _load_single_phase_variable_load_single_phase_core1_limit10__out = MAX(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit9__out, 31.112698372208087);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.Gain1
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_gain1__out[0] = 1.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_deg_gain__out;
    _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_gain1__out[1] = 0.0 * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_deg_gain__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Lref_calc
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I[0] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I[1] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__amp[1];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V[0] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V[1] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__amp[1];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI[0] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_phs_gain__out[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI[1] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_phs_gain__out[1];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV[0] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_phs_gain__out[0];
    _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV[1] = _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_phs_gain__out[1];
    {
        if ( 1.0 == 1 )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__P = _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V [ 0 ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I [ 0 ] * 0.5 * cos ( ( _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV [ 0 ] - _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Q = _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V [ 0 ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I [ 0 ] * 0.5 * sin ( ( _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV [ 0 ] - _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI [ 0 ] ) * 3.141592653589793 / 180 ) ;
        }
        else     {
            for ( _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i = 0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ++ )         {
                _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Psum += _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] * 0.5 * cos ( ( _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] - _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
                _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Qsum += _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__V [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] * _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__I [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] * 0.5 * sin ( ( _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaV [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] - _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__tetaI [ _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__i ] ) * 3.141592653589793 / 180 ) ;
            }
            _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__P = _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Psum ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Q = _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Qsum ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Psum = 0 ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Qsum = 0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum2__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain2__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__out;
    // Generated from the component: MGCC.Meter.meas out
    // Generated from the component: MGCC.Single phase PLL1.Gain9
    _mgcc_single_phase_pll1_gain9__out = 62.83185307179586 * _mgcc_single_phase_pll1_sum12__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum7
    _mgcc_single_phase_pll1_sum7__out = _mgcc_single_phase_pll1_gain3__out - _mgcc_single_phase_pll1_integrator3__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum6
    _mgcc_single_phase_pll1_sum6__out = _mgcc_single_phase_pll1_math_f1__out + _mgcc_single_phase_pll1_math_f2__out;
    // Generated from the component: VSC1.Bus Split1
    _vsc1_bus_split1__out = _mgcc_bus_join1__out[0];
    _vsc1_bus_split1__out1 = _mgcc_bus_join1__out[1];
    _vsc1_bus_split1__out2 = _mgcc_bus_join1__out[2];
    _vsc1_bus_split1__out3 = _mgcc_bus_join1__out[3];
    // Generated from the component: VSC2.Bus Split1
    _vsc2_bus_split1__out = _mgcc_bus_join1__out[0];
    _vsc2_bus_split1__out1 = _mgcc_bus_join1__out[1];
    _vsc2_bus_split1__out2 = _mgcc_bus_join1__out[2];
    _vsc2_bus_split1__out3 = _mgcc_bus_join1__out[3];
    // Generated from the component: MGCC.Single phase PLL1.Sum2
    _mgcc_single_phase_pll1_sum2__out = _mgcc_single_phase_pll1_gain2__out - _mgcc_single_phase_pll1_integrator2__out;
    // Generated from the component: VSC1.Meter.meas out
    // Generated from the component: VSC1.VSC1_COM
    HIL_OutAO(0x4030, (float)_vsc1_bus_join1__out[0]);
    HIL_OutAO(0x4031, (float)_vsc1_bus_join1__out[1]);
    HIL_OutAO(0x4032, (float)_vsc1_bus_join1__out[2]);
    // Generated from the component: VSC2.Meter.meas out
    // Generated from the component: VSC2.VSC1_COM
    HIL_OutAO(0x4046, (float)_vsc2_bus_join1__out[0]);
    HIL_OutAO(0x4047, (float)_vsc2_bus_join1__out[1]);
    HIL_OutAO(0x4048, (float)_vsc2_bus_join1__out[2]);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Relational operator2
    _load_single_phase_variable_load_single_phase_core1_relational_operator2__out = (_load_single_phase_variable_load_single_phase_core1_abs5__out >= _load_single_phase_variable_load_single_phase_core1_abs3__out) ? 1 : 0;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Termination12
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Peak calc.Sum2
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_sum2__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_product6__out + _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_product7__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain4
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain4__out = 125.66370614359172 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum7__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Math1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math1__out = sqrt(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum6__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Active power losses
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Cs = _load_single_phase_variable_load_single_phase_core1_unit_delay5__out;
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__L = _load_single_phase_variable_load_single_phase_core1_unit_delay6__out;
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Pref = _load_single_phase_variable_load_single_phase_core1_unit_delay3__out;
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Qref = _load_single_phase_variable_load_single_phase_core1_unit_delay4__out;
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__R = _load_single_phase_variable_load_single_phase_core1_unit_delay8__out;
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0];
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1];
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__harmonics[0] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector3__out[0];
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__harmonics[1] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector3__out[1];
    _load_single_phase_variable_load_single_phase_core1_active_power_losses__w = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _load_single_phase_variable_load_single_phase_core1_active_power_losses__Rek = _load_single_phase_variable_load_single_phase_core1_active_power_losses__R + 0.020273744591166126 ;
            _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xl = _load_single_phase_variable_load_single_phase_core1_active_power_losses__w * 0.00027388797317858617 ;
            _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xc = 1 / ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__w * _load_single_phase_variable_load_single_phase_core1_active_power_losses__Cs ) ;
            _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap = _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms [ 0 ] / sqrt ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__Rek * _load_single_phase_variable_load_single_phase_core1_active_power_losses__Rek + ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xc - _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xl ) * ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xc - _load_single_phase_variable_load_single_phase_core1_active_power_losses__Xl ) ) ;
            if ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__Qref > 0 )         {
                _load_single_phase_variable_load_single_phase_core1_active_power_losses__Iind = _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms [ 0 ] / sqrt ( 12.906666666666663 * 12.906666666666663 + pow ( ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__w * 8.969642536710447e-05 ) , - 1 ) * pow ( ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__w * 8.969642536710447e-05 ) , - 1 ) ) ;
                _load_single_phase_variable_load_single_phase_core1_active_power_losses__Ploss = _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap * _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap * 0.020273744591166126 * 0 + _load_single_phase_variable_load_single_phase_core1_active_power_losses__Iind * _load_single_phase_variable_load_single_phase_core1_active_power_losses__Iind * 12.906666666666663 ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_active_power_losses__Ploss = _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap * _load_single_phase_variable_load_single_phase_core1_active_power_losses__I_cap * 0.020273744591166126 * 0 ;
            }
        }
        else     {
            for ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__i = 0 ; _load_single_phase_variable_load_single_phase_core1_active_power_losses__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_active_power_losses__i ++ )         {
                if ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__Qref > 0 )             {
                    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Psum += _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms [ _load_single_phase_variable_load_single_phase_core1_active_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_active_power_losses__Vrms [ _load_single_phase_variable_load_single_phase_core1_active_power_losses__i ] * 12.906666666666663 / ( 12.906666666666663 * 12.906666666666663 + pow ( ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__w * _load_single_phase_variable_load_single_phase_core1_active_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_active_power_losses__i ] * 8.969642536710447e-05 ) , - 1 ) * pow ( ( _load_single_phase_variable_load_single_phase_core1_active_power_losses__w * _load_single_phase_variable_load_single_phase_core1_active_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_active_power_losses__i ] * 8.969642536710447e-05 ) , - 1 ) ) ;
                }
                else             {
                    _load_single_phase_variable_load_single_phase_core1_active_power_losses__Psum = 0 ;
                }
            }
            _load_single_phase_variable_load_single_phase_core1_active_power_losses__Ploss = _load_single_phase_variable_load_single_phase_core1_active_power_losses__Psum ;
            _load_single_phase_variable_load_single_phase_core1_active_power_losses__Psum = 0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Reactive power losses
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs = _load_single_phase_variable_load_single_phase_core1_unit_delay7__out;
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qref = _load_single_phase_variable_load_single_phase_core1_unit_delay2__out;
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__R = _load_single_phase_variable_load_single_phase_core1_unit_delay1__out;
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0];
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1];
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics[0] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector2__out[0];
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics[1] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector2__out[1];
    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__R + 0.020273744591166126 ;
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 0.00027388797317858617 ;
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xc = 1 / ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) ;
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V [ 0 ] / sqrt ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek + ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xc ) * ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xc ) ) ;
            if ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qref > 0 )         {
                _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V [ 0 ] / sqrt ( 12.906666666666663 * 12.906666666666663 + pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) * pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) ) ;
                _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qloss = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il * ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xc ) - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind * pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind = 0 ;
                _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qloss = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Xl * 0 ;
            }
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__R + 0.020273744591166126 ;
            for ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i = 0 ; _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ++ )         {
                if ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qref > 0 )             {
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] / sqrt ( 12.906666666666663 * 12.906666666666663 + pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) * pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] / sqrt ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek + ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) , - 1 ) ) * ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qsum += ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I * ( 0.00027388797317858617 * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] - pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) , - 1 ) ) - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind * pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Isum += ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I = 0 ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind = 0 ;
                }
                else             {
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind = 0 ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I = 0 * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__V [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] / sqrt ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Rek + ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) , - 1 ) ) * ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) , - 1 ) ) ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qsum += ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I * ( 0.00027388797317858617 * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] - pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Cs ) , - 1 ) ) - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind * pow ( ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__harmonics [ _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__i ] * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__w * 8.969642536710447e-05 ) , - 1 ) ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Isum += ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I * _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I ) ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__I = 0 ;
                    _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Iind = 0 ;
                }
            }
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qloss = _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qsum ;
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Il = sqrt ( _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Isum ) ;
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qsum = 0 ;
            _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Isum = 0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Termination3
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Termination10
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w8
    _load_single_phase_variable_load_single_phase_core1_f_to_w8__out = 0.001 * _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__P;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w9
    _load_single_phase_variable_load_single_phase_core1_f_to_w9__out = 0.001 * _load_single_phase_variable_load_single_phase_core1_power_measurement_lref_calc__Q;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Product1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product1__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum2__out * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__out);
    // Generated from the component: MGCC.Single phase PLL1.Gain4
    _mgcc_single_phase_pll1_gain4__out = 125.66370614359172 * _mgcc_single_phase_pll1_sum7__out;
    // Generated from the component: MGCC.Single phase PLL1.Math1
    _mgcc_single_phase_pll1_math1__out = sqrt(_mgcc_single_phase_pll1_sum6__out);
    // Generated from the component: VSC1.Product1
    _vsc1_product1__out = (_vsc1_constant9__out * _vsc1_bus_split1__out);
    // Generated from the component: VSC1.Product2
    _vsc1_product2__out = (_vsc1_constant9__out * _vsc1_bus_split1__out1);
    // Generated from the component: VSC1.RT83.Input
    _vsc1_rt83_output__state = _vsc1_bus_split1__out2;
    // Generated from the component: VSC2.Product1
    _vsc2_product1__out = (_vsc2_constant9__out * _vsc2_bus_split1__out);
    // Generated from the component: VSC2.Product2
    _vsc2_product2__out = (_vsc2_constant9__out * _vsc2_bus_split1__out1);
    // Generated from the component: VSC2.RT83.Input
    _vsc2_rt83_output__state = _vsc2_bus_split1__out2;
    // Generated from the component: MGCC.Single phase PLL1.Product1
    _mgcc_single_phase_pll1_product1__out = (_mgcc_single_phase_pll1_sum2__out * _mgcc_single_phase_pll1_integrator5__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Peak calc.Mathematical function1
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_mathematical_function1__out = sqrt(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_sum2__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Limit1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_limit1__out = MAX(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_math1__out, 1e-05);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Sum6
    _load_single_phase_variable_load_single_phase_core1_sum6__out = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_out - _load_single_phase_variable_load_single_phase_core1_active_power_losses__Ploss;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Sum5
    _load_single_phase_variable_load_single_phase_core1_sum5__out = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out - _load_single_phase_variable_load_single_phase_core1_reactive_power_losses__Qloss;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Bus Join1
    _load_single_phase_variable_load_single_phase_core1_bus_join1__out[0] = _load_single_phase_variable_load_single_phase_core1_f_to_w7__out;
    _load_single_phase_variable_load_single_phase_core1_bus_join1__out[1] = _load_single_phase_variable_load_single_phase_core1_f_to_w6__out;
    _load_single_phase_variable_load_single_phase_core1_bus_join1__out[2] = _load_single_phase_variable_load_single_phase_core1_f_to_w8__out;
    _load_single_phase_variable_load_single_phase_core1_bus_join1__out[3] = _load_single_phase_variable_load_single_phase_core1_f_to_w9__out;
    // Generated from the component: MGCC.Single phase PLL1.Limit1
    _mgcc_single_phase_pll1_limit1__out = MAX(_mgcc_single_phase_pll1_math1__out, 1e-05);
    // Generated from the component: VSC1.RT80.Input
    _vsc1_rt80_output__state = _vsc1_product1__out;
    // Generated from the component: VSC1.RT81.Input
    _vsc1_rt81_output__state = _vsc1_product2__out;
    // Generated from the component: VSC2.RT80.Input
    _vsc2_rt80_output__state = _vsc2_product1__out;
    // Generated from the component: VSC2.RT81.Input
    _vsc2_rt81_output__state = _vsc2_product2__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Product4
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_product4__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vq) * 1.0 / (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_mathematical_function1__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Product8
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product8__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_c_function1__vq) * 1.0 / (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_limit1__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit6
    _load_single_phase_variable_load_single_phase_core1_limit6__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_sum6__out, 180.00000000000023), 36000.0);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Abs2
    _load_single_phase_variable_load_single_phase_core1_abs2__out = fabs(_load_single_phase_variable_load_single_phase_core1_sum5__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Gain1
    _load_single_phase_variable_load_single_phase_core1_gain1__out = -1.0 * _load_single_phase_variable_load_single_phase_core1_sum5__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w5
    _load_single_phase_variable_load_single_phase_core1_f_to_w5__out = 5.555555555555556e-05 * _load_single_phase_variable_load_single_phase_core1_sum5__out;
    // Generated from the component: Load.Single-phase Variable Load.Bus Split1
    _load_single_phase_variable_load_bus_split1__out = _load_single_phase_variable_load_single_phase_core1_bus_join1__out[0];
    _load_single_phase_variable_load_bus_split1__out1 = _load_single_phase_variable_load_single_phase_core1_bus_join1__out[1];
    _load_single_phase_variable_load_bus_split1__out2 = _load_single_phase_variable_load_single_phase_core1_bus_join1__out[2];
    _load_single_phase_variable_load_bus_split1__out3 = _load_single_phase_variable_load_single_phase_core1_bus_join1__out[3];
    // Generated from the component: MGCC.Single phase PLL1.Product8
    _mgcc_single_phase_pll1_product8__out = (_mgcc_single_phase_pll1_c_function1__vq) * 1.0 / (_mgcc_single_phase_pll1_limit1__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Abs1
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_abs1__out = fabs(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_product4__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Abs1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_abs1__out = fabs(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product8__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit9
    _load_single_phase_variable_load_single_phase_core1_limit9__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_abs2__out, 0.001), 36000.0);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit11
    _load_single_phase_variable_load_single_phase_core1_limit11__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_gain1__out, 0.001), 36000.0);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Relational operator4
    _load_single_phase_variable_load_single_phase_core1_relational_operator4__out = (_load_single_phase_variable_load_single_phase_core1_f_to_w5__out > _load_single_phase_variable_load_single_phase_core1_constant5__out) ? 1 : 0;
    // Generated from the component: Load.Single-phase Variable Load.Pmeas_kW
    HIL_OutAO(0x400d, (float)_load_single_phase_variable_load_bus_split1__out2);
    // Generated from the component: Load.Single-phase Variable Load.Pref_fb_kW
    HIL_OutAO(0x400e, (float)_load_single_phase_variable_load_bus_split1__out);
    // Generated from the component: Load.Single-phase Variable Load.Qmeas_kVAr
    HIL_OutAO(0x400f, (float)_load_single_phase_variable_load_bus_split1__out3);
    // Generated from the component: Load.Single-phase Variable Load.Qref_fb_kVAr
    HIL_OutAO(0x4010, (float)_load_single_phase_variable_load_bus_split1__out1);
    // Generated from the component: MGCC.Single phase PLL1.Abs1
    _mgcc_single_phase_pll1_abs1__out = fabs(_mgcc_single_phase_pll1_product8__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Comparator1
    if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_constant1__out < _load_single_phase_variable_load_single_phase_core1_grid_synchronization_abs1__out) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__out = 0;
    } else if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_constant1__out > _load_single_phase_variable_load_single_phase_core1_grid_synchronization_abs1__out) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__out = 1;
    } else {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__state;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Kd_LUT
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_in = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_tmp = floor(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_in);
    if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_tmp < 0)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down = 0;
    else if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_tmp >= 99)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down = 99 - 1;
    else
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_tmp;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_int_coeff = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_in - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__value =
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down] +
        ((_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down + 1] -
          _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_addr_down]) *
         _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__x_int_coeff);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Ki_LUT
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_in = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_tmp = floor(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_in);
    if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_tmp < 0)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down = 0;
    else if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_tmp >= 99)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down = 99 - 1;
    else
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_tmp;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_int_coeff = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_in - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__value =
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down] +
        ((_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down + 1] -
          _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_addr_down]) *
         _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__x_int_coeff);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Kp_LUT
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_in = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_tmp = floor(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_in);
    if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_tmp < 0)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down = 0;
    else if (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_tmp >= 99)
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down = 99 - 1;
    else
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_tmp;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_int_coeff = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_in - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__value =
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down] +
        ((_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down + 1] -
          _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__lut_table[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_addr_down]) *
         _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__x_int_coeff);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Lref_calc
    _load_single_phase_variable_load_single_phase_core1_lref_calc__Qref = _load_single_phase_variable_load_single_phase_core1_limit9__out;
    _load_single_phase_variable_load_single_phase_core1_lref_calc__V[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0];
    _load_single_phase_variable_load_single_phase_core1_lref_calc__V[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1];
    _load_single_phase_variable_load_single_phase_core1_lref_calc__harmonics[0] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector__out[0];
    _load_single_phase_variable_load_single_phase_core1_lref_calc__harmonics[1] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector__out[1];
    _load_single_phase_variable_load_single_phase_core1_lref_calc__w = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            _load_single_phase_variable_load_single_phase_core1_lref_calc__L = _load_single_phase_variable_load_single_phase_core1_lref_calc__V [ 0 ] * _load_single_phase_variable_load_single_phase_core1_lref_calc__V [ 0 ] / ( _load_single_phase_variable_load_single_phase_core1_lref_calc__w * _load_single_phase_variable_load_single_phase_core1_lref_calc__Qref ) ;
        }
        else     {
            for ( _load_single_phase_variable_load_single_phase_core1_lref_calc__i = 0 ; _load_single_phase_variable_load_single_phase_core1_lref_calc__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_lref_calc__i ++ )         {
                _load_single_phase_variable_load_single_phase_core1_lref_calc__Vsum += _load_single_phase_variable_load_single_phase_core1_lref_calc__V [ _load_single_phase_variable_load_single_phase_core1_lref_calc__i ] * _load_single_phase_variable_load_single_phase_core1_lref_calc__V [ _load_single_phase_variable_load_single_phase_core1_lref_calc__i ] * ( pow ( _load_single_phase_variable_load_single_phase_core1_lref_calc__harmonics [ _load_single_phase_variable_load_single_phase_core1_lref_calc__i ] , - 1 ) ) ;
            }
            _load_single_phase_variable_load_single_phase_core1_lref_calc__L = _load_single_phase_variable_load_single_phase_core1_lref_calc__Vsum / ( _load_single_phase_variable_load_single_phase_core1_lref_calc__w * _load_single_phase_variable_load_single_phase_core1_lref_calc__Qref ) ;
            _load_single_phase_variable_load_single_phase_core1_lref_calc__Vsum = 0 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C function2
    _load_single_phase_variable_load_single_phase_core1_c_function2__P = _load_single_phase_variable_load_single_phase_core1_limit6__out;
    _load_single_phase_variable_load_single_phase_core1_c_function2__Q = _load_single_phase_variable_load_single_phase_core1_limit11__out;
    _load_single_phase_variable_load_single_phase_core1_c_function2__V[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0];
    _load_single_phase_variable_load_single_phase_core1_c_function2__V[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1];
    _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms = _load_single_phase_variable_load_single_phase_core1_limit10__out;
    _load_single_phase_variable_load_single_phase_core1_c_function2__harmonics[0] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector1__out[0];
    _load_single_phase_variable_load_single_phase_core1_c_function2__harmonics[1] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector1__out[1];
    _load_single_phase_variable_load_single_phase_core1_c_function2__mod = _load_single_phase_variable_load_single_phase_core1_relational_operator4__out;
    _load_single_phase_variable_load_single_phase_core1_c_function2__w = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
    {
        if ( 1.0 == 1 )     {
            if ( _load_single_phase_variable_load_single_phase_core1_c_function2__mod == 0 )         {
                _load_single_phase_variable_load_single_phase_core1_c_function2__S = sqrt ( _load_single_phase_variable_load_single_phase_core1_c_function2__P * _load_single_phase_variable_load_single_phase_core1_c_function2__P + _load_single_phase_variable_load_single_phase_core1_c_function2__Q * _load_single_phase_variable_load_single_phase_core1_c_function2__Q ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Z = _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms * _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms / _load_single_phase_variable_load_single_phase_core1_c_function2__S ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__rat = _load_single_phase_variable_load_single_phase_core1_c_function2__P / _load_single_phase_variable_load_single_phase_core1_c_function2__Q ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Rr = _load_single_phase_variable_load_single_phase_core1_c_function2__Z / sqrt ( 1 + ( 1 / ( _load_single_phase_variable_load_single_phase_core1_c_function2__rat * _load_single_phase_variable_load_single_phase_core1_c_function2__rat ) ) ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__R = _load_single_phase_variable_load_single_phase_core1_c_function2__Rr - 0.020273744591166126 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__X = _load_single_phase_variable_load_single_phase_core1_c_function2__Rr / _load_single_phase_variable_load_single_phase_core1_c_function2__rat ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Xc = _load_single_phase_variable_load_single_phase_core1_c_function2__X + _load_single_phase_variable_load_single_phase_core1_c_function2__w * 0.00027388797317858617 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__c = 1 / ( _load_single_phase_variable_load_single_phase_core1_c_function2__Xc * _load_single_phase_variable_load_single_phase_core1_c_function2__w ) ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_c_function2__Xl = _load_single_phase_variable_load_single_phase_core1_c_function2__w * 0.00027388797317858617 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__c = 0.024466705881649595 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Xc = pow ( _load_single_phase_variable_load_single_phase_core1_c_function2__w * _load_single_phase_variable_load_single_phase_core1_c_function2__c , - 1 ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__X = _load_single_phase_variable_load_single_phase_core1_c_function2__Xc - _load_single_phase_variable_load_single_phase_core1_c_function2__Xl ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Z = sqrt ( ( pow ( _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms , 4 ) - _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms * _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms * _load_single_phase_variable_load_single_phase_core1_c_function2__X * _load_single_phase_variable_load_single_phase_core1_c_function2__X ) / ( _load_single_phase_variable_load_single_phase_core1_c_function2__P * _load_single_phase_variable_load_single_phase_core1_c_function2__P ) ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__R = sqrt ( _load_single_phase_variable_load_single_phase_core1_c_function2__Z * _load_single_phase_variable_load_single_phase_core1_c_function2__Z - _load_single_phase_variable_load_single_phase_core1_c_function2__X * _load_single_phase_variable_load_single_phase_core1_c_function2__X ) - 0.020273744591166126 ;
            }
        }
        else     {
            if ( _load_single_phase_variable_load_single_phase_core1_c_function2__mod == 0 )         {
                _load_single_phase_variable_load_single_phase_core1_c_function2__n ++ ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__S = sqrt ( _load_single_phase_variable_load_single_phase_core1_c_function2__P * _load_single_phase_variable_load_single_phase_core1_c_function2__P + _load_single_phase_variable_load_single_phase_core1_c_function2__Q * _load_single_phase_variable_load_single_phase_core1_c_function2__Q ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Z = _load_single_phase_variable_load_single_phase_core1_c_function2__V [ 0 ] * _load_single_phase_variable_load_single_phase_core1_c_function2__V [ 0 ] / _load_single_phase_variable_load_single_phase_core1_c_function2__S ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__rat = _load_single_phase_variable_load_single_phase_core1_c_function2__P / _load_single_phase_variable_load_single_phase_core1_c_function2__Q ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Rr = _load_single_phase_variable_load_single_phase_core1_c_function2__Z / sqrt ( 1 + ( 1 / ( _load_single_phase_variable_load_single_phase_core1_c_function2__rat * _load_single_phase_variable_load_single_phase_core1_c_function2__rat ) ) ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__R = _load_single_phase_variable_load_single_phase_core1_c_function2__Rr - 0.020273744591166126 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__X = _load_single_phase_variable_load_single_phase_core1_c_function2__Rr / _load_single_phase_variable_load_single_phase_core1_c_function2__rat ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Xc = _load_single_phase_variable_load_single_phase_core1_c_function2__X + _load_single_phase_variable_load_single_phase_core1_c_function2__w * 0.00027388797317858617 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__c = 1 / ( _load_single_phase_variable_load_single_phase_core1_c_function2__Xc * _load_single_phase_variable_load_single_phase_core1_c_function2__w ) ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_c_function2__Xl = _load_single_phase_variable_load_single_phase_core1_c_function2__w * 0.00027388797317858617 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__c = 0.024466705881649595 ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Xc = pow ( _load_single_phase_variable_load_single_phase_core1_c_function2__w * _load_single_phase_variable_load_single_phase_core1_c_function2__c , - 1 ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__X = _load_single_phase_variable_load_single_phase_core1_c_function2__Xc - _load_single_phase_variable_load_single_phase_core1_c_function2__Xl ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__Z = sqrt ( ( pow ( _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms , 4 ) - _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms * _load_single_phase_variable_load_single_phase_core1_c_function2__Vrms * _load_single_phase_variable_load_single_phase_core1_c_function2__X * _load_single_phase_variable_load_single_phase_core1_c_function2__X ) / ( _load_single_phase_variable_load_single_phase_core1_c_function2__P * _load_single_phase_variable_load_single_phase_core1_c_function2__P ) ) ;
                _load_single_phase_variable_load_single_phase_core1_c_function2__R = sqrt ( _load_single_phase_variable_load_single_phase_core1_c_function2__Z * _load_single_phase_variable_load_single_phase_core1_c_function2__Z - _load_single_phase_variable_load_single_phase_core1_c_function2__X * _load_single_phase_variable_load_single_phase_core1_c_function2__X ) - 0.020273744591166126 ;
            }
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator2
    _load_single_phase_variable_load_single_phase_core1_logical_operator2__out = !_load_single_phase_variable_load_single_phase_core1_relational_operator4__out;
    // Generated from the component: MGCC.Single phase PLL1.Kd_LUT
    _mgcc_single_phase_pll1_kd_lut__x_in = (_mgcc_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _mgcc_single_phase_pll1_kd_lut__x_addr_tmp = floor(_mgcc_single_phase_pll1_kd_lut__x_in);
    if (_mgcc_single_phase_pll1_kd_lut__x_addr_tmp < 0)
        _mgcc_single_phase_pll1_kd_lut__x_addr_down = 0;
    else if (_mgcc_single_phase_pll1_kd_lut__x_addr_tmp >= 99)
        _mgcc_single_phase_pll1_kd_lut__x_addr_down = 99 - 1;
    else
        _mgcc_single_phase_pll1_kd_lut__x_addr_down = _mgcc_single_phase_pll1_kd_lut__x_addr_tmp;
    _mgcc_single_phase_pll1_kd_lut__x_int_coeff = _mgcc_single_phase_pll1_kd_lut__x_in - _mgcc_single_phase_pll1_kd_lut__x_addr_down;
    _mgcc_single_phase_pll1_kd_lut__value =
        _mgcc_single_phase_pll1_kd_lut__lut_table[_mgcc_single_phase_pll1_kd_lut__x_addr_down] +
        ((_mgcc_single_phase_pll1_kd_lut__lut_table[_mgcc_single_phase_pll1_kd_lut__x_addr_down + 1] -
          _mgcc_single_phase_pll1_kd_lut__lut_table[_mgcc_single_phase_pll1_kd_lut__x_addr_down]) *
         _mgcc_single_phase_pll1_kd_lut__x_int_coeff);
    // Generated from the component: MGCC.Single phase PLL1.Ki_LUT
    _mgcc_single_phase_pll1_ki_lut__x_in = (_mgcc_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _mgcc_single_phase_pll1_ki_lut__x_addr_tmp = floor(_mgcc_single_phase_pll1_ki_lut__x_in);
    if (_mgcc_single_phase_pll1_ki_lut__x_addr_tmp < 0)
        _mgcc_single_phase_pll1_ki_lut__x_addr_down = 0;
    else if (_mgcc_single_phase_pll1_ki_lut__x_addr_tmp >= 99)
        _mgcc_single_phase_pll1_ki_lut__x_addr_down = 99 - 1;
    else
        _mgcc_single_phase_pll1_ki_lut__x_addr_down = _mgcc_single_phase_pll1_ki_lut__x_addr_tmp;
    _mgcc_single_phase_pll1_ki_lut__x_int_coeff = _mgcc_single_phase_pll1_ki_lut__x_in - _mgcc_single_phase_pll1_ki_lut__x_addr_down;
    _mgcc_single_phase_pll1_ki_lut__value =
        _mgcc_single_phase_pll1_ki_lut__lut_table[_mgcc_single_phase_pll1_ki_lut__x_addr_down] +
        ((_mgcc_single_phase_pll1_ki_lut__lut_table[_mgcc_single_phase_pll1_ki_lut__x_addr_down + 1] -
          _mgcc_single_phase_pll1_ki_lut__lut_table[_mgcc_single_phase_pll1_ki_lut__x_addr_down]) *
         _mgcc_single_phase_pll1_ki_lut__x_int_coeff);
    // Generated from the component: MGCC.Single phase PLL1.Kp_LUT
    _mgcc_single_phase_pll1_kp_lut__x_in = (_mgcc_single_phase_pll1_abs1__out + -0.0) * 99.0;
    _mgcc_single_phase_pll1_kp_lut__x_addr_tmp = floor(_mgcc_single_phase_pll1_kp_lut__x_in);
    if (_mgcc_single_phase_pll1_kp_lut__x_addr_tmp < 0)
        _mgcc_single_phase_pll1_kp_lut__x_addr_down = 0;
    else if (_mgcc_single_phase_pll1_kp_lut__x_addr_tmp >= 99)
        _mgcc_single_phase_pll1_kp_lut__x_addr_down = 99 - 1;
    else
        _mgcc_single_phase_pll1_kp_lut__x_addr_down = _mgcc_single_phase_pll1_kp_lut__x_addr_tmp;
    _mgcc_single_phase_pll1_kp_lut__x_int_coeff = _mgcc_single_phase_pll1_kp_lut__x_in - _mgcc_single_phase_pll1_kp_lut__x_addr_down;
    _mgcc_single_phase_pll1_kp_lut__value =
        _mgcc_single_phase_pll1_kp_lut__lut_table[_mgcc_single_phase_pll1_kp_lut__x_addr_down] +
        ((_mgcc_single_phase_pll1_kp_lut__lut_table[_mgcc_single_phase_pll1_kp_lut__x_addr_down + 1] -
          _mgcc_single_phase_pll1_kp_lut__lut_table[_mgcc_single_phase_pll1_kp_lut__x_addr_down]) *
         _mgcc_single_phase_pll1_kp_lut__x_int_coeff);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Logical operator1
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_logical_operator1__out = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__out && _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out && _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Product6
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product6__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kd_lut__value * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product8__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Product5
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product5__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_ki_lut__value * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product8__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Product7
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product7__out = (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_kp_lut__value * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product8__out);
    // Generated from the component: MGCC.Single phase PLL1.Product6
    _mgcc_single_phase_pll1_product6__out = (_mgcc_single_phase_pll1_kd_lut__value * _mgcc_single_phase_pll1_product8__out);
    // Generated from the component: MGCC.Single phase PLL1.Product5
    _mgcc_single_phase_pll1_product5__out = (_mgcc_single_phase_pll1_ki_lut__value * _mgcc_single_phase_pll1_product8__out);
    // Generated from the component: MGCC.Single phase PLL1.Product7
    _mgcc_single_phase_pll1_product7__out = (_mgcc_single_phase_pll1_kp_lut__value * _mgcc_single_phase_pll1_product8__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.counter
    _load_single_phase_variable_load_single_phase_core1_counter__in = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_logical_operator1__out;
    {
        _load_single_phase_variable_load_single_phase_core1_counter__out = _load_single_phase_variable_load_single_phase_core1_counter__out_state ;
        if ( _load_single_phase_variable_load_single_phase_core1_counter__in > 0.5 )     {
            _load_single_phase_variable_load_single_phase_core1_counter__cnt ++ ;
            if ( _load_single_phase_variable_load_single_phase_core1_counter__cnt >= 5 * 0.08333333333333333 / 5e-05 )         {
                _load_single_phase_variable_load_single_phase_core1_counter__out = 1 ;
                _load_single_phase_variable_load_single_phase_core1_counter__cnt = 0 ;
            }
        }
        else if ( _load_single_phase_variable_load_single_phase_core1_counter__in < 0.5 )     {
            _load_single_phase_variable_load_single_phase_core1_counter__out = 0 ;
            _load_single_phase_variable_load_single_phase_core1_counter__cnt = 0 ;
        }
        _load_single_phase_variable_load_single_phase_core1_counter__out_state = _load_single_phase_variable_load_single_phase_core1_counter__out ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Discrete Transfer Function1
    X_UnInt32 _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i = 0; _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i < 1; _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i++) {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_sum += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_coeff[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i + 1] * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__states[_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__i];
    }
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__a_sum += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__states[0] * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__delay_line_in = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product6__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__a_sum;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_sum += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: MGCC.Single phase PLL1.Discrete Transfer Function1
    X_UnInt32 _mgcc_single_phase_pll1_discrete_transfer_function1__i;
    _mgcc_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _mgcc_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _mgcc_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_mgcc_single_phase_pll1_discrete_transfer_function1__i = 0; _mgcc_single_phase_pll1_discrete_transfer_function1__i < 1; _mgcc_single_phase_pll1_discrete_transfer_function1__i++) {
        _mgcc_single_phase_pll1_discrete_transfer_function1__b_sum += _mgcc_single_phase_pll1_discrete_transfer_function1__b_coeff[_mgcc_single_phase_pll1_discrete_transfer_function1__i + 1] * _mgcc_single_phase_pll1_discrete_transfer_function1__states[_mgcc_single_phase_pll1_discrete_transfer_function1__i];
    }
    _mgcc_single_phase_pll1_discrete_transfer_function1__a_sum += _mgcc_single_phase_pll1_discrete_transfer_function1__states[0] * _mgcc_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _mgcc_single_phase_pll1_discrete_transfer_function1__delay_line_in = _mgcc_single_phase_pll1_product6__out - _mgcc_single_phase_pll1_discrete_transfer_function1__a_sum;
    _mgcc_single_phase_pll1_discrete_transfer_function1__b_sum += _mgcc_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _mgcc_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _mgcc_single_phase_pll1_discrete_transfer_function1__out = _mgcc_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator13
    _load_single_phase_variable_load_single_phase_core1_logical_operator13__out = _load_single_phase_variable_load_single_phase_core1_counter__out && _load_single_phase_variable_load_constant1__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator14
    _load_single_phase_variable_load_single_phase_core1_logical_operator14__out = _load_single_phase_variable_load_single_phase_core1_counter__out && _load_single_phase_variable_load_constant1__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator28
    _load_single_phase_variable_load_single_phase_core1_logical_operator28__out = _load_single_phase_variable_load_single_phase_core1_counter__out && _load_single_phase_variable_load_constant1__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator5
    _load_single_phase_variable_load_single_phase_core1_logical_operator5__out = _load_single_phase_variable_load_relational_operator3__out && _load_single_phase_variable_load_single_phase_core1_counter__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum8
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum8__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product7__out + _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__out + _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum8
    _mgcc_single_phase_pll1_sum8__out = _mgcc_single_phase_pll1_product7__out + _mgcc_single_phase_pll1_i__out + _mgcc_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator10
    _load_single_phase_variable_load_single_phase_core1_logical_operator10__out = _load_single_phase_variable_load_single_phase_core1_logical_operator13__out && _load_single_phase_variable_load_single_phase_core1_relational_operator4__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator27
    _load_single_phase_variable_load_single_phase_core1_logical_operator27__out = _load_single_phase_variable_load_single_phase_core1_logical_operator28__out && _load_single_phase_variable_load_single_phase_core1_logical_operator2__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator17
    _load_single_phase_variable_load_single_phase_core1_logical_operator17__out = _load_single_phase_variable_load_single_phase_core1_logical_operator5__out && _load_single_phase_variable_load_constant1__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator6
    _load_single_phase_variable_load_single_phase_core1_logical_operator6__out = !_load_single_phase_variable_load_single_phase_core1_logical_operator5__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Limit2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_limit2__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum8__out, -62.83185307179586), 62.83185307179586);
    // Generated from the component: MGCC.Single phase PLL1.Limit2
    _mgcc_single_phase_pll1_limit2__out = MIN(MAX(_mgcc_single_phase_pll1_sum8__out, -62.83185307179586), 62.83185307179586);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Signal switch3
    _load_single_phase_variable_load_single_phase_core1_signal_switch3__out = (_load_single_phase_variable_load_single_phase_core1_logical_operator10__out > 0.5f) ? _load_single_phase_variable_load_single_phase_core1_limit2__out : _load_single_phase_variable_load_single_phase_core1_constant6__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator19
    _load_single_phase_variable_load_single_phase_core1_logical_operator19__out = _load_single_phase_variable_load_single_phase_core1_logical_operator17__out && _load_single_phase_variable_load_single_phase_core1_logical_operator2__out && _load_single_phase_variable_load_single_phase_core1_relational_operator3__out && _load_single_phase_variable_load_single_phase_core1_logical_operator26__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator20
    _load_single_phase_variable_load_single_phase_core1_logical_operator20__out = _load_single_phase_variable_load_single_phase_core1_logical_operator26__out && _load_single_phase_variable_load_single_phase_core1_logical_operator17__out && _load_single_phase_variable_load_single_phase_core1_logical_operator2__out && _load_single_phase_variable_load_single_phase_core1_relational_operator3__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator29
    _load_single_phase_variable_load_single_phase_core1_logical_operator29__out = _load_single_phase_variable_load_single_phase_core1_relational_operator4__out && _load_single_phase_variable_load_single_phase_core1_logical_operator17__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Signal switch1
    _load_single_phase_variable_load_single_phase_core1_signal_switch1__out = (_load_single_phase_variable_load_single_phase_core1_logical_operator17__out > 0.5f) ? _load_single_phase_variable_load_limit1__out : _load_single_phase_variable_load_single_phase_core1_constant3__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Signal switch2
    _load_single_phase_variable_load_single_phase_core1_signal_switch2__out = (_load_single_phase_variable_load_single_phase_core1_logical_operator17__out > 0.5f) ? _load_single_phase_variable_load_limit2__out : _load_single_phase_variable_load_single_phase_core1_qmin_fun__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Logical operator7
    _load_single_phase_variable_load_single_phase_core1_logical_operator7__out = _load_single_phase_variable_load_single_phase_core1_logical_operator6__out && _load_single_phase_variable_load_single_phase_core1_relational_operator1__out && _load_single_phase_variable_load_single_phase_core1_relational_operator2__out ;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum5
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum5__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_limit2__out + _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_const__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum5
    _mgcc_single_phase_pll1_sum5__out = _mgcc_single_phase_pll1_limit2__out + _mgcc_single_phase_pll1_const__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.L_ref.reciprocal
    _load_single_phase_variable_load_single_phase_core1_l_ref_reciprocal__out = 1.0 / (_load_single_phase_variable_load_single_phase_core1_signal_switch3__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.R_inc
    _load_single_phase_variable_load_single_phase_core1_r_inc__C_in = _load_single_phase_variable_load_single_phase_core1_unit_delay12__out;
    _load_single_phase_variable_load_single_phase_core1_r_inc__Pref = _load_single_phase_variable_load_single_phase_core1_limit6__out;
    _load_single_phase_variable_load_single_phase_core1_r_inc__R_in = _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__out;
    _load_single_phase_variable_load_single_phase_core1_r_inc__V[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0];
    _load_single_phase_variable_load_single_phase_core1_r_inc__V[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1];
    _load_single_phase_variable_load_single_phase_core1_r_inc__enable = _load_single_phase_variable_load_single_phase_core1_logical_operator19__out;
    _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics[0] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector5__out[0];
    _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics[1] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector5__out[1];
    _load_single_phase_variable_load_single_phase_core1_r_inc__pause = _load_single_phase_variable_load_single_phase_core1_logical_operator23__out;
    _load_single_phase_variable_load_single_phase_core1_r_inc__w = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_r_inc__enable && ! _load_single_phase_variable_load_single_phase_core1_r_inc__pause )     {
            _load_single_phase_variable_load_single_phase_core1_r_inc__R = _load_single_phase_variable_load_single_phase_core1_r_inc__R_in * ( 1 + _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator ) ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__Isum = 0 ;
            for ( _load_single_phase_variable_load_single_phase_core1_r_inc__i = 0 ; _load_single_phase_variable_load_single_phase_core1_r_inc__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_r_inc__i ++ )         {
                _load_single_phase_variable_load_single_phase_core1_r_inc__Ih = _load_single_phase_variable_load_single_phase_core1_r_inc__V [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] / sqrt ( ( _load_single_phase_variable_load_single_phase_core1_r_inc__R + 0.020273744591166126 ) * ( _load_single_phase_variable_load_single_phase_core1_r_inc__R + 0.020273744591166126 ) + ( _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__C_in ) , - 1 ) ) * ( _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__C_in ) , - 1 ) ) ) ;
                _load_single_phase_variable_load_single_phase_core1_r_inc__Isum += ( _load_single_phase_variable_load_single_phase_core1_r_inc__Ih * _load_single_phase_variable_load_single_phase_core1_r_inc__Ih ) ;
            }
            _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc = sqrt ( _load_single_phase_variable_load_single_phase_core1_r_inc__Isum ) ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc_old = _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc * _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc * ( _load_single_phase_variable_load_single_phase_core1_r_inc__R + 0.020273744591166126 ) ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__dP_old = ( _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc_old - _load_single_phase_variable_load_single_phase_core1_r_inc__Pref ) / _load_single_phase_variable_load_single_phase_core1_r_inc__Pref ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed = _load_single_phase_variable_load_single_phase_core1_r_inc__R_in * ( 1 + _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator + _load_single_phase_variable_load_single_phase_core1_r_inc__dR ) ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__Isum = 0 ;
            for ( _load_single_phase_variable_load_single_phase_core1_r_inc__i = 0 ; _load_single_phase_variable_load_single_phase_core1_r_inc__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_r_inc__i ++ )         {
                _load_single_phase_variable_load_single_phase_core1_r_inc__Ih = _load_single_phase_variable_load_single_phase_core1_r_inc__V [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] / sqrt ( ( _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed + 0.020273744591166126 ) * ( _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed + 0.020273744591166126 ) + ( _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__C_in ) , - 1 ) ) * ( _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_r_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_r_inc__i ] * _load_single_phase_variable_load_single_phase_core1_r_inc__w * _load_single_phase_variable_load_single_phase_core1_r_inc__C_in ) , - 1 ) ) ) ;
                _load_single_phase_variable_load_single_phase_core1_r_inc__Isum += ( _load_single_phase_variable_load_single_phase_core1_r_inc__Ih * _load_single_phase_variable_load_single_phase_core1_r_inc__Ih ) ;
            }
            _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc = sqrt ( _load_single_phase_variable_load_single_phase_core1_r_inc__Isum ) ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc_new = _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc * _load_single_phase_variable_load_single_phase_core1_r_inc__I_calc * ( _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed + 0.020273744591166126 ) ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__dP = ( _load_single_phase_variable_load_single_phase_core1_r_inc__P_calc_new - _load_single_phase_variable_load_single_phase_core1_r_inc__Pref ) / _load_single_phase_variable_load_single_phase_core1_r_inc__Pref ;
            if ( fabs ( _load_single_phase_variable_load_single_phase_core1_r_inc__dP_old ) < _load_single_phase_variable_load_single_phase_core1_r_inc__P_tol )         {
                _load_single_phase_variable_load_single_phase_core1_r_inc__status = 0 ;
                _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 1 ;
            }
            else         {
                if ( _load_single_phase_variable_load_single_phase_core1_r_inc__dP * _load_single_phase_variable_load_single_phase_core1_r_inc__dP_old > 0 )             {
                    if ( fabs ( _load_single_phase_variable_load_single_phase_core1_r_inc__dP ) > fabs ( _load_single_phase_variable_load_single_phase_core1_r_inc__dP_old ) )                 {
                        _load_single_phase_variable_load_single_phase_core1_r_inc__dR = - _load_single_phase_variable_load_single_phase_core1_r_inc__dR ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 0 ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__status = 1 ;
                    }
                    else                 {
                        _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator += _load_single_phase_variable_load_single_phase_core1_r_inc__dR ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__R = _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 1 ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _load_single_phase_variable_load_single_phase_core1_r_inc__dP ) < fabs ( _load_single_phase_variable_load_single_phase_core1_r_inc__dP_old ) )                 {
                        _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator += _load_single_phase_variable_load_single_phase_core1_r_inc__dR ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__R = _load_single_phase_variable_load_single_phase_core1_r_inc__R_changed ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 1 ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__dR = - _load_single_phase_variable_load_single_phase_core1_r_inc__dR / 2 ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__status = 3 ;
                    }
                    else                 {
                        _load_single_phase_variable_load_single_phase_core1_r_inc__dR /= 2 ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 0 ;
                        _load_single_phase_variable_load_single_phase_core1_r_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _load_single_phase_variable_load_single_phase_core1_r_inc__pause && _load_single_phase_variable_load_single_phase_core1_r_inc__enable )     {
            _load_single_phase_variable_load_single_phase_core1_r_inc__status = - 2 ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 0 ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__R = _load_single_phase_variable_load_single_phase_core1_r_inc__R_in * ( 1 + _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator ) ;
        }
        else if ( ! _load_single_phase_variable_load_single_phase_core1_r_inc__enable )     {
            _load_single_phase_variable_load_single_phase_core1_r_inc__R = _load_single_phase_variable_load_single_phase_core1_r_inc__R_in ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__dR_accumulator = 0 ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied = 0 ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__dR = 0.001 ;
            _load_single_phase_variable_load_single_phase_core1_r_inc__status = - 10 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C_inc
    _load_single_phase_variable_load_single_phase_core1_c_inc__C_in = _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__out;
    _load_single_phase_variable_load_single_phase_core1_c_inc__Qref = _load_single_phase_variable_load_single_phase_core1_limit11__out;
    _load_single_phase_variable_load_single_phase_core1_c_inc__R_in = _load_single_phase_variable_load_single_phase_core1_unit_delay13__out;
    _load_single_phase_variable_load_single_phase_core1_c_inc__V[0] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[0];
    _load_single_phase_variable_load_single_phase_core1_c_inc__V[1] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit7__out[1];
    _load_single_phase_variable_load_single_phase_core1_c_inc__enable = _load_single_phase_variable_load_single_phase_core1_logical_operator20__out;
    _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics[0] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector5__out[0];
    _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics[1] = _load_single_phase_variable_load_single_phase_core1_harmonic_vector5__out[1];
    _load_single_phase_variable_load_single_phase_core1_c_inc__pause = _load_single_phase_variable_load_single_phase_core1_logical_operator22__out;
    _load_single_phase_variable_load_single_phase_core1_c_inc__w = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_limit3__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_c_inc__enable && ! _load_single_phase_variable_load_single_phase_core1_c_inc__pause )     {
            _load_single_phase_variable_load_single_phase_core1_c_inc__C = _load_single_phase_variable_load_single_phase_core1_c_inc__C_in * ( 1 + _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator ) ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum = 0 ;
            for ( _load_single_phase_variable_load_single_phase_core1_c_inc__i = 0 ; _load_single_phase_variable_load_single_phase_core1_c_inc__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_c_inc__i ++ )         {
                _load_single_phase_variable_load_single_phase_core1_c_inc__Ih = _load_single_phase_variable_load_single_phase_core1_c_inc__V [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] / sqrt ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__R_in + 0.020273744591166126 ) * ( _load_single_phase_variable_load_single_phase_core1_c_inc__R_in + 0.020273744591166126 ) + ( _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__C ) , - 1 ) ) * ( _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__C ) , - 1 ) ) ) ;
                _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum -= ( _load_single_phase_variable_load_single_phase_core1_c_inc__Ih * _load_single_phase_variable_load_single_phase_core1_c_inc__Ih * ( 0.00027388797317858617 * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] - pow ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__C ) , - 1 ) ) ) ;
            }
            _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc_old = _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__dQ_old = ( _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc_old - _load_single_phase_variable_load_single_phase_core1_c_inc__Qref ) / _load_single_phase_variable_load_single_phase_core1_c_inc__Qref ;
            if ( fabs ( _load_single_phase_variable_load_single_phase_core1_c_inc__dQ_old ) < _load_single_phase_variable_load_single_phase_core1_c_inc__Q_tol )         {
                _load_single_phase_variable_load_single_phase_core1_c_inc__status = 0 ;
                _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 1 ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_c_inc__status = 12 ;
                _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed = _load_single_phase_variable_load_single_phase_core1_c_inc__C_in * ( 1 + _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator + _load_single_phase_variable_load_single_phase_core1_c_inc__dC ) ;
                _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum = 0 ;
                for ( _load_single_phase_variable_load_single_phase_core1_c_inc__i = 0 ; _load_single_phase_variable_load_single_phase_core1_c_inc__i < 1.0 ; _load_single_phase_variable_load_single_phase_core1_c_inc__i ++ )             {
                    _load_single_phase_variable_load_single_phase_core1_c_inc__Ih = _load_single_phase_variable_load_single_phase_core1_c_inc__V [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] / sqrt ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__R_in + 0.020273744591166126 ) * ( _load_single_phase_variable_load_single_phase_core1_c_inc__R_in + 0.020273744591166126 ) + ( _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed ) , - 1 ) ) * ( _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * 0.00027388797317858617 - pow ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed ) , - 1 ) ) ) ;
                    _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum -= ( _load_single_phase_variable_load_single_phase_core1_c_inc__Ih * _load_single_phase_variable_load_single_phase_core1_c_inc__Ih * ( 0.00027388797317858617 * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] - pow ( ( _load_single_phase_variable_load_single_phase_core1_c_inc__harmonics [ _load_single_phase_variable_load_single_phase_core1_c_inc__i ] * _load_single_phase_variable_load_single_phase_core1_c_inc__w * _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed ) , - 1 ) ) ) ;
                }
                _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc_new = _load_single_phase_variable_load_single_phase_core1_c_inc__Qsum ;
                _load_single_phase_variable_load_single_phase_core1_c_inc__dQ = ( _load_single_phase_variable_load_single_phase_core1_c_inc__Q_calc_new - _load_single_phase_variable_load_single_phase_core1_c_inc__Qref ) / _load_single_phase_variable_load_single_phase_core1_c_inc__Qref ;
                if ( _load_single_phase_variable_load_single_phase_core1_c_inc__dQ * _load_single_phase_variable_load_single_phase_core1_c_inc__dQ_old > 0 )             {
                    if ( fabs ( _load_single_phase_variable_load_single_phase_core1_c_inc__dQ ) > fabs ( _load_single_phase_variable_load_single_phase_core1_c_inc__dQ_old ) )                 {
                        _load_single_phase_variable_load_single_phase_core1_c_inc__dC = - _load_single_phase_variable_load_single_phase_core1_c_inc__dC ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 0 ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__status = 1 ;
                    }
                    else                 {
                        _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator += _load_single_phase_variable_load_single_phase_core1_c_inc__dC ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__C = _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 1 ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__status = 2 ;
                    }
                }
                else             {
                    if ( fabs ( _load_single_phase_variable_load_single_phase_core1_c_inc__dQ ) < fabs ( _load_single_phase_variable_load_single_phase_core1_c_inc__dQ_old ) )                 {
                        _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator += _load_single_phase_variable_load_single_phase_core1_c_inc__dC ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__C = _load_single_phase_variable_load_single_phase_core1_c_inc__C_changed ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 1 ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__dC = - _load_single_phase_variable_load_single_phase_core1_c_inc__dC / 2 ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__status = 3 ;
                    }
                    else                 {
                        _load_single_phase_variable_load_single_phase_core1_c_inc__dC /= 2 ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 0 ;
                        _load_single_phase_variable_load_single_phase_core1_c_inc__status = 4 ;
                    }
                }
            }
        }
        else if ( _load_single_phase_variable_load_single_phase_core1_c_inc__enable && _load_single_phase_variable_load_single_phase_core1_c_inc__pause )     {
            _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 0 ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__C = _load_single_phase_variable_load_single_phase_core1_c_inc__C_in * ( 1 + _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator ) ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__status = - 2 ;
        }
        else if ( ! _load_single_phase_variable_load_single_phase_core1_c_inc__enable )     {
            _load_single_phase_variable_load_single_phase_core1_c_inc__C = _load_single_phase_variable_load_single_phase_core1_c_inc__C_in ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__dC_accumulator = 0 ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__dC = (-0.001) ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied = 0 ;
            _load_single_phase_variable_load_single_phase_core1_c_inc__status = - 10 ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.S1.CTC_Wrapper
    if (_load_single_phase_variable_load_single_phase_core1_logical_operator29__out == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w1
    _load_single_phase_variable_load_single_phase_core1_f_to_w1__out = 24000.0 * _load_single_phase_variable_load_single_phase_core1_signal_switch1__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.f_to_w2
    _load_single_phase_variable_load_single_phase_core1_f_to_w2__out = 18000.0 * _load_single_phase_variable_load_single_phase_core1_signal_switch2__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Sum10
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum10__out = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum5__out - _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__out;
    // Generated from the component: MGCC.Single phase PLL1.Sum10
    _mgcc_single_phase_pll1_sum10__out = _mgcc_single_phase_pll1_sum5__out - _mgcc_single_phase_pll1_integrator6__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.L_ref.Is
    HIL_OutFloat(137363458, (float) _load_single_phase_variable_load_single_phase_core1_l_ref_reciprocal__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit1
    _load_single_phase_variable_load_single_phase_core1_limit1__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_r_inc__R, 0.0001), 268.88888888888846);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Limit8
    _load_single_phase_variable_load_single_phase_core1_limit8__out = MIN(MAX(_load_single_phase_variable_load_single_phase_core1_c_inc__C, 4.9324879057405595e-06), 0.024466705881649595);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Gain6
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain6__out = 628.3185307179587 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum10__out;
    // Generated from the component: MGCC.Single phase PLL1.Gain6
    _mgcc_single_phase_pll1_gain6__out = 628.3185307179587 * _mgcc_single_phase_pll1_sum10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Signal switch10
    _load_single_phase_variable_load_single_phase_core1_signal_switch10__out = (_load_single_phase_variable_load_single_phase_core1_logical_operator14__out > 0.5f) ? _load_single_phase_variable_load_single_phase_core1_limit1__out : _load_single_phase_variable_load_single_phase_core1_constant11__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Signal switch11
    _load_single_phase_variable_load_single_phase_core1_signal_switch11__out = (_load_single_phase_variable_load_single_phase_core1_logical_operator27__out > 0.5f) ? _load_single_phase_variable_load_single_phase_core1_limit8__out : _load_single_phase_variable_load_single_phase_core1_constant12__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.R_ref.Vs
    HIL_OutFloat(137363457, (float) _load_single_phase_variable_load_single_phase_core1_signal_switch10__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C_ref.reciprocal
    _load_single_phase_variable_load_single_phase_core1_c_ref_reciprocal__out = 1.0 / (_load_single_phase_variable_load_single_phase_core1_signal_switch11__out);
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C_ref.Vs
    HIL_OutFloat(137363456, (float) _load_single_phase_variable_load_single_phase_core1_c_ref_reciprocal__out);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Delay1
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__state[_load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi] = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_steady_state_check__out;
    if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi < 0)
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi++;
    else
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_delay1__cbi = 0;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Low-Pass Filter3
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_low_pass_filter3__previous_in = _load_single_phase_variable_load_single_phase_core1_grid_synchronization_peak_calc_mathematical_function1__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Low-Pass Filter2
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter2__previous_in = _load_single_phase_variable_load_single_phase_core1_lref_calc__L;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Low-Pass Filter8
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter8__previous_in = _load_single_phase_variable_load_single_phase_core1_c_function2__c;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Low-Pass Filter9
    _load_single_phase_variable_load_single_phase_core1_low_pass_filter9__previous_in = _load_single_phase_variable_load_single_phase_core1_c_function2__R;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change.Ramping1.Ramping
    _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__fsm_state = _load_single_phase_variable_load_single_phase_core1_rate_of_change_constant14__out;
    _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pin = _load_single_phase_variable_load_single_phase_core1_rate_of_change_constant15__out;
    _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_in = _load_single_phase_variable_load_single_phase_core1_f_to_w1__out;
    _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__ramp_time_ms = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_gain1__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__fsm_state == 1.0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pin ;
        }
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_in != _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_in ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i = 0 ;
            if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref - _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old >= 0 )         {
                _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a = - _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__b = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_old ;
        }
        else if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_in == _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pin && _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__fsm_state != 1.0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pref_in ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__i = 0 ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__a = 0 ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__b = _load_single_phase_variable_load_single_phase_core1_rate_of_change_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Rate_of_change1.Ramping1.Ramping
    _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__fsm_state = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_constant14__out;
    _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pin = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_constant15__out;
    _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_in = _load_single_phase_variable_load_single_phase_core1_f_to_w2__out;
    _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__ramp_time_ms = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_gain1__out;
    {
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__fsm_state == 1.0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref ;
        }
        else     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pin ;
        }
        if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_in != _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_in ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i = 0 ;
            if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref - _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old >= 0 )         {
                _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            else         {
                _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a = - _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__ramp_time_ms * 0.5 ;
            }
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__b = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_old ;
        }
        else if ( _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_in == _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pin && _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__fsm_state != 1.0 )     {
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_in ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__i = 0 ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__a = 0 ;
            _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__b = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pin ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.SR Flip Flop1
    if ((_load_single_phase_variable_load_single_phase_core1_logical_operator5__out != 0x0) && (_load_single_phase_variable_load_single_phase_core1_logical_operator7__out == 0x0))
        _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state = 1;
    else if ((_load_single_phase_variable_load_single_phase_core1_logical_operator5__out == 0x0) && (_load_single_phase_variable_load_single_phase_core1_logical_operator7__out != 0x0))
        _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state = 0;
    else if ((_load_single_phase_variable_load_single_phase_core1_logical_operator5__out != 0x0) && (_load_single_phase_variable_load_single_phase_core1_logical_operator7__out != 0x0))
        _load_single_phase_variable_load_single_phase_core1_sr_flip_flop1__state = -1;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.I
    if (!_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active || ((_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active < 0 && _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product5__out > 0 ) || (_load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__av_active > 0 && _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product5__out < 0 ))) {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__integrator_state += 1.0 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product5__out * 5e-05;
    }
    else {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__integrator_state = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_i__out;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator1__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product1__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator10
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain11__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator2
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator2__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_product2__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator3
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator3__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain4__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator4
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator4__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain5__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator5
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator5__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain7__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator6
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator6__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain6__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator7
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator7__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain9__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator8
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator8__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain8__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Integrator9
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator9__state += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_gain10__out * 5e-05;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.integrator_with_reset
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__in = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_sum5__out;
    {
        _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out_calc += _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__in * 5e-05 ;
        if ( _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out_calc > _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__reset_value ) _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__out_calc -= _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator_with_reset__reset_value ;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Transport Delay1
    _load_single_phase_variable_load_single_phase_core1_transport_delay1__state[_load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi] = _load_single_phase_variable_load_single_phase_core1_f_to_w6__out;
    if (_load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi < 0)
        _load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi++;
    else
        _load_single_phase_variable_load_single_phase_core1_transport_delay1__cbi = 0;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Transport Delay2
    _load_single_phase_variable_load_single_phase_core1_transport_delay2__state[_load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi] = _load_single_phase_variable_load_single_phase_core1_f_to_w7__out;
    if (_load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi < 0)
        _load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi++;
    else
        _load_single_phase_variable_load_single_phase_core1_transport_delay2__cbi = 0;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay1
    _load_single_phase_variable_load_single_phase_core1_unit_delay1__state = _load_single_phase_variable_load_single_phase_core1_signal_switch10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay12
    _load_single_phase_variable_load_single_phase_core1_unit_delay12__state = _load_single_phase_variable_load_single_phase_core1_signal_switch11__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay13
    _load_single_phase_variable_load_single_phase_core1_unit_delay13__state = _load_single_phase_variable_load_single_phase_core1_signal_switch10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay2
    _load_single_phase_variable_load_single_phase_core1_unit_delay2__state = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay3
    _load_single_phase_variable_load_single_phase_core1_unit_delay3__state = _load_single_phase_variable_load_single_phase_core1_limit6__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay4
    _load_single_phase_variable_load_single_phase_core1_unit_delay4__state = _load_single_phase_variable_load_single_phase_core1_rate_of_change1_ramping1_ramping__pref_out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay5
    _load_single_phase_variable_load_single_phase_core1_unit_delay5__state = _load_single_phase_variable_load_single_phase_core1_signal_switch11__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay6
    _load_single_phase_variable_load_single_phase_core1_unit_delay6__state = _load_single_phase_variable_load_single_phase_core1_signal_switch3__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay7
    _load_single_phase_variable_load_single_phase_core1_unit_delay7__state = _load_single_phase_variable_load_single_phase_core1_signal_switch11__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Unit Delay8
    _load_single_phase_variable_load_single_phase_core1_unit_delay8__state = _load_single_phase_variable_load_single_phase_core1_signal_switch10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.zig_zag_handler
    _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_inc_applied = _load_single_phase_variable_load_single_phase_core1_c_inc__inc_applied;
    _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_inc_applied = _load_single_phase_variable_load_single_phase_core1_r_inc__inc_applied;
    _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable = _load_single_phase_variable_load_single_phase_core1_logical_operator19__out;
    {
        switch ( _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state )     {
        case 0 :
            if ( _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 1 ;
            break;
        case 1 :
            if ( ! _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 0 ;
            else _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 2 ;
            break;
        case 2 :
            if ( ! _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 0 ;
            else if ( _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__R_inc_applied ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 3 ;
            break;
        case 3 :
            if ( ! _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 0 ;
            else _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 4 ;
            break;
        case 4 :
            if ( ! _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__enable ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 0 ;
            else if ( _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__C_inc_applied ) _load_single_phase_variable_load_single_phase_core1_zig_zag_handler__state = 1 ;
            break;
        }
    }
    // Generated from the component: MGCC.Single phase PLL1.I
    if (!_mgcc_single_phase_pll1_i__av_active || ((_mgcc_single_phase_pll1_i__av_active < 0 && _mgcc_single_phase_pll1_product5__out > 0 ) || (_mgcc_single_phase_pll1_i__av_active > 0 && _mgcc_single_phase_pll1_product5__out < 0 ))) {
        _mgcc_single_phase_pll1_i__integrator_state += 1.0 * _mgcc_single_phase_pll1_product5__out * 5e-05;
    }
    else {
        _mgcc_single_phase_pll1_i__integrator_state = _mgcc_single_phase_pll1_i__out;
    }
    // Generated from the component: MGCC.Single phase PLL1.Integrator1
    _mgcc_single_phase_pll1_integrator1__state += _mgcc_single_phase_pll1_product1__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator10
    _mgcc_single_phase_pll1_integrator10__state += _mgcc_single_phase_pll1_gain11__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator2
    _mgcc_single_phase_pll1_integrator2__state += _mgcc_single_phase_pll1_product2__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator3
    _mgcc_single_phase_pll1_integrator3__state += _mgcc_single_phase_pll1_gain4__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator4
    _mgcc_single_phase_pll1_integrator4__state += _mgcc_single_phase_pll1_gain5__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator5
    _mgcc_single_phase_pll1_integrator5__state += _mgcc_single_phase_pll1_gain7__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator6
    _mgcc_single_phase_pll1_integrator6__state += _mgcc_single_phase_pll1_gain6__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator7
    _mgcc_single_phase_pll1_integrator7__state += _mgcc_single_phase_pll1_gain9__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator8
    _mgcc_single_phase_pll1_integrator8__state += _mgcc_single_phase_pll1_gain8__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.Integrator9
    _mgcc_single_phase_pll1_integrator9__state += _mgcc_single_phase_pll1_gain10__out * 5e-05;
    // Generated from the component: MGCC.Single phase PLL1.integrator_with_reset
    _mgcc_single_phase_pll1_integrator_with_reset__in = _mgcc_single_phase_pll1_sum5__out;
    {
        _mgcc_single_phase_pll1_integrator_with_reset__out_calc += _mgcc_single_phase_pll1_integrator_with_reset__in * 5e-05 ;
        if ( _mgcc_single_phase_pll1_integrator_with_reset__out_calc > _mgcc_single_phase_pll1_integrator_with_reset__reset_value ) _mgcc_single_phase_pll1_integrator_with_reset__out_calc -= _mgcc_single_phase_pll1_integrator_with_reset__reset_value ;
    }
    // Generated from the component: Grid.C function2
    // Generated from the component: Load.Meter.Meter
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Steady state check
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer2.FFT
    {
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp += 2 * M_PI * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__f1 * 5e-05 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__N = 1 / 5e-05 / _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__f1 ;
        if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp > 2 * M_PI )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp = fmod ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__wt_sp , M_PI ) ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__reset = 1 ;
            ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer2_fft__k ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.C function1
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Harmonic Analyzer1.FFT
    {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp += 2 * M_PI * _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__f1 * 5e-05 ;
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__N = 1 / 5e-05 / _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__f1 ;
        if ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp > 2 * M_PI )     {
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp = fmod ( _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__wt_sp , M_PI ) ;
            _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__reset = 1 ;
            ++ _load_single_phase_variable_load_single_phase_core1_grid_synchronization_harmonic_analyzer1_fft__k ;
        }
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.RMS value1
    if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt >= 2 * M_PI) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt = fmod(_load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt, 2 * M_PI);
    }
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__period_cnt += 2 * M_PI * 5e-05 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    _load_single_phase_variable_load_single_phase_core1_grid_synchronization_rms_value1__square_sum += _load_single_phase_variable_load_single_phase_core1_v__out * _load_single_phase_variable_load_single_phase_core1_v__out * 2 * M_PI * 5e-05 * _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_integrator10__out;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Harmonic Analyzer3.FFT
    {
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp += 2 * M_PI * _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__f1 * 5e-05 ;
        _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__N = 1 / 5e-05 / _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__f1 ;
        if ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp > 2 * M_PI )     {
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp = fmod ( _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__wt_sp , M_PI ) ;
            _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__reset = 1 ;
            ++ _load_single_phase_variable_load_single_phase_core1_power_measurement_harmonic_analyzer3_fft__k ;
        }
    }
    // Generated from the component: MGCC.Meter.Meter
    // Generated from the component: MGCC.Single phase PLL1.C function1
    // Generated from the component: MGCC.RMS value1
    if( _mgcc_rms_value1__zc ) {
        if (_mgcc_vpcc_va1__out != _mgcc_rms_value1__previous_value)
            _mgcc_rms_value1__correction = - _mgcc_rms_value1__previous_value / (_mgcc_vpcc_va1__out - _mgcc_rms_value1__previous_value);
        if (_mgcc_rms_value1__correction < 0)
            _mgcc_rms_value1__correction = 0;
        else
            _mgcc_rms_value1__correction = 0;
        _mgcc_rms_value1__sample_cnt += _mgcc_rms_value1__correction - _mgcc_rms_value1__previous_correction;
        _mgcc_rms_value1__out_state = sqrt(_mgcc_rms_value1__square_sum / _mgcc_rms_value1__sample_cnt);
        _mgcc_rms_value1__sample_cnt = 0;
        _mgcc_rms_value1__previous_correction = _mgcc_rms_value1__correction;
        _mgcc_rms_value1__square_sum = 0;
    } else if ( _mgcc_rms_value1__sample_cnt >= 10000 ) {
        _mgcc_rms_value1__out_state = sqrt(_mgcc_rms_value1__square_sum / _mgcc_rms_value1__sample_cnt);
        _mgcc_rms_value1__sample_cnt = 0;
        _mgcc_rms_value1__square_sum = 0;
    }
    _mgcc_rms_value1__previous_value = _mgcc_vpcc_va1__out;
    _mgcc_rms_value1__square_sum += _mgcc_vpcc_va1__out * _mgcc_vpcc_va1__out;
    _mgcc_rms_value1__sample_cnt ++;
    // Generated from the component: VSC1.Meter.Meter
    // Generated from the component: VSC1.CURRENT_CONTROLLER
    // Generated from the component: VSC2.Meter.Meter
    // Generated from the component: VSC2.CURRENT_CONTROLLER
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Qmin_fun
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C function4
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C function5
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Power measurement.Lref_calc
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Active power losses
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Reactive power losses
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Grid synchronization.Comparator1
    if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_constant1__out < _load_single_phase_variable_load_single_phase_core1_grid_synchronization_abs1__out) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__state = 0;
    } else if (_load_single_phase_variable_load_single_phase_core1_grid_synchronization_constant1__out > _load_single_phase_variable_load_single_phase_core1_grid_synchronization_abs1__out) {
        _load_single_phase_variable_load_single_phase_core1_grid_synchronization_comparator1__state = 1;
    }
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Lref_calc
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C function2
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.counter
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.Single phase PLL1.Discrete Transfer Function1
    _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__states[0] = _load_single_phase_variable_load_single_phase_core1_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: MGCC.Single phase PLL1.Discrete Transfer Function1
    _mgcc_single_phase_pll1_discrete_transfer_function1__states[0] = _mgcc_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.R_inc
    // Generated from the component: Load.Single-phase Variable Load.Single phase core1.C_inc
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: VSC1.Constant13
    // Generated from the component: VSC1.Constant19
    // Generated from the component: VSC2.Constant13
    // Generated from the component: VSC2.Constant19
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: VSC1.FC
    _vsc1_fc__out = XIo_InFloat(0x55000130);
    // Generated from the component: VSC1.KI
    _vsc1_ki__out = XIo_InFloat(0x55000134);
    // Generated from the component: VSC1.KV
    _vsc1_kv__out = XIo_InFloat(0x55000138);
    // Generated from the component: VSC1.RT19.Output
    _vsc1_rt19_output__out = _vsc1_rt19_output__state;
    // Generated from the component: VSC1.RT42.Output
    _vsc1_rt42_output__out = _vsc1_rt42_output__state;
    // Generated from the component: VSC1.RT43.Output
    _vsc1_rt43_output__out = _vsc1_rt43_output__state;
    // Generated from the component: VSC1.RT61.Output
    _vsc1_rt61_output__out = _vsc1_rt61_output__state;
    // Generated from the component: VSC1.RT80.Output
    _vsc1_rt80_output__out = _vsc1_rt80_output__state;
    // Generated from the component: VSC1.RT81.Output
    _vsc1_rt81_output__out = _vsc1_rt81_output__state;
    // Generated from the component: VSC1.RT83.Output
    _vsc1_rt83_output__out = _vsc1_rt83_output__state;
    // Generated from the component: VSC1.VZ
    _vsc1_vz__out = XIo_InFloat(0x5500013c);
    // Generated from the component: VSC2.FC
    _vsc2_fc__out = XIo_InFloat(0x55000140);
    // Generated from the component: VSC2.KI
    _vsc2_ki__out = XIo_InFloat(0x55000144);
    // Generated from the component: VSC2.KV
    _vsc2_kv__out = XIo_InFloat(0x55000148);
    // Generated from the component: VSC2.RT19.Output
    _vsc2_rt19_output__out = _vsc2_rt19_output__state;
    // Generated from the component: VSC2.RT42.Output
    _vsc2_rt42_output__out = _vsc2_rt42_output__state;
    // Generated from the component: VSC2.RT43.Output
    _vsc2_rt43_output__out = _vsc2_rt43_output__state;
    // Generated from the component: VSC2.RT61.Output
    _vsc2_rt61_output__out = _vsc2_rt61_output__state;
    // Generated from the component: VSC2.RT80.Output
    _vsc2_rt80_output__out = _vsc2_rt80_output__state;
    // Generated from the component: VSC2.RT81.Output
    _vsc2_rt81_output__out = _vsc2_rt81_output__state;
    // Generated from the component: VSC2.RT83.Output
    _vsc2_rt83_output__out = _vsc2_rt83_output__state;
    // Generated from the component: VSC2.VZ
    _vsc2_vz__out = XIo_InFloat(0x5500014c);
    // Generated from the component: VSC1.SOGI_QSG
    _vsc1_sogi_qsg__IN_IL2 = _vsc1_rt42_output__out;
    _vsc1_sogi_qsg__IN_VGRID = _vsc1_rt43_output__out;
    {
        executeSOGI ( & _vsc1_sogi_qsg__v_sogi , _vsc1_sogi_qsg__IN_VGRID , & _vsc1_sogi_qsg__v_alpha , & _vsc1_sogi_qsg__v_beta , & _vsc1_sogi_qsg__v_freq ) ;
        executeSOGI ( & _vsc1_sogi_qsg__i_sogi , _vsc1_sogi_qsg__IN_IL2 , & _vsc1_sogi_qsg__i_alpha , & _vsc1_sogi_qsg__i_beta , & _vsc1_sogi_qsg__i_freq ) ;
        _vsc1_sogi_qsg__OUT_V = _vsc1_sogi_qsg__v_alpha ;
        _vsc1_sogi_qsg__OUT_V_QUAD = _vsc1_sogi_qsg__v_beta ;
        _vsc1_sogi_qsg__OUT_I = _vsc1_sogi_qsg__i_alpha ;
        _vsc1_sogi_qsg__OUT_I_QUAD = _vsc1_sogi_qsg__i_beta ;
        _vsc1_sogi_qsg__OUT_OMEGA = _vsc1_sogi_qsg__v_freq ;
    }
    // Generated from the component: VSC1.LPF.Internal filter
    _vsc1_lpf_internal_filter__fc = _vsc1_fc__out;
    _vsc1_lpf_internal_filter__u = _vsc1_rt61_output__out;
    if (_vsc1_lpf_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _vsc1_lpf_internal_filter__y_next = _vsc1_lpf_internal_filter__u ;
            _vsc1_lpf_internal_filter__i = 0 ;
            _vsc1_lpf_internal_filter__A = 2 / 0.0001 ;
            _vsc1_lpf_internal_filter__wc = 2 * _vsc1_lpf_internal_filter__fc * M_PI ;
            _vsc1_lpf_internal_filter__ws = _vsc1_lpf_internal_filter__wc * 0.0 ;
            for ( _vsc1_lpf_internal_filter__i = 0 ; _vsc1_lpf_internal_filter__i < 2 ; _vsc1_lpf_internal_filter__i ++ )     {
                _vsc1_lpf_internal_filter__y_old [ _vsc1_lpf_internal_filter__i ] = 0 ;
                _vsc1_lpf_internal_filter__y_old_2 [ _vsc1_lpf_internal_filter__i ] = 0 ;
                _vsc1_lpf_internal_filter__u_old [ _vsc1_lpf_internal_filter__i ] = 0 ;
                _vsc1_lpf_internal_filter__u_old_2 [ _vsc1_lpf_internal_filter__i ] = 0 ;
            }
            for ( _vsc1_lpf_internal_filter__i = 0 ; _vsc1_lpf_internal_filter__i < 0 ; _vsc1_lpf_internal_filter__i ++ )     {
                _vsc1_lpf_internal_filter__a0c [ _vsc1_lpf_internal_filter__i ] = 0 ;
                _vsc1_lpf_internal_filter__b0c [ _vsc1_lpf_internal_filter__i ] = 0 ;
                _vsc1_lpf_internal_filter__b1c [ _vsc1_lpf_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _vsc1_lpf_internal_filter__load_ic = 0;
    }
    {
        _vsc1_lpf_internal_filter__wc = 2 * _vsc1_lpf_internal_filter__fc * M_PI ;
        _vsc1_lpf_internal_filter__ws = _vsc1_lpf_internal_filter__wc * 0.0 ;
        _vsc1_lpf_internal_filter__y_next = _vsc1_lpf_internal_filter__u ;
        for ( _vsc1_lpf_internal_filter__i = 1 ; _vsc1_lpf_internal_filter__i <= ( 2 / 2 ) ; _vsc1_lpf_internal_filter__i ++ )     {
            _vsc1_lpf_internal_filter__y = ( 1 / ( 1 * _vsc1_lpf_internal_filter__A * _vsc1_lpf_internal_filter__A + - 2 * _vsc1_lpf_internal_filter__wc * cos ( ( ( 2 * _vsc1_lpf_internal_filter__i + 2 - 1 ) * M_PI ) / ( 2 * 2 ) ) * _vsc1_lpf_internal_filter__A + _vsc1_lpf_internal_filter__wc * _vsc1_lpf_internal_filter__wc ) ) * ( _vsc1_lpf_internal_filter__y_next * ( 0 * _vsc1_lpf_internal_filter__A * _vsc1_lpf_internal_filter__A + 0 * _vsc1_lpf_internal_filter__A + _vsc1_lpf_internal_filter__wc * _vsc1_lpf_internal_filter__wc ) + _vsc1_lpf_internal_filter__u_old [ _vsc1_lpf_internal_filter__i ] * ( - 2 * 0 * _vsc1_lpf_internal_filter__A * _vsc1_lpf_internal_filter__A + 2 * _vsc1_lpf_internal_filter__wc * _vsc1_lpf_internal_filter__wc ) + _vsc1_lpf_internal_filter__u_old_2 [ _vsc1_lpf_internal_filter__i ] * ( 0 * _vsc1_lpf_internal_filter__A * _vsc1_lpf_internal_filter__A - _vsc1_lpf_internal_filter__A * 0 + _vsc1_lpf_internal_filter__wc * _vsc1_lpf_internal_filter__wc ) - _vsc1_lpf_internal_filter__y_old [ _vsc1_lpf_internal_filter__i ] * ( - 2 * 1 * _vsc1_lpf_internal_filter__A * _vsc1_lpf_internal_filter__A + 2 * _vsc1_lpf_internal_filter__wc * _vsc1_lpf_internal_filter__wc ) - _vsc1_lpf_internal_filter__y_old_2 [ _vsc1_lpf_internal_filter__i ] * ( 1 * _vsc1_lpf_internal_filter__A * _vsc1_lpf_internal_filter__A - _vsc1_lpf_internal_filter__A * - 2 * _vsc1_lpf_internal_filter__wc * cos ( ( ( 2 * _vsc1_lpf_internal_filter__i + 2 - 1 ) * M_PI ) / ( 2 * 2 ) ) + _vsc1_lpf_internal_filter__wc * _vsc1_lpf_internal_filter__wc ) ) ;
            _vsc1_lpf_internal_filter__y_old_2 [ _vsc1_lpf_internal_filter__i ] = _vsc1_lpf_internal_filter__y_old [ _vsc1_lpf_internal_filter__i ] ;
            _vsc1_lpf_internal_filter__y_old [ _vsc1_lpf_internal_filter__i ] = _vsc1_lpf_internal_filter__y ;
            _vsc1_lpf_internal_filter__u_old_2 [ _vsc1_lpf_internal_filter__i ] = _vsc1_lpf_internal_filter__u_old [ _vsc1_lpf_internal_filter__i ] ;
            _vsc1_lpf_internal_filter__u_old [ _vsc1_lpf_internal_filter__i ] = _vsc1_lpf_internal_filter__y_next ;
            _vsc1_lpf_internal_filter__y_next = _vsc1_lpf_internal_filter__y ;
        }
        _vsc1_lpf_internal_filter__y = 1 * _vsc1_lpf_internal_filter__y_next ;
    }
    // Generated from the component: VSC2.SOGI_QSG
    _vsc2_sogi_qsg__IN_IL2 = _vsc2_rt42_output__out;
    _vsc2_sogi_qsg__IN_VGRID = _vsc2_rt43_output__out;
    {
        executeSOGI ( & _vsc2_sogi_qsg__v_sogi , _vsc2_sogi_qsg__IN_VGRID , & _vsc2_sogi_qsg__v_alpha , & _vsc2_sogi_qsg__v_beta , & _vsc2_sogi_qsg__v_freq ) ;
        executeSOGI ( & _vsc2_sogi_qsg__i_sogi , _vsc2_sogi_qsg__IN_IL2 , & _vsc2_sogi_qsg__i_alpha , & _vsc2_sogi_qsg__i_beta , & _vsc2_sogi_qsg__i_freq ) ;
        _vsc2_sogi_qsg__OUT_V = _vsc2_sogi_qsg__v_alpha ;
        _vsc2_sogi_qsg__OUT_V_QUAD = _vsc2_sogi_qsg__v_beta ;
        _vsc2_sogi_qsg__OUT_I = _vsc2_sogi_qsg__i_alpha ;
        _vsc2_sogi_qsg__OUT_I_QUAD = _vsc2_sogi_qsg__i_beta ;
        _vsc2_sogi_qsg__OUT_OMEGA = _vsc2_sogi_qsg__v_freq ;
    }
    // Generated from the component: VSC2.LPF.Internal filter
    _vsc2_lpf_internal_filter__fc = _vsc2_fc__out;
    _vsc2_lpf_internal_filter__u = _vsc2_rt61_output__out;
    if (_vsc2_lpf_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _vsc2_lpf_internal_filter__y_next = _vsc2_lpf_internal_filter__u ;
            _vsc2_lpf_internal_filter__i = 0 ;
            _vsc2_lpf_internal_filter__A = 2 / 0.0001 ;
            _vsc2_lpf_internal_filter__wc = 2 * _vsc2_lpf_internal_filter__fc * M_PI ;
            _vsc2_lpf_internal_filter__ws = _vsc2_lpf_internal_filter__wc * 0.0 ;
            for ( _vsc2_lpf_internal_filter__i = 0 ; _vsc2_lpf_internal_filter__i < 2 ; _vsc2_lpf_internal_filter__i ++ )     {
                _vsc2_lpf_internal_filter__y_old [ _vsc2_lpf_internal_filter__i ] = 0 ;
                _vsc2_lpf_internal_filter__y_old_2 [ _vsc2_lpf_internal_filter__i ] = 0 ;
                _vsc2_lpf_internal_filter__u_old [ _vsc2_lpf_internal_filter__i ] = 0 ;
                _vsc2_lpf_internal_filter__u_old_2 [ _vsc2_lpf_internal_filter__i ] = 0 ;
            }
            for ( _vsc2_lpf_internal_filter__i = 0 ; _vsc2_lpf_internal_filter__i < 0 ; _vsc2_lpf_internal_filter__i ++ )     {
                _vsc2_lpf_internal_filter__a0c [ _vsc2_lpf_internal_filter__i ] = 0 ;
                _vsc2_lpf_internal_filter__b0c [ _vsc2_lpf_internal_filter__i ] = 0 ;
                _vsc2_lpf_internal_filter__b1c [ _vsc2_lpf_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _vsc2_lpf_internal_filter__load_ic = 0;
    }
    {
        _vsc2_lpf_internal_filter__wc = 2 * _vsc2_lpf_internal_filter__fc * M_PI ;
        _vsc2_lpf_internal_filter__ws = _vsc2_lpf_internal_filter__wc * 0.0 ;
        _vsc2_lpf_internal_filter__y_next = _vsc2_lpf_internal_filter__u ;
        for ( _vsc2_lpf_internal_filter__i = 1 ; _vsc2_lpf_internal_filter__i <= ( 2 / 2 ) ; _vsc2_lpf_internal_filter__i ++ )     {
            _vsc2_lpf_internal_filter__y = ( 1 / ( 1 * _vsc2_lpf_internal_filter__A * _vsc2_lpf_internal_filter__A + - 2 * _vsc2_lpf_internal_filter__wc * cos ( ( ( 2 * _vsc2_lpf_internal_filter__i + 2 - 1 ) * M_PI ) / ( 2 * 2 ) ) * _vsc2_lpf_internal_filter__A + _vsc2_lpf_internal_filter__wc * _vsc2_lpf_internal_filter__wc ) ) * ( _vsc2_lpf_internal_filter__y_next * ( 0 * _vsc2_lpf_internal_filter__A * _vsc2_lpf_internal_filter__A + 0 * _vsc2_lpf_internal_filter__A + _vsc2_lpf_internal_filter__wc * _vsc2_lpf_internal_filter__wc ) + _vsc2_lpf_internal_filter__u_old [ _vsc2_lpf_internal_filter__i ] * ( - 2 * 0 * _vsc2_lpf_internal_filter__A * _vsc2_lpf_internal_filter__A + 2 * _vsc2_lpf_internal_filter__wc * _vsc2_lpf_internal_filter__wc ) + _vsc2_lpf_internal_filter__u_old_2 [ _vsc2_lpf_internal_filter__i ] * ( 0 * _vsc2_lpf_internal_filter__A * _vsc2_lpf_internal_filter__A - _vsc2_lpf_internal_filter__A * 0 + _vsc2_lpf_internal_filter__wc * _vsc2_lpf_internal_filter__wc ) - _vsc2_lpf_internal_filter__y_old [ _vsc2_lpf_internal_filter__i ] * ( - 2 * 1 * _vsc2_lpf_internal_filter__A * _vsc2_lpf_internal_filter__A + 2 * _vsc2_lpf_internal_filter__wc * _vsc2_lpf_internal_filter__wc ) - _vsc2_lpf_internal_filter__y_old_2 [ _vsc2_lpf_internal_filter__i ] * ( 1 * _vsc2_lpf_internal_filter__A * _vsc2_lpf_internal_filter__A - _vsc2_lpf_internal_filter__A * - 2 * _vsc2_lpf_internal_filter__wc * cos ( ( ( 2 * _vsc2_lpf_internal_filter__i + 2 - 1 ) * M_PI ) / ( 2 * 2 ) ) + _vsc2_lpf_internal_filter__wc * _vsc2_lpf_internal_filter__wc ) ) ;
            _vsc2_lpf_internal_filter__y_old_2 [ _vsc2_lpf_internal_filter__i ] = _vsc2_lpf_internal_filter__y_old [ _vsc2_lpf_internal_filter__i ] ;
            _vsc2_lpf_internal_filter__y_old [ _vsc2_lpf_internal_filter__i ] = _vsc2_lpf_internal_filter__y ;
            _vsc2_lpf_internal_filter__u_old_2 [ _vsc2_lpf_internal_filter__i ] = _vsc2_lpf_internal_filter__u_old [ _vsc2_lpf_internal_filter__i ] ;
            _vsc2_lpf_internal_filter__u_old [ _vsc2_lpf_internal_filter__i ] = _vsc2_lpf_internal_filter__y_next ;
            _vsc2_lpf_internal_filter__y_next = _vsc2_lpf_internal_filter__y ;
        }
        _vsc2_lpf_internal_filter__y = 1 * _vsc2_lpf_internal_filter__y_next ;
    }
    // Generated from the component: VSC1.DROOP_CONTROLLER2
    _vsc1_droop_controller2__IN_ENABLE = _vsc1_constant19__out;
    _vsc1_droop_controller2__IN_I_DIR = _vsc1_sogi_qsg__OUT_I;
    _vsc1_droop_controller2__IN_I_QUAD = _vsc1_sogi_qsg__OUT_I_QUAD;
    _vsc1_droop_controller2__IN_KI = _vsc1_ki__out;
    _vsc1_droop_controller2__IN_KV = _vsc1_kv__out;
    _vsc1_droop_controller2__IN_MICROGRID_STATUS = _vsc1_rt83_output__out;
    _vsc1_droop_controller2__IN_P0 = _vsc1_rt80_output__out;
    _vsc1_droop_controller2__IN_Q0 = _vsc1_rt81_output__out;
    _vsc1_droop_controller2__IN_V_DIR = _vsc1_sogi_qsg__OUT_V;
    _vsc1_droop_controller2__IN_V_QUAD = _vsc1_sogi_qsg__OUT_V_QUAD;
    {
        if ( _vsc1_droop_controller2__IN_ENABLE == 1 )     {
            if ( _vsc1_droop_controller2__IN_MICROGRID_STATUS == 1 )         {
                setStatus ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__TIED ) ;
                if ( _vsc1_droop_controller2__IN_P0 > _vsc1_droop_controller2__p_ref ) _vsc1_droop_controller2__p_ref += 2 ;
                if ( _vsc1_droop_controller2__IN_P0 < _vsc1_droop_controller2__p_ref ) _vsc1_droop_controller2__p_ref -= 2 ;
                if ( _vsc1_droop_controller2__IN_Q0 > _vsc1_droop_controller2__q_ref ) _vsc1_droop_controller2__q_ref += 2 ;
                if ( _vsc1_droop_controller2__IN_Q0 < _vsc1_droop_controller2__q_ref ) _vsc1_droop_controller2__q_ref -= 2 ;
                setP0 ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__p_ref ) ;
                setQ0 ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__q_ref ) ;
            }
            else         {
                setStatus ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__ISLANDED ) ;
                setP0 ( & _vsc1_droop_controller2__droop , 0 ) ;
                setQ0 ( & _vsc1_droop_controller2__droop , 0 ) ;
            }
            executeDroop ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__IN_V_DIR , _vsc1_droop_controller2__IN_V_QUAD , _vsc1_droop_controller2__IN_I_DIR , _vsc1_droop_controller2__IN_I_QUAD , & _vsc1_droop_controller2__v , & _vsc1_droop_controller2__p , & _vsc1_droop_controller2__q ) ;
            setKi ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__IN_KI ) ;
            setKv ( & _vsc1_droop_controller2__droop , _vsc1_droop_controller2__IN_KV ) ;
            _vsc1_droop_controller2__OUT_V = _vsc1_droop_controller2__v ;
            _vsc1_droop_controller2__OUT_PF = _vsc1_droop_controller2__p ;
            _vsc1_droop_controller2__OUT_QF = _vsc1_droop_controller2__q ;
        }
        else     {
            _vsc1_droop_controller2__OUT_V = 0 ;
            _vsc1_droop_controller2__OUT_PF = 0 ;
            _vsc1_droop_controller2__OUT_QF = 0 ;
        }
    }
    // Generated from the component: VSC1.APF
    _vsc1_apf__IN_IL2_F = _vsc1_lpf_internal_filter__y;
    {
        executeAllPassFilter ( & _vsc1_apf__apf , _vsc1_apf__IN_IL2_F , & _vsc1_apf__output ) ;
        _vsc1_apf__OUT_IL2_PC = _vsc1_apf__output ;
    }
    // Generated from the component: VSC1.IL2_F
    HIL_OutAO(0x401d, (float)_vsc1_lpf_internal_filter__y);
    // Generated from the component: VSC2.DROOP_CONTROLLER2
    _vsc2_droop_controller2__IN_ENABLE = _vsc2_constant19__out;
    _vsc2_droop_controller2__IN_I_DIR = _vsc2_sogi_qsg__OUT_I;
    _vsc2_droop_controller2__IN_I_QUAD = _vsc2_sogi_qsg__OUT_I_QUAD;
    _vsc2_droop_controller2__IN_KI = _vsc2_ki__out;
    _vsc2_droop_controller2__IN_KV = _vsc2_kv__out;
    _vsc2_droop_controller2__IN_MICROGRID_STATUS = _vsc2_rt83_output__out;
    _vsc2_droop_controller2__IN_P0 = _vsc2_rt80_output__out;
    _vsc2_droop_controller2__IN_Q0 = _vsc2_rt81_output__out;
    _vsc2_droop_controller2__IN_V_DIR = _vsc2_sogi_qsg__OUT_V;
    _vsc2_droop_controller2__IN_V_QUAD = _vsc2_sogi_qsg__OUT_V_QUAD;
    {
        if ( _vsc2_droop_controller2__IN_ENABLE == 1 )     {
            if ( _vsc2_droop_controller2__IN_MICROGRID_STATUS == 1 )         {
                setStatus ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__TIED ) ;
                if ( _vsc2_droop_controller2__IN_P0 > _vsc2_droop_controller2__p_ref ) _vsc2_droop_controller2__p_ref += 2 ;
                if ( _vsc2_droop_controller2__IN_P0 < _vsc2_droop_controller2__p_ref ) _vsc2_droop_controller2__p_ref -= 2 ;
                if ( _vsc2_droop_controller2__IN_Q0 > _vsc2_droop_controller2__q_ref ) _vsc2_droop_controller2__q_ref += 2 ;
                if ( _vsc2_droop_controller2__IN_Q0 < _vsc2_droop_controller2__q_ref ) _vsc2_droop_controller2__q_ref -= 2 ;
                setP0 ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__p_ref ) ;
                setQ0 ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__q_ref ) ;
            }
            else         {
                setStatus ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__ISLANDED ) ;
                setP0 ( & _vsc2_droop_controller2__droop , 0 ) ;
                setQ0 ( & _vsc2_droop_controller2__droop , 0 ) ;
            }
            executeDroop ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__IN_V_DIR , _vsc2_droop_controller2__IN_V_QUAD , _vsc2_droop_controller2__IN_I_DIR , _vsc2_droop_controller2__IN_I_QUAD , & _vsc2_droop_controller2__v , & _vsc2_droop_controller2__p , & _vsc2_droop_controller2__q ) ;
            setKi ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__IN_KI ) ;
            setKv ( & _vsc2_droop_controller2__droop , _vsc2_droop_controller2__IN_KV ) ;
            _vsc2_droop_controller2__OUT_V = _vsc2_droop_controller2__v ;
            _vsc2_droop_controller2__OUT_PF = _vsc2_droop_controller2__p ;
            _vsc2_droop_controller2__OUT_QF = _vsc2_droop_controller2__q ;
        }
        else     {
            _vsc2_droop_controller2__OUT_V = 0 ;
            _vsc2_droop_controller2__OUT_PF = 0 ;
            _vsc2_droop_controller2__OUT_QF = 0 ;
        }
    }
    // Generated from the component: VSC2.APF
    _vsc2_apf__IN_IL2_F = _vsc2_lpf_internal_filter__y;
    {
        executeAllPassFilter ( & _vsc2_apf__apf , _vsc2_apf__IN_IL2_F , & _vsc2_apf__output ) ;
        _vsc2_apf__OUT_IL2_PC = _vsc2_apf__output ;
    }
    // Generated from the component: VSC2.IL2_F
    HIL_OutAO(0x4033, (float)_vsc2_lpf_internal_filter__y);
    // Generated from the component: VSC1.PF
    HIL_OutAO(0x402a, (float)_vsc1_droop_controller2__OUT_PF);
    // Generated from the component: VSC1.QF
    HIL_OutAO(0x402b, (float)_vsc1_droop_controller2__OUT_QF);
    // Generated from the component: VSC1.V
    HIL_OutAO(0x402e, (float)_vsc1_droop_controller2__OUT_V);
    // Generated from the component: VSC1.IL2_PC
    HIL_OutAO(0x401e, (float)_vsc1_apf__OUT_IL2_PC);
    // Generated from the component: VSC1.VIRTUAL_IMPEDANCE
    _vsc1_virtual_impedance__IN_IL2_PC = _vsc1_apf__OUT_IL2_PC;
    _vsc1_virtual_impedance__IN_VIRTUAL_INDUCTANCE = _vsc1_vz__out;
    {
        setInductance ( & _vsc1_virtual_impedance__vz , 1e-3 * _vsc1_virtual_impedance__IN_VIRTUAL_INDUCTANCE ) ;
        executeVirtualImpedance ( & _vsc1_virtual_impedance__vz , _vsc1_virtual_impedance__IN_IL2_PC , & _vsc1_virtual_impedance__output ) ;
        _vsc1_virtual_impedance__OUT_VL_DROP = _vsc1_virtual_impedance__output ;
    }
    // Generated from the component: VSC2.PF
    HIL_OutAO(0x4040, (float)_vsc2_droop_controller2__OUT_PF);
    // Generated from the component: VSC2.QF
    HIL_OutAO(0x4041, (float)_vsc2_droop_controller2__OUT_QF);
    // Generated from the component: VSC2.V
    HIL_OutAO(0x4044, (float)_vsc2_droop_controller2__OUT_V);
    // Generated from the component: VSC2.IL2_PC
    HIL_OutAO(0x4034, (float)_vsc2_apf__OUT_IL2_PC);
    // Generated from the component: VSC2.VIRTUAL_IMPEDANCE
    _vsc2_virtual_impedance__IN_IL2_PC = _vsc2_apf__OUT_IL2_PC;
    _vsc2_virtual_impedance__IN_VIRTUAL_INDUCTANCE = _vsc2_vz__out;
    {
        setInductance ( & _vsc2_virtual_impedance__vz , 1e-3 * _vsc2_virtual_impedance__IN_VIRTUAL_INDUCTANCE ) ;
        executeVirtualImpedance ( & _vsc2_virtual_impedance__vz , _vsc2_virtual_impedance__IN_IL2_PC , & _vsc2_virtual_impedance__output ) ;
        _vsc2_virtual_impedance__OUT_VL_DROP = _vsc2_virtual_impedance__output ;
    }
    // Generated from the component: VSC1.VL_DROP
    HIL_OutAO(0x402f, (float)_vsc1_virtual_impedance__OUT_VL_DROP);
    // Generated from the component: VSC1.VOLTAGE_CONTROLLER
    _vsc1_voltage_controller__IN_ENABLE = _vsc1_constant13__out;
    _vsc1_voltage_controller__IN_VC = _vsc1_rt19_output__out;
    _vsc1_voltage_controller__IN_VL_DROP = _vsc1_virtual_impedance__OUT_VL_DROP;
    _vsc1_voltage_controller__IN_V_REF = _vsc1_droop_controller2__OUT_V;
    {
        if ( _vsc1_voltage_controller__IN_ENABLE == 1 )     {
            _vsc1_voltage_controller__ref0 = _vsc1_voltage_controller__IN_V_REF - _vsc1_voltage_controller__IN_VL_DROP ;
            executeResonant ( & _vsc1_voltage_controller__rc0 , _vsc1_voltage_controller__ref0 , _vsc1_voltage_controller__IN_VC , & _vsc1_voltage_controller__u0 , & _vsc1_voltage_controller__err0 ) ;
            _vsc1_voltage_controller__u = _vsc1_voltage_controller__u0 ;
            _vsc1_voltage_controller__OUT_V_CTRL = _vsc1_voltage_controller__u ;
            _vsc1_voltage_controller__OUT_V_REF = _vsc1_voltage_controller__ref0 ;
        }
        else     {
            _vsc1_voltage_controller__OUT_V_CTRL = 0 ;
            _vsc1_voltage_controller__OUT_V_REF = 0 ;
        }
    }
    // Generated from the component: VSC2.VL_DROP
    HIL_OutAO(0x4045, (float)_vsc2_virtual_impedance__OUT_VL_DROP);
    // Generated from the component: VSC2.VOLTAGE_CONTROLLER
    _vsc2_voltage_controller__IN_ENABLE = _vsc2_constant13__out;
    _vsc2_voltage_controller__IN_VC = _vsc2_rt19_output__out;
    _vsc2_voltage_controller__IN_VL_DROP = _vsc2_virtual_impedance__OUT_VL_DROP;
    _vsc2_voltage_controller__IN_V_REF = _vsc2_droop_controller2__OUT_V;
    {
        if ( _vsc2_voltage_controller__IN_ENABLE == 1 )     {
            _vsc2_voltage_controller__ref0 = _vsc2_voltage_controller__IN_V_REF - _vsc2_voltage_controller__IN_VL_DROP ;
            executeResonant ( & _vsc2_voltage_controller__rc0 , _vsc2_voltage_controller__ref0 , _vsc2_voltage_controller__IN_VC , & _vsc2_voltage_controller__u0 , & _vsc2_voltage_controller__err0 ) ;
            _vsc2_voltage_controller__u = _vsc2_voltage_controller__u0 ;
            _vsc2_voltage_controller__OUT_V_CTRL = _vsc2_voltage_controller__u ;
            _vsc2_voltage_controller__OUT_V_REF = _vsc2_voltage_controller__ref0 ;
        }
        else     {
            _vsc2_voltage_controller__OUT_V_CTRL = 0 ;
            _vsc2_voltage_controller__OUT_V_REF = 0 ;
        }
    }
    // Generated from the component: VSC1.REF_IL1
    HIL_OutAO(0x402c, (float)_vsc1_voltage_controller__OUT_V_CTRL);
    // Generated from the component: VSC1.REF_VC
    HIL_OutAO(0x402d, (float)_vsc1_voltage_controller__OUT_V_REF);
    // Generated from the component: VSC1.RT30.Input
    _vsc1_rt30_output__state = _vsc1_voltage_controller__OUT_V_CTRL;
    // Generated from the component: VSC2.REF_IL1
    HIL_OutAO(0x4042, (float)_vsc2_voltage_controller__OUT_V_CTRL);
    // Generated from the component: VSC2.REF_VC
    HIL_OutAO(0x4043, (float)_vsc2_voltage_controller__OUT_V_REF);
    // Generated from the component: VSC2.RT30.Input
    _vsc2_rt30_output__state = _vsc2_voltage_controller__OUT_V_CTRL;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: VSC1.SOGI_QSG
    // Generated from the component: VSC1.LPF.Internal filter
    // Generated from the component: VSC2.SOGI_QSG
    // Generated from the component: VSC2.LPF.Internal filter
    // Generated from the component: VSC1.DROOP_CONTROLLER2
    // Generated from the component: VSC1.APF
    // Generated from the component: VSC2.DROOP_CONTROLLER2
    // Generated from the component: VSC2.APF
    // Generated from the component: VSC1.VIRTUAL_IMPEDANCE
    // Generated from the component: VSC2.VIRTUAL_IMPEDANCE
    // Generated from the component: VSC1.VOLTAGE_CONTROLLER
    // Generated from the component: VSC2.VOLTAGE_CONTROLLER
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------