/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: joystick_to_force_mocap_data.c
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

#include "joystick_to_force_mocap.h"

/* Block parameters (default storage) */
P_joystick_to_force_mocap_T joystick_to_force_mocap_P = {
  /* Variable: Kd
   * Referenced by: '<Root>/control'
   */
  { 5.0, 0.0, 0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.1 },

  /* Variable: Kp
   * Referenced by: '<Root>/control'
   */
  { 5.0, 0.0, 0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.1 },

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
  { 4.7018, 4.7018, 4.7018, 4.7018 },

  /* Variable: f_min
   * Referenced by: '<Root>/control'
   */
  { 0.0615, 0.0615, 0.0615, 0.0615 },

  /* Expression: rpi_mask_Ts
   * Referenced by: '<S3>/S-Function Builder'
   */
  0.01,

  /* Expression: [2; 0; 2]
   * Referenced by: '<Root>/Constant1'
   */
  { 2.0, 0.0, 2.0 },

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: zeros(150,1)
   * Referenced by: '<S2>/Constant5'
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
   * Referenced by: '<S3>/S-Function Builder'
   */
  31415U,

  /* Expression: uint8(rpi_mask_ip1)
   * Referenced by: '<S3>/S-Function Builder'
   */
  192U,

  /* Expression: uint8(rpi_mask_ip2)
   * Referenced by: '<S3>/S-Function Builder'
   */
  168U,

  /* Expression: uint8(rpi_mask_ip3)
   * Referenced by: '<S3>/S-Function Builder'
   */
  0U,

  /* Expression: uint8(rpi_mask_ip4)
   * Referenced by: '<S3>/S-Function Builder'
   */
  13U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
