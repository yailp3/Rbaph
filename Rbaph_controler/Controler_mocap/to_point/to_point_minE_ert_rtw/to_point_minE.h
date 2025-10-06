/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: to_point_minE.h
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

#ifndef RTW_HEADER_to_point_minE_h_
#define RTW_HEADER_to_point_minE_h_
#ifndef to_point_minE_COMMON_INCLUDES_
#define to_point_minE_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#endif                                 /* to_point_minE_COMMON_INCLUDES_ */

#include "to_point_minE_types.h"
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

/* Block signals (default storage) */
typedef struct {
  sY034dY3cx1IgSIMa0jtlQE_to_po_T CholRegManager;
  sTTULnc01OVJqZqpgkzM1HG_to_po_T WorkingSet;
  sTTULnc01OVJqZqpgkzM1HG_to_po_T b_workingset;
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T QRManager;
  sJ3M3ABZDNagg0am8RHBkvE_to_po_T memspace;
  real_T B[45];
  sRQ09YwUNBScnorFf9oRpHD_to_po_T solution;
  scZhlMkNxPxOgM0FLkVrfPH_to_po_T options;
  real_T H[16];
  real_T H_tmp[16];
  szdozZxcClCeUpd1TsA9nJF_to_po_T QPObjective;
  real_T W_rot[12];
  real_T H_tmp_m[12];
  real_T b_A[12];
  real_T Reshape[9];                   /* '<S5>/Reshape' */
  real_T W_rot_tmp[9];
  real_T work[9];
  real_T work_c[9];
  real_T vn1[9];
  real_T vn2[9];
  real_T SFunctionBuilder_o1[8];       /* '<S6>/S-Function Builder' */
  real_T SFunctionBuilder_o2[15];      /* '<S6>/S-Function Builder' */
  real_T SFunctionBuilder[150];        /* '<S11>/S-Function Builder' */
  real_T SFunctionBuilder_o2_p[8];     /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o3[8];       /* '<S3>/S-Function Builder' */
  real_T work_k[5];
  real_T f[4];
  real_T work_cx[4];
  real_T vn1_b[4];
  real_T vn2_p[4];
  real_T SignalConversion[3];          /* '<S5>/Signal Conversion' */
  real_T Merge[3];                     /* '<S2>/Merge' */
  real_T SignalConversion1[3];         /* '<S5>/Signal Conversion1' */
  real_T SignalConversion2[3];         /* '<S5>/Signal Conversion2' */
  real_T SFunctionBuilder_o4[3];       /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o5[3];       /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o6[3];       /* '<S3>/S-Function Builder' */
  real_T b_B[3];
  real_T tau[3];
  int32_T varargin_2_size[3];
  int32_T y_size[3];
  int32_T cy_size[3];
  real_T Constant;                     /* '<Root>/Constant' */
  real_T TmpSignalConversionAtTAQSigLogg[8];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_Mux_at_outport_0Inport1' */
  real_T SFunctionBuilder_o1_n;        /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o7;          /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o8;          /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o9;          /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o10;         /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o11;         /* '<S3>/S-Function Builder' */
  real_T SFunctionBuilder_o12;         /* '<S3>/S-Function Builder' */
  real_T TmpSignalConversionAtTAQSigLo_i[3];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_mocap_at_outport_0Inport1' */
  real_T TmpSignalConversionAtTAQSigLo_b[3];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_mocap_at_outport_1Inport1' */
  real_T CoordinateTransformationConvers[3];
                               /* '<S5>/Coordinate Transformation Conversion' */
  real_T w_rpm[4];                     /* '<Root>/control' */
  real_T err[3];                       /* '<Root>/control' */
  real_T tau_c[3];
  real_T cySq;
  real_T cy;
  real_T varargin_1_data;
  real_T varargin_2_data;
  real_T y_data;
  real_T cy_data;
  real_T colSum;
  real_T maxConstr_new;
  real_T tolDelta;
  real_T normDelta;
  real_T s;
  real_T temp;
  real_T temp_tmp;
  real_T constrViolation_basicX;
  real_T c;
  real_T b_atmp;
  real_T tau_f;
  real_T xnorm;
  real_T a;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T constrViolation;
  real_T tol;
  real_T temp2;
  real_T temp_g;
  real_T s_g;
  real_T c_m;
  real_T scale_n;
  real_T absxk_p;
  real_T t_l;
  real_T smax;
  real_T scale_j;
  real_T constrViolation_d;
  real_T tol_g;
  real_T qtb;
  real_T b_c;
  real_T smax_l;
  real_T s_d;
  real_T temp_d;
  real_T temp_l;
  real_T obj_FMat;
  real_T c_c;
  real_T b_s;
  real_T b_temp;
  real_T b_temp_tmp;
  real_T roe;
  real_T absa;
  real_T absb;
  real_T p_max;
  real_T denomTol;
  real_T phaseOneCorrectionX;
  real_T phaseOneCorrectionP;
  real_T pk_corrected;
  real_T ratio;
  real_T denomTol_o;
  real_T phaseOneCorrectionX_b;
  real_T phaseOneCorrectionP_n;
  real_T pk_corrected_b;
  real_T a_l;
  real_T b;
  int32_T idxFillStart;
  int32_T colOffsetATw;
  int32_T b_h;
  int32_T e;
  int32_T i;
  int32_T trueCount;
  int32_T csz_idx_2;
  int32_T varargin_1_data_tmp;
  int32_T idxStartIneq;
  int32_T idxEndIneq;
  int32_T b_idxStartIneq;
  int32_T b_idxEndIneq;
  int32_T i_b;
  int32_T b_mConstr_tmp;
  int32_T activeSetChangeID;
  int32_T nVar;
  int32_T localActiveConstrIdx;
  int32_T globalActiveConstrIdx;
  int32_T TYPE;
  int32_T Qk0;
  int32_T iy0;
  int32_T iyend;
  int32_T l;
  int32_T m;
  int32_T idx;
  int32_T d;
  int32_T iac;
  int32_T jBcol;
  int32_T iAcol;
  int32_T f_d;
  int32_T mWorkingFixed;
  int32_T idxStartIneq_e;
  int32_T idxEndIneq_b;
  int32_T c_tmp;
  int32_T iy0_tmp;
  int32_T mTotalWorkingEq_tmp_tmp;
  int32_T nFixedConstr;
  int32_T nVar_j;
  int32_T nDepIneq;
  int32_T c_f;
  int32_T nActiveConstr_tmp;
  int32_T iy0_tmp_a;
  int32_T nfxd;
  int32_T mmi;
  int32_T pvt;
  int32_T itemp;
  int32_T ix;
  int32_T iy;
  int32_T c_ix;
  int32_T idx_row;
  int32_T idxStartIneq_j;
  int32_T idxEndIneq_j;
  int32_T i_o;
  int32_T nVar_n;
  int32_T nullStartIdx;
  int32_T nVars;
  int32_T A_maxDiag_idx;
  int32_T b_A_maxDiag_idx;
  int32_T d_tmp;
  int32_T iy0_tmp_i;
  int32_T totalRank;
  int32_T b_o;
  int32_T ix_n;
  int32_T kAcol;
} B_to_point_minE_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T SFunctionBuilder_DSTATE;      /* '<S11>/S-Function Builder' */
  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData[6];
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<Root>/Scope7' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } ref_PWORK;                         /* '<Root>/ref' */

  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S2>/If Action Subsystem3' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S2>/If Action Subsystem2' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S2>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S2>/If Action Subsystem' */
  uint8_T is_active_c1_to_point_minE;  /* '<Root>/control' */
} DW_to_point_minE_T;

