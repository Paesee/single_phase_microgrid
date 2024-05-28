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


#include "sogi_qsg.h"

#include "droop.h"

#include "rms.h"

#include "resonant_control.h"


#include "power_control.h"

#include "sogi_qsg.h"

#include "rms.h"

#include "resonant_control.h"



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
























































const float   _droop_controller__V0 = 220;
const float   _droop_controller__W0 = 376.9911;
const float   _droop_controller__DELTA_V = 10;
const float   _droop_controller__DELTA_W = 3.141592;
const float   _droop_controller__TWOPI = 6.2831;
struct _droop_controller__Droop {
    float  p_max ;

    float  q_max ;

    float  p_ref ;

    float  q_ref ;

    float  v0 ;

    float  w0 ;

    float  m ;

    float  n ;

    float  last_pf_meas ;

    float  last_qf_meas ;

    float  delta_v ;

    float  delta_w ;
}  ;
struct _droop_controller__Droop  _droop_controller__droop;
float  _droop_controller__p = 0;
float  _droop_controller__q = 0;
float  _droop_controller__v_ref = 0;
float  _droop_controller__w_ref = 0;

struct _pi_controller_vsc2__PowerControl {
    float  p_ref ;

    float  q_ref ;

    float  last_p_error ;

    float  last_i_direct ;

    float  last_q_error ;

    float  last_i_quad ;

    float  last_pf_meas ;

    float  last_qf_meas ;

    float  last_p_meas ;

    float  last_q_meas ;
}  ;
struct _pi_controller_vsc2__PowerControl  _pi_controller_vsc2__pc;
float  _pi_controller_vsc2__p_ref = 0;
float  _pi_controller_vsc2__q_ref = 0;
float  _pi_controller_vsc2__id = 0;
float  _pi_controller_vsc2__iq = 0;
float  _pi_controller_vsc2__p = 0;
float  _pi_controller_vsc2__q = 0;








struct _voltage_controller_vsc1__ResonantController {
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
struct _voltage_controller_vsc1__ResonantController  _voltage_controller_vsc1__rc0;
float  _voltage_controller_vsc1__u0 = 0;
float  _voltage_controller_vsc1__ref0 = 0;
float  _voltage_controller_vsc1__err0 = 0;
float  _voltage_controller_vsc1__theta0 = 0;
float  _voltage_controller_vsc1__TWOPI = 0;
float  _voltage_controller_vsc1__omega0 = 0;
float  _voltage_controller_vsc1__TS_05KHZ = 0;
float  _voltage_controller_vsc1__SQRT2 = 0;






float  _current_controller_vsc1__err = 0;
float  _current_controller_vsc1__u = 0;
float  _current_controller_vsc1__KP = 0;



struct _sogi_qsg_vsc1__SOGIqsg {
    float  w0 ;

    float  last_alpha_signal ;

    float  last_beta_signal ;

    float  last_w_meas ;

    float  last_w ;

    float  proportional_gain ;

    float  fll_gain ;
}  ;
struct _sogi_qsg_vsc1__SOGIqsg  _sogi_qsg_vsc1__v_sogi;
float  _sogi_qsg_vsc1__v_alpha = 0;
float  _sogi_qsg_vsc1__v_beta = 0;
float  _sogi_qsg_vsc1__v_freq = 60;
struct _sogi_qsg_vsc1__SOGIqsg  _sogi_qsg_vsc1__i_sogi;
float  _sogi_qsg_vsc1__i_alpha = 0;
float  _sogi_qsg_vsc1__i_beta = 0;
float  _sogi_qsg_vsc1__i_freq = 60;




struct _sogi_qsg_vsc2__SOGIqsg {
    float  w0 ;

    float  last_alpha_signal ;

    float  last_beta_signal ;

    float  last_w_meas ;

    float  last_w ;

    float  proportional_gain ;

    float  fll_gain ;
}  ;
struct _sogi_qsg_vsc2__SOGIqsg  _sogi_qsg_vsc2__v_sogi;
float  _sogi_qsg_vsc2__v_alpha = 0;
float  _sogi_qsg_vsc2__v_beta = 0;
float  _sogi_qsg_vsc2__v_freq = 60;
struct _sogi_qsg_vsc2__SOGIqsg  _sogi_qsg_vsc2__i_sogi;
float  _sogi_qsg_vsc2__i_alpha = 0;
float  _sogi_qsg_vsc2__i_beta = 0;
float  _sogi_qsg_vsc2__i_freq = 60;






#define _grid_vsp_sin1_tdf_sg_ctrl_sine1__no_of_points 1000
#define _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int40 (1099511627775)
#define _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int32 (4294967295)



















struct _rms_calculator_vsc1__CircularBuffer {
    float  *_rms_calculator_vsc1__buff ;

    int  size ;

    int  start ;

    int  end ;

    int  count ;
}  ;
struct _rms_calculator_vsc1__RMSCalculator {
    struct _rms_calculator_vsc1__CircularBuffer  square_buffer ;

    int  size ;

    float  sum ;
}  ;
struct _rms_calculator_vsc1__RMSCalculator  _rms_calculator_vsc1__v_rms_calc;
int  _rms_calculator_vsc1__v_size = 167;
float  _rms_calculator_vsc1__v_rms = 0;








struct _rms_calculator_vsc2__CircularBuffer {
    float  *_rms_calculator_vsc2__buff ;

    int  size ;

    int  start ;

    int  end ;

    int  count ;
}  ;
struct _rms_calculator_vsc2__RMSCalculator {
    struct _rms_calculator_vsc2__CircularBuffer  square_buffer ;

    int  size ;

