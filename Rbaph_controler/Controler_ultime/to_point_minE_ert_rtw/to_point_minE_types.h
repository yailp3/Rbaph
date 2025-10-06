/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: to_point_minE_types.h
 *
 * Code generated for Simulink model 'to_point_minE'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Oct  1 15:46:38 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_to_point_minE_types_h_
#define RTW_HEADER_to_point_minE_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLAB Function: '<Root>/control' */
#ifndef struct_tag_sRQ09YwUNBScnorFf9oRpHD
#define struct_tag_sRQ09YwUNBScnorFf9oRpHD

struct tag_sRQ09YwUNBScnorFf9oRpHD
{
  real_T xstar[5];
  real_T fstar;
  real_T firstorderopt;
  real_T lambda[9];
  int32_T state;
  real_T maxConstr;
  int32_T iterations;
  real_T searchDir[5];
};

#endif                                 /* struct_tag_sRQ09YwUNBScnorFf9oRpHD */

#ifndef typedef_sRQ09YwUNBScnorFf9oRpHD_to_po_T
#define typedef_sRQ09YwUNBScnorFf9oRpHD_to_po_T

typedef struct tag_sRQ09YwUNBScnorFf9oRpHD sRQ09YwUNBScnorFf9oRpHD_to_po_T;

#endif                             /* typedef_sRQ09YwUNBScnorFf9oRpHD_to_po_T */

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

#ifndef typedef_szdozZxcClCeUpd1TsA9nJF_to_po_T
#define typedef_szdozZxcClCeUpd1TsA9nJF_to_po_T

typedef struct tag_szdozZxcClCeUpd1TsA9nJF szdozZxcClCeUpd1TsA9nJF_to_po_T;

#endif                             /* typedef_szdozZxcClCeUpd1TsA9nJF_to_po_T */

#ifndef struct_tag_sY034dY3cx1IgSIMa0jtlQE
#define struct_tag_sY034dY3cx1IgSIMa0jtlQE

struct tag_sY034dY3cx1IgSIMa0jtlQE
{
  real_T FMat[25];
  int32_T ldm;
  int32_T ndims;
  int32_T info;
  real_T scaleFactor;
  boolean_T ConvexCheck;
  real_T regTol_;
  real_T workspace_[240];
  real_T workspace2_[240];
};

#endif                                 /* struct_tag_sY034dY3cx1IgSIMa0jtlQE */

#ifndef typedef_sY034dY3cx1IgSIMa0jtlQE_to_po_T
#define typedef_sY034dY3cx1IgSIMa0jtlQE_to_po_T

typedef struct tag_sY034dY3cx1IgSIMa0jtlQE sY034dY3cx1IgSIMa0jtlQE_to_po_T;

#endif                             /* typedef_sY034dY3cx1IgSIMa0jtlQE_to_po_T */

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
#ifndef struct_tag_s78GCJvmtD1Rws5pzEtzVXF
#define struct_tag_s78GCJvmtD1Rws5pzEtzVXF

struct tag_s78GCJvmtD1Rws5pzEtzVXF
{
  int32_T ldq;
  real_T QR[45];
  real_T Q[25];
  int32_T jpvt[9];
  int32_T mrows;
  int32_T ncols;
  real_T tau[5];
  int32_T minRowCol;
  boolean_T usedPivoting;
};

#endif                                 /* struct_tag_s78GCJvmtD1Rws5pzEtzVXF */

#ifndef typedef_s78GCJvmtD1Rws5pzEtzVXF_to_po_T
#define typedef_s78GCJvmtD1Rws5pzEtzVXF_to_po_T

typedef struct tag_s78GCJvmtD1Rws5pzEtzVXF s78GCJvmtD1Rws5pzEtzVXF_to_po_T;

#endif                             /* typedef_s78GCJvmtD1Rws5pzEtzVXF_to_po_T */

#ifndef struct_tag_sJ3M3ABZDNagg0am8RHBkvE
#define struct_tag_sJ3M3ABZDNagg0am8RHBkvE

struct tag_sJ3M3ABZDNagg0am8RHBkvE
{
  real_T workspace_double[45];
  int32_T workspace_int[9];
  int32_T workspace_sort[9];
};

#endif                                 /* struct_tag_sJ3M3ABZDNagg0am8RHBkvE */

#ifndef typedef_sJ3M3ABZDNagg0am8RHBkvE_to_po_T
#define typedef_sJ3M3ABZDNagg0am8RHBkvE_to_po_T

typedef struct tag_sJ3M3ABZDNagg0am8RHBkvE sJ3M3ABZDNagg0am8RHBkvE_to_po_T;

#endif                             /* typedef_sJ3M3ABZDNagg0am8RHBkvE_to_po_T */

#ifndef struct_tag_sTTULnc01OVJqZqpgkzM1HG
#define struct_tag_sTTULnc01OVJqZqpgkzM1HG

struct tag_sTTULnc01OVJqZqpgkzM1HG
{
  int32_T mConstr;
  int32_T mConstrOrig;
  int32_T mConstrMax;
  int32_T nVar;
  int32_T nVarOrig;
  int32_T nVarMax;
  int32_T ldA;
  real_T lb[5];
  real_T ub[5];
  int32_T indexLB[5];
  int32_T indexUB[5];
  int32_T indexFixed[5];
  int32_T mEqRemoved;
  real_T ATwset[45];
  real_T bwset[9];
  int32_T nActiveConstr;
  real_T maxConstrWorkspace[9];
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
  boolean_T isActiveConstr[9];
  int32_T Wid[9];
  int32_T Wlocalidx[9];
  int32_T nWConstr[5];
  int32_T probType;
  real_T SLACK0;
};

#endif                                 /* struct_tag_sTTULnc01OVJqZqpgkzM1HG */

#ifndef typedef_sTTULnc01OVJqZqpgkzM1HG_to_po_T
#define typedef_sTTULnc01OVJqZqpgkzM1HG_to_po_T

typedef struct tag_sTTULnc01OVJqZqpgkzM1HG sTTULnc01OVJqZqpgkzM1HG_to_po_T;

#endif                             /* typedef_sTTULnc01OVJqZqpgkzM1HG_to_po_T */

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

#ifndef typedef_scZhlMkNxPxOgM0FLkVrfPH_to_po_T
#define typedef_scZhlMkNxPxOgM0FLkVrfPH_to_po_T

typedef struct tag_scZhlMkNxPxOgM0FLkVrfPH scZhlMkNxPxOgM0FLkVrfPH_to_po_T;

#endif                             /* typedef_scZhlMkNxPxOgM0FLkVrfPH_to_po_T */

/* Parameters (default storage) */
typedef struct P_to_point_minE_T_ P_to_point_minE_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_to_point_minE_T RT_MODEL_to_point_minE_T;

#endif                                 /* RTW_HEADER_to_point_minE_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