/* Parameters (default storage) */
struct P_to_point_minE_T_ {
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
  real_T Constant1_Value[3];           /* Expression: [0;0;0]
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T SFunctionBuilder_P1;          /* Expression: rpi_mask_ID
                                        * Referenced by: '<S6>/S-Function Builder'
                                        */
  real_T SFunctionBuilder_P2;          /* Expression: rpi_mask_Ts
                                        * Referenced by: '<S6>/S-Function Builder'
                                        */
  real_T SFunctionBuilder_P1_n;        /* Expression: rpi_mask_Ts
                                        * Referenced by: '<S11>/S-Function Builder'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T SFunctionBuilder_P1_p;        /* Expression: rpi_mask_Ts
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  real_T SFunctionBuilder_P2_f;        /* Expression: rpi_mask_usb_serial_number
                                        * Referenced by: '<S3>/S-Function Builder'
                                        */
  real_T Constant5_Value[150];         /* Expression: zeros(150,1)
                                        * Referenced by: '<S5>/Constant5'
                                        */
  uint32_T SFunctionBuilder_P6;        /* Expression: uint32(rpi_mask_port)
                                        * Referenced by: '<S11>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P2_h;       /* Expression: uint8(rpi_mask_ip1)
                                        * Referenced by: '<S11>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P3;         /* Expression: uint8(rpi_mask_ip2)
                                        * Referenced by: '<S11>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P4;         /* Expression: uint8(rpi_mask_ip3)
                                        * Referenced by: '<S11>/S-Function Builder'
                                        */
  uint8_T SFunctionBuilder_P5;         /* Expression: uint8(rpi_mask_ip4)
                                        * Referenced by: '<S11>/S-Function Builder'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_to_point_minE_T {
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
extern P_to_point_minE_T to_point_minE_P;

/* Block signals (default storage) */
extern B_to_point_minE_T to_point_minE_B;

/* Block states (default storage) */
extern DW_to_point_minE_T to_point_minE_DW;

/* Model entry point functions */
extern void to_point_minE_initialize(void);
extern void to_point_minE_step(void);
extern void to_point_minE_terminate(void);

/* Real-time Model object */
extern RT_MODEL_to_point_minE_T *const to_point_minE_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/Constant' : Unused code path elimination
 * Block '<S5>/Signal Conversion3' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'to_point_minE'
 * '<S1>'   : 'to_point_minE/Manette'
 * '<S2>'   : 'to_point_minE/Subsystem1'
 * '<S3>'   : 'to_point_minE/betalink'
 * '<S4>'   : 'to_point_minE/control'
 * '<S5>'   : 'to_point_minE/mocap'
 * '<S6>'   : 'to_point_minE/Manette/Xbox One controller'
 * '<S7>'   : 'to_point_minE/Subsystem1/If Action Subsystem'
 * '<S8>'   : 'to_point_minE/Subsystem1/If Action Subsystem1'
 * '<S9>'   : 'to_point_minE/Subsystem1/If Action Subsystem2'
 * '<S10>'  : 'to_point_minE/Subsystem1/If Action Subsystem3'
 * '<S11>'  : 'to_point_minE/mocap/IOSocket'
 */
#endif                                 /* RTW_HEADER_to_point_minE_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
