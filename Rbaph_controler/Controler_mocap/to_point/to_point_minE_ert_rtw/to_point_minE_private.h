/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: to_point_minE_private.h
 *
 * Code generated for Simulink model 'to_point_minE'.
 *
 * Model version                  : 1.57
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Oct  2 16:12:44 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_to_point_minE_private_h_
#define RTW_HEADER_to_point_minE_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "to_point_minE_types.h"
#include "to_point_minE.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifdef __cplusplus

extern "C"
{

#endif

  extern void rpi_sfun_xboxone_Start_wrapper(const real_T *rpi_ID, const int_T
    p_width0,
    const real_T *rpi_Ts, const int_T p_width1);
  extern void rpi_sfun_xboxone_Outputs_wrapper(real_T *Axes,
    real_T *Buttons,
    const real_T *rpi_ID, const int_T p_width0,
    const real_T *rpi_Ts, const int_T p_width1);
  extern void rpi_sfun_xboxone_Terminate_wrapper(const real_T *rpi_ID, const
    int_T p_width0,
    const real_T *rpi_Ts, const int_T p_width1);

#ifdef __cplusplus

}

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
#ifdef __cplusplus

extern "C"
{

#endif

  extern void rpi_sfun_betalink_Start_wrapper(const real_T *rpi_Ts, const int_T
    p_width0,
    const real_T *usb_serial_number, const int_T p_width1);
  extern void rpi_sfun_betalink_Outputs_wrapper(const real_T *throttle,
    real_T *timestamp,
    real_T *rpm,
    real_T *inv,
    real_T *acc,
    real_T *gyr,
    real_T *mag,
    real_T *roll,
    real_T *pitch,
    real_T *yaw,
    real_T *bat_volt,
    real_T *bat_amp,
    real_T *bat_mah,
    const real_T *rpi_Ts, const int_T p_width0,
    const real_T *usb_serial_number, const int_T p_width1);
  extern void rpi_sfun_betalink_Terminate_wrapper(const real_T *rpi_Ts, const
    int_T p_width0,
    const real_T *usb_serial_number, const int_T p_width1);

#ifdef __cplusplus

}

#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);

#endif                                 /* RTW_HEADER_to_point_minE_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
