/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: joystick_to_force_mocap.h
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

#ifndef RTW_HEADER_joystick_to_force_mocap_h_
#define RTW_HEADER_joystick_to_force_mocap_h_
#ifndef joystick_to_force_mocap_COMMON_INCLUDES_
#define joystick_to_force_mocap_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#endif                            /* joystick_to_force_mocap_COMMON_INCLUDES_ */

#include "joystick_to_force_mocap_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
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

/* Block signals for system '<S2>/Lowpass Filter' */
typedef struct {
  real_T LowpassFilter;                /* '<S2>/Lowpass Filter' */
} B_LowpassFilter_joystick_to_f_T;

/* Block states (default storage) for system '<S2>/Lowpass Filter' */
typedef struct {
  dsp_simulink_LowpassFilter_jo_T obj; /* '<S2>/Lowpass Filter' */
  boolean_T objisempty;                /* '<S2>/Lowpass Filter' */
  boolean_T isInitialized;             /* '<S2>/Lowpass Filter' */
  boolean_T isInitialized_b;           /* '<S2>/Lowpass Filter' */
} DW_LowpassFilter_joystick_to__T;

/* Block signals (default storage) */
typedef struct {
  s8VdrbiRqBTaOPdh3e5fO1B_joyst_T CholRegManager;
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T WorkingSet;
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T b_workingset;
  real_T SFunctionBuilder[150];        /* '<S3>/S-Function Builder' */
  sjdap3l62Of6VUMNmDqEW7E_joyst_T QRManager;
  sG7OiWonOOUUkAoMQTjQ1HE_joyst_T memspace;
  real_T B[60];
  sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T solution;
  scZhlMkNxPxOgM0FLkVrfPH_joyst_T options;
  szdozZxcClCeUpd1TsA9nJF_joyst_T QPObjective;
  real_T work[12];
  real_T work_m[12];
  real_T vn1[12];
  real_T vn2[12];
  real_T b_A[12];
  real_T Reshape[9];                   /* '<S2>/Reshape' */
  real_T work_c[7];
  real_T x0[4];
  real_T work_k[4];
  real_T vn1_c[4];
  real_T vn2_b[4];
  real_T SignalConversion[3];          /* '<S2>/Signal Conversion' */
  real_T SignalConversion1[3];         /* '<S2>/Signal Conversion1' */
  real_T SignalConversion2[3];         /* '<S2>/Signal Conversion2' */
  real_T TmpSignalConversionAtTAQSigLo_b[3];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_mocap_at_outport_1Inport1' */
  real_T TmpSignalConversionAtTAQSigLo_i[3];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_mocap_at_outport_0Inport1' */
  real_T CoordinateTransformationConvers[3];
                               /* '<S2>/Coordinate Transformation Conversion' */
  real_T w_rpm[4];                     /* '<Root>/control' */
  real_T f[4];                         /* '<Root>/control' */
  real_T varargin_1_data[3];
  real_T b_B[3];
  real_T tau[3];
  int32_T varargin_2_size[3];
  int32_T y_size[3];
  int32_T cy_size[3];
  real_T Constant;                     /* '<Root>/Constant' */
  real_T TmpSignalConversionAtTAQSigLogg[8];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Mux_at_outport_0Inport1' */
  real_T exitflag;                     /* '<Root>/control' */
  real_T cySq;
  real_T cy;
  real_T varargin_1_data_p;
  real_T varargin_2_data;
  real_T y_data;
  real_T cy_data;
  real_T unnamed_idx_2;
  real_T maxConstr_new;
  real_T tolDelta;
  real_T normDelta;
  real_T s;
  real_T temp;
  real_T temp_tmp;
  real_T c;
  real_T v;
  real_T b_v;
  real_T b_atmp;
  real_T tau_c;
  real_T xnorm;
  real_T a;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T constrViolation;
  real_T tol;
  real_T temp2;
  real_T temp_f;
  real_T s_g;
  real_T c_g;
  real_T scale_m;
  real_T absxk_n;
  real_T t_p;
  real_T smax;
  real_T scale_l;
  real_T absxk_j;
  real_T t_d;
  real_T constrViolation_g;
  real_T tol_l;
  real_T qtb;
  real_T b_c;
  real_T smax_d;
  real_T s_d;
  real_T temp_l;
  real_T temp_o;
  real_T obj_FMat;
  real_T c_c;
  real_T b_s;
  real_T b_temp;
  real_T b_temp_tmp;
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale_b;
  real_T ads;
  real_T bds;
  real_T p_max;
  real_T denomTol;
  real_T phaseOneCorrectionX;
  real_T phaseOneCorrectionP;
  real_T pk_corrected;
  real_T ratio;
  real_T u0;
  real_T ratio_tmp;
  real_T scale_n;
  real_T denomTol_b;
  real_T phaseOneCorrectionX_l;
  real_T phaseOneCorrectionP_h;
  real_T pk_corrected_b;
  real_T ratio_d;
  real_T u0_e;
  real_T b_v_b;
  real_T a_j;
  real_T c_f;
  real_T infNorm;
  int8_T jpvt[4];
  int32_T mFixed;
  int32_T idxFillStart;
  int32_T colOffsetATw;
  int32_T iATw0;
  int32_T b;
  int32_T c_a;
  int32_T i;
  int32_T trueCount;
  int32_T csz_idx_2;
  int32_T idxStartIneq;
  int32_T idxEndIneq;
  int32_T b_idxStartIneq;
  int32_T b_idxEndIneq;
  int32_T i_j;
  int32_T b_mConstr_tmp;
  int32_T activeSetChangeID;
  int32_T nVar;
  int32_T localActiveConstrIdx;
  int32_T globalActiveConstrIdx;
  int32_T TYPE;
  int32_T Qk0;
  int32_T iy0;
  int32_T iyend;
  int32_T j;
  int32_T l;
  int32_T idx;
  int32_T d;
  int32_T iac;
  int32_T jBcol;
  int32_T iAcol;
  int32_T f_j;
  int32_T temp_tmp_o;
  int32_T mWConstr_tmp_tmp;
  int32_T nVar_tmp_tmp;
  int32_T ix0;
  int32_T iy0_n;
  int32_T b_i;
  int32_T k;
  int32_T i_o;
  int32_T mTotalWorkingEq;
  int32_T idxStartIneq_n;
  int32_T idxEndIneq_m;
  int32_T ix0_c;
  int32_T iy0_m;
  int32_T k_m;
  int32_T i_ja;
  int32_T c_tmp;
  int32_T b_tmp;
  int32_T nFixedConstr;
  int32_T nVar_h;
  int32_T nDepIneq;
  int32_T ix0_c0;
  int32_T iy0_c;
  int32_T c_p;
  int32_T k_p;
  int32_T nActiveConstr_tmp;
  int32_T nfxd;
  int32_T mmi;
  int32_T pvt;
  int32_T itemp;
  int32_T ix;
  int32_T iy;
  int32_T c_ix;
  int32_T c_k;
  int32_T u1;
  int32_T i_a;
  int32_T temp_tmp_e;
  int32_T b_temp_tmp_a;
  int32_T ii;
  int32_T mWorkingFixed;
  int32_T idxStartIneq_a;
  int32_T idxEndIneq_i;
  int32_T ix0_l;
  int32_T iy0_o;
  int32_T k_o;
  int32_T c_tmp_i;
  int32_T mTotalWorkingEq_tmp_tmp;
  int32_T totalRank;
  int32_T b_f;
  int32_T ix_i;
  int32_T iQR0;
  int32_T nVar_f;
  int32_T nullStartIdx;
  int32_T nVars;
  int32_T A_maxDiag_idx;
  int32_T b_A_maxDiag_idx;
  int32_T lastColC;
  int32_T br;
  int32_T ar;
  int32_T ic;
  int32_T h;
  int32_T i_g;
  int32_T idxUpperExisting;
  B_LowpassFilter_joystick_to_f_T LowpassFilter2;/* '<S2>/Lowpass Filter' */
  B_LowpassFilter_joystick_to_f_T LowpassFilter1;/* '<S2>/Lowpass Filter' */
  B_LowpassFilter_joystick_to_f_T LowpassFilter;/* '<S2>/Lowpass Filter' */
} B_joystick_to_force_mocap_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder_DSTATE;      /* '<S3>/S-Function Builder' */
  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  struct {
    void *LoggedData;
  } w_rpm_PWORK;                       /* '<Root>/w_rpm' */

  struct {
    void *LoggedData[2];
  } Scope_mocap_PWORK;                 /* '<Root>/Scope_mocap' */

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<Root>/Scope5' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  uint8_T is_active_c1_joystick_to_force_;/* '<Root>/control' */
  DW_LowpassFilter_joystick_to__T LowpassFilter2;/* '<S2>/Lowpass Filter' */
  DW_LowpassFilter_joystick_to__T LowpassFilter1;/* '<S2>/Lowpass Filter' */
  DW_LowpassFilter_joystick_to__T LowpassFilter;/* '<S2>/Lowpass Filter' */
} DW_joystick_to_force_mocap_T;