    float  sum ;
}  ;
struct _rms_calculator_vsc2__RMSCalculator  _rms_calculator_vsc2__v_rms_calc;
int  _rms_calculator_vsc2__v_size = 167;
float  _rms_calculator_vsc2__v_rms = 0;







float  _trig_function_calc_vsc1__peak_factor = 0;


float  _trig_function_calc_vsc2__peak_factor = 0;




struct _resonant_controller_vsc2__ResonantController {
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
struct _resonant_controller_vsc2__ResonantController  _resonant_controller_vsc2__rc0;
float  _resonant_controller_vsc2__u0 = 0;
float  _resonant_controller_vsc2__ref0 = 0;
float  _resonant_controller_vsc2__err0 = 0;
struct _resonant_controller_vsc2__ResonantController  _resonant_controller_vsc2__rc3;
float  _resonant_controller_vsc2__u3 = 0;
float  _resonant_controller_vsc2__err3 = 0;
struct _resonant_controller_vsc2__ResonantController  _resonant_controller_vsc2__rc5;
float  _resonant_controller_vsc2__u5 = 0;
float  _resonant_controller_vsc2__err5 = 0;
struct _resonant_controller_vsc2__ResonantController  _resonant_controller_vsc2__rc7;
float  _resonant_controller_vsc2__u7 = 0;
float  _resonant_controller_vsc2__err7 = 0;
struct _resonant_controller_vsc2__ResonantController  _resonant_controller_vsc2__rc9;
float  _resonant_controller_vsc2__u9 = 0;
float  _resonant_controller_vsc2__err9 = 0;
float  _resonant_controller_vsc2__TWOPI = 0;
float  _resonant_controller_vsc2__omega0 = 0;








//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



// const variables

//@cmp.var.start
// variables
double _grid_constant1__out = 0.0;
double _grid_constant2__out = 60.0;
double _grid_vrms__out;
double _i_grid_ia1__out;
double _rt1_output__out;
double _rt10_output__out;
double _rt15_output__out;
double _rt16_output__out;
double _rt17_output__out;
double _rt18_output__out;
double _rt19_output__out;
double _rt21_output__out;
double _rt22_output__out;
double _rt24_output__out;
double _rt27_output__out;
double _rt29_output__out;
double _rt3_output__out;
double _rt30_output__out;
double _rt31_output__out;
double _rt32_output__out;
double _rt34_output__out;
double _rt35_output__out;
double _rt36_output__out;
double _rt37_output__out;
double _rt4_output__out;
double _rt5_output__out;
double _rt6_output__out;
double _rt7_output__out;
double _rt8_output__out;
double _rt9_output__out;
double _sc_enable_grid__out;
double _sc_enable_load__out;
double _sc_enable_vsc1__out;
double _sc_enable_vsc2__out;
double _sc_pref_vsc1__out;
double _sc_pref_vsc2__out;
double _sc_p_load__out;
double _sc_qref_vsc1__out;
double _sc_qref_vsc2__out;
double _sc_q_load__out;
double _vpoi_vsc2_va1__out;
double _vsc1_filter_am_1_ia1__out;
double _vsc1_filter_vm_1_va1__out;
double _vsc2_filter_am_1_ia1__out;
double _vsc2_filter_am_2_ia1__out;
double _vsc2_filter_vm_1_va1__out;
double _v_grid_va1__out;
double _zero__out = 0.0;
double _zero1__out = 0.0;
double _zero2__out = 0.0;
double _grid_vsp_sin1_limit2__out;
double _grid_vsp_sin1_limit1__out;
float _s_vsc2_feedback__tmp;
float _s_vsc1_feedback__tmp;
double _droop_controller__IN_ENABLE;
double _droop_controller__IN_I_DIR;
double _droop_controller__IN_I_QUAD;
double _droop_controller__IN_MICROGRID_STATUS;
double _droop_controller__IN_V_DIR;
double _droop_controller__IN_V_QUAD;

double _droop_controller__OUT_OMEGA_REF;
double _droop_controller__OUT_P;
double _droop_controller__OUT_Q;
double _droop_controller__OUT_V_REF;
double _pi_controller_vsc2__IN_ENABLE;
double _pi_controller_vsc2__IN_I_DIR;
double _pi_controller_vsc2__IN_I_QUAD;
double _pi_controller_vsc2__IN_PREF;
double _pi_controller_vsc2__IN_QREF;
double _pi_controller_vsc2__IN_V_DIR;
double _pi_controller_vsc2__IN_V_QUAD;

double _pi_controller_vsc2__OUT_I_DIR;
double _pi_controller_vsc2__OUT_I_QUAD;
double _pi_controller_vsc2__OUT_P;
double _pi_controller_vsc2__OUT_Q;
float _s_grid_feedback__tmp;
float _s_load_feedback__tmp;
double _voltage_controller_vsc1__IN_ENABLE;
double _voltage_controller_vsc1__IN_MICROGRID_STATUS;
double _voltage_controller_vsc1__IN_OMEGA_REF;
double _voltage_controller_vsc1__IN_VC;
double _voltage_controller_vsc1__IN_VGRID;
double _voltage_controller_vsc1__IN_V_REF;

double _voltage_controller_vsc1__OUT_V_CTRL;
double _voltage_controller_vsc1__OUT_V_REF_CTRL;
double _current_controller_vsc1__IN_ENABLE;
double _current_controller_vsc1__IN_IL1;
double _current_controller_vsc1__IN_MICROGRID_STATUS;
double _current_controller_vsc1__IN_UV;

double _current_controller_vsc1__OUT_PWMA;
double _current_controller_vsc1__OUT_PWMB;
double _sogi_qsg_vsc1__IN_IL2;
double _sogi_qsg_vsc1__IN_VGRID;

double _sogi_qsg_vsc1__OUT_I;
double _sogi_qsg_vsc1__OUT_I_QUAD;
double _sogi_qsg_vsc1__OUT_OMEGA;
double _sogi_qsg_vsc1__OUT_V;
double _sogi_qsg_vsc1__OUT_V_QUAD;
double _sogi_qsg_vsc2__IN_IL2;
double _sogi_qsg_vsc2__IN_VGRID;

double _sogi_qsg_vsc2__OUT_I;
double _sogi_qsg_vsc2__OUT_I_QUAD;
double _sogi_qsg_vsc2__OUT_OMEGA;
double _sogi_qsg_vsc2__OUT_V;
double _sogi_qsg_vsc2__OUT_V_QUAD;
X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__channels[1] = {1};
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
X_UnInt32 _vsc1___gfm_pwm_modulator__channels[2] = {0, 1};
double _vsc1___gfm_pwm_modulator__limited_in[2];
X_UnInt32 _vsc1___gfm_pwm_modulator__update_mask;

double _rms_calculator_vsc1__IN_V;

double _rms_calculator_vsc1__OUT_V_RMS;
double _rms_calculator_vsc2__IN_V;

double _rms_calculator_vsc2__OUT_V_RMS;
double _trig_function_calc_vsc1__IN_V;
double _trig_function_calc_vsc1__IN_VRMS;
double _trig_function_calc_vsc1__IN_V_QUAD;

double _trig_function_calc_vsc1__OUT_COS;
double _trig_function_calc_vsc1__OUT_SIN;
double _trig_function_calc_vsc2__IN_V;
double _trig_function_calc_vsc2__IN_VRMS;
double _trig_function_calc_vsc2__IN_V_QUAD;

double _trig_function_calc_vsc2__OUT_COS;
double _trig_function_calc_vsc2__OUT_SIN;
double _resonant_controller_vsc2__IN_COS;
double _resonant_controller_vsc2__IN_ENABLE;
double _resonant_controller_vsc2__IN_IL2;
double _resonant_controller_vsc2__IN_I_DIR;
double _resonant_controller_vsc2__IN_I_QUAD;
double _resonant_controller_vsc2__IN_SIN;

double _resonant_controller_vsc2__OUT_ERRO;
double _resonant_controller_vsc2__OUT_MEAS;
double _resonant_controller_vsc2__OUT_PWMA;
double _resonant_controller_vsc2__OUT_PWMB;
double _resonant_controller_vsc2__OUT_REFERENCE;
X_UnInt32 _vsc2___gfl_pwm_modulator__channels[2] = {2, 3};
double _vsc2___gfl_pwm_modulator__limited_in[2];
X_UnInt32 _vsc2___gfl_pwm_modulator__update_mask;

//@cmp.var.end

//@cmp.svar.start
// state variables
double _rt1_output__state;
double _rt10_output__state;
double _rt15_output__state;
double _rt16_output__state;
double _rt17_output__state;
double _rt18_output__state;
double _rt19_output__state;
double _rt21_output__state;
double _rt22_output__state;
double _rt24_output__state;
double _rt27_output__state;
double _rt29_output__state;
double _rt3_output__state;
double _rt30_output__state;
double _rt31_output__state;
double _rt32_output__state;
double _rt34_output__state;
double _rt35_output__state;
double _rt36_output__state;
double _rt37_output__state;
double _rt4_output__state;
double _rt5_output__state;
double _rt6_output__state;
double _rt7_output__state;
double _rt8_output__state;
double _rt9_output__state;











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
    _rt1_output__state =  0.0;
    _rt10_output__state =  0.0;
    _rt15_output__state =  0.0;
    _rt16_output__state =  0.0;
    _rt17_output__state =  0.0;
    _rt18_output__state =  0.0;
    _rt19_output__state =  0.0;
    _rt21_output__state =  0.0;
    _rt22_output__state =  0.0;
    _rt24_output__state =  0.0;
    _rt27_output__state =  0.0;
    _rt29_output__state =  0.0;
    _rt3_output__state =  0.0;
    _rt30_output__state =  0.0;
    _rt31_output__state =  0.0;
    _rt32_output__state =  0.0;
    _rt34_output__state =  0.0;
    _rt35_output__state =  0.0;
    _rt36_output__state =  0.0;
    _rt37_output__state =  0.0;
    _rt4_output__state =  0.0;
    _rt5_output__state =  0.0;
    _rt6_output__state =  0.0;
    _rt7_output__state =  0.0;
    _rt8_output__state =  0.0;
    _rt9_output__state =  0.0;
    HIL_OutInt32(141033729, 0x1);
    HIL_OutInt32(136839425, 0x1);
    {
        _droop_controller__p = 0 ;
        _droop_controller__q = 0 ;
        _droop_controller__v_ref = 0 ;
        _droop_controller__w_ref = 0 ;
        DroopControlInit ( & _droop_controller__droop , 15000 , 7500 , _droop_controller__V0 , _droop_controller__W0 , _droop_controller__DELTA_V , _droop_controller__DELTA_W ) ;
    }
    {
        _pi_controller_vsc2__p_ref = 0 ;
        _pi_controller_vsc2__q_ref = 0 ;
        _pi_controller_vsc2__id = 0 ;
        _pi_controller_vsc2__iq = 0 ;
        _pi_controller_vsc2__p = 0 ;
        _pi_controller_vsc2__q = 0 ;
        PowerControlInit ( & _pi_controller_vsc2__pc , 0 , 0 ) ;
    }
    HIL_OutInt32(141033728, 0x1);
    HIL_OutInt32(136839424, 0x1);
    {
        _voltage_controller_vsc1__TWOPI = 6.2831 ;
        _voltage_controller_vsc1__omega0 = _voltage_controller_vsc1__TWOPI * 60 ;
        _voltage_controller_vsc1__TS_05KHZ = 0.0002 ;
        _voltage_controller_vsc1__SQRT2 = 1.41421356237 ;
        _voltage_controller_vsc1__u0 = 0 ;
        _voltage_controller_vsc1__ref0 = 0 ;
        _voltage_controller_vsc1__err0 = 0 ;
        _voltage_controller_vsc1__theta0 = 0 ;
        resonantControlInitMatlab ( & _voltage_controller_vsc1__rc0 , 0.04805 , - 0.08974 , 0.04195 , - 1.994 , 0.9998 ) ;
    }
    {
        _current_controller_vsc1__err = 0 ;
        _current_controller_vsc1__u = 0 ;
        _current_controller_vsc1__KP = 0 ;
    }
    HIL_OutAO(0x4003, 0.0f);
    {
        _sogi_qsg_vsc1__v_alpha = 0 ;
        _sogi_qsg_vsc1__v_beta = 0 ;
        _sogi_qsg_vsc1__v_freq = 60 ;
        SOGIInit ( & _sogi_qsg_vsc1__v_sogi , _sogi_qsg_vsc1__v_freq , 0.2 , 0.02 ) ;
        _sogi_qsg_vsc1__i_alpha = 0 ;
        _sogi_qsg_vsc1__i_beta = 0 ;
        _sogi_qsg_vsc1__i_freq = 60 ;
        SOGIInit ( & _sogi_qsg_vsc1__i_sogi , _sogi_qsg_vsc1__i_freq , 0.6 , 0.02 ) ;
    }
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    {
        _sogi_qsg_vsc2__v_alpha = 0 ;
        _sogi_qsg_vsc2__v_beta = 0 ;
        _sogi_qsg_vsc2__v_freq = 60 ;
        SOGIInit ( & _sogi_qsg_vsc2__v_sogi , _sogi_qsg_vsc2__v_freq , 0.2 , 0.02 ) ;
        _sogi_qsg_vsc2__i_alpha = 0 ;
        _sogi_qsg_vsc2__i_beta = 0 ;
        _sogi_qsg_vsc2__i_freq = 60 ;
        SOGIInit ( & _sogi_qsg_vsc2__i_sogi , _sogi_qsg_vsc2__i_freq , 0.6 , 0.02 ) ;
    }
    HIL_OutAO(0x4018, 0.0f);
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
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    _vsc1___gfm_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _vsc1___gfm_pwm_modulator__channels[0], 4000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc1___gfm_pwm_modulator__channels[0], 160);
    HIL_OutInt32(0x2000080 + _vsc1___gfm_pwm_modulator__channels[1], 4000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc1___gfm_pwm_modulator__channels[1], 160);
    HIL_OutInt32(0x20001c0 + _vsc1___gfm_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _vsc1___gfm_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _vsc1___gfm_pwm_modulator__channels[1], 4000);
    HIL_OutInt32(0x2000200 + _vsc1___gfm_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _vsc1___gfm_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _vsc1___gfm_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _vsc1___gfm_pwm_modulator__channels[0], 3);
    HIL_OutInt32(0x2000300 + _vsc1___gfm_pwm_modulator__channels[1], 3);
    HIL_OutInt32(0x2000340 + _vsc1___gfm_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _vsc1___gfm_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _vsc1___gfm_pwm_modulator__update_mask);
    {
        _rms_calculator_vsc1__v_size = 167 ;
        _rms_calculator_vsc1__v_rms = 0 ;
        RMSCalculatorInit ( & _rms_calculator_vsc1__v_rms_calc , _rms_calculator_vsc1__v_size ) ;
    }
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    {
        _rms_calculator_vsc2__v_size = 167 ;
        _rms_calculator_vsc2__v_rms = 0 ;
        RMSCalculatorInit ( & _rms_calculator_vsc2__v_rms_calc , _rms_calculator_vsc2__v_size ) ;
    }
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    {
        _trig_function_calc_vsc1__peak_factor = 0 ;
    }
    HIL_OutAO(0x401b, 0.0f);
    {
        _trig_function_calc_vsc2__peak_factor = 0 ;
    }
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    {
        _resonant_controller_vsc2__TWOPI = 6.2831 ;
        _resonant_controller_vsc2__omega0 = _resonant_controller_vsc2__TWOPI * 60 ;
        _resonant_controller_vsc2__u0 = 0 ;
        _resonant_controller_vsc2__ref0 = 0 ;
        _resonant_controller_vsc2__err0 = 0 ;
        _resonant_controller_vsc2__u3 = 0 ;
        _resonant_controller_vsc2__err3 = 0 ;
        _resonant_controller_vsc2__u5 = 0 ;
        _resonant_controller_vsc2__err5 = 0 ;
        _resonant_controller_vsc2__u7 = 0 ;
        _resonant_controller_vsc2__err7 = 0 ;
        _resonant_controller_vsc2__u9 = 0 ;
        _resonant_controller_vsc2__err9 = 0 ;
        resonantInit ( & _resonant_controller_vsc2__rc0 , 0.11 , 2.12 , 0.000001 , 1 * _resonant_controller_vsc2__omega0 , 0.0001 ) ;
        resonantInit ( & _resonant_controller_vsc2__rc3 , 0.06 , 2.12 , 0.000001 , 3 * _resonant_controller_vsc2__omega0 , 0.0001 ) ;
        resonantInit ( & _resonant_controller_vsc2__rc5 , 0.05 , 2.12 , 0.000001 , 5 * _resonant_controller_vsc2__omega0 , 0.0001 ) ;
        resonantInit ( & _resonant_controller_vsc2__rc7 , 0.04 , 2.12 , 0.000001 , 7 * _resonant_controller_vsc2__omega0 , 0.0001 ) ;
        resonantInit ( & _resonant_controller_vsc2__rc9 , 0.03 , 2.12 , 0.000001 , 9 * _resonant_controller_vsc2__omega0 , 0.0001 ) ;
    }
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    _vsc2___gfl_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _vsc2___gfl_pwm_modulator__channels[0], 4000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc2___gfl_pwm_modulator__channels[0], 160);
    HIL_OutInt32(0x2000080 + _vsc2___gfl_pwm_modulator__channels[1], 4000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _vsc2___gfl_pwm_modulator__channels[1], 160);
    HIL_OutInt32(0x20001c0 + _vsc2___gfl_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _vsc2___gfl_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _vsc2___gfl_pwm_modulator__channels[1], 4000);
    HIL_OutInt32(0x2000200 + _vsc2___gfl_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _vsc2___gfl_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _vsc2___gfl_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _vsc2___gfl_pwm_modulator__channels[0], 3);
    HIL_OutInt32(0x2000300 + _vsc2___gfl_pwm_modulator__channels[1], 3);
    HIL_OutInt32(0x2000340 + _vsc2___gfl_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _vsc2___gfl_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _vsc2___gfl_pwm_modulator__update_mask);
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
    // Generated from the component: GRID.Constant1
    // Generated from the component: GRID.Constant2
    // Generated from the component: ZERO
    // Generated from the component: ZERO2
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: GRID.Vrms
    _grid_vrms__out = XIo_InFloat(0x55000100);
    // Generated from the component: I_GRID.Ia1
    _i_grid_ia1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: RT1.Output
    _rt1_output__out = _rt1_output__state;
    // Generated from the component: RT10.Output
    _rt10_output__out = _rt10_output__state;
    // Generated from the component: RT15.Output
    _rt15_output__out = _rt15_output__state;
    // Generated from the component: RT17.Output
    _rt17_output__out = _rt17_output__state;
    // Generated from the component: RT27.Output
    _rt27_output__out = _rt27_output__state;
    // Generated from the component: RT29.Output
    _rt29_output__out = _rt29_output__state;
    // Generated from the component: RT30.Output
    _rt30_output__out = _rt30_output__state;
    // Generated from the component: RT9.Output
    _rt9_output__out = _rt9_output__state;
    // Generated from the component: VPOI_VSC2.Va1
    _vpoi_vsc2_va1__out = (HIL_InFloat(0xc80000 + 0x204));
    // Generated from the component: VSC1 Filter.am_1.Ia1
    _vsc1_filter_am_1_ia1__out = (HIL_InFloat(0xc80000 + 0x4));
    // Generated from the component: VSC1 Filter.vm_1.Va1
    _vsc1_filter_vm_1_va1__out = (HIL_InFloat(0xc80000 + 0x3));
    // Generated from the component: VSC2 Filter.am_1.Ia1
    _vsc2_filter_am_1_ia1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: VSC2 Filter.am_2.Ia1
    _vsc2_filter_am_2_ia1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: VSC2 Filter.vm_1.Va1
    _vsc2_filter_vm_1_va1__out = (HIL_InFloat(0xc80000 + 0x205));
    // Generated from the component: V_GRID.Va1
    _v_grid_va1__out = (HIL_InFloat(0xc80000 + 0x206));
    // Generated from the component: GRID.Vsp_sin1.Limit2
    _grid_vsp_sin1_limit2__out = MIN(MAX(_grid_constant2__out, 0.1), 10000.0);
    // Generated from the component: GRID.Vsp_sin1.Limit1
    _grid_vsp_sin1_limit1__out = MAX(_grid_vrms__out, 0.0);
    // Generated from the component: S_VCS2.Isw
    HIL_OutInt32(141033729, _rt1_output__out);
    // Generated from the component: S_VSC2_FEEDBACK
    HIL_OutInt32(0xf00403, _rt1_output__out != 0x0);
    // Generated from the component: S_VCS1.Isw
    HIL_OutInt32(136839425, _rt17_output__out);
    // Generated from the component: S_VSC1_FEEDBACK
    HIL_OutInt32(0xf00402, _rt17_output__out != 0x0);
    // Generated from the component: CURRENT_CONTROLLER_VSC1
    _current_controller_vsc1__IN_ENABLE = _rt27_output__out;
    _current_controller_vsc1__IN_IL1 = _vsc1_filter_am_1_ia1__out;
    _current_controller_vsc1__IN_MICROGRID_STATUS = _rt29_output__out;
    _current_controller_vsc1__IN_UV = _rt30_output__out;
    {
        if ( _current_controller_vsc1__IN_ENABLE == 1 )     {
            _current_controller_vsc1__err = _current_controller_vsc1__IN_UV - _current_controller_vsc1__IN_IL1 ;
            _current_controller_vsc1__u = 20 * _current_controller_vsc1__err ;
            _current_controller_vsc1__OUT_PWMA = + _current_controller_vsc1__u ;
            _current_controller_vsc1__OUT_PWMB = - _current_controller_vsc1__u ;
        }
        else     {
            _current_controller_vsc1__OUT_PWMA = 0 ;
            _current_controller_vsc1__OUT_PWMB = 0 ;
        }
    }
    // Generated from the component: IL1_VSC1
    HIL_OutAO(0x4003, (float)_vsc1_filter_am_1_ia1__out);
    // Generated from the component: RT19.Input
    _rt19_output__state = _vsc1_filter_vm_1_va1__out;
    // Generated from the component: SOGI_QSG_VSC1
    _sogi_qsg_vsc1__IN_IL2 = _vsc1_filter_am_1_ia1__out;
    _sogi_qsg_vsc1__IN_VGRID = _vsc1_filter_vm_1_va1__out;
    {
        executeSOGI ( & _sogi_qsg_vsc1__v_sogi , _sogi_qsg_vsc1__IN_VGRID , & _sogi_qsg_vsc1__v_alpha , & _sogi_qsg_vsc1__v_beta , & _sogi_qsg_vsc1__v_freq ) ;
        executeSOGI ( & _sogi_qsg_vsc1__i_sogi , _sogi_qsg_vsc1__IN_IL2 , & _sogi_qsg_vsc1__i_alpha , & _sogi_qsg_vsc1__i_beta , & _sogi_qsg_vsc1__i_freq ) ;
        _sogi_qsg_vsc1__OUT_V = _sogi_qsg_vsc1__v_alpha ;
        _sogi_qsg_vsc1__OUT_V_QUAD = _sogi_qsg_vsc1__v_beta ;
        _sogi_qsg_vsc1__OUT_I = _sogi_qsg_vsc1__i_alpha ;
        _sogi_qsg_vsc1__OUT_I_QUAD = _sogi_qsg_vsc1__i_beta ;
        _sogi_qsg_vsc1__OUT_OMEGA = _sogi_qsg_vsc1__v_freq ;
    }
    // Generated from the component: VC_VSC1
    HIL_OutAO(0x4017, (float)_vsc1_filter_vm_1_va1__out);
    // Generated from the component: IL1_VSC2
    HIL_OutAO(0x4004, (float)_vsc2_filter_am_1_ia1__out);
    // Generated from the component: IL2_VSC2
    HIL_OutAO(0x4005, (float)_vsc2_filter_am_2_ia1__out);
    // Generated from the component: SOGI_QSG_VSC2
    _sogi_qsg_vsc2__IN_IL2 = _vsc2_filter_am_2_ia1__out;
    _sogi_qsg_vsc2__IN_VGRID = _vpoi_vsc2_va1__out;
    {
        executeSOGI ( & _sogi_qsg_vsc2__v_sogi , _sogi_qsg_vsc2__IN_VGRID , & _sogi_qsg_vsc2__v_alpha , & _sogi_qsg_vsc2__v_beta , & _sogi_qsg_vsc2__v_freq ) ;
        executeSOGI ( & _sogi_qsg_vsc2__i_sogi , _sogi_qsg_vsc2__IN_IL2 , & _sogi_qsg_vsc2__i_alpha , & _sogi_qsg_vsc2__i_beta , & _sogi_qsg_vsc2__i_freq ) ;
        _sogi_qsg_vsc2__OUT_V = _sogi_qsg_vsc2__v_alpha ;
        _sogi_qsg_vsc2__OUT_V_QUAD = _sogi_qsg_vsc2__v_beta ;
        _sogi_qsg_vsc2__OUT_I = _sogi_qsg_vsc2__i_alpha ;
        _sogi_qsg_vsc2__OUT_I_QUAD = _sogi_qsg_vsc2__i_beta ;
        _sogi_qsg_vsc2__OUT_OMEGA = _sogi_qsg_vsc2__v_freq ;
    }
    // Generated from the component: VC_VSC2
    HIL_OutAO(0x4018, (float)_vsc2_filter_vm_1_va1__out);
    // Generated from the component: RT21.Input
    _rt21_output__state = _v_grid_va1__out;
    // Generated from the component: RT22.Input
    _rt22_output__state = _zero__out;
    // Generated from the component: RT34.Input
    _rt34_output__state = _zero2__out;
    // Generated from the component: GRID.Vsp_sin1.tdf_sg_ctrl_sine1
    // calculate and write SG parameters
    X_UnInt32 _grid_vsp_sin1_tdf_sg_ctrl_sine1__i;
    _grid_vsp_sin1_tdf_sg_ctrl_sine1__sg_update_value = 0;
    for (_grid_vsp_sin1_tdf_sg_ctrl_sine1__i = 0; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i < 1; _grid_vsp_sin1_tdf_sg_ctrl_sine1__i++) {
        // calculate amplitude
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__gain = _grid_vsp_sin1_limit1__out * M_SQRT2;
        // calculate period
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__period = 1.0f / _grid_vsp_sin1_limit2__out;
        // calculate sample_cnt increment value
        _grid_vsp_sin1_tdf_sg_ctrl_sine1__sample_cnt_inc_real = _grid_vsp_sin1_tdf_sg_ctrl_sine1__max_int40 / (_grid_vsp_sin1_tdf_sg_ctrl_sine1__period / 1e-06);
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
    // Generated from the component: PWMA_VSC1
    HIL_OutAO(0x400c, (float)_current_controller_vsc1__OUT_PWMA);
    // Generated from the component: PWMB_VSC1
    HIL_OutAO(0x400e, (float)_current_controller_vsc1__OUT_PWMB);
    // Generated from the component: VSC1 - GFM.PWM_Modulator
    _vsc1___gfm_pwm_modulator__limited_in[0] = MIN(MAX(_current_controller_vsc1__OUT_PWMA, -1000.0), 1000.0);
    HIL_OutInt32(0x2000040 + _vsc1___gfm_pwm_modulator__channels[0], ((X_UnInt32)((_vsc1___gfm_pwm_modulator__limited_in[0] - (-1000.0)) * 2.0)));
    _vsc1___gfm_pwm_modulator__limited_in[1] = MIN(MAX(_current_controller_vsc1__OUT_PWMB, -1000.0), 1000.0);
    HIL_OutInt32(0x2000040 + _vsc1___gfm_pwm_modulator__channels[1], ((X_UnInt32)((_vsc1___gfm_pwm_modulator__limited_in[1] - (-1000.0)) * 2.0)));
    if (_rt17_output__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc1___gfm_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _vsc1___gfm_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc1___gfm_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _vsc1___gfm_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _vsc1___gfm_pwm_modulator__update_mask);
    // Generated from the component: RMS_CALCULATOR_VSC1
    _rms_calculator_vsc1__IN_V = _sogi_qsg_vsc1__OUT_V;
    {
        add2RMSCalculator ( & _rms_calculator_vsc1__v_rms_calc , _rms_calculator_vsc1__IN_V ) ;
        calculateRMSvalue ( & _rms_calculator_vsc1__v_rms_calc , & _rms_calculator_vsc1__v_rms ) ;
        _rms_calculator_vsc1__OUT_V_RMS = _rms_calculator_vsc1__v_rms ;
    }
    // Generated from the component: RT31.Input
    _rt31_output__state = _sogi_qsg_vsc1__OUT_V_QUAD;
    // Generated from the component: RT32.Input
    _rt32_output__state = _sogi_qsg_vsc1__OUT_I;
    // Generated from the component: RT35.Input
    _rt35_output__state = _sogi_qsg_vsc1__OUT_V;
    // Generated from the component: RT36.Input
    _rt36_output__state = _sogi_qsg_vsc1__OUT_I_QUAD;
    // Generated from the component: I_QUAD_VSC2
    HIL_OutAO(0x4007, (float)_sogi_qsg_vsc2__OUT_I_QUAD);
    // Generated from the component: I_VSC2
    HIL_OutAO(0x4008, (float)_sogi_qsg_vsc2__OUT_I);
    // Generated from the component: OMEGA_VSC2
    HIL_OutAO(0x400b, (float)_sogi_qsg_vsc2__OUT_OMEGA);
    // Generated from the component: RMS_CALCULATOR_VSC2
    _rms_calculator_vsc2__IN_V = _sogi_qsg_vsc2__OUT_V;
    {
        add2RMSCalculator ( & _rms_calculator_vsc2__v_rms_calc , _rms_calculator_vsc2__IN_V ) ;
        calculateRMSvalue ( & _rms_calculator_vsc2__v_rms_calc , & _rms_calculator_vsc2__v_rms ) ;
        _rms_calculator_vsc2__OUT_V_RMS = _rms_calculator_vsc2__v_rms ;
    }
    // Generated from the component: RT16.Input
    _rt16_output__state = _sogi_qsg_vsc2__OUT_V;
    // Generated from the component: RT3.Input
    _rt3_output__state = _sogi_qsg_vsc2__OUT_V_QUAD;
    // Generated from the component: RT4.Input
    _rt4_output__state = _sogi_qsg_vsc2__OUT_I;
    // Generated from the component: RT5.Input
    _rt5_output__state = _sogi_qsg_vsc2__OUT_I_QUAD;
    // Generated from the component: V_QUAD_VSC2
    HIL_OutAO(0x401e, (float)_sogi_qsg_vsc2__OUT_V_QUAD);
    // Generated from the component: V_VSC2
    HIL_OutAO(0x401f, (float)_sogi_qsg_vsc2__OUT_V);
    // Generated from the component: TRIG_FUNCTION_CALC_VSC1
    _trig_function_calc_vsc1__IN_V = _sogi_qsg_vsc1__OUT_V;
    _trig_function_calc_vsc1__IN_VRMS = _rms_calculator_vsc1__OUT_V_RMS;
    _trig_function_calc_vsc1__IN_V_QUAD = _sogi_qsg_vsc1__OUT_V_QUAD;
    {
        if ( _trig_function_calc_vsc1__IN_VRMS <= 0 )     {
            _trig_function_calc_vsc1__peak_factor = - 1 ;
        }
        else     {
            _trig_function_calc_vsc1__peak_factor = 1.0 / ( _trig_function_calc_vsc1__IN_VRMS * 1.4142 ) ;
        }
        _trig_function_calc_vsc1__OUT_SIN = ( _trig_function_calc_vsc1__peak_factor * _trig_function_calc_vsc1__IN_V_QUAD ) ;
        _trig_function_calc_vsc1__OUT_COS = ( _trig_function_calc_vsc1__peak_factor * _trig_function_calc_vsc1__IN_V ) ;
    }
    // Generated from the component: VRMS_VSC1
    HIL_OutAO(0x401b, (float)_rms_calculator_vsc1__OUT_V_RMS);
    // Generated from the component: TRIG_FUNCTION_CALC_VSC2
    _trig_function_calc_vsc2__IN_V = _sogi_qsg_vsc2__OUT_V;
    _trig_function_calc_vsc2__IN_VRMS = _rms_calculator_vsc2__OUT_V_RMS;
    _trig_function_calc_vsc2__IN_V_QUAD = _sogi_qsg_vsc2__OUT_V_QUAD;
    {
        if ( _trig_function_calc_vsc2__IN_VRMS <= 0 )     {
            _trig_function_calc_vsc2__peak_factor = - 1 ;
        }
        else     {
            _trig_function_calc_vsc2__peak_factor = 1.0 / ( _trig_function_calc_vsc2__IN_VRMS * 1.4142 ) ;
        }
        _trig_function_calc_vsc2__OUT_SIN = ( _trig_function_calc_vsc2__peak_factor * _trig_function_calc_vsc2__IN_V_QUAD ) ;
        _trig_function_calc_vsc2__OUT_COS = ( _trig_function_calc_vsc2__peak_factor * _trig_function_calc_vsc2__IN_V ) ;
    }
    // Generated from the component: VPOI_GRID
    HIL_OutAO(0x4019, (float)_rms_calculator_vsc2__OUT_V_RMS);
    // Generated from the component: VRMS_VSC2
    HIL_OutAO(0x401c, (float)_rms_calculator_vsc2__OUT_V_RMS);
    // Generated from the component: COS_VSC2
    HIL_OutAO(0x4000, (float)_trig_function_calc_vsc2__OUT_COS);
    // Generated from the component: RESONANT_CONTROLLER_VSC2
    _resonant_controller_vsc2__IN_COS = _trig_function_calc_vsc2__OUT_COS;
    _resonant_controller_vsc2__IN_ENABLE = _rt15_output__out;
    _resonant_controller_vsc2__IN_IL2 = _vsc2_filter_am_2_ia1__out;
    _resonant_controller_vsc2__IN_I_DIR = _rt9_output__out;
    _resonant_controller_vsc2__IN_I_QUAD = _rt10_output__out;
    _resonant_controller_vsc2__IN_SIN = _trig_function_calc_vsc2__OUT_SIN;
    {
        if ( _resonant_controller_vsc2__IN_ENABLE == 1 )     {
            _resonant_controller_vsc2__ref0 = ( 1.0 / 1.0 ) * ( _resonant_controller_vsc2__IN_I_DIR * _resonant_controller_vsc2__IN_COS - _resonant_controller_vsc2__IN_SIN * - _resonant_controller_vsc2__IN_I_QUAD ) ;
            executeResonant ( & _resonant_controller_vsc2__rc0 , _resonant_controller_vsc2__ref0 , _resonant_controller_vsc2__IN_IL2 , & _resonant_controller_vsc2__u0 , & _resonant_controller_vsc2__err0 ) ;
            executeResonant ( & _resonant_controller_vsc2__rc3 , _resonant_controller_vsc2__ref0 , _resonant_controller_vsc2__IN_IL2 , & _resonant_controller_vsc2__u3 , & _resonant_controller_vsc2__err3 ) ;
            executeResonant ( & _resonant_controller_vsc2__rc5 , _resonant_controller_vsc2__ref0 , _resonant_controller_vsc2__IN_IL2 , & _resonant_controller_vsc2__u5 , & _resonant_controller_vsc2__err5 ) ;
            executeResonant ( & _resonant_controller_vsc2__rc7 , _resonant_controller_vsc2__ref0 , _resonant_controller_vsc2__IN_IL2 , & _resonant_controller_vsc2__u7 , & _resonant_controller_vsc2__err7 ) ;
            executeResonant ( & _resonant_controller_vsc2__rc9 , _resonant_controller_vsc2__ref0 , _resonant_controller_vsc2__IN_IL2 , & _resonant_controller_vsc2__u9 , & _resonant_controller_vsc2__err9 ) ;
            _resonant_controller_vsc2__OUT_PWMA = + ( _resonant_controller_vsc2__u0 + _resonant_controller_vsc2__u3 + _resonant_controller_vsc2__u5 + _resonant_controller_vsc2__u7 + _resonant_controller_vsc2__u9 ) ;
            _resonant_controller_vsc2__OUT_PWMB = - ( _resonant_controller_vsc2__u0 + _resonant_controller_vsc2__u3 + _resonant_controller_vsc2__u5 + _resonant_controller_vsc2__u7 + _resonant_controller_vsc2__u9 ) ;
            _resonant_controller_vsc2__OUT_REFERENCE = _resonant_controller_vsc2__ref0 ;
            _resonant_controller_vsc2__OUT_MEAS = _resonant_controller_vsc2__IN_IL2 ;
            _resonant_controller_vsc2__OUT_ERRO = _resonant_controller_vsc2__err0 ;
        }
        else     {
            _resonant_controller_vsc2__OUT_PWMA = 0 ;
            _resonant_controller_vsc2__OUT_PWMB = 0 ;
            _resonant_controller_vsc2__OUT_REFERENCE = 0 ;
            _resonant_controller_vsc2__OUT_MEAS = 0 ;
            _resonant_controller_vsc2__OUT_ERRO = 0 ;
        }
    }
    // Generated from the component: SIN_VSC2
    HIL_OutAO(0x4015, (float)_trig_function_calc_vsc2__OUT_SIN);
    // Generated from the component: I_ERROR_VSC2
    HIL_OutAO(0x4006, (float)_resonant_controller_vsc2__OUT_ERRO);
    // Generated from the component: MEAS_VSC2
    HIL_OutAO(0x4009, (float)_resonant_controller_vsc2__OUT_MEAS);
    // Generated from the component: PWMA_VSC2
    HIL_OutAO(0x400d, (float)_resonant_controller_vsc2__OUT_PWMA);
    // Generated from the component: PWMB_VSC2
    HIL_OutAO(0x400f, (float)_resonant_controller_vsc2__OUT_PWMB);
    // Generated from the component: REFERENCE_VSC2
    HIL_OutAO(0x4014, (float)_resonant_controller_vsc2__OUT_REFERENCE);
    // Generated from the component: VSC2 - GFL.PWM_Modulator
    _vsc2___gfl_pwm_modulator__limited_in[0] = MIN(MAX(_resonant_controller_vsc2__OUT_PWMA, -100.0), 100.0);
    HIL_OutInt32(0x2000040 + _vsc2___gfl_pwm_modulator__channels[0], ((X_UnInt32)((_vsc2___gfl_pwm_modulator__limited_in[0] - (-100.0)) * 20.0)));
    _vsc2___gfl_pwm_modulator__limited_in[1] = MIN(MAX(_resonant_controller_vsc2__OUT_PWMB, -100.0), 100.0);
    HIL_OutInt32(0x2000040 + _vsc2___gfl_pwm_modulator__channels[1], ((X_UnInt32)((_vsc2___gfl_pwm_modulator__limited_in[1] - (-100.0)) * 20.0)));
    if (_rt1_output__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc2___gfl_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _vsc2___gfl_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _vsc2___gfl_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _vsc2___gfl_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _vsc2___gfl_pwm_modulator__update_mask);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: CURRENT_CONTROLLER_VSC1
    // Generated from the component: SOGI_QSG_VSC1
    // Generated from the component: SOGI_QSG_VSC2
    // Generated from the component: RMS_CALCULATOR_VSC1
    // Generated from the component: RMS_CALCULATOR_VSC2
    // Generated from the component: TRIG_FUNCTION_CALC_VSC1
    // Generated from the component: TRIG_FUNCTION_CALC_VSC2
    // Generated from the component: RESONANT_CONTROLLER_VSC2
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: RT18.Output
    _rt18_output__out = _rt18_output__state;
    // Generated from the component: RT19.Output
    _rt19_output__out = _rt19_output__state;
    // Generated from the component: RT21.Output
    _rt21_output__out = _rt21_output__state;
    // Generated from the component: RT22.Output
    _rt22_output__out = _rt22_output__state;
    // Generated from the component: RT24.Output
    _rt24_output__out = _rt24_output__state;
    // Generated from the component: SC_ENABLE_GRID
    _sc_enable_grid__out = XIo_InFloat(0x55000104);
    // Generated from the component: SC_ENABLE_LOAD
    _sc_enable_load__out = XIo_InFloat(0x55000108);
    // Generated from the component: SC_ENABLE_VSC1
    _sc_enable_vsc1__out = XIo_InFloat(0x5500010c);
    // Generated from the component: SC_ENABLE_VSC2
    _sc_enable_vsc2__out = XIo_InFloat(0x55000110);
    // Generated from the component: SC_PREF_VSC1
    _sc_pref_vsc1__out = XIo_InFloat(0x55000114);
    // Generated from the component: SC_PREF_VSC2
    _sc_pref_vsc2__out = XIo_InFloat(0x55000118);
    // Generated from the component: SC_P_LOAD
    _sc_p_load__out = XIo_InFloat(0x5500011c);
    // Generated from the component: SC_QREF_VSC1
    _sc_qref_vsc1__out = XIo_InFloat(0x55000120);
    // Generated from the component: SC_QREF_VSC2
    _sc_qref_vsc2__out = XIo_InFloat(0x55000124);
    // Generated from the component: SC_Q_LOAD
    _sc_q_load__out = XIo_InFloat(0x55000128);
    // Generated from the component: S_GRID.Isw
    HIL_OutInt32(141033728, _sc_enable_grid__out);
    // Generated from the component: S_GRID_FEEDBACK
    HIL_OutInt32(0xf00400, _sc_enable_grid__out != 0x0);
    // Generated from the component: S_LOAD.Isw
    HIL_OutInt32(136839424, _sc_enable_load__out);
    // Generated from the component: S_LOAD_FEEDBACK
    HIL_OutInt32(0xf00401, _sc_enable_load__out != 0x0);
    // Generated from the component: RT17.Input
    _rt17_output__state = _sc_enable_vsc1__out;
    // Generated from the component: RT27.Input
    _rt27_output__state = _sc_enable_vsc1__out;
    // Generated from the component: RT37.Input
    _rt37_output__state = _sc_enable_vsc1__out;
    // Generated from the component: VOLTAGE_CONTROLLER_VSC1
    _voltage_controller_vsc1__IN_ENABLE = _sc_enable_vsc1__out;
    _voltage_controller_vsc1__IN_MICROGRID_STATUS = _rt22_output__out;
    _voltage_controller_vsc1__IN_OMEGA_REF = _rt18_output__out;
    _voltage_controller_vsc1__IN_VC = _rt19_output__out;
    _voltage_controller_vsc1__IN_VGRID = _rt21_output__out;
    _voltage_controller_vsc1__IN_V_REF = _rt24_output__out;
    {
        if ( _voltage_controller_vsc1__IN_ENABLE == 1 )     {
            _voltage_controller_vsc1__theta0 = _voltage_controller_vsc1__TS_05KHZ * _voltage_controller_vsc1__IN_OMEGA_REF + _voltage_controller_vsc1__theta0 ;
            if ( _voltage_controller_vsc1__theta0 >= _voltage_controller_vsc1__TWOPI ) _voltage_controller_vsc1__theta0 -= _voltage_controller_vsc1__TWOPI ;
            _voltage_controller_vsc1__ref0 = _voltage_controller_vsc1__SQRT2 * _voltage_controller_vsc1__IN_V_REF * sin ( _voltage_controller_vsc1__theta0 ) ;
            executeResonant ( & _voltage_controller_vsc1__rc0 , _voltage_controller_vsc1__ref0 , _voltage_controller_vsc1__IN_VC , & _voltage_controller_vsc1__u0 , & _voltage_controller_vsc1__err0 ) ;
            _voltage_controller_vsc1__OUT_V_CTRL = _voltage_controller_vsc1__u0 ;
            _voltage_controller_vsc1__OUT_V_REF_CTRL = _voltage_controller_vsc1__ref0 ;
        }
        else     {
            _voltage_controller_vsc1__OUT_V_CTRL = 0 ;
            _voltage_controller_vsc1__OUT_V_REF_CTRL = 0 ;
        }
    }
    // Generated from the component: RT1.Input
    _rt1_output__state = _sc_enable_vsc2__out;
    // Generated from the component: RT15.Input
    _rt15_output__state = _sc_enable_vsc2__out;
    // Generated from the component: RT8.Input
    _rt8_output__state = _sc_enable_vsc2__out;
    // Generated from the component: RT6.Input
    _rt6_output__state = _sc_pref_vsc2__out;
    // Generated from the component: RT7.Input
    _rt7_output__state = _sc_qref_vsc2__out;
    // Generated from the component: RT30.Input
    _rt30_output__state = _voltage_controller_vsc1__OUT_V_CTRL;
    // Generated from the component: UV_VSC1
    HIL_OutAO(0x4016, (float)_voltage_controller_vsc1__OUT_V_CTRL);
    // Generated from the component: VREF_VSC1
    HIL_OutAO(0x401a, (float)_voltage_controller_vsc1__OUT_V_REF_CTRL);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: VOLTAGE_CONTROLLER_VSC1
    //@cmp.update.block.end
}
void TimerCounterHandler_2_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_2");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: RT16.Output
    _rt16_output__out = _rt16_output__state;
    // Generated from the component: RT3.Output
    _rt3_output__out = _rt3_output__state;
    // Generated from the component: RT31.Output
    _rt31_output__out = _rt31_output__state;
    // Generated from the component: RT32.Output
    _rt32_output__out = _rt32_output__state;
    // Generated from the component: RT34.Output
    _rt34_output__out = _rt34_output__state;
    // Generated from the component: RT35.Output
    _rt35_output__out = _rt35_output__state;
    // Generated from the component: RT36.Output
    _rt36_output__out = _rt36_output__state;
    // Generated from the component: RT37.Output
    _rt37_output__out = _rt37_output__state;
    // Generated from the component: RT4.Output
    _rt4_output__out = _rt4_output__state;
    // Generated from the component: RT5.Output
    _rt5_output__out = _rt5_output__state;
    // Generated from the component: RT6.Output
    _rt6_output__out = _rt6_output__state;
    // Generated from the component: RT7.Output
    _rt7_output__out = _rt7_output__state;
    // Generated from the component: RT8.Output
    _rt8_output__out = _rt8_output__state;
    // Generated from the component: DROOP_CONTROLLER
    _droop_controller__IN_ENABLE = _rt37_output__out;
    _droop_controller__IN_I_DIR = _rt32_output__out;
    _droop_controller__IN_I_QUAD = _rt36_output__out;
    _droop_controller__IN_MICROGRID_STATUS = _rt34_output__out;
    _droop_controller__IN_V_DIR = _rt35_output__out;
    _droop_controller__IN_V_QUAD = _rt31_output__out;
    {
        if ( _droop_controller__IN_ENABLE == 1 )     {
            calculateDroopPQ ( & _droop_controller__droop , _droop_controller__IN_V_DIR , _droop_controller__IN_V_QUAD , _droop_controller__IN_I_DIR , _droop_controller__IN_I_QUAD , & _droop_controller__p , & _droop_controller__q ) ;
            executeDroopControl ( & _droop_controller__droop , & _droop_controller__v_ref , & _droop_controller__w_ref ) ;
            _droop_controller__OUT_V_REF = _droop_controller__v_ref ;
            _droop_controller__OUT_OMEGA_REF = _droop_controller__w_ref ;
            _droop_controller__OUT_P = _droop_controller__p ;
            _droop_controller__OUT_Q = _droop_controller__q ;
        }
        else     {
            _droop_controller__OUT_V_REF = 0 ;
            _droop_controller__OUT_OMEGA_REF = 0 ;
            _droop_controller__OUT_P = 0 ;
            _droop_controller__OUT_Q = 0 ;
        }
    }
    // Generated from the component: PI_CONTROLLER_VSC2
    _pi_controller_vsc2__IN_ENABLE = _rt8_output__out;
    _pi_controller_vsc2__IN_I_DIR = _rt4_output__out;
    _pi_controller_vsc2__IN_I_QUAD = _rt5_output__out;
    _pi_controller_vsc2__IN_PREF = _rt6_output__out;
    _pi_controller_vsc2__IN_QREF = _rt7_output__out;
    _pi_controller_vsc2__IN_V_DIR = _rt16_output__out;
    _pi_controller_vsc2__IN_V_QUAD = _rt3_output__out;
    {
        if ( _pi_controller_vsc2__IN_ENABLE == 1 )     {
            if ( _pi_controller_vsc2__IN_PREF > _pi_controller_vsc2__p_ref ) _pi_controller_vsc2__p_ref += 2 ;
            if ( _pi_controller_vsc2__IN_PREF < _pi_controller_vsc2__p_ref ) _pi_controller_vsc2__p_ref -= 2 ;
            if ( _pi_controller_vsc2__IN_QREF > _pi_controller_vsc2__q_ref ) _pi_controller_vsc2__q_ref += 2 ;
            if ( _pi_controller_vsc2__IN_QREF < _pi_controller_vsc2__q_ref ) _pi_controller_vsc2__q_ref -= 2 ;
            setPQ ( & _pi_controller_vsc2__pc , _pi_controller_vsc2__p_ref , _pi_controller_vsc2__q_ref ) ;
            calculatePQ ( & _pi_controller_vsc2__pc , _pi_controller_vsc2__IN_V_DIR , _pi_controller_vsc2__IN_V_QUAD , _pi_controller_vsc2__IN_I_DIR , _pi_controller_vsc2__IN_I_QUAD , & _pi_controller_vsc2__p , & _pi_controller_vsc2__q ) ;
            executePQControl ( & _pi_controller_vsc2__pc , & _pi_controller_vsc2__id , & _pi_controller_vsc2__iq ) ;
            _pi_controller_vsc2__OUT_I_DIR = ( 1 * _pi_controller_vsc2__id ) / ( 1.0 ) ;
            _pi_controller_vsc2__OUT_I_QUAD = ( 1 * _pi_controller_vsc2__iq ) / ( 1.0 ) ;
            _pi_controller_vsc2__OUT_P = _pi_controller_vsc2__p ;
            _pi_controller_vsc2__OUT_Q = _pi_controller_vsc2__q ;
        }
        else     {
            _pi_controller_vsc2__OUT_I_DIR = 0 ;
            _pi_controller_vsc2__OUT_I_QUAD = 0 ;
            _pi_controller_vsc2__OUT_P = 0 ;
            _pi_controller_vsc2__OUT_Q = 0 ;
        }
    }
    // Generated from the component: OMEGA_DROOP
    HIL_OutAO(0x400a, (float)_droop_controller__OUT_OMEGA_REF);
    // Generated from the component: P_VSC1
    HIL_OutAO(0x4010, (float)_droop_controller__OUT_P);
    // Generated from the component: Q_VSC1
    HIL_OutAO(0x4012, (float)_droop_controller__OUT_Q);
    // Generated from the component: RT18.Input
    _rt18_output__state = _droop_controller__OUT_OMEGA_REF;
    // Generated from the component: RT24.Input
    _rt24_output__state = _droop_controller__OUT_V_REF;
    // Generated from the component: V_DROOP
    HIL_OutAO(0x401d, (float)_droop_controller__OUT_V_REF);
    // Generated from the component: IC_DIR_VSC2
    HIL_OutAO(0x4001, (float)_pi_controller_vsc2__OUT_I_DIR);
    // Generated from the component: IC_QUAD_VSC2
    HIL_OutAO(0x4002, (float)_pi_controller_vsc2__OUT_I_QUAD);
    // Generated from the component: P_VSC2
    HIL_OutAO(0x4011, (float)_pi_controller_vsc2__OUT_P);
    // Generated from the component: Q_VSC2
    HIL_OutAO(0x4013, (float)_pi_controller_vsc2__OUT_Q);
    // Generated from the component: RT10.Input
    _rt10_output__state = _pi_controller_vsc2__OUT_I_QUAD;
    // Generated from the component: RT9.Input
    _rt9_output__state = _pi_controller_vsc2__OUT_I_DIR;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: DROOP_CONTROLLER
    // Generated from the component: PI_CONTROLLER_VSC2
    //@cmp.update.block.end
}
void TimerCounterHandler_3_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_3");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: ZERO1
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: RT29.Input
    _rt29_output__state = _zero1__out;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------