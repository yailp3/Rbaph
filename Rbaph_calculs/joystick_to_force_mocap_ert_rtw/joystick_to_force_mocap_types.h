/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: joystick_to_force_mocap_types.h
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

#ifndef RTW_HEADER_joystick_to_force_mocap_types_h_
#define RTW_HEADER_joystick_to_force_mocap_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_OGFBnYPwQbNlNAn7MtokTE
#define struct_tag_OGFBnYPwQbNlNAn7MtokTE

struct tag_OGFBnYPwQbNlNAn7MtokTE
{
  int32_T S0_isInitialized;
  real_T W0_ZERO_STATES[4];
  real_T W1_POLE_STATES[4];
  int32_T W2_PreviousNumChannels;
  real_T P0_ICRTP;
  real_T P1_RTP1COEFF[6];
  real_T P2_RTP2COEFF[4];
  real_T P3_RTP3COEFF[3];
  boolean_T P4_RTP_COEFF3_BOOL[3];
  real_T P5_IC2RTP;
};

#endif                                 /* struct_tag_OGFBnYPwQbNlNAn7MtokTE */

#ifndef typedef_b_dsp_BiquadFilter_0_joystick_T
#define typedef_b_dsp_BiquadFilter_0_joystick_T

typedef struct tag_OGFBnYPwQbNlNAn7MtokTE b_dsp_BiquadFilter_0_joystick_T;

#endif                             /* typedef_b_dsp_BiquadFilter_0_joystick_T */

#ifndef struct_tag_SScCSlXb1HuRYD0a9zem2
#define struct_tag_SScCSlXb1HuRYD0a9zem2

struct tag_SScCSlXb1HuRYD0a9zem2
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_dsp_BiquadFilter_0_joystick_T cSFunObject;
};

#endif                                 /* struct_tag_SScCSlXb1HuRYD0a9zem2 */

#ifndef typedef_b_dspcodegen_BiquadFilter_joy_T
#define typedef_b_dspcodegen_BiquadFilter_joy_T

typedef struct tag_SScCSlXb1HuRYD0a9zem2 b_dspcodegen_BiquadFilter_joy_T;

#endif                             /* typedef_b_dspcodegen_BiquadFilter_joy_T */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_joystick_to_force_m_T
#define typedef_cell_wrap_joystick_to_force_m_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_joystick_to_force_m_T;

#endif                             /* typedef_cell_wrap_joystick_to_force_m_T */

#ifndef struct_tag_JgaT0u0XWEOHwHefJJWuYC
#define struct_tag_JgaT0u0XWEOHwHefJJWuYC

struct tag_JgaT0u0XWEOHwHefJJWuYC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_joystick_to_force_m_T inputVarSize;
  int32_T NumChannels;
  b_dspcodegen_BiquadFilter_joy_T *FilterObj;
  b_dspcodegen_BiquadFilter_joy_T _pobj0;
};

#endif                                 /* struct_tag_JgaT0u0XWEOHwHefJJWuYC */

#ifndef typedef_dsp_simulink_LowpassFilter_jo_T
#define typedef_dsp_simulink_LowpassFilter_jo_T

typedef struct tag_JgaT0u0XWEOHwHefJJWuYC dsp_simulink_LowpassFilter_jo_T;

#endif                             /* typedef_dsp_simulink_LowpassFilter_jo_T */

/* Custom Type definition for MATLAB Function: '<Root>/control' */
#ifndef struct_tag_sbg5SsVFwrzDOcc5EIAUQ0C
#define struct_tag_sbg5SsVFwrzDOcc5EIAUQ0C

struct tag_sbg5SsVFwrzDOcc5EIAUQ0C
{
  real_T xstar[5];
  real_T fstar;
  real_T firstorderopt;
  real_T lambda[12];
  int32_T state;
  real_T maxConstr;
  int32_T iterations;
  real_T searchDir[5];
};

#endif                                 /* struct_tag_sbg5SsVFwrzDOcc5EIAUQ0C */

#ifndef typedef_sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
#define typedef_sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T

typedef struct tag_sbg5SsVFwrzDOcc5EIAUQ0C sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T;

#endif                             /* typedef_sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T */

#ifndef struct_tag_szdozZxcClCeUpd1TsA9nJF
#define struct_tag_szdozZxcClCeUpd1TsA9nJF