/* Parameters (default storage) */
struct P_joystick_to_force_mocap_T_ {
  real_T Kd[9];                        /* Variable: Kd
                                        * Referenced by: '<Root>/control'
                                        */
  real_T Kp[9];                        /* Variable: Kp
                                        * Referenced by: '<Root>/control'
                                        */
  real_T M[9];                         /* Variable: M
                                        * Referenced by: '<Root>/control'
                                        */
  real_T W[12];                        /* Variable: W
                                        * Referenced by: '<Root>/control'
                                        */
  real_T c_t[4];                       /* Variable: c_t
                                        * Referenced by: '<Root>/control'
                                        */
  real_T f_max[4];                     /* Variable: f_max
                                        * Referenced by: '<Root>/control'
                                        */
  real_T f_min[4];                     /* Variable: f_min
                                        * Referenced by: '<Root>/control'
                                        */
  real_T SFunctionBuilder_P1;          /* Expression: rpi_mask_Ts
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  real_T Constant1_Value[3];           /* Expression: [2; 0; 2]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant5_Value[150];         /* Expression: zeros(150,1)
                                        * Referenced by: '<S2>/Constant5'
                                        */
  uint32_T SFunctionBuilder_P6;        /* Expression: uint32(rpi_mask_port)
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P2;         /* Expression: uint8(rpi_mask_ip1)
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P3;         /* Expression: uint8(rpi_mask_ip2)
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P4;         /* Expression: uint8(rpi_mask_ip3)
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P5;         /* Expression: uint8(rpi_mask_ip4)
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_joystick_to_force_moc_T {
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
extern P_joystick_to_force_mocap_T joystick_to_force_mocap_P;

/* Block signals (default storage) */
extern B_joystick_to_force_mocap_T joystick_to_force_mocap_B;

/* Block states (default storage) */
extern DW_joystick_to_force_mocap_T joystick_to_force_mocap_DW;

/* Model entry point functions */
extern void joystick_to_force_mocap_initialize(void);
extern void joystick_to_force_mocap_step(void);
extern void joystick_to_force_mocap_terminate(void);

/* Real-time Model object */
extern RT_MODEL_joystick_to_force_mo_T *const joystick_to_force_mocap_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Signal Conversion3' : Eliminate redundant signal conversion block
 */

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
 * '<Root>' : 'joystick_to_force_mocap'
 * '<S1>'   : 'joystick_to_force_mocap/control'
 * '<S2>'   : 'joystick_to_force_mocap/mocap'
 * '<S3>'   : 'joystick_to_force_mocap/mocap/IOSocket'
 */
#endif                               /* RTW_HEADER_joystick_to_force_mocap_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
