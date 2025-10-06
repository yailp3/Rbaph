/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: joystick_mocap_data.c
 *
 * Code generated for Simulink model 'joystick_mocap'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Oct  2 16:37:57 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "joystick_mocap.h"

/* Block parameters (default storage) */
P_joystick_mocap_T joystick_mocap_P = {
  /* Variable: Kd
   * Referenced by: '<Root>/control'
   */
  { 0.30000000000000004, 0.0, 0.0, 0.0, 0.30000000000000004, 0.0, 0.0, 0.0, 0.5
  },

  /* Variable: Kp
   * Referenced by: '<Root>/control'
   */
  { 3.0, 0.0, 0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 5.0 },

  /* Variable: M
   * Referenced by: '<Root>/control'
   */
  { 2.04, 0.0, 0.0, 0.0, 2.04, 0.0, 0.0, 0.0, 0.03 },

  /* Variable: W
   * Referenced by: '<Root>/control'
   */
  { 0.70710678118654757, -0.70710678118654746, 0.045961940777125579,
    0.70710678118654757, 0.70710678118654746, -0.045961940777125579, -1.0,
    1.2246467991473532E-16, 0.070000000000000021, -1.0, 1.2246467991473532E-16,
    -0.069999999999999993 },

  /* Variable: c_t
   * Referenced by: '<Root>/control'
   */
  { 1.4E-6, 1.4E-6, 1.4E-6, 1.4E-6 },

  /* Variable: f_max
   * Referenced by: '<Root>/control'
   */
  { 5.0, 5.0, 5.0, 5.0 },

  /* Variable: f_min
   * Referenced by: '<Root>/control'
   */
  { 0.0615, 0.0615, 0.0615, 0.0615 },

  /* Expression: rpi_mask_ID
   * Referenced by: '<S5>/S-Function Builder'
   */
  0.0,

  /* Expression: rpi_mask_Ts
   * Referenced by: '<S5>/S-Function Builder'
   */
  0.01,

  /* Expression: rpi_mask_Ts
   * Referenced by: '<S6>/S-Function Builder'
   */
  0.01,

  /* Expression: -1/32767
   * Referenced by: '<S3>/Multiply'
   */
  -3.0518509475997192E-5,

  /* Expression: 1/32767
   * Referenced by: '<S3>/Multiply1'
   */
  3.0518509475997192E-5,

  /* Expression: pi/32767
   * Referenced by: '<S3>/Multiply2'
   */
  9.587672516830327E-5,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: rpi_mask_Ts
   * Referenced by: '<S1>/S-Function Builder'
   */
  0.01,

  /* Expression: rpi_mask_usb_serial_number
   * Referenced by: '<S1>/S-Function Builder'
   */
  1.042260556E+9,

  /* Expression: zeros(150,1)
   * Referenced by: '<S4>/Constant5'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: uint32(rpi_mask_port)
   * Referenced by: '<S6>/S-Function Builder'
   */
  31415U,

  /* Expression: uint8(rpi_mask_ip1)
   * Referenced by: '<S6>/S-Function Builder'
   */
  192U,

  /* Expression: uint8(rpi_mask_ip2)
   * Referenced by: '<S6>/S-Function Builder'
   */
  168U,

  /* Expression: uint8(rpi_mask_ip3)
   * Referenced by: '<S6>/S-Function Builder'
   */
  0U,

  /* Expression: uint8(rpi_mask_ip4)
   * Referenced by: '<S6>/S-Function Builder'
   */
  13U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
