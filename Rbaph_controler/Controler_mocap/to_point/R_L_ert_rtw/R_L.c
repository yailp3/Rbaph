/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: R_L.c
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
#include "R_L_private.h"

/* Block signals (default storage) */
B_R_L_T R_L_B;

/* Block states (default storage) */
DW_R_L_T R_L_DW;

/* Real-time model */
static RT_MODEL_R_L_T R_L_M_;
RT_MODEL_R_L_T *const R_L_M = &R_L_M_;

/* Model step function */
void R_L_step(void)
{
  /* S-Function (rpi_sfun_xboxone): '<S1>/S-Function Builder' */
  rpi_sfun_xboxone_Outputs_wrapper(&R_L_B.SFunctionBuilder_o1[0],
    &R_L_B.SFunctionBuilder_o2[0], &R_L_P.SFunctionBuilder_P1, 1,
    &R_L_P.SFunctionBuilder_P2, 1);

  /* Stop: '<Root>/Stop Simulation' */
  if (R_L_B.SFunctionBuilder_o2[1] != 0.0) {
    rtmSetStopRequested(R_L_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */
  /* Bias: '<Root>/min_rpm2' incorporates:
   *  Gain: '<Root>/rescale2'
   */
  R_L_B.min_rpm2 = R_L_P.rescale2_Gain * R_L_B.SFunctionBuilder_o2[5] +
    R_L_P.min_rpm2_Bias;

  /* Bias: '<Root>/min_rpm' incorporates:
   *  Bias: '<Root>/min_axe'
   *  Gain: '<Root>/rescale'
   */
  R_L_B.min_rpm = (R_L_B.SFunctionBuilder_o1[5] + R_L_P.min_axe_Bias) *
    R_L_P.rescale_Gain + R_L_P.min_rpm_Bias;

  /* Bias: '<Root>/min_rpm3' incorporates:
   *  Gain: '<Root>/rescale3'
   */
  R_L_B.min_rpm3 = R_L_P.rescale3_Gain * R_L_B.SFunctionBuilder_o2[4] +
    R_L_P.min_rpm3_Bias;

  /* Bias: '<Root>/min_rpm1' incorporates:
   *  Bias: '<Root>/min_axe1'
   *  Gain: '<Root>/rescale1'
   */
  R_L_B.min_rpm1 = (R_L_B.SFunctionBuilder_o1[2] + R_L_P.min_axe1_Bias) *
    R_L_P.rescale1_Gain + R_L_P.min_rpm1_Bias;

  /* Constant: '<Root>/Constant' */
  R_L_B.Constant = R_L_P.Constant_Value;

  /* SignalConversion generated from: '<Root>/Mux' */
  R_L_B.TmpSignalConversionAtTAQSigLogg[0] = R_L_B.min_rpm2;
  R_L_B.TmpSignalConversionAtTAQSigLogg[1] = R_L_B.min_rpm;
  R_L_B.TmpSignalConversionAtTAQSigLogg[2] = R_L_B.min_rpm3;
  R_L_B.TmpSignalConversionAtTAQSigLogg[3] = R_L_B.min_rpm1;
  R_L_B.TmpSignalConversionAtTAQSigLogg[4] = R_L_B.Constant;
  R_L_B.TmpSignalConversionAtTAQSigLogg[5] = R_L_B.Constant;
  R_L_B.TmpSignalConversionAtTAQSigLogg[6] = R_L_B.Constant;
  R_L_B.TmpSignalConversionAtTAQSigLogg[7] = R_L_B.Constant;

  /* S-Function (rpi_sfun_betalink): '<S2>/S-Function Builder' */
  rpi_sfun_betalink_Outputs_wrapper(&R_L_B.TmpSignalConversionAtTAQSigLogg[0],
    &R_L_B.SFunctionBuilder_o1_n, &R_L_B.SFunctionBuilder_o2_p[0],
    &R_L_B.SFunctionBuilder_o3[0], &R_L_B.SFunctionBuilder_o4[0],
    &R_L_B.SFunctionBuilder_o5[0], &R_L_B.SFunctionBuilder_o6[0],
    &R_L_B.SFunctionBuilder_o7, &R_L_B.SFunctionBuilder_o8,
    &R_L_B.SFunctionBuilder_o9, &R_L_B.SFunctionBuilder_o10,
    &R_L_B.SFunctionBuilder_o11, &R_L_B.SFunctionBuilder_o12,
    &R_L_P.SFunctionBuilder_P1_p, 1, &R_L_P.SFunctionBuilder_P2_f, 1);

  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  R_L_M->Timing.taskTime0 =
    ((time_T)(++R_L_M->Timing.clockTick0)) * R_L_M->Timing.stepSize0;
}

/* Model initialize function */
void R_L_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(R_L_M, -1);
  R_L_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  R_L_M->Sizes.checksums[0] = (4237569781U);
  R_L_M->Sizes.checksums[1] = (86942374U);
  R_L_M->Sizes.checksums[2] = (3566136486U);
  R_L_M->Sizes.checksums[3] = (3341781167U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    R_L_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(R_L_M->extModeInfo,
      &R_L_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(R_L_M->extModeInfo, R_L_M->Sizes.checksums);
    rteiSetTPtr(R_L_M->extModeInfo, rtmGetTPtr(R_L_M));
  }

  /* Start for S-Function (rpi_sfun_betalink): '<S2>/S-Function Builder' */

  /* S-Function Block: <S2>/S-Function Builder */
  rpi_sfun_betalink_Start_wrapper(&R_L_P.SFunctionBuilder_P1_p, 1,
    &R_L_P.SFunctionBuilder_P2_f, 1);
}

/* Model terminate function */
void R_L_terminate(void)
{
  /* Terminate for S-Function (rpi_sfun_betalink): '<S2>/S-Function Builder' */

  /* S-Function Block: <S2>/S-Function Builder */
  rpi_sfun_betalink_Terminate_wrapper(&R_L_P.SFunctionBuilder_P1_p, 1,
    &R_L_P.SFunctionBuilder_P2_f, 1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
