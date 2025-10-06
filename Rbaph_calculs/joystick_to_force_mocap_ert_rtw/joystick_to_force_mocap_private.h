/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: joystick_to_force_mocap_private.h
 *
 * Code generated for Simulink model 'joystick_to_force_mocap'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Sep 11 15:41:02 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_joystick_to_force_mocap_private_h_
#define RTW_HEADER_joystick_to_force_mocap_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "joystick_to_force_mocap.h"
#include "joystick_to_force_mocap_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifdef __cplusplus
#define SFB_EXTERN_C                   extern "C"
#else
#define SFB_EXTERN_C                   extern
#endif

SFB_EXTERN_C void rpi_sfun_iosocket_Start_wrapper(real_T *xD,
  const real_T *rpi_Ts, const int_T p_width0,
  const uint8_T *rpi_ip1, const int_T p_width1,
  const uint8_T *rpi_ip2, const int_T p_width2,
  const uint8_T *rpi_ip3, const int_T p_width3,
  const uint8_T *rpi_ip4, const int_T p_width4,
  const uint32_T *rpi_port, const int_T p_width5);
SFB_EXTERN_C void rpi_sfun_iosocket_Outputs_wrapper(real_T *y0,
  const real_T *xD,
  const real_T *rpi_Ts, const int_T p_width0,
  const uint8_T *rpi_ip1, const int_T p_width1,
  const uint8_T *rpi_ip2, const int_T p_width2,
  const uint8_T *rpi_ip3, const int_T p_width3,
  const uint8_T *rpi_ip4, const int_T p_width4,
  const uint32_T *rpi_port, const int_T p_width5);
SFB_EXTERN_C void rpi_sfun_iosocket_Update_wrapper(const real_T *u0,
  real_T *y0,
  real_T *xD,
  const real_T *rpi_Ts, const int_T p_width0,
  const uint8_T *rpi_ip1, const int_T p_width1,
  const uint8_T *rpi_ip2, const int_T p_width2,
  const uint8_T *rpi_ip3, const int_T p_width3,
  const uint8_T *rpi_ip4, const int_T p_width4,
  const uint32_T *rpi_port, const int_T p_width5);
SFB_EXTERN_C void rpi_sfun_iosocket_Terminate_wrapper(real_T *xD,
  const real_T *rpi_Ts, const int_T p_width0,
  const uint8_T *rpi_ip1, const int_T p_width1,
  const uint8_T *rpi_ip2, const int_T p_width2,
  const uint8_T *rpi_ip3, const int_T p_width3,
  const uint8_T *rpi_ip4, const int_T p_width4,
  const uint32_T *rpi_port, const int_T p_width5);

#undef SFB_EXTERN_C

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);
extern void joystick_to__LowpassFilter_Init(DW_LowpassFilter_joystick_to__T
  *localDW);
extern void joystick_to_force_LowpassFilter(real_T rtu_0,
  B_LowpassFilter_joystick_to_f_T *localB, DW_LowpassFilter_joystick_to__T
  *localDW);
extern void joystick_to__LowpassFilter_Term(DW_LowpassFilter_joystick_to__T
  *localDW);

#endif                       /* RTW_HEADER_joystick_to_force_mocap_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