struct tag_szdozZxcClCeUpd1TsA9nJF
{
  real_T grad[5];
  real_T Hx[4];
  boolean_T hasLinear;
  int32_T nvar;
  int32_T maxVar;
  real_T beta;
  real_T rho;
  int32_T objtype;
  int32_T prev_objtype;
  int32_T prev_nvar;
  boolean_T prev_hasLinear;
  real_T gammaScalar;
};

#endif                                 /* struct_tag_szdozZxcClCeUpd1TsA9nJF */

#ifndef typedef_szdozZxcClCeUpd1TsA9nJF_joyst_T
#define typedef_szdozZxcClCeUpd1TsA9nJF_joyst_T

typedef struct tag_szdozZxcClCeUpd1TsA9nJF szdozZxcClCeUpd1TsA9nJF_joyst_T;

#endif                             /* typedef_szdozZxcClCeUpd1TsA9nJF_joyst_T */

#ifndef struct_tag_s8VdrbiRqBTaOPdh3e5fO1B
#define struct_tag_s8VdrbiRqBTaOPdh3e5fO1B

struct tag_s8VdrbiRqBTaOPdh3e5fO1B
{
  real_T FMat[49];
  int32_T ldm;
  int32_T ndims;
  int32_T info;
  real_T scaleFactor;
  boolean_T ConvexCheck;
  real_T regTol_;
  real_T workspace_[336];
  real_T workspace2_[336];
};

#endif                                 /* struct_tag_s8VdrbiRqBTaOPdh3e5fO1B */

#ifndef typedef_s8VdrbiRqBTaOPdh3e5fO1B_joyst_T
#define typedef_s8VdrbiRqBTaOPdh3e5fO1B_joyst_T

typedef struct tag_s8VdrbiRqBTaOPdh3e5fO1B s8VdrbiRqBTaOPdh3e5fO1B_joyst_T;

#endif                             /* typedef_s8VdrbiRqBTaOPdh3e5fO1B_joyst_T */

#ifndef struct_tag_2PsGMppoK4e2vdwpogf6iH
#define struct_tag_2PsGMppoK4e2vdwpogf6iH

struct tag_2PsGMppoK4e2vdwpogf6iH
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_2PsGMppoK4e2vdwpogf6iH */

#ifndef typedef_robotics_slcore_internal_bloc_T
#define typedef_robotics_slcore_internal_bloc_T

typedef struct tag_2PsGMppoK4e2vdwpogf6iH robotics_slcore_internal_bloc_T;

#endif                             /* typedef_robotics_slcore_internal_bloc_T */

/* Custom Type definition for MATLAB Function: '<Root>/control' */
#ifndef struct_tag_sjdap3l62Of6VUMNmDqEW7E
#define struct_tag_sjdap3l62Of6VUMNmDqEW7E

struct tag_sjdap3l62Of6VUMNmDqEW7E
{
  int32_T ldq;
  real_T QR[84];
  real_T Q[49];
  int32_T jpvt[12];
  int32_T mrows;
  int32_T ncols;
  real_T tau[7];
  int32_T minRowCol;
  boolean_T usedPivoting;
};

#endif                                 /* struct_tag_sjdap3l62Of6VUMNmDqEW7E */

#ifndef typedef_sjdap3l62Of6VUMNmDqEW7E_joyst_T
#define typedef_sjdap3l62Of6VUMNmDqEW7E_joyst_T

typedef struct tag_sjdap3l62Of6VUMNmDqEW7E sjdap3l62Of6VUMNmDqEW7E_joyst_T;

#endif                             /* typedef_sjdap3l62Of6VUMNmDqEW7E_joyst_T */

#ifndef struct_tag_sG7OiWonOOUUkAoMQTjQ1HE
#define struct_tag_sG7OiWonOOUUkAoMQTjQ1HE

struct tag_sG7OiWonOOUUkAoMQTjQ1HE
{
  real_T workspace_double[60];
  int32_T workspace_int[12];
  int32_T workspace_sort[12];
};

#endif                                 /* struct_tag_sG7OiWonOOUUkAoMQTjQ1HE */

#ifndef typedef_sG7OiWonOOUUkAoMQTjQ1HE_joyst_T
#define typedef_sG7OiWonOOUUkAoMQTjQ1HE_joyst_T

typedef struct tag_sG7OiWonOOUUkAoMQTjQ1HE sG7OiWonOOUUkAoMQTjQ1HE_joyst_T;

