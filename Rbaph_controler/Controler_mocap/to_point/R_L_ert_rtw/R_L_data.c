/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: R_L_data.c
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

#include "R_L.h"

/* Block parameters (default storage) */
P_R_L_T R_L_P = {
  /* Expression: rpi_mask_ID
   * Referenced by: '<S1>/S-Function Builder'
   */
  0.0,

  /* Expression: rpi_mask_Ts
   * Referenced by: '<S1>/S-Function Builder'
   */
  0.01,

  /* Expression: 25000-2001
   * Referenced by: '<Root>/rescale2'
   */
  22999.0,

  /* Expression: 2001
   * Referenced by: '<Root>/min_rpm2'
   */
  2001.0,

  /* Expression: 32767
   * Referenced by: '<Root>/min_axe'
   */
  32767.0,

  /* Expression: (25000-2001)/(2*32767)
   * Referenced by: '<Root>/rescale'
   */
  0.35094759971922973,

  /* Expression: 2001
   * Referenced by: '<Root>/min_rpm'
   */
  2001.0,

  /* Expression: 25000-2001
   * Referenced by: '<Root>/rescale3'
   */
  22999.0,

  /* Expression: 2001
   * Referenced by: '<Root>/min_rpm3'
   */
  2001.0,

  /* Expression: 32767
   * Referenced by: '<Root>/min_axe1'
   */
  32767.0,

  /* Expression: (25000-2001)/(2*32767)
   * Referenced by: '<Root>/rescale1'
   */
  0.35094759971922973,

  /* Expression: 2001
   * Referenced by: '<Root>/min_rpm1'
   */
  2001.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: rpi_mask_Ts
   * Referenced by: '<S2>/S-Function Builder'
   */
  0.01,

  /* Expression: rpi_mask_usb_serial_number
   * Referenced by: '<S2>/S-Function Builder'
   */
  1.042260556E+9
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
