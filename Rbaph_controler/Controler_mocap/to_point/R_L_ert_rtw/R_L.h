/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: R_L.h
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

#ifndef RTW_HEADER_R_L_h_
#define RTW_HEADER_R_L_h_
#ifndef R_L_COMMON_INCLUDES_
#define R_L_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#endif                                 /* R_L_COMMON_INCLUDES_ */

#include "R_L_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T SFunctionBuilder_o1[8];       /* '<S1>/S-Function Builder' */
  real_T SFunctionBuilder_o2[15];      /* '<S1>/S-Function Builder' */
  real_T min_rpm2;                     /* '<Root>/min_rpm2' */
  real_T min_rpm;                      /* '<Root>/min_rpm' */
  real_T min_rpm3;                     /* '<Root>/min_rpm3' */
  real_T min_rpm1;                     /* '<Root>/min_rpm1' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T TmpSignalConversionAtTAQSigLogg[8];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Mux_at_outport_0Inport1' */
  real_T SFunctionBuilder_o1_n;        /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o2_p[8];     /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o3[8];       /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o4[3];       /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o5[3];       /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o6[3];       /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o7;          /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o8;          /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o9;          /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o10;         /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o11;         /* '<S2>/S-Function Builder' */
  real_T SFunctionBuilder_o12;         /* '<S2>/S-Function Builder' */
} B_R_L_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData[2];
  } rpm_PWORK;                         /* '<Root>/rpm' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */
} DW_R_L_T;

/* Parameters (default storage) */
struct P_R_L_T_ {
  real_T SFunctionBuilder_P1;          /* Expression: rpi_mask_ID
                                        * Referenced by: '<S1>/S-Function Builder'
                                        */
  real_T SFunctionBuilder_P2;          /* Expression: rpi_mask_Ts
                                        * Referenced by: '<S1>/S-Function Builder'
                                        */
  real_T rescale2_Gain;                /* Expression: 25000-2001
                                        * Referenced by: '<Root>/rescale2'
                                        */
  real_T min_rpm2_Bias;                /* Expression: 2001
                                        * Referenced by: '<Root>/min_rpm2'
                                        */
  real_T min_axe_Bias;                 /* Expression: 32767
                                        * Referenced by: '<Root>/min_axe'
                                        */
  real_T rescale_Gain;                 /* Expression: (25000-2001)/(2*32767)
                                        * Referenced by: '<Root>/rescale'
                                        */
  real_T min_rpm_Bias;                 /* Expression: 2001
                                        * Referenced by: '<Root>/min_rpm'
                                        */
  real_T rescale3_Gain;                /* Expression: 25000-2001
                                        * Referenced by: '<Root>/rescale3'
                                        */
  real_T min_rpm3_Bias;                /* Expression: 2001
                                        * Referenced by: '<Root>/min_rpm3'
                                        */
  real_T min_axe1_Bias;                /* Expression: 32767
                                        * Referenced by: '<Root>/min_axe1'
                                        */
  real_T rescale1_Gain;                /* Expression: (25000-2001)/(2*32767)
                                        * Referenced by: '<Root>/rescale1'
                                        */
  real_T min_rpm1_Bias;                /* Expression: 2001
                                        * Referenced by: '<Root>/min_rpm1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T SFunctionBuilder_P1_p;        /* Expression: rpi_mask_Ts
                                        * Referenced by: '<S2>/S-Function Builder'
                                        */
  real_T SFunctionBuilder_P2_f;        /* Expression: rpi_mask_usb_serial_number
                                        * Referenced by: '<S2>/S-Function Builder'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_R_L_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_R_L_T R_L_P;

/* Block signals (default storage) */
extern B_R_L_T R_L_B;

/* Block states (default storage) */
extern DW_R_L_T R_L_DW;

/* Model entry point functions */
extern void R_L_initialize(void);
extern void R_L_step(void);
extern void R_L_terminate(void);

/* Real-time Model object */
extern RT_MODEL_R_L_T *const R_L_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'R_L'
 * '<S1>'   : 'R_L/Xbox One controller'
 * '<S2>'   : 'R_L/betalink'
 */
#endif                                 /* RTW_HEADER_R_L_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