#endif                             /* typedef_sG7OiWonOOUUkAoMQTjQ1HE_joyst_T */

#ifndef struct_tag_sFU6CjEcGjLAtPLbWxOieuC
#define struct_tag_sFU6CjEcGjLAtPLbWxOieuC

struct tag_sFU6CjEcGjLAtPLbWxOieuC
{
  int32_T mConstr;
  int32_T mConstrOrig;
  int32_T mConstrMax;
  int32_T nVar;
  int32_T nVarOrig;
  int32_T nVarMax;
  int32_T ldA;
  real_T Aeq[15];
  real_T beq[3];
  real_T lb[5];
  real_T ub[5];
  int32_T indexLB[5];
  int32_T indexUB[5];
  int32_T indexFixed[5];
  int32_T mEqRemoved;
  int32_T indexEqRemoved[3];
  real_T ATwset[60];
  real_T bwset[12];
  int32_T nActiveConstr;
  real_T maxConstrWorkspace[12];
  int32_T sizes[5];
  int32_T sizesNormal[5];
  int32_T sizesPhaseOne[5];
  int32_T sizesRegularized[5];
  int32_T sizesRegPhaseOne[5];
  int32_T isActiveIdx[6];
  int32_T isActiveIdxNormal[6];
  int32_T isActiveIdxPhaseOne[6];
  int32_T isActiveIdxRegularized[6];
  int32_T isActiveIdxRegPhaseOne[6];
  boolean_T isActiveConstr[12];
  int32_T Wid[12];
  int32_T Wlocalidx[12];
  int32_T nWConstr[5];
  int32_T probType;
  real_T SLACK0;
};

#endif                                 /* struct_tag_sFU6CjEcGjLAtPLbWxOieuC */

#ifndef typedef_sFU6CjEcGjLAtPLbWxOieuC_joyst_T
#define typedef_sFU6CjEcGjLAtPLbWxOieuC_joyst_T

typedef struct tag_sFU6CjEcGjLAtPLbWxOieuC sFU6CjEcGjLAtPLbWxOieuC_joyst_T;

#endif                             /* typedef_sFU6CjEcGjLAtPLbWxOieuC_joyst_T */

#ifndef struct_tag_scZhlMkNxPxOgM0FLkVrfPH
#define struct_tag_scZhlMkNxPxOgM0FLkVrfPH

struct tag_scZhlMkNxPxOgM0FLkVrfPH
{
  real_T InitDamping;
  char_T FiniteDifferenceType[7];
  boolean_T SpecifyObjectiveGradient;
  boolean_T ScaleProblem;
  boolean_T SpecifyConstraintGradient;
  boolean_T NonFiniteSupport;
  boolean_T IterDisplaySQP;
  real_T FiniteDifferenceStepSize;
  real_T MaxFunctionEvaluations;
  boolean_T IterDisplayQP;
  real_T PricingTolerance;
  char_T Algorithm[10];
  real_T ObjectiveLimit;
  real_T ConstraintTolerance;
  real_T OptimalityTolerance;
  real_T StepTolerance;
  real_T MaxIterations;
  real_T FunctionTolerance;
  char_T SolverName[8];
  boolean_T CheckGradients;
  char_T Diagnostics[3];
  real_T DiffMaxChange;
  real_T DiffMinChange;
  char_T Display[3];
  char_T FunValCheck[3];
  boolean_T UseParallel;
  char_T LinearSolver[4];
  char_T SubproblemAlgorithm[2];
};

#endif                                 /* struct_tag_scZhlMkNxPxOgM0FLkVrfPH */

#ifndef typedef_scZhlMkNxPxOgM0FLkVrfPH_joyst_T
#define typedef_scZhlMkNxPxOgM0FLkVrfPH_joyst_T

typedef struct tag_scZhlMkNxPxOgM0FLkVrfPH scZhlMkNxPxOgM0FLkVrfPH_joyst_T;

#endif                             /* typedef_scZhlMkNxPxOgM0FLkVrfPH_joyst_T */

/* Parameters (default storage) */
typedef struct P_joystick_to_force_mocap_T_ P_joystick_to_force_mocap_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_joystick_to_force_moc_T RT_MODEL_joystick_to_force_mo_T;

#endif                         /* RTW_HEADER_joystick_to_force_mocap_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
