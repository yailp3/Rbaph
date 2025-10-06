/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: R_L_private.h
 *
 * Code generated for Simulink model 'R_L'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Sep 25 17:43:20 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_R_L_private_h_
#define RTW_HEADER_R_L_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "R_L_types.h"

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
#endif                                 /* RTW_HEADER_R_L_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
