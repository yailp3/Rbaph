/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: joystick_to_force_mocap.c
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
#include "rtwtypes.h"
#include "joystick_to_force_mocap_types.h"
#include "joystick_to_force_mocap_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (default storage) */
B_joystick_to_force_mocap_T joystick_to_force_mocap_B;

/* Block states (default storage) */
DW_joystick_to_force_mocap_T joystick_to_force_mocap_DW;

/* Real-time model */
static RT_MODEL_joystick_to_force_mo_T joystick_to_force_mocap_M_;
RT_MODEL_joystick_to_force_mo_T *const joystick_to_force_mocap_M =
  &joystick_to_force_mocap_M_;

/* Forward declaration for local functions */
static void joystick_to_force__expand_atan2(const real_T a_data[], const int32_T
  a_size[3], const real_T b_data[], const int32_T b_size[3], real_T c_data[],
  int32_T c_size[3]);
static real_T joystick_to_force_mocap_xnrm2(int32_T n, const real_T x[12],
  int32_T ix0);
static real_T joystick_to_force_rt_hypotd_snf(real_T u0, real_T u1);
static void joystick_to_force_moca_mldivide(const real_T A[12], const real_T B[3],
  real_T Y[4]);
static void joystic_modifyOverheadPhaseOne_(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj);
static void joystick_to_forc_setProblemType(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T PROBLEM_TYPE);
static real_T joystick_to_force_mocap_xnrm2_c(int32_T n, const real_T x[84],
  int32_T ix0);
static real_T joystick_to_force_mocap_xzlarfg(int32_T n, real_T *alpha1, real_T
  x[84], int32_T ix0);
static void joystick_to_force_mocap_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[84], int32_T ic0, real_T work[12]);
static void joystick_to_force_mocap_qrf(real_T A[84], int32_T m, int32_T n,
  int32_T nfxd, real_T tau[7]);
static void joystick_to_force_moc_factorQRE(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  int32_T mrows, int32_T ncols);
static void joystick_to_force_moc_computeQ_(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  int32_T nrows);
static int32_T joystick_ComputeNumDependentEq_(sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager, const real_T beqf[12], int32_T mConstr, int32_T nVar);
static void joystick_to_force_moc_countsort(int32_T x[12], int32_T xLen, int32_T
  workspace[12], int32_T xMin, int32_T xMax);
static void joystick_to_force__removeConstr(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T idx_global);
static void joystick_to_forc_removeEqConstr(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T idx_global);
static void joystick_t_RemoveDependentIneq_(sFU6CjEcGjLAtPLbWxOieuC_joyst_T
  *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager,
  sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace, real_T tolfactor);
static void joystick_to_force_moca_factorQR(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  const real_T A[60], int32_T mrows, int32_T ncols);
static void joystick_to_force_mocap_xgemv(int32_T m, const real_T A[15], const
  real_T x[60], real_T y[12]);
static void joystick_to_force_mocap_xgemv_n(int32_T m, const real_T A[15], const
  real_T x[60], real_T y[12]);
static boolean_T joystic_feasibleX0ForWorkingSet(real_T workspace[60], real_T
  xCurrent[5], sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset,
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager);
static void joystick_to_force_moca_xgemv_nr(int32_T m, const real_T A[15], const
  real_T x[5], real_T y[12]);
static real_T joystick_maxConstraintViolation(sFU6CjEcGjLAtPLbWxOieuC_joyst_T
  *obj, const real_T x[5]);
static void joystick_to__PresolveWorkingSet(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager);
static void joystick_to_force_m_linearForm_(boolean_T obj_hasLinear, int32_T
  obj_nvar, real_T workspace[60], const real_T x[5]);
static real_T joystick_to_force_m_computeFval(const
  szdozZxcClCeUpd1TsA9nJF_joyst_T *obj, real_T workspace[60], const real_T x[5]);
static void joystick_to_force_moc_xgemv_nry(int32_T m, int32_T n, int32_T lda,
  const real_T x[5], real_T y[4]);
static void joystick_to_computeGrad_StoreHx(szdozZxcClCeUpd1TsA9nJF_joyst_T *obj,
  const real_T x[5]);
static real_T joystick_to_computeFval_ReuseHx(const
  szdozZxcClCeUpd1TsA9nJF_joyst_T *obj, real_T workspace[60], const real_T x[5]);
static void joystick_to_force_mocap_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s);
static void joystick_to_fo_deleteColMoveEnd(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  int32_T idx);
static void joystick_to_force__fullColLDL2_(s8VdrbiRqBTaOPdh3e5fO1B_joyst_T *obj,
  int32_T NColsRemain, real_T REG_PRIMAL);
static void joystick_to_force_mo_xgemv_nrys(int32_T m, int32_T n, const real_T
  A[49], int32_T ia0, const real_T x[60], real_T y[5]);
static void joystick_to_forc_compute_deltax(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace, const
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager, s8VdrbiRqBTaOPdh3e5fO1B_joyst_T
  *cholmanager, const szdozZxcClCeUpd1TsA9nJF_joyst_T *objective);
static real_T joystick_to_force_moca_xnrm2_cn(int32_T n, const real_T x[5]);
static void joystick_to_force_moc_ratiotest(const real_T solution_xstar[5],
  const real_T solution_searchDir[5], int32_T workingset_nVar, const real_T
  workingset_lb[5], const real_T workingset_ub[5], const int32_T
  workingset_indexLB[5], const int32_T workingset_indexUB[5], const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const boolean_T
  workingset_isActiveConstr[12], const int32_T workingset_nWConstr[5], real_T
  *toldelta, real_T *alpha, boolean_T *newBlocking, int32_T *constrType, int32_T
  *constrIdx);
static void joystick_to_f_feasibleratiotest(const real_T solution_xstar[5],
  const real_T solution_searchDir[5], int32_T workingset_nVar, const real_T
  workingset_lb[5], const real_T workingset_ub[5], const int32_T
  workingset_indexLB[5], const int32_T workingset_indexUB[5], const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const boolean_T
  workingset_isActiveConstr[12], const int32_T workingset_nWConstr[5], boolean_T
  isPhaseOne, real_T *alpha, boolean_T *newBlocking, int32_T *constrType,
  int32_T *constrIdx);
static void joys_addBoundToActiveSetMatrix_(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T TYPE, int32_T idx_local);
static void joystick_to_forc_compute_lambda(real_T workspace[60],
  sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T *solution, const
  szdozZxcClCeUpd1TsA9nJF_joyst_T *objective, const
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager);
static void joystick_to_force_mocap_iterate(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager, s8VdrbiRqBTaOPdh3e5fO1B_joyst_T *cholmanager,
  szdozZxcClCeUpd1TsA9nJF_joyst_T *objective, real_T options_ObjectiveLimit,
  real_T options_StepTolerance, int32_T runTimeOptions_MaxIterations, real_T
  runTimeOptions_ConstrRelTolFact, real_T runTimeOptions_ProbRelTolFactor,
  boolean_T runTimeOptions_RemainFeasible);
static void joystick_t_PresolveWorkingSet_h(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager);
static void joystick_t_computeFirstOrderOpt(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, const szdozZxcClCeUpd1TsA9nJF_joyst_T *objective, int32_T
  workingset_nVar, const real_T workingset_ATwset[60], int32_T
  workingset_nActiveConstr, real_T workspace[60]);
static void joystick_to_force_mocap_driver(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, s8VdrbiRqBTaOPdh3e5fO1B_joyst_T
  *cholmanager, int32_T runTimeOptions_MaxIterations, real_T
  runTimeOptions_ConstrRelTolFact, real_T runTimeOptions_ProbRelTolFactor,
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager, szdozZxcClCeUpd1TsA9nJF_joyst_T
  *objective);
static void joystick_to_force_linearForm__c(boolean_T obj_hasLinear, int32_T
  obj_nvar, real_T workspace[5], const real_T x[5]);
int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

/* System initialize for atomic system: */
void joystick_to__LowpassFilter_Init(DW_LowpassFilter_joystick_to__T *localDW)
{
  b_dspcodegen_BiquadFilter_joy_T *iobj_0;
  int32_T i;
  static const real_T tmp[6] = { 0.15086957261295122, -0.23067953979345196,
    0.15086957261295122, 0.091721049732280985, -0.034434196862931962,
    0.091721049732280971 };

  /* Start for MATLABSystem: '<S2>/Lowpass Filter' */
  localDW->obj.NumChannels = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  if (localDW->obj.NumChannels == -1) {
    localDW->obj.NumChannels = 1;
  }

  localDW->obj._pobj0.isInitialized = 0;
  localDW->obj._pobj0.isInitialized = 0;

  /* System object Constructor function: dsp.BiquadFilter */
  localDW->obj._pobj0.cSFunObject.P0_ICRTP = 0.0;
  for (i = 0; i < 6; i++) {
    localDW->obj._pobj0.cSFunObject.P1_RTP1COEFF[i] = tmp[i];
  }

  localDW->obj._pobj0.cSFunObject.P2_RTP2COEFF[0] = -1.7232312332787787;
  localDW->obj._pobj0.cSFunObject.P2_RTP2COEFF[1] = 0.87737675706796014;
  localDW->obj._pobj0.cSFunObject.P2_RTP2COEFF[2] = -1.5757130414840816;
  localDW->obj._pobj0.cSFunObject.P2_RTP2COEFF[3] = 0.64600427676900818;
  localDW->obj._pobj0.cSFunObject.P3_RTP3COEFF[0] = 0.0;
  localDW->obj._pobj0.cSFunObject.P4_RTP_COEFF3_BOOL[0] = false;
  localDW->obj._pobj0.cSFunObject.P3_RTP3COEFF[1] = 0.0;
  localDW->obj._pobj0.cSFunObject.P4_RTP_COEFF3_BOOL[1] = false;
  localDW->obj._pobj0.cSFunObject.P3_RTP3COEFF[2] = 0.0;
  localDW->obj._pobj0.cSFunObject.P4_RTP_COEFF3_BOOL[2] = false;
  localDW->obj._pobj0.cSFunObject.P5_IC2RTP = 0.0;
  localDW->obj.FilterObj = &localDW->obj._pobj0;
  localDW->obj.isSetupComplete = true;

  /* InitializeConditions for MATLABSystem: '<S2>/Lowpass Filter' */
  iobj_0 = localDW->obj.FilterObj;
  if (iobj_0->isInitialized == 1) {
    /* System object Initialization function: dsp.BiquadFilter */
    iobj_0->cSFunObject.W0_ZERO_STATES[0] = iobj_0->cSFunObject.P0_ICRTP;
    iobj_0->cSFunObject.W1_POLE_STATES[0] = iobj_0->cSFunObject.P5_IC2RTP;
    iobj_0->cSFunObject.W0_ZERO_STATES[1] = iobj_0->cSFunObject.P0_ICRTP;
    iobj_0->cSFunObject.W1_POLE_STATES[1] = iobj_0->cSFunObject.P5_IC2RTP;
    iobj_0->cSFunObject.W0_ZERO_STATES[2] = iobj_0->cSFunObject.P0_ICRTP;
    iobj_0->cSFunObject.W1_POLE_STATES[2] = iobj_0->cSFunObject.P5_IC2RTP;
    iobj_0->cSFunObject.W0_ZERO_STATES[3] = iobj_0->cSFunObject.P0_ICRTP;
    iobj_0->cSFunObject.W1_POLE_STATES[3] = iobj_0->cSFunObject.P5_IC2RTP;
  }

  /* End of InitializeConditions for MATLABSystem: '<S2>/Lowpass Filter' */
}

/* Output and update for atomic system: */
void joystick_to_force_LowpassFilter(real_T rtu_0,
  B_LowpassFilter_joystick_to_f_T *localB, DW_LowpassFilter_joystick_to__T
  *localDW)
{
  b_dspcodegen_BiquadFilter_joy_T *obj;
  real_T numAccum;
  real_T stageIn;

  /* MATLABSystem: '<S2>/Lowpass Filter' */
  obj = localDW->obj.FilterObj;
  if (localDW->obj.FilterObj->isInitialized != 1) {
    localDW->obj.FilterObj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->isSetupComplete = true;

    /* System object Initialization function: dsp.BiquadFilter */
    obj->cSFunObject.W0_ZERO_STATES[0] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W1_POLE_STATES[0] = obj->cSFunObject.P5_IC2RTP;
    obj->cSFunObject.W0_ZERO_STATES[1] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W1_POLE_STATES[1] = obj->cSFunObject.P5_IC2RTP;
    obj->cSFunObject.W0_ZERO_STATES[2] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W1_POLE_STATES[2] = obj->cSFunObject.P5_IC2RTP;
    obj->cSFunObject.W0_ZERO_STATES[3] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W1_POLE_STATES[3] = obj->cSFunObject.P5_IC2RTP;
  }

  /* System object Outputs function: dsp.BiquadFilter */
  numAccum = obj->cSFunObject.P1_RTP1COEFF[0] * rtu_0;
  numAccum += obj->cSFunObject.W0_ZERO_STATES[0] * obj->
    cSFunObject.P1_RTP1COEFF[1];
  numAccum += obj->cSFunObject.W0_ZERO_STATES[1] * obj->
    cSFunObject.P1_RTP1COEFF[2];
  localB->LowpassFilter = numAccum - obj->cSFunObject.P2_RTP2COEFF[0] *
    obj->cSFunObject.W1_POLE_STATES[0];
  localB->LowpassFilter -= obj->cSFunObject.P2_RTP2COEFF[1] *
    obj->cSFunObject.W1_POLE_STATES[1];
  obj->cSFunObject.W0_ZERO_STATES[1] = obj->cSFunObject.W0_ZERO_STATES[0];
  obj->cSFunObject.W0_ZERO_STATES[0] = rtu_0;
  obj->cSFunObject.W1_POLE_STATES[1] = obj->cSFunObject.W1_POLE_STATES[0];
  obj->cSFunObject.W1_POLE_STATES[0] = localB->LowpassFilter;
  stageIn = localB->LowpassFilter;
  numAccum = obj->cSFunObject.P1_RTP1COEFF[3] * localB->LowpassFilter;
  numAccum += obj->cSFunObject.W0_ZERO_STATES[2] * obj->
    cSFunObject.P1_RTP1COEFF[4];
  numAccum += obj->cSFunObject.W0_ZERO_STATES[3] * obj->
    cSFunObject.P1_RTP1COEFF[5];
  localB->LowpassFilter = numAccum - obj->cSFunObject.P2_RTP2COEFF[2] *
    obj->cSFunObject.W1_POLE_STATES[2];
  localB->LowpassFilter -= obj->cSFunObject.P2_RTP2COEFF[3] *
    obj->cSFunObject.W1_POLE_STATES[3];
  obj->cSFunObject.W0_ZERO_STATES[3] = obj->cSFunObject.W0_ZERO_STATES[2];
  obj->cSFunObject.W0_ZERO_STATES[2] = stageIn;
  obj->cSFunObject.W1_POLE_STATES[3] = obj->cSFunObject.W1_POLE_STATES[2];
  obj->cSFunObject.W1_POLE_STATES[2] = localB->LowpassFilter;

  /* End of MATLABSystem: '<S2>/Lowpass Filter' */
}

/* Termination for atomic system: */
void joystick_to__LowpassFilter_Term(DW_LowpassFilter_joystick_to__T *localDW)
{
  b_dspcodegen_BiquadFilter_joy_T *obj;

  /* Terminate for MATLABSystem: '<S2>/Lowpass Filter' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      obj = localDW->obj.FilterObj;
      if (obj->isInitialized == 1) {
        obj->isInitialized = 2;
      }

      localDW->obj.NumChannels = -1;
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/Lowpass Filter' */
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void joystick_to_force__expand_atan2(const real_T a_data[], const int32_T
  a_size[3], const real_T b_data[], const int32_T b_size[3], real_T c_data[],
  int32_T c_size[3])
{
  int32_T c_data_tmp;
  c_size[0] = 1;
  c_size[1] = 1;

  /* Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion' */
  if (b_size[2] == 1) {
    c_size[2] = a_size[2];
    c_data_tmp = a_size[2];
  } else {
    c_size[2] = 0;
    c_data_tmp = 0;
  }

  if (c_data_tmp != 0) {
    c_data[0] = rt_atan2d_snf(a_data[0], b_data[0]);
  }

  /* End of Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion' */
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_to_force_mocap_xnrm2(int32_T n, const real_T x[12],
  int32_T ix0)
{
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      joystick_to_force_mocap_B.scale_l = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        joystick_to_force_mocap_B.absxk_j = fabs(x[k - 1]);
        if (joystick_to_force_mocap_B.absxk_j >
            joystick_to_force_mocap_B.scale_l) {
          joystick_to_force_mocap_B.t_d = joystick_to_force_mocap_B.scale_l /
            joystick_to_force_mocap_B.absxk_j;
          y = y * joystick_to_force_mocap_B.t_d * joystick_to_force_mocap_B.t_d
            + 1.0;
          joystick_to_force_mocap_B.scale_l = joystick_to_force_mocap_B.absxk_j;
        } else {
          joystick_to_force_mocap_B.t_d = joystick_to_force_mocap_B.absxk_j /
            joystick_to_force_mocap_B.scale_l;
          y += joystick_to_force_mocap_B.t_d * joystick_to_force_mocap_B.t_d;
        }
      }

      y = joystick_to_force_mocap_B.scale_l * sqrt(y);
    }
  }

  return y;
}

static real_T joystick_to_force_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T b;
  real_T y;
  joystick_to_force_mocap_B.a_j = fabs(u0);
  b = fabs(u1);
  if (joystick_to_force_mocap_B.a_j < b) {
    joystick_to_force_mocap_B.a_j /= b;
    y = sqrt(joystick_to_force_mocap_B.a_j * joystick_to_force_mocap_B.a_j + 1.0)
      * b;
  } else if (joystick_to_force_mocap_B.a_j > b) {
    b /= joystick_to_force_mocap_B.a_j;
    y = sqrt(b * b + 1.0) * joystick_to_force_mocap_B.a_j;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = joystick_to_force_mocap_B.a_j * 1.4142135623730951;
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moca_mldivide(const real_T A[12], const real_T B[3],
  real_T Y[4])
{
  int32_T b_ix;
  int32_T c_j;
  int32_T exitg1;
  int32_T g;
  int32_T h_k;
  int32_T ia;
  int32_T ii;
  int32_T iy;
  int32_T pvt;
  boolean_T exitg2;
  memcpy(&joystick_to_force_mocap_B.b_A[0], &A[0], 12U * sizeof(real_T));
  joystick_to_force_mocap_B.b_B[0] = B[0];
  joystick_to_force_mocap_B.b_B[1] = B[1];
  joystick_to_force_mocap_B.b_B[2] = B[2];
  joystick_to_force_mocap_B.jpvt[0] = 1;
  joystick_to_force_mocap_B.jpvt[1] = 2;
  joystick_to_force_mocap_B.jpvt[2] = 3;
  joystick_to_force_mocap_B.jpvt[3] = 4;
  joystick_to_force_mocap_B.tau[0] = 0.0;
  joystick_to_force_mocap_B.tau[1] = 0.0;
  joystick_to_force_mocap_B.tau[2] = 0.0;
  for (c_j = 0; c_j < 4; c_j++) {
    joystick_to_force_mocap_B.work_k[c_j] = 0.0;
    ii = c_j * 3 + 1;
    joystick_to_force_mocap_B.smax = 0.0;
    joystick_to_force_mocap_B.scale_m = 3.3121686421112381E-170;
    for (pvt = ii; pvt <= ii + 2; pvt++) {
      joystick_to_force_mocap_B.absxk_n = fabs(A[pvt - 1]);
      if (joystick_to_force_mocap_B.absxk_n > joystick_to_force_mocap_B.scale_m)
      {
        joystick_to_force_mocap_B.t_p = joystick_to_force_mocap_B.scale_m /
          joystick_to_force_mocap_B.absxk_n;
        joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.smax *
          joystick_to_force_mocap_B.t_p * joystick_to_force_mocap_B.t_p + 1.0;
        joystick_to_force_mocap_B.scale_m = joystick_to_force_mocap_B.absxk_n;
      } else {
        joystick_to_force_mocap_B.t_p = joystick_to_force_mocap_B.absxk_n /
          joystick_to_force_mocap_B.scale_m;
        joystick_to_force_mocap_B.smax += joystick_to_force_mocap_B.t_p *
          joystick_to_force_mocap_B.t_p;
      }
    }

    joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.scale_m * sqrt
      (joystick_to_force_mocap_B.smax);
    joystick_to_force_mocap_B.vn1_c[c_j] = joystick_to_force_mocap_B.smax;
    joystick_to_force_mocap_B.vn2_b[c_j] = joystick_to_force_mocap_B.smax;
  }

  for (c_j = 0; c_j < 3; c_j++) {
    ii = c_j * 3 + c_j;
    pvt = 4 - c_j;
    b_ix = 0;
    joystick_to_force_mocap_B.smax = fabs(joystick_to_force_mocap_B.vn1_c[c_j]);
    for (iy = 2; iy <= pvt; iy++) {
      joystick_to_force_mocap_B.scale_m = fabs(joystick_to_force_mocap_B.vn1_c
        [(c_j + iy) - 1]);
      if (joystick_to_force_mocap_B.scale_m > joystick_to_force_mocap_B.smax) {
        b_ix = iy - 1;
        joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.scale_m;
      }
    }

    pvt = c_j + b_ix;
    if (pvt != c_j) {
      b_ix = pvt * 3;
      iy = c_j * 3;
      joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.b_A[b_ix];
      joystick_to_force_mocap_B.b_A[b_ix] = joystick_to_force_mocap_B.b_A[iy];
      joystick_to_force_mocap_B.b_A[iy] = joystick_to_force_mocap_B.smax;
      joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.b_A[b_ix + 1];
      joystick_to_force_mocap_B.b_A[b_ix + 1] = joystick_to_force_mocap_B.b_A[iy
        + 1];
      joystick_to_force_mocap_B.b_A[iy + 1] = joystick_to_force_mocap_B.smax;
      joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.b_A[b_ix + 2];
      joystick_to_force_mocap_B.b_A[b_ix + 2] = joystick_to_force_mocap_B.b_A[iy
        + 2];
      joystick_to_force_mocap_B.b_A[iy + 2] = joystick_to_force_mocap_B.smax;
      b_ix = joystick_to_force_mocap_B.jpvt[pvt];
      joystick_to_force_mocap_B.jpvt[pvt] = joystick_to_force_mocap_B.jpvt[c_j];
      joystick_to_force_mocap_B.jpvt[c_j] = (int8_T)b_ix;
      joystick_to_force_mocap_B.vn1_c[pvt] = joystick_to_force_mocap_B.vn1_c[c_j];
      joystick_to_force_mocap_B.vn2_b[pvt] = joystick_to_force_mocap_B.vn2_b[c_j];
    }

    if (c_j + 1 < 3) {
      joystick_to_force_mocap_B.scale_m = joystick_to_force_mocap_B.b_A[ii];
      pvt = ii + 2;
      joystick_to_force_mocap_B.tau[c_j] = 0.0;
      joystick_to_force_mocap_B.smax = joystick_to_force_mocap_xnrm2(2 - c_j,
        joystick_to_force_mocap_B.b_A, ii + 2);
      if (joystick_to_force_mocap_B.smax != 0.0) {
        joystick_to_force_mocap_B.absxk_n = joystick_to_force_mocap_B.b_A[ii];
        joystick_to_force_mocap_B.smax = joystick_to_force_rt_hypotd_snf
          (joystick_to_force_mocap_B.absxk_n, joystick_to_force_mocap_B.smax);
        if (joystick_to_force_mocap_B.absxk_n >= 0.0) {
          joystick_to_force_mocap_B.smax = -joystick_to_force_mocap_B.smax;
        }

        if (fabs(joystick_to_force_mocap_B.smax) < 1.0020841800044864E-292) {
          b_ix = 0;
          iy = (ii - c_j) + 3;
          do {
            b_ix++;
            for (h_k = pvt; h_k <= iy; h_k++) {
              joystick_to_force_mocap_B.b_A[h_k - 1] *= 9.9792015476736E+291;
            }

            joystick_to_force_mocap_B.smax *= 9.9792015476736E+291;
            joystick_to_force_mocap_B.scale_m *= 9.9792015476736E+291;
          } while ((fabs(joystick_to_force_mocap_B.smax) <
                    1.0020841800044864E-292) && (b_ix < 20));

          joystick_to_force_mocap_B.smax = joystick_to_force_rt_hypotd_snf
            (joystick_to_force_mocap_B.scale_m, joystick_to_force_mocap_xnrm2(2
              - c_j, joystick_to_force_mocap_B.b_A, ii + 2));
          if (joystick_to_force_mocap_B.scale_m >= 0.0) {
            joystick_to_force_mocap_B.smax = -joystick_to_force_mocap_B.smax;
          }

          joystick_to_force_mocap_B.tau[c_j] = (joystick_to_force_mocap_B.smax -
            joystick_to_force_mocap_B.scale_m) / joystick_to_force_mocap_B.smax;
          joystick_to_force_mocap_B.scale_m = 1.0 /
            (joystick_to_force_mocap_B.scale_m - joystick_to_force_mocap_B.smax);
          for (h_k = pvt; h_k <= iy; h_k++) {
            joystick_to_force_mocap_B.b_A[h_k - 1] *=
              joystick_to_force_mocap_B.scale_m;
          }

          for (pvt = 0; pvt < b_ix; pvt++) {
            joystick_to_force_mocap_B.smax *= 1.0020841800044864E-292;
          }

          joystick_to_force_mocap_B.scale_m = joystick_to_force_mocap_B.smax;
        } else {
          joystick_to_force_mocap_B.tau[c_j] = (joystick_to_force_mocap_B.smax -
            joystick_to_force_mocap_B.absxk_n) / joystick_to_force_mocap_B.smax;
          joystick_to_force_mocap_B.scale_m = 1.0 /
            (joystick_to_force_mocap_B.absxk_n - joystick_to_force_mocap_B.smax);
          b_ix = (ii - c_j) + 3;
          for (iy = pvt; iy <= b_ix; iy++) {
            joystick_to_force_mocap_B.b_A[iy - 1] *=
              joystick_to_force_mocap_B.scale_m;
          }

          joystick_to_force_mocap_B.scale_m = joystick_to_force_mocap_B.smax;
        }
      }

      joystick_to_force_mocap_B.b_A[ii] = joystick_to_force_mocap_B.scale_m;
    } else {
      joystick_to_force_mocap_B.tau[2] = 0.0;
    }

    joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.b_A[ii];
    joystick_to_force_mocap_B.b_A[ii] = 1.0;
    if (joystick_to_force_mocap_B.tau[c_j] != 0.0) {
      pvt = 3 - c_j;
      b_ix = (ii - c_j) + 2;
      while ((pvt > 0) && (joystick_to_force_mocap_B.b_A[b_ix] == 0.0)) {
        pvt--;
        b_ix--;
      }

      b_ix = 3 - c_j;
      exitg2 = false;
      while ((!exitg2) && (b_ix > 0)) {
        iy = ((b_ix - 1) * 3 + ii) + 3;
        h_k = iy;
        do {
          exitg1 = 0;
          if (h_k + 1 <= iy + pvt) {
            if (joystick_to_force_mocap_B.b_A[h_k] != 0.0) {
              exitg1 = 1;
            } else {
              h_k++;
            }
          } else {
            b_ix--;
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }

      b_ix--;
    } else {
      pvt = 0;
      b_ix = -1;
    }

    if (pvt > 0) {
      if (b_ix + 1 != 0) {
        memset(&joystick_to_force_mocap_B.work_k[0], 0, (uint32_T)(b_ix + 1) *
               sizeof(real_T));
        iy = (3 * b_ix + ii) + 4;
        for (h_k = ii + 4; h_k <= iy; h_k += 3) {
          joystick_to_force_mocap_B.scale_m = 0.0;
          g = (h_k + pvt) - 1;
          for (ia = h_k; ia <= g; ia++) {
            joystick_to_force_mocap_B.scale_m += joystick_to_force_mocap_B.b_A
              [(ii + ia) - h_k] * joystick_to_force_mocap_B.b_A[ia - 1];
          }

          g = div_nde_s32_floor((h_k - ii) - 4, 3);
          joystick_to_force_mocap_B.work_k[g] +=
            joystick_to_force_mocap_B.scale_m;
        }
      }

      if (!(-joystick_to_force_mocap_B.tau[c_j] == 0.0)) {
        iy = ii + 4;
        for (h_k = 0; h_k <= b_ix; h_k++) {
          joystick_to_force_mocap_B.scale_m =
            joystick_to_force_mocap_B.work_k[h_k];
          if (joystick_to_force_mocap_B.scale_m != 0.0) {
            joystick_to_force_mocap_B.scale_m *=
              -joystick_to_force_mocap_B.tau[c_j];
            g = pvt + iy;
            for (ia = iy; ia < g; ia++) {
              joystick_to_force_mocap_B.b_A[ia - 1] +=
                joystick_to_force_mocap_B.b_A[(ii + ia) - iy] *
                joystick_to_force_mocap_B.scale_m;
            }
          }

          iy += 3;
        }
      }
    }

    joystick_to_force_mocap_B.b_A[ii] = joystick_to_force_mocap_B.smax;
    for (ii = c_j + 2; ii < 5; ii++) {
      pvt = (ii - 1) * 3 + c_j;
      joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.vn1_c[ii - 1];
      if (joystick_to_force_mocap_B.smax != 0.0) {
        joystick_to_force_mocap_B.scale_m = fabs
          (joystick_to_force_mocap_B.b_A[pvt]) / joystick_to_force_mocap_B.smax;
        joystick_to_force_mocap_B.scale_m = 1.0 -
          joystick_to_force_mocap_B.scale_m * joystick_to_force_mocap_B.scale_m;
        if (joystick_to_force_mocap_B.scale_m < 0.0) {
          joystick_to_force_mocap_B.scale_m = 0.0;
        }

        joystick_to_force_mocap_B.absxk_n = joystick_to_force_mocap_B.smax /
          joystick_to_force_mocap_B.vn2_b[ii - 1];
        joystick_to_force_mocap_B.absxk_n = joystick_to_force_mocap_B.absxk_n *
          joystick_to_force_mocap_B.absxk_n * joystick_to_force_mocap_B.scale_m;
        if (joystick_to_force_mocap_B.absxk_n <= 1.4901161193847656E-8) {
          if (c_j + 1 < 3) {
            joystick_to_force_mocap_B.smax = joystick_to_force_mocap_xnrm2(2 -
              c_j, joystick_to_force_mocap_B.b_A, pvt + 2);
            joystick_to_force_mocap_B.vn1_c[ii - 1] =
              joystick_to_force_mocap_B.smax;
            joystick_to_force_mocap_B.vn2_b[ii - 1] =
              joystick_to_force_mocap_B.smax;
          } else {
            joystick_to_force_mocap_B.vn1_c[ii - 1] = 0.0;
            joystick_to_force_mocap_B.vn2_b[ii - 1] = 0.0;
          }
        } else {
          joystick_to_force_mocap_B.vn1_c[ii - 1] =
            joystick_to_force_mocap_B.smax * sqrt
            (joystick_to_force_mocap_B.scale_m);
        }
      }
    }
  }

  c_j = 0;
  joystick_to_force_mocap_B.smax = 8.8817841970012523E-15 * fabs
    (joystick_to_force_mocap_B.b_A[0]);
  while ((c_j < 3) && (!(fabs(joystick_to_force_mocap_B.b_A[3 * c_j + c_j]) <=
                         joystick_to_force_mocap_B.smax))) {
    c_j++;
  }

  Y[0] = 0.0;
  Y[1] = 0.0;
  Y[2] = 0.0;
  Y[3] = 0.0;
  for (ii = 0; ii < 3; ii++) {
    if (joystick_to_force_mocap_B.tau[ii] != 0.0) {
      joystick_to_force_mocap_B.smax = joystick_to_force_mocap_B.b_B[ii];
      for (pvt = ii + 2; pvt < 4; pvt++) {
        joystick_to_force_mocap_B.smax += joystick_to_force_mocap_B.b_A[(3 * ii
          + pvt) - 1] * joystick_to_force_mocap_B.b_B[pvt - 1];
      }

      joystick_to_force_mocap_B.smax *= joystick_to_force_mocap_B.tau[ii];
      if (joystick_to_force_mocap_B.smax != 0.0) {
        joystick_to_force_mocap_B.b_B[ii] -= joystick_to_force_mocap_B.smax;
        for (pvt = ii + 2; pvt < 4; pvt++) {
          joystick_to_force_mocap_B.b_B[pvt - 1] -=
            joystick_to_force_mocap_B.b_A[(3 * ii + pvt) - 1] *
            joystick_to_force_mocap_B.smax;
        }
      }
    }
  }

  for (ii = 0; ii < c_j; ii++) {
    Y[joystick_to_force_mocap_B.jpvt[ii] - 1] = joystick_to_force_mocap_B.b_B[ii];
  }

  for (ii = c_j; ii >= 1; ii--) {
    pvt = (ii - 1) * 3;
    h_k = joystick_to_force_mocap_B.jpvt[ii - 1] - 1;
    Y[joystick_to_force_mocap_B.jpvt[ii - 1] - 1] = Y[h_k] /
      joystick_to_force_mocap_B.b_A[(pvt + ii) - 1];
    for (b_ix = 0; b_ix <= ii - 2; b_ix++) {
      iy = joystick_to_force_mocap_B.jpvt[b_ix] - 1;
      Y[iy] -= joystick_to_force_mocap_B.b_A[pvt + b_ix] * Y[h_k];
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystic_modifyOverheadPhaseOne_(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj)
{
  int32_T d;
  int32_T idx;
  int32_T idxStartIneq;
  int32_T idxUpperExisting;
  idxStartIneq = (uint8_T)obj->sizes[0];
  for (idx = 0; idx < idxStartIneq; idx++) {
    obj->ATwset[5 * idx + 4] = 0.0;
  }

  obj->Aeq[4] = 0.0;
  idxStartIneq = (obj->isActiveIdx[1] - 1) * 5;
  obj->ATwset[idxStartIneq + 4] = 0.0;
  obj->Aeq[9] = 0.0;
  obj->ATwset[idxStartIneq + 9] = 0.0;
  obj->Aeq[14] = 0.0;
  obj->ATwset[idxStartIneq + 14] = 0.0;
  obj->indexLB[obj->sizes[3] - 1] = 5;
  obj->lb[4] = obj->SLACK0;
  idxStartIneq = obj->isActiveIdx[2];
  idxUpperExisting = obj->nActiveConstr;
  for (idx = idxStartIneq; idx <= idxUpperExisting; idx++) {
    obj->ATwset[5 * (idx - 1) + 4] = -1.0;
  }

  idxUpperExisting = obj->isActiveIdx[4] - 1;
  if (obj->nWConstr[4] > 0) {
    d = obj->sizesNormal[4];
    for (idx = d; idx >= 1; idx--) {
      idxStartIneq = idxUpperExisting + idx;
      obj->isActiveConstr[idxStartIneq] = obj->isActiveConstr[idxStartIneq - 1];
    }
  } else {
    obj->isActiveConstr[(obj->isActiveIdx[4] + obj->sizesNormal[4]) - 1] = false;
  }

  obj->isActiveConstr[obj->isActiveIdx[4] - 1] = false;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_forc_setProblemType(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T PROBLEM_TYPE)
{
  int32_T b_idx_row;
  int32_T colOffsetATw;
  int32_T colOffsetAeq;
  int32_T d_idx_row;
  int32_T idx_lb;
  switch (PROBLEM_TYPE) {
   case 3:
    obj->nVar = 4;
    obj->mConstr = obj->mConstrOrig;
    if (obj->nWConstr[4] > 0) {
      joystick_to_force_mocap_B.idxUpperExisting = obj->isActiveIdx[4] - 1;
      colOffsetAeq = (uint8_T)obj->sizesNormal[4];
      for (colOffsetATw = 0; colOffsetATw < colOffsetAeq; colOffsetATw++) {
        idx_lb = joystick_to_force_mocap_B.idxUpperExisting + colOffsetATw;
        obj->isActiveConstr[(obj->isActiveIdxNormal[4] + colOffsetATw) - 1] =
          obj->isActiveConstr[idx_lb];
        obj->isActiveConstr[idx_lb] = false;
      }
    }

    for (idx_lb = 0; idx_lb < 5; idx_lb++) {
      obj->sizes[idx_lb] = obj->sizesNormal[idx_lb];
    }

    for (idx_lb = 0; idx_lb < 6; idx_lb++) {
      obj->isActiveIdx[idx_lb] = obj->isActiveIdxNormal[idx_lb];
    }
    break;

   case 1:
    obj->nVar = 5;
    obj->mConstr = obj->mConstrOrig + 1;
    for (idx_lb = 0; idx_lb < 5; idx_lb++) {
      obj->sizes[idx_lb] = obj->sizesPhaseOne[idx_lb];
    }

    joystic_modifyOverheadPhaseOne_(obj);
    for (idx_lb = 0; idx_lb < 6; idx_lb++) {
      obj->isActiveIdx[idx_lb] = obj->isActiveIdxPhaseOne[idx_lb];
    }
    break;

   case 2:
    obj->nVar = 4;
    obj->mConstr = 11;
    for (idx_lb = 0; idx_lb < 5; idx_lb++) {
      obj->sizes[idx_lb] = obj->sizesRegularized[idx_lb];
    }

    if (obj->probType != 4) {
      for (joystick_to_force_mocap_B.idxUpperExisting = 0;
           joystick_to_force_mocap_B.idxUpperExisting < 3;
           joystick_to_force_mocap_B.idxUpperExisting++) {
        colOffsetAeq = 5 * joystick_to_force_mocap_B.idxUpperExisting - 1;
        colOffsetATw = (obj->isActiveIdx[1] - 1) * 5 + colOffsetAeq;
        for (idx_lb = 5; idx_lb <= joystick_to_force_mocap_B.idxUpperExisting +
             4; idx_lb++) {
          obj->Aeq[idx_lb + colOffsetAeq] = 0.0;
          obj->ATwset[idx_lb + colOffsetATw] = 0.0;
        }

        idx_lb = joystick_to_force_mocap_B.idxUpperExisting + colOffsetAeq;
        obj->Aeq[idx_lb + 5] = -1.0;
        d_idx_row = joystick_to_force_mocap_B.idxUpperExisting + colOffsetATw;
        obj->ATwset[d_idx_row + 5] = -1.0;
        for (b_idx_row = joystick_to_force_mocap_B.idxUpperExisting + 6;
             b_idx_row < 8; b_idx_row++) {
          obj->Aeq[b_idx_row + colOffsetAeq] = 0.0;
          obj->ATwset[b_idx_row + colOffsetATw] = 0.0;
        }

        for (b_idx_row = 8; b_idx_row <=
             joystick_to_force_mocap_B.idxUpperExisting + 7; b_idx_row++) {
          obj->Aeq[b_idx_row + colOffsetAeq] = 0.0;
          obj->ATwset[b_idx_row + colOffsetATw] = 0.0;
        }

        obj->Aeq[idx_lb + 8] = 1.0;
        obj->ATwset[d_idx_row + 8] = 1.0;
      }

      idx_lb = 4;
      joystick_to_force_mocap_B.idxUpperExisting = obj->sizesNormal[3] + 1;
      colOffsetAeq = obj->sizesRegularized[3];
      for (colOffsetATw = joystick_to_force_mocap_B.idxUpperExisting;
           colOffsetATw <= colOffsetAeq; colOffsetATw++) {
        idx_lb++;
        obj->indexLB[colOffsetATw - 1] = idx_lb;
      }

      if (obj->nWConstr[4] > 0) {
        idx_lb = (uint8_T)obj->sizesRegularized[4];
        for (colOffsetATw = 0; colOffsetATw < idx_lb; colOffsetATw++) {
          obj->isActiveConstr[obj->isActiveIdxRegularized[4] + colOffsetATw] =
            obj->isActiveConstr[(obj->isActiveIdx[4] + colOffsetATw) - 1];
        }
      }

      idx_lb = obj->isActiveIdx[4];
      joystick_to_force_mocap_B.idxUpperExisting = obj->isActiveIdxRegularized[4]
        - 1;
      if (idx_lb <= joystick_to_force_mocap_B.idxUpperExisting) {
        memset(&obj->isActiveConstr[idx_lb + -1], 0, (uint32_T)
               ((joystick_to_force_mocap_B.idxUpperExisting - idx_lb) + 1) *
               sizeof(boolean_T));
      }

      obj->lb[4] = 0.0;
      joystick_to_force_mocap_B.idxUpperExisting = obj->isActiveIdx[2];
      colOffsetAeq = obj->nActiveConstr;
      for (idx_lb = joystick_to_force_mocap_B.idxUpperExisting; idx_lb <=
           colOffsetAeq; idx_lb++) {
        colOffsetATw = (idx_lb - 1) * 5 - 1;
        if (obj->Wid[idx_lb - 1] == 3) {
          b_idx_row = obj->Wlocalidx[idx_lb - 1];
          if (b_idx_row + 3 >= 5) {
            memset(&obj->ATwset[colOffsetATw + 5], 0, (uint32_T)((((b_idx_row +
                       3) + colOffsetATw) - colOffsetATw) - 4) * sizeof(real_T));
          }

          obj->ATwset[(b_idx_row + colOffsetATw) + 4] = -1.0;
          b_idx_row += 5;
          if (b_idx_row <= 4) {
            memset(&obj->ATwset[b_idx_row + colOffsetATw], 0, (uint32_T)
                   (((colOffsetATw - b_idx_row) - colOffsetATw) + 5) * sizeof
                   (real_T));
          }
        }
      }
    }

    for (idx_lb = 0; idx_lb < 6; idx_lb++) {
      obj->isActiveIdx[idx_lb] = obj->isActiveIdxRegularized[idx_lb];
    }
    break;

   default:
    obj->nVar = 5;
    obj->mConstr = 12;
    for (idx_lb = 0; idx_lb < 5; idx_lb++) {
      obj->sizes[idx_lb] = obj->sizesRegPhaseOne[idx_lb];
    }

    joystic_modifyOverheadPhaseOne_(obj);
    for (idx_lb = 0; idx_lb < 6; idx_lb++) {
      obj->isActiveIdx[idx_lb] = obj->isActiveIdxRegPhaseOne[idx_lb];
    }
    break;
  }

  obj->probType = PROBLEM_TYPE;
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_to_force_mocap_xnrm2_c(int32_T n, const real_T x[84],
  int32_T ix0)
{
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      joystick_to_force_mocap_B.scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        joystick_to_force_mocap_B.absxk = fabs(x[k - 1]);
        if (joystick_to_force_mocap_B.absxk > joystick_to_force_mocap_B.scale) {
          joystick_to_force_mocap_B.t = joystick_to_force_mocap_B.scale /
            joystick_to_force_mocap_B.absxk;
          y = y * joystick_to_force_mocap_B.t * joystick_to_force_mocap_B.t +
            1.0;
          joystick_to_force_mocap_B.scale = joystick_to_force_mocap_B.absxk;
        } else {
          joystick_to_force_mocap_B.t = joystick_to_force_mocap_B.absxk /
            joystick_to_force_mocap_B.scale;
          y += joystick_to_force_mocap_B.t * joystick_to_force_mocap_B.t;
        }
      }

      y = joystick_to_force_mocap_B.scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_to_force_mocap_xzlarfg(int32_T n, real_T *alpha1, real_T
  x[84], int32_T ix0)
{
  real_T tau;
  int32_T c;
  int32_T d_tmp;
  int32_T knt;
  tau = 0.0;
  if (n > 0) {
    joystick_to_force_mocap_B.xnorm = joystick_to_force_mocap_xnrm2_c(n - 1, x,
      ix0);
    if (joystick_to_force_mocap_B.xnorm != 0.0) {
      joystick_to_force_mocap_B.xnorm = joystick_to_force_rt_hypotd_snf(*alpha1,
        joystick_to_force_mocap_B.xnorm);
      if (*alpha1 >= 0.0) {
        joystick_to_force_mocap_B.xnorm = -joystick_to_force_mocap_B.xnorm;
      }

      if (fabs(joystick_to_force_mocap_B.xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        d_tmp = (ix0 + n) - 2;
        do {
          knt++;
          for (c = ix0; c <= d_tmp; c++) {
            x[c - 1] *= 9.9792015476736E+291;
          }

          joystick_to_force_mocap_B.xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while ((fabs(joystick_to_force_mocap_B.xnorm) <
                  1.0020841800044864E-292) && (knt < 20));

        joystick_to_force_mocap_B.xnorm = joystick_to_force_rt_hypotd_snf
          (*alpha1, joystick_to_force_mocap_xnrm2_c(n - 1, x, ix0));
        if (*alpha1 >= 0.0) {
          joystick_to_force_mocap_B.xnorm = -joystick_to_force_mocap_B.xnorm;
        }

        tau = (joystick_to_force_mocap_B.xnorm - *alpha1) /
          joystick_to_force_mocap_B.xnorm;
        joystick_to_force_mocap_B.a = 1.0 / (*alpha1 -
          joystick_to_force_mocap_B.xnorm);
        for (c = ix0; c <= d_tmp; c++) {
          x[c - 1] *= joystick_to_force_mocap_B.a;
        }

        for (c = 0; c < knt; c++) {
          joystick_to_force_mocap_B.xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = joystick_to_force_mocap_B.xnorm;
      } else {
        tau = (joystick_to_force_mocap_B.xnorm - *alpha1) /
          joystick_to_force_mocap_B.xnorm;
        joystick_to_force_mocap_B.a = 1.0 / (*alpha1 -
          joystick_to_force_mocap_B.xnorm);
        c = (ix0 + n) - 2;
        for (knt = ix0; knt <= c; knt++) {
          x[knt - 1] *= joystick_to_force_mocap_B.a;
        }

        *alpha1 = joystick_to_force_mocap_B.xnorm;
      }
    }
  }

  return tau;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[84], int32_T ic0, real_T work[12])
{
  int32_T b_ia;
  int32_T coltop;
  int32_T d;
  int32_T exitg1;
  int32_T jA;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      coltop = (lastc - 1) * 7 + ic0;
      b_ia = coltop;
      do {
        exitg1 = 0;
        if (b_ia <= (coltop + lastv) - 1) {
          if (C[b_ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            b_ia++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    lastc--;
  } else {
    lastv = 0;
    lastc = -1;
  }

  if (lastv > 0) {
    if (lastc + 1 != 0) {
      if (lastc >= 0) {
        memset(&work[0], 0, (uint32_T)(lastc + 1) * sizeof(real_T));
      }

      jA = 7 * lastc + ic0;
      for (coltop = ic0; coltop <= jA; coltop += 7) {
        joystick_to_force_mocap_B.c_g = 0.0;
        d = (coltop + lastv) - 1;
        for (b_ia = coltop; b_ia <= d; b_ia++) {
          joystick_to_force_mocap_B.c_g += C[((iv0 + b_ia) - coltop) - 1] *
            C[b_ia - 1];
        }

        b_ia = div_nde_s32_floor(coltop - ic0, 7);
        work[b_ia] += joystick_to_force_mocap_B.c_g;
      }
    }

    if (!(-tau == 0.0)) {
      jA = ic0;
      for (coltop = 0; coltop <= lastc; coltop++) {
        joystick_to_force_mocap_B.c_g = work[coltop];
        if (joystick_to_force_mocap_B.c_g != 0.0) {
          joystick_to_force_mocap_B.c_g *= -tau;
          d = lastv + jA;
          for (b_ia = jA; b_ia < d; b_ia++) {
            C[b_ia - 1] += C[((iv0 + b_ia) - jA) - 1] *
              joystick_to_force_mocap_B.c_g;
          }
        }

        jA += 7;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_qrf(real_T A[84], int32_T m, int32_T n,
  int32_T nfxd, real_T tau[7])
{
  int32_T b;
  int32_T i;
  int32_T mmi;
  memset(&joystick_to_force_mocap_B.work[0], 0, 12U * sizeof(real_T));
  b = (uint8_T)nfxd;
  for (i = 0; i < b; i++) {
    joystick_to_force_mocap_B.ii = i * 7 + i;
    mmi = m - i;
    if (i + 1 < m) {
      joystick_to_force_mocap_B.b_atmp = A[joystick_to_force_mocap_B.ii];
      joystick_to_force_mocap_B.tau_c = joystick_to_force_mocap_xzlarfg(mmi,
        &joystick_to_force_mocap_B.b_atmp, A, joystick_to_force_mocap_B.ii + 2);
      tau[i] = joystick_to_force_mocap_B.tau_c;
      A[joystick_to_force_mocap_B.ii] = joystick_to_force_mocap_B.b_atmp;
    } else {
      joystick_to_force_mocap_B.tau_c = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      joystick_to_force_mocap_B.b_atmp = A[joystick_to_force_mocap_B.ii];
      A[joystick_to_force_mocap_B.ii] = 1.0;
      joystick_to_force_mocap_xzlarf(mmi, (n - i) - 1,
        joystick_to_force_mocap_B.ii + 1, joystick_to_force_mocap_B.tau_c, A,
        joystick_to_force_mocap_B.ii + 8, joystick_to_force_mocap_B.work);
      A[joystick_to_force_mocap_B.ii] = joystick_to_force_mocap_B.b_atmp;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moc_factorQRE(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  int32_T mrows, int32_T ncols)
{
  if (mrows * ncols == 0) {
    obj->mrows = mrows;
    obj->ncols = ncols;
    obj->minRowCol = 0;
  } else {
    obj->usedPivoting = true;
    obj->mrows = mrows;
    obj->ncols = ncols;
    if (mrows <= ncols) {
      joystick_to_force_mocap_B.u1 = mrows;
    } else {
      joystick_to_force_mocap_B.u1 = ncols;
    }

    obj->minRowCol = joystick_to_force_mocap_B.u1;
    for (joystick_to_force_mocap_B.i_a = 0; joystick_to_force_mocap_B.i_a < 7;
         joystick_to_force_mocap_B.i_a++) {
      obj->tau[joystick_to_force_mocap_B.i_a] = 0.0;
    }

    if (joystick_to_force_mocap_B.u1 < 1) {
      for (joystick_to_force_mocap_B.u1 = 0; joystick_to_force_mocap_B.u1 <
           ncols; joystick_to_force_mocap_B.u1++) {
        obj->jpvt[joystick_to_force_mocap_B.u1] = joystick_to_force_mocap_B.u1 +
          1;
      }
    } else {
      joystick_to_force_mocap_B.nfxd = -1;
      for (joystick_to_force_mocap_B.i_a = 0; joystick_to_force_mocap_B.i_a <
           ncols; joystick_to_force_mocap_B.i_a++) {
        if (obj->jpvt[joystick_to_force_mocap_B.i_a] != 0) {
          joystick_to_force_mocap_B.nfxd++;
          if (joystick_to_force_mocap_B.i_a + 1 !=
              joystick_to_force_mocap_B.nfxd + 1) {
            joystick_to_force_mocap_B.ix = joystick_to_force_mocap_B.i_a * 7;
            joystick_to_force_mocap_B.iy = joystick_to_force_mocap_B.nfxd * 7;
            for (joystick_to_force_mocap_B.mmi = 0;
                 joystick_to_force_mocap_B.mmi < mrows;
                 joystick_to_force_mocap_B.mmi++) {
              joystick_to_force_mocap_B.temp_tmp_e =
                joystick_to_force_mocap_B.ix + joystick_to_force_mocap_B.mmi;
              joystick_to_force_mocap_B.temp_f = obj->
                QR[joystick_to_force_mocap_B.temp_tmp_e];
              joystick_to_force_mocap_B.itemp = joystick_to_force_mocap_B.iy +
                joystick_to_force_mocap_B.mmi;
              obj->QR[joystick_to_force_mocap_B.temp_tmp_e] = obj->
                QR[joystick_to_force_mocap_B.itemp];
              obj->QR[joystick_to_force_mocap_B.itemp] =
                joystick_to_force_mocap_B.temp_f;
            }

            obj->jpvt[joystick_to_force_mocap_B.i_a] = obj->
              jpvt[joystick_to_force_mocap_B.nfxd];
            obj->jpvt[joystick_to_force_mocap_B.nfxd] =
              joystick_to_force_mocap_B.i_a + 1;
          } else {
            obj->jpvt[joystick_to_force_mocap_B.i_a] =
              joystick_to_force_mocap_B.i_a + 1;
          }
        } else {
          obj->jpvt[joystick_to_force_mocap_B.i_a] =
            joystick_to_force_mocap_B.i_a + 1;
        }
      }

      if (joystick_to_force_mocap_B.nfxd + 1 <= joystick_to_force_mocap_B.u1) {
        joystick_to_force_mocap_B.nfxd++;
      } else {
        joystick_to_force_mocap_B.nfxd = joystick_to_force_mocap_B.u1;
      }

      for (joystick_to_force_mocap_B.i_a = 0; joystick_to_force_mocap_B.i_a < 7;
           joystick_to_force_mocap_B.i_a++) {
        obj->tau[joystick_to_force_mocap_B.i_a] = 0.0;
      }

      joystick_to_force_mocap_qrf(obj->QR, mrows, ncols,
        joystick_to_force_mocap_B.nfxd, obj->tau);
      if (joystick_to_force_mocap_B.nfxd < joystick_to_force_mocap_B.u1) {
        memset(&joystick_to_force_mocap_B.work_m[0], 0, 12U * sizeof(real_T));
        memset(&joystick_to_force_mocap_B.vn1[0], 0, 12U * sizeof(real_T));
        memset(&joystick_to_force_mocap_B.vn2[0], 0, 12U * sizeof(real_T));
        for (joystick_to_force_mocap_B.i_a = joystick_to_force_mocap_B.nfxd + 1;
             joystick_to_force_mocap_B.i_a <= ncols;
             joystick_to_force_mocap_B.i_a++) {
          joystick_to_force_mocap_B.temp_f = joystick_to_force_mocap_xnrm2_c
            (mrows - joystick_to_force_mocap_B.nfxd, obj->QR,
             ((joystick_to_force_mocap_B.i_a - 1) * 7 +
              joystick_to_force_mocap_B.nfxd) + 1);
          joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.i_a - 1] =
            joystick_to_force_mocap_B.temp_f;
          joystick_to_force_mocap_B.vn2[joystick_to_force_mocap_B.i_a - 1] =
            joystick_to_force_mocap_B.temp_f;
        }

        for (joystick_to_force_mocap_B.i_a = joystick_to_force_mocap_B.nfxd + 1;
             joystick_to_force_mocap_B.i_a <= joystick_to_force_mocap_B.u1;
             joystick_to_force_mocap_B.i_a++) {
          joystick_to_force_mocap_B.temp_tmp_e = (joystick_to_force_mocap_B.i_a
            - 1) * 7;
          joystick_to_force_mocap_B.ix = (joystick_to_force_mocap_B.temp_tmp_e +
            joystick_to_force_mocap_B.i_a) - 1;
          joystick_to_force_mocap_B.iy = ncols - joystick_to_force_mocap_B.i_a;
          joystick_to_force_mocap_B.mmi = mrows - joystick_to_force_mocap_B.i_a;
          if (joystick_to_force_mocap_B.iy + 1 < 1) {
            joystick_to_force_mocap_B.pvt = -2;
          } else {
            joystick_to_force_mocap_B.pvt = -1;
            if (joystick_to_force_mocap_B.iy + 1 > 1) {
              joystick_to_force_mocap_B.temp_f = fabs
                (joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.i_a - 1]);
              for (joystick_to_force_mocap_B.itemp = 2;
                   joystick_to_force_mocap_B.itemp <=
                   joystick_to_force_mocap_B.iy + 1;
                   joystick_to_force_mocap_B.itemp++) {
                joystick_to_force_mocap_B.s_g = fabs
                  (joystick_to_force_mocap_B.vn1[(joystick_to_force_mocap_B.i_a
                    + joystick_to_force_mocap_B.itemp) - 2]);
                if (joystick_to_force_mocap_B.s_g >
                    joystick_to_force_mocap_B.temp_f) {
                  joystick_to_force_mocap_B.pvt =
                    joystick_to_force_mocap_B.itemp - 2;
                  joystick_to_force_mocap_B.temp_f =
                    joystick_to_force_mocap_B.s_g;
                }
              }
            }
          }

          joystick_to_force_mocap_B.pvt += joystick_to_force_mocap_B.i_a;
          if (joystick_to_force_mocap_B.pvt + 1 != joystick_to_force_mocap_B.i_a)
          {
            joystick_to_force_mocap_B.c_ix = joystick_to_force_mocap_B.pvt * 7;
            for (joystick_to_force_mocap_B.c_k = 0;
                 joystick_to_force_mocap_B.c_k < mrows;
                 joystick_to_force_mocap_B.c_k++) {
              joystick_to_force_mocap_B.b_temp_tmp_a =
                joystick_to_force_mocap_B.c_ix + joystick_to_force_mocap_B.c_k;
              joystick_to_force_mocap_B.temp_f = obj->
                QR[joystick_to_force_mocap_B.b_temp_tmp_a];
              joystick_to_force_mocap_B.itemp =
                joystick_to_force_mocap_B.temp_tmp_e +
                joystick_to_force_mocap_B.c_k;
              obj->QR[joystick_to_force_mocap_B.b_temp_tmp_a] = obj->
                QR[joystick_to_force_mocap_B.itemp];
              obj->QR[joystick_to_force_mocap_B.itemp] =
                joystick_to_force_mocap_B.temp_f;
            }

            joystick_to_force_mocap_B.itemp = obj->
              jpvt[joystick_to_force_mocap_B.pvt];
            obj->jpvt[joystick_to_force_mocap_B.pvt] = obj->
              jpvt[joystick_to_force_mocap_B.i_a - 1];
            obj->jpvt[joystick_to_force_mocap_B.i_a - 1] =
              joystick_to_force_mocap_B.itemp;
            joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.pvt] =
              joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.i_a - 1];
            joystick_to_force_mocap_B.vn2[joystick_to_force_mocap_B.pvt] =
              joystick_to_force_mocap_B.vn2[joystick_to_force_mocap_B.i_a - 1];
          }

          if (joystick_to_force_mocap_B.i_a < mrows) {
            joystick_to_force_mocap_B.temp_f = obj->
              QR[joystick_to_force_mocap_B.ix];
            obj->tau[joystick_to_force_mocap_B.i_a - 1] =
              joystick_to_force_mocap_xzlarfg(joystick_to_force_mocap_B.mmi + 1,
              &joystick_to_force_mocap_B.temp_f, obj->QR,
              joystick_to_force_mocap_B.ix + 2);
            obj->QR[joystick_to_force_mocap_B.ix] =
              joystick_to_force_mocap_B.temp_f;
          } else {
            obj->tau[joystick_to_force_mocap_B.i_a - 1] = 0.0;
          }

          if (joystick_to_force_mocap_B.i_a < ncols) {
            joystick_to_force_mocap_B.temp_f = obj->
              QR[joystick_to_force_mocap_B.ix];
            obj->QR[joystick_to_force_mocap_B.ix] = 1.0;
            joystick_to_force_mocap_xzlarf(joystick_to_force_mocap_B.mmi + 1,
              joystick_to_force_mocap_B.iy, joystick_to_force_mocap_B.ix + 1,
              obj->tau[joystick_to_force_mocap_B.i_a - 1], obj->QR,
              joystick_to_force_mocap_B.ix + 8, joystick_to_force_mocap_B.work_m);
            obj->QR[joystick_to_force_mocap_B.ix] =
              joystick_to_force_mocap_B.temp_f;
          }

          for (joystick_to_force_mocap_B.itemp = joystick_to_force_mocap_B.i_a +
               1; joystick_to_force_mocap_B.itemp <= ncols;
               joystick_to_force_mocap_B.itemp++) {
            joystick_to_force_mocap_B.ix = (joystick_to_force_mocap_B.itemp - 1)
              * 7 + joystick_to_force_mocap_B.i_a;
            joystick_to_force_mocap_B.temp_f =
              joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.itemp - 1];
            if (joystick_to_force_mocap_B.temp_f != 0.0) {
              joystick_to_force_mocap_B.s_g = fabs(obj->
                QR[joystick_to_force_mocap_B.ix - 1]) /
                joystick_to_force_mocap_B.temp_f;
              joystick_to_force_mocap_B.s_g = 1.0 -
                joystick_to_force_mocap_B.s_g * joystick_to_force_mocap_B.s_g;
              if (joystick_to_force_mocap_B.s_g < 0.0) {
                joystick_to_force_mocap_B.s_g = 0.0;
              }

              joystick_to_force_mocap_B.temp2 = joystick_to_force_mocap_B.temp_f
                / joystick_to_force_mocap_B.vn2[joystick_to_force_mocap_B.itemp
                - 1];
              joystick_to_force_mocap_B.temp2 = joystick_to_force_mocap_B.temp2 *
                joystick_to_force_mocap_B.temp2 * joystick_to_force_mocap_B.s_g;
              if (joystick_to_force_mocap_B.temp2 <= 1.4901161193847656E-8) {
                if (joystick_to_force_mocap_B.i_a < mrows) {
                  joystick_to_force_mocap_B.temp_f =
                    joystick_to_force_mocap_xnrm2_c
                    (joystick_to_force_mocap_B.mmi, obj->QR,
                     joystick_to_force_mocap_B.ix + 1);
                  joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.itemp
                    - 1] = joystick_to_force_mocap_B.temp_f;
                  joystick_to_force_mocap_B.vn2[joystick_to_force_mocap_B.itemp
                    - 1] = joystick_to_force_mocap_B.temp_f;
                } else {
                  joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.itemp
                    - 1] = 0.0;
                  joystick_to_force_mocap_B.vn2[joystick_to_force_mocap_B.itemp
                    - 1] = 0.0;
                }
              } else {
                joystick_to_force_mocap_B.vn1[joystick_to_force_mocap_B.itemp -
                  1] = joystick_to_force_mocap_B.temp_f * sqrt
                  (joystick_to_force_mocap_B.s_g);
              }
            }
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moc_computeQ_(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  int32_T nrows)
{
  int32_T c_ia;
  int32_T coltop;
  int32_T exitg1;
  int32_T f;
  int32_T i;
  int32_T ia;
  int32_T idx;
  int32_T itau;
  int32_T jA;
  int32_T lastc;
  boolean_T exitg2;
  i = obj->minRowCol;
  for (idx = 0; idx < i; idx++) {
    joystick_to_force_mocap_B.iQR0 = 7 * idx + idx;
    ia = obj->mrows - idx;
    if (ia - 2 >= 0) {
      memcpy(&obj->Q[joystick_to_force_mocap_B.iQR0 + 1], &obj->
             QR[joystick_to_force_mocap_B.iQR0 + 1], (uint32_T)(((ia +
                joystick_to_force_mocap_B.iQR0) - joystick_to_force_mocap_B.iQR0)
              - 1) * sizeof(real_T));
    }
  }

  idx = obj->mrows;
  if (nrows >= 1) {
    for (itau = i; itau < nrows; itau++) {
      ia = itau * 7;
      memset(&obj->Q[ia], 0, (uint32_T)((idx + ia) - ia) * sizeof(real_T));
      obj->Q[ia + itau] = 1.0;
    }

    itau = obj->minRowCol - 1;
    for (i = 0; i < 7; i++) {
      joystick_to_force_mocap_B.work_c[i] = 0.0;
    }

    for (i = obj->minRowCol; i >= 1; i--) {
      joystick_to_force_mocap_B.iQR0 = ((i - 1) * 7 + i) - 1;
      if (i < nrows) {
        obj->Q[joystick_to_force_mocap_B.iQR0] = 1.0;
        ia = idx - i;
        if (obj->tau[itau] != 0.0) {
          lastc = joystick_to_force_mocap_B.iQR0 + ia;
          while ((ia + 1 > 0) && (obj->Q[lastc] == 0.0)) {
            ia--;
            lastc--;
          }

          lastc = nrows - i;
          exitg2 = false;
          while ((!exitg2) && (lastc > 0)) {
            coltop = ((lastc - 1) * 7 + joystick_to_force_mocap_B.iQR0) + 8;
            c_ia = coltop;
            do {
              exitg1 = 0;
              if (c_ia <= coltop + ia) {
                if (obj->Q[c_ia - 1] != 0.0) {
                  exitg1 = 1;
                } else {
                  c_ia++;
                }
              } else {
                lastc--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = true;
            }
          }

          lastc--;
        } else {
          ia = -1;
          lastc = -1;
        }

        if (ia + 1 > 0) {
          if (lastc + 1 != 0) {
            if (lastc >= 0) {
              memset(&joystick_to_force_mocap_B.work_c[0], 0, (uint32_T)(lastc +
                      1) * sizeof(real_T));
            }

            c_ia = (7 * lastc + joystick_to_force_mocap_B.iQR0) + 8;
            for (coltop = joystick_to_force_mocap_B.iQR0 + 8; coltop <= c_ia;
                 coltop += 7) {
              joystick_to_force_mocap_B.b_c = 0.0;
              f = coltop + ia;
              for (jA = coltop; jA <= f; jA++) {
                joystick_to_force_mocap_B.b_c += obj->Q
                  [(joystick_to_force_mocap_B.iQR0 + jA) - coltop] * obj->Q[jA -
                  1];
              }

              jA = div_nde_s32_floor((coltop - joystick_to_force_mocap_B.iQR0) -
                8, 7);
              joystick_to_force_mocap_B.work_c[jA] +=
                joystick_to_force_mocap_B.b_c;
            }
          }

          if (!(-obj->tau[itau] == 0.0)) {
            jA = joystick_to_force_mocap_B.iQR0 + 8;
            for (coltop = 0; coltop <= lastc; coltop++) {
              joystick_to_force_mocap_B.b_c =
                joystick_to_force_mocap_B.work_c[coltop];
              if (joystick_to_force_mocap_B.b_c != 0.0) {
                joystick_to_force_mocap_B.b_c *= -obj->tau[itau];
                f = ia + jA;
                for (c_ia = jA; c_ia <= f; c_ia++) {
                  obj->Q[c_ia - 1] += obj->Q[(joystick_to_force_mocap_B.iQR0 +
                    c_ia) - jA] * joystick_to_force_mocap_B.b_c;
                }
              }

              jA += 7;
            }
          }
        }
      }

      if (i < idx) {
        lastc = ((joystick_to_force_mocap_B.iQR0 + idx) - i) + 1;
        for (ia = joystick_to_force_mocap_B.iQR0 + 2; ia <= lastc; ia++) {
          obj->Q[ia - 1] *= -obj->tau[itau];
        }
      }

      obj->Q[joystick_to_force_mocap_B.iQR0] = 1.0 - obj->tau[itau];
      lastc = (uint8_T)(i - 1);
      for (ia = 0; ia < lastc; ia++) {
        obj->Q[(joystick_to_force_mocap_B.iQR0 - ia) - 1] = 0.0;
      }

      itau--;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static int32_T joystick_ComputeNumDependentEq_(sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager, const real_T beqf[12], int32_T mConstr, int32_T nVar)
{
  int32_T numDependent;
  boolean_T exitg1;
  numDependent = mConstr - nVar;
  if (numDependent <= 0) {
    numDependent = 0;
  }

  joystick_to_force_mocap_B.b_f = (uint8_T)nVar;
  memset(&qrmanager->jpvt[0], 0, (uint32_T)joystick_to_force_mocap_B.b_f *
         sizeof(int32_T));
  joystick_to_force_moc_factorQRE(qrmanager, mConstr, nVar);
  joystick_to_force_mocap_B.tol_l = 100.0 * (real_T)nVar *
    2.2204460492503131E-16;
  if (nVar <= mConstr) {
    joystick_to_force_mocap_B.totalRank = nVar;
  } else {
    joystick_to_force_mocap_B.totalRank = mConstr;
  }

  joystick_to_force_mocap_B.totalRank += (joystick_to_force_mocap_B.totalRank -
    1) * 7;
  while ((joystick_to_force_mocap_B.totalRank > 0) && (fabs(qrmanager->
           QR[joystick_to_force_mocap_B.totalRank - 1]) <
          joystick_to_force_mocap_B.tol_l)) {
    joystick_to_force_mocap_B.totalRank -= 8;
    numDependent++;
  }

  if (numDependent > 0) {
    joystick_to_force_moc_computeQ_(qrmanager, qrmanager->mrows);
    joystick_to_force_mocap_B.b_f = 0;
    exitg1 = false;
    while ((!exitg1) && (joystick_to_force_mocap_B.b_f <= numDependent - 1)) {
      joystick_to_force_mocap_B.ix_i = ((mConstr - joystick_to_force_mocap_B.b_f)
        - 1) * 7;
      joystick_to_force_mocap_B.qtb = 0.0;
      for (joystick_to_force_mocap_B.totalRank = 0;
           joystick_to_force_mocap_B.totalRank < mConstr;
           joystick_to_force_mocap_B.totalRank++) {
        joystick_to_force_mocap_B.qtb += qrmanager->
          Q[joystick_to_force_mocap_B.ix_i + joystick_to_force_mocap_B.totalRank]
          * beqf[joystick_to_force_mocap_B.totalRank];
      }

      if (fabs(joystick_to_force_mocap_B.qtb) >= joystick_to_force_mocap_B.tol_l)
      {
        numDependent = -1;
        exitg1 = true;
      } else {
        joystick_to_force_mocap_B.b_f++;
      }
    }
  }

  return numDependent;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moc_countsort(int32_T x[12], int32_T xLen, int32_T
  workspace[12], int32_T xMin, int32_T xMax)
{
  int32_T b_tmp;
  int32_T idxEnd;
  int32_T idxFill;
  int32_T idxStart;
  int32_T maxOffset;
  if ((xLen > 1) && (xMax > xMin)) {
    b_tmp = xMax - xMin;
    if (b_tmp >= 0) {
      memset(&workspace[0], 0, (uint32_T)(b_tmp + 1) * sizeof(int32_T));
    }

    maxOffset = b_tmp - 1;
    for (b_tmp = 0; b_tmp < xLen; b_tmp++) {
      idxFill = x[b_tmp] - xMin;
      workspace[idxFill]++;
    }

    for (b_tmp = 2; b_tmp <= maxOffset + 2; b_tmp++) {
      workspace[b_tmp - 1] += workspace[b_tmp - 2];
    }

    idxStart = 1;
    idxEnd = workspace[0];
    for (b_tmp = 0; b_tmp <= maxOffset; b_tmp++) {
      for (idxFill = idxStart; idxFill <= idxEnd; idxFill++) {
        x[idxFill - 1] = b_tmp + xMin;
      }

      idxStart = workspace[b_tmp] + 1;
      idxEnd = workspace[b_tmp + 1];
    }

    for (maxOffset = idxStart; maxOffset <= idxEnd; maxOffset++) {
      x[maxOffset - 1] = xMax;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force__removeConstr(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T idx_global)
{
  int32_T TYPE_tmp;
  int32_T b;
  int32_T idx;
  TYPE_tmp = obj->Wid[idx_global - 1] - 1;
  obj->isActiveConstr[(obj->isActiveIdx[TYPE_tmp] + obj->Wlocalidx[idx_global -
                       1]) - 2] = false;
  if (idx_global < obj->nActiveConstr) {
    obj->Wid[idx_global - 1] = obj->Wid[obj->nActiveConstr - 1];
    obj->Wlocalidx[idx_global - 1] = obj->Wlocalidx[obj->nActiveConstr - 1];
    b = (uint8_T)obj->nVar;
    for (idx = 0; idx < b; idx++) {
      obj->ATwset[idx + 5 * (idx_global - 1)] = obj->ATwset[(obj->nActiveConstr
        - 1) * 5 + idx];
    }

    obj->bwset[idx_global - 1] = obj->bwset[obj->nActiveConstr - 1];
  }

  obj->nActiveConstr--;
  obj->nWConstr[TYPE_tmp]--;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_forc_removeEqConstr(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T idx_global)
{
  int32_T TYPE_tmp;
  int32_T b_tmp;
  int32_T idx;
  int32_T totalEq;
  totalEq = (obj->nWConstr[0] + obj->nWConstr[1]) - 1;
  if ((totalEq + 1 != 0) && (idx_global <= totalEq + 1)) {
    if ((totalEq + 1 == obj->nActiveConstr) || (totalEq + 1 == idx_global)) {
      obj->mEqRemoved++;
      obj->indexEqRemoved[obj->mEqRemoved - 1] = obj->Wlocalidx[idx_global - 1];
      joystick_to_force__removeConstr(obj, idx_global);
    } else {
      obj->mEqRemoved++;
      TYPE_tmp = obj->Wid[idx_global - 1] - 1;
      b_tmp = obj->Wlocalidx[idx_global - 1];
      obj->indexEqRemoved[obj->mEqRemoved - 1] = b_tmp;
      obj->isActiveConstr[(obj->isActiveIdx[TYPE_tmp] + b_tmp) - 2] = false;
      obj->Wid[idx_global - 1] = obj->Wid[totalEq];
      obj->Wlocalidx[idx_global - 1] = obj->Wlocalidx[totalEq];
      b_tmp = (uint8_T)obj->nVar;
      for (idx = 0; idx < b_tmp; idx++) {
        obj->ATwset[idx + 5 * (idx_global - 1)] = obj->ATwset[5 * totalEq + idx];
      }

      obj->bwset[idx_global - 1] = obj->bwset[totalEq];
      obj->Wid[totalEq] = obj->Wid[obj->nActiveConstr - 1];
      obj->Wlocalidx[totalEq] = obj->Wlocalidx[obj->nActiveConstr - 1];
      for (idx = 0; idx < b_tmp; idx++) {
        obj->ATwset[idx + 5 * totalEq] = obj->ATwset[(obj->nActiveConstr - 1) *
          5 + idx];
      }

      obj->bwset[totalEq] = obj->bwset[obj->nActiveConstr - 1];
      obj->nActiveConstr--;
      obj->nWConstr[TYPE_tmp]--;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_t_RemoveDependentIneq_(sFU6CjEcGjLAtPLbWxOieuC_joyst_T
  *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager,
  sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace, real_T tolfactor)
{
  joystick_to_force_mocap_B.nActiveConstr_tmp = workingset->nActiveConstr;
  joystick_to_force_mocap_B.nFixedConstr = workingset->nWConstr[0] +
    workingset->nWConstr[1];
  joystick_to_force_mocap_B.nVar_h = workingset->nVar;
  if ((workingset->nWConstr[2] + workingset->nWConstr[3]) + workingset->
      nWConstr[4] > 0) {
    joystick_to_force_mocap_B.tol = tolfactor * (real_T)workingset->nVar *
      2.2204460492503131E-16;
    for (joystick_to_force_mocap_B.nDepIneq = 0;
         joystick_to_force_mocap_B.nDepIneq <
         joystick_to_force_mocap_B.nFixedConstr;
         joystick_to_force_mocap_B.nDepIneq++) {
      qrmanager->jpvt[joystick_to_force_mocap_B.nDepIneq] = 1;
    }

    if (joystick_to_force_mocap_B.nFixedConstr + 1 <=
        joystick_to_force_mocap_B.nActiveConstr_tmp) {
      memset(&qrmanager->jpvt[joystick_to_force_mocap_B.nFixedConstr], 0,
             (uint32_T)(joystick_to_force_mocap_B.nActiveConstr_tmp -
                        joystick_to_force_mocap_B.nFixedConstr) * sizeof(int32_T));
    }

    for (joystick_to_force_mocap_B.nDepIneq = 0;
         joystick_to_force_mocap_B.nDepIneq <
         joystick_to_force_mocap_B.nActiveConstr_tmp;
         joystick_to_force_mocap_B.nDepIneq++) {
      joystick_to_force_mocap_B.iy0_c = 7 * joystick_to_force_mocap_B.nDepIneq;
      joystick_to_force_mocap_B.ix0_c0 = 5 * joystick_to_force_mocap_B.nDepIneq;
      joystick_to_force_mocap_B.c_p = (uint8_T)joystick_to_force_mocap_B.nVar_h;
      for (joystick_to_force_mocap_B.k_p = 0; joystick_to_force_mocap_B.k_p <
           joystick_to_force_mocap_B.c_p; joystick_to_force_mocap_B.k_p++) {
        qrmanager->QR[joystick_to_force_mocap_B.iy0_c +
          joystick_to_force_mocap_B.k_p] = workingset->
          ATwset[joystick_to_force_mocap_B.ix0_c0 +
          joystick_to_force_mocap_B.k_p];
      }
    }

    joystick_to_force_moc_factorQRE(qrmanager, workingset->nVar,
      workingset->nActiveConstr);
    joystick_to_force_mocap_B.nDepIneq = 0;
    joystick_to_force_mocap_B.k_p = workingset->nActiveConstr - 1;
    while (joystick_to_force_mocap_B.k_p + 1 > joystick_to_force_mocap_B.nVar_h)
    {
      joystick_to_force_mocap_B.nDepIneq++;
      memspace->workspace_int[joystick_to_force_mocap_B.nDepIneq - 1] =
        qrmanager->jpvt[joystick_to_force_mocap_B.k_p];
      joystick_to_force_mocap_B.k_p--;
    }

    if (joystick_to_force_mocap_B.k_p + 1 <= workingset->nVar) {
      joystick_to_force_mocap_B.nVar_h = 7 * joystick_to_force_mocap_B.k_p +
        joystick_to_force_mocap_B.k_p;
      while ((joystick_to_force_mocap_B.k_p + 1 >
              joystick_to_force_mocap_B.nFixedConstr) && (fabs(qrmanager->
               QR[joystick_to_force_mocap_B.nVar_h]) <
              joystick_to_force_mocap_B.tol)) {
        joystick_to_force_mocap_B.nDepIneq++;
        memspace->workspace_int[joystick_to_force_mocap_B.nDepIneq - 1] =
          qrmanager->jpvt[joystick_to_force_mocap_B.k_p];
        joystick_to_force_mocap_B.k_p--;
        joystick_to_force_mocap_B.nVar_h -= 8;
      }
    }

    joystick_to_force_moc_countsort(memspace->workspace_int,
      joystick_to_force_mocap_B.nDepIneq, memspace->workspace_sort,
      joystick_to_force_mocap_B.nFixedConstr + 1, workingset->nActiveConstr);
    for (joystick_to_force_mocap_B.nFixedConstr =
         joystick_to_force_mocap_B.nDepIneq;
         joystick_to_force_mocap_B.nFixedConstr >= 1;
         joystick_to_force_mocap_B.nFixedConstr--) {
      joystick_to_force__removeConstr(workingset, memspace->
        workspace_int[joystick_to_force_mocap_B.nFixedConstr - 1]);
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moca_factorQR(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  const real_T A[60], int32_T mrows, int32_T ncols)
{
  boolean_T guard1;
  joystick_to_force_mocap_B.k = mrows * ncols;
  guard1 = false;
  if (joystick_to_force_mocap_B.k > 0) {
    for (joystick_to_force_mocap_B.i_o = 0; joystick_to_force_mocap_B.i_o <
         ncols; joystick_to_force_mocap_B.i_o++) {
      joystick_to_force_mocap_B.ix0 = 5 * joystick_to_force_mocap_B.i_o;
      joystick_to_force_mocap_B.iy0_n = 7 * joystick_to_force_mocap_B.i_o;
      joystick_to_force_mocap_B.b_i = (uint8_T)mrows;
      for (joystick_to_force_mocap_B.k = 0; joystick_to_force_mocap_B.k <
           joystick_to_force_mocap_B.b_i; joystick_to_force_mocap_B.k++) {
        obj->QR[joystick_to_force_mocap_B.iy0_n + joystick_to_force_mocap_B.k] =
          A[joystick_to_force_mocap_B.ix0 + joystick_to_force_mocap_B.k];
      }
    }

    guard1 = true;
  } else if (joystick_to_force_mocap_B.k == 0) {
    obj->mrows = mrows;
    obj->ncols = ncols;
    obj->minRowCol = 0;
  } else {
    guard1 = true;
  }

  if (guard1) {
    obj->usedPivoting = false;
    obj->mrows = mrows;
    obj->ncols = ncols;
    for (joystick_to_force_mocap_B.i_o = 0; joystick_to_force_mocap_B.i_o <
         ncols; joystick_to_force_mocap_B.i_o++) {
      obj->jpvt[joystick_to_force_mocap_B.i_o] = joystick_to_force_mocap_B.i_o +
        1;
    }

    if (mrows <= ncols) {
      joystick_to_force_mocap_B.k = mrows;
    } else {
      joystick_to_force_mocap_B.k = ncols;
    }

    obj->minRowCol = joystick_to_force_mocap_B.k;
    for (joystick_to_force_mocap_B.i_o = 0; joystick_to_force_mocap_B.i_o < 7;
         joystick_to_force_mocap_B.i_o++) {
      obj->tau[joystick_to_force_mocap_B.i_o] = 0.0;
    }

    if (joystick_to_force_mocap_B.k >= 1) {
      for (joystick_to_force_mocap_B.i_o = 0; joystick_to_force_mocap_B.i_o < 7;
           joystick_to_force_mocap_B.i_o++) {
        obj->tau[joystick_to_force_mocap_B.i_o] = 0.0;
      }

      joystick_to_force_mocap_qrf(obj->QR, mrows, ncols,
        joystick_to_force_mocap_B.k, obj->tau);
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_xgemv(int32_T m, const real_T A[15], const
  real_T x[60], real_T y[12])
{
  real_T c;
  int32_T b;
  int32_T ia;
  int32_T iac;
  y[0] = -y[0];
  y[1] = -y[1];
  y[2] = -y[2];
  for (iac = 0; iac <= 10; iac += 5) {
    c = 0.0;
    b = iac + m;
    for (ia = iac + 1; ia <= b; ia++) {
      c += x[(ia - iac) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(iac, 5);
    y[ia] += c;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_xgemv_n(int32_T m, const real_T A[15], const
  real_T x[60], real_T y[12])
{
  real_T c;
  int32_T b;
  int32_T ia;
  int32_T iac;
  y[0] = -y[0];
  y[1] = -y[1];
  y[2] = -y[2];
  for (iac = 0; iac <= 10; iac += 5) {
    c = 0.0;
    b = iac + m;
    for (ia = iac + 1; ia <= b; ia++) {
      c += x[(ia - iac) + 11] * A[ia - 1];
    }

    ia = div_nde_s32_floor(iac, 5);
    y[ia] += c;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static boolean_T joystic_feasibleX0ForWorkingSet(real_T workspace[60], real_T
  xCurrent[5], sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset,
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager)
{
  int32_T exitg1;
  boolean_T nonDegenerateWset;
  joystick_to_force_mocap_B.mWConstr_tmp_tmp = workingset->nActiveConstr - 1;
  joystick_to_force_mocap_B.nVar_tmp_tmp = workingset->nVar;
  nonDegenerateWset = true;
  if (workingset->nActiveConstr != 0) {
    for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx <=
         joystick_to_force_mocap_B.mWConstr_tmp_tmp;
         joystick_to_force_mocap_B.idx++) {
      workspace[joystick_to_force_mocap_B.idx] = workingset->
        bwset[joystick_to_force_mocap_B.idx];
      workspace[joystick_to_force_mocap_B.idx + 12] = workingset->
        bwset[joystick_to_force_mocap_B.idx];
    }

    if (workingset->nActiveConstr != 0) {
      joystick_to_force_mocap_B.d = (workingset->nActiveConstr - 1) * 5 + 1;
      for (joystick_to_force_mocap_B.iac = 1; joystick_to_force_mocap_B.iac <=
           joystick_to_force_mocap_B.d; joystick_to_force_mocap_B.iac += 5) {
        joystick_to_force_mocap_B.c = 0.0;
        joystick_to_force_mocap_B.jBcol = (joystick_to_force_mocap_B.iac +
          joystick_to_force_mocap_B.nVar_tmp_tmp) - 1;
        for (joystick_to_force_mocap_B.idx = joystick_to_force_mocap_B.iac;
             joystick_to_force_mocap_B.idx <= joystick_to_force_mocap_B.jBcol;
             joystick_to_force_mocap_B.idx++) {
          joystick_to_force_mocap_B.c += workingset->
            ATwset[joystick_to_force_mocap_B.idx - 1] *
            xCurrent[joystick_to_force_mocap_B.idx -
            joystick_to_force_mocap_B.iac];
        }

        joystick_to_force_mocap_B.idx = div_nde_s32_floor
          (joystick_to_force_mocap_B.iac - 1, 5);
        workspace[joystick_to_force_mocap_B.idx] -= joystick_to_force_mocap_B.c;
      }
    }

    if (workingset->nActiveConstr >= workingset->nVar) {
      joystick_to_force_mocap_B.d = (uint8_T)workingset->nVar;
      qrmanager->usedPivoting = false;
      qrmanager->mrows = workingset->nActiveConstr;
      qrmanager->ncols = workingset->nVar;
      for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx <
           joystick_to_force_mocap_B.d; joystick_to_force_mocap_B.idx++) {
        joystick_to_force_mocap_B.jBcol = 7 * joystick_to_force_mocap_B.idx;
        for (joystick_to_force_mocap_B.iac = 0; joystick_to_force_mocap_B.iac <=
             joystick_to_force_mocap_B.mWConstr_tmp_tmp;
             joystick_to_force_mocap_B.iac++) {
          qrmanager->QR[joystick_to_force_mocap_B.iac +
            joystick_to_force_mocap_B.jBcol] = workingset->ATwset[5 *
            joystick_to_force_mocap_B.iac + joystick_to_force_mocap_B.idx];
        }

        qrmanager->jpvt[joystick_to_force_mocap_B.idx] =
          joystick_to_force_mocap_B.idx + 1;
      }

      if (workingset->nActiveConstr <= workingset->nVar) {
        joystick_to_force_mocap_B.idx = workingset->nActiveConstr;
      } else {
        joystick_to_force_mocap_B.idx = workingset->nVar;
      }

      qrmanager->minRowCol = joystick_to_force_mocap_B.idx;
      for (joystick_to_force_mocap_B.iac = 0; joystick_to_force_mocap_B.iac < 7;
           joystick_to_force_mocap_B.iac++) {
        qrmanager->tau[joystick_to_force_mocap_B.iac] = 0.0;
      }

      if (joystick_to_force_mocap_B.idx >= 1) {
        for (joystick_to_force_mocap_B.iac = 0; joystick_to_force_mocap_B.iac <
             7; joystick_to_force_mocap_B.iac++) {
          qrmanager->tau[joystick_to_force_mocap_B.iac] = 0.0;
        }

        joystick_to_force_mocap_qrf(qrmanager->QR, workingset->nActiveConstr,
          workingset->nVar, joystick_to_force_mocap_B.idx, qrmanager->tau);
      }

      joystick_to_force_moc_computeQ_(qrmanager, qrmanager->mrows);
      memcpy(&joystick_to_force_mocap_B.B[0], &workspace[0], 60U * sizeof(real_T));
      for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx <=
           12; joystick_to_force_mocap_B.idx += 12) {
        joystick_to_force_mocap_B.d = joystick_to_force_mocap_B.idx +
          joystick_to_force_mocap_B.nVar_tmp_tmp;
        for (joystick_to_force_mocap_B.iac = joystick_to_force_mocap_B.idx + 1;
             joystick_to_force_mocap_B.iac <= joystick_to_force_mocap_B.d;
             joystick_to_force_mocap_B.iac++) {
          workspace[joystick_to_force_mocap_B.iac - 1] = 0.0;
        }
      }

      joystick_to_force_mocap_B.jBcol = -1;
      for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx <=
           12; joystick_to_force_mocap_B.idx += 12) {
        joystick_to_force_mocap_B.iAcol = -1;
        joystick_to_force_mocap_B.temp_tmp_o = joystick_to_force_mocap_B.idx +
          joystick_to_force_mocap_B.nVar_tmp_tmp;
        for (joystick_to_force_mocap_B.iac = joystick_to_force_mocap_B.idx + 1;
             joystick_to_force_mocap_B.iac <=
             joystick_to_force_mocap_B.temp_tmp_o; joystick_to_force_mocap_B.iac
             ++) {
          joystick_to_force_mocap_B.c = 0.0;
          for (joystick_to_force_mocap_B.d = 0; joystick_to_force_mocap_B.d <=
               joystick_to_force_mocap_B.mWConstr_tmp_tmp;
               joystick_to_force_mocap_B.d++) {
            joystick_to_force_mocap_B.c += qrmanager->Q
              [(joystick_to_force_mocap_B.d + joystick_to_force_mocap_B.iAcol) +
              1] * joystick_to_force_mocap_B.B[(joystick_to_force_mocap_B.d +
              joystick_to_force_mocap_B.jBcol) + 1];
          }

          workspace[joystick_to_force_mocap_B.iac - 1] +=
            joystick_to_force_mocap_B.c;
          joystick_to_force_mocap_B.iAcol += 7;
        }

        joystick_to_force_mocap_B.jBcol += 12;
      }

      for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
           joystick_to_force_mocap_B.mWConstr_tmp_tmp < 2;
           joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
        joystick_to_force_mocap_B.jBcol = 12 *
          joystick_to_force_mocap_B.mWConstr_tmp_tmp - 1;
        for (joystick_to_force_mocap_B.iac =
             joystick_to_force_mocap_B.nVar_tmp_tmp;
             joystick_to_force_mocap_B.iac >= 1; joystick_to_force_mocap_B.iac--)
        {
          joystick_to_force_mocap_B.iAcol = (joystick_to_force_mocap_B.iac - 1) *
            7;
          joystick_to_force_mocap_B.idx = joystick_to_force_mocap_B.iac +
            joystick_to_force_mocap_B.jBcol;
          joystick_to_force_mocap_B.c = workspace[joystick_to_force_mocap_B.idx];
          if (joystick_to_force_mocap_B.c != 0.0) {
            workspace[joystick_to_force_mocap_B.idx] =
              joystick_to_force_mocap_B.c / qrmanager->QR
              [(joystick_to_force_mocap_B.iac + joystick_to_force_mocap_B.iAcol)
              - 1];
            joystick_to_force_mocap_B.temp_tmp_o = (uint8_T)
              (joystick_to_force_mocap_B.iac - 1);
            for (joystick_to_force_mocap_B.d = 0; joystick_to_force_mocap_B.d <
                 joystick_to_force_mocap_B.temp_tmp_o;
                 joystick_to_force_mocap_B.d++) {
              joystick_to_force_mocap_B.f_j = (joystick_to_force_mocap_B.d +
                joystick_to_force_mocap_B.jBcol) + 1;
              workspace[joystick_to_force_mocap_B.f_j] -= qrmanager->
                QR[joystick_to_force_mocap_B.d + joystick_to_force_mocap_B.iAcol]
                * workspace[joystick_to_force_mocap_B.idx];
            }
          }
        }
      }
    } else {
      joystick_to_force_moca_factorQR(qrmanager, workingset->ATwset,
        workingset->nVar, workingset->nActiveConstr);
      joystick_to_force_moc_computeQ_(qrmanager, qrmanager->minRowCol);
      for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx < 2;
           joystick_to_force_mocap_B.idx++) {
        joystick_to_force_mocap_B.jBcol = 12 * joystick_to_force_mocap_B.idx;
        for (joystick_to_force_mocap_B.iac = 0; joystick_to_force_mocap_B.iac <=
             joystick_to_force_mocap_B.mWConstr_tmp_tmp;
             joystick_to_force_mocap_B.iac++) {
          joystick_to_force_mocap_B.iAcol = 7 * joystick_to_force_mocap_B.iac;
          joystick_to_force_mocap_B.temp_tmp_o = joystick_to_force_mocap_B.iac +
            joystick_to_force_mocap_B.jBcol;
          joystick_to_force_mocap_B.c =
            workspace[joystick_to_force_mocap_B.temp_tmp_o];
          joystick_to_force_mocap_B.f_j = (uint8_T)joystick_to_force_mocap_B.iac;
          for (joystick_to_force_mocap_B.d = 0; joystick_to_force_mocap_B.d <
               joystick_to_force_mocap_B.f_j; joystick_to_force_mocap_B.d++) {
            joystick_to_force_mocap_B.c -= qrmanager->
              QR[joystick_to_force_mocap_B.d + joystick_to_force_mocap_B.iAcol] *
              workspace[joystick_to_force_mocap_B.d +
              joystick_to_force_mocap_B.jBcol];
          }

          workspace[joystick_to_force_mocap_B.temp_tmp_o] =
            joystick_to_force_mocap_B.c / qrmanager->
            QR[joystick_to_force_mocap_B.iac + joystick_to_force_mocap_B.iAcol];
        }
      }

      memcpy(&joystick_to_force_mocap_B.B[0], &workspace[0], 60U * sizeof(real_T));
      for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx <=
           12; joystick_to_force_mocap_B.idx += 12) {
        joystick_to_force_mocap_B.d = joystick_to_force_mocap_B.idx +
          joystick_to_force_mocap_B.nVar_tmp_tmp;
        for (joystick_to_force_mocap_B.iac = joystick_to_force_mocap_B.idx + 1;
             joystick_to_force_mocap_B.iac <= joystick_to_force_mocap_B.d;
             joystick_to_force_mocap_B.iac++) {
          workspace[joystick_to_force_mocap_B.iac - 1] = 0.0;
        }
      }

      joystick_to_force_mocap_B.jBcol = 1;
      for (joystick_to_force_mocap_B.idx = 0; joystick_to_force_mocap_B.idx <=
           12; joystick_to_force_mocap_B.idx += 12) {
        joystick_to_force_mocap_B.iAcol = -1;
        joystick_to_force_mocap_B.temp_tmp_o = joystick_to_force_mocap_B.jBcol +
          joystick_to_force_mocap_B.mWConstr_tmp_tmp;
        for (joystick_to_force_mocap_B.iac = joystick_to_force_mocap_B.jBcol;
             joystick_to_force_mocap_B.iac <=
             joystick_to_force_mocap_B.temp_tmp_o; joystick_to_force_mocap_B.iac
             ++) {
          joystick_to_force_mocap_B.f_j = joystick_to_force_mocap_B.idx +
            joystick_to_force_mocap_B.nVar_tmp_tmp;
          for (joystick_to_force_mocap_B.d = joystick_to_force_mocap_B.idx + 1;
               joystick_to_force_mocap_B.d <= joystick_to_force_mocap_B.f_j;
               joystick_to_force_mocap_B.d++) {
            workspace[joystick_to_force_mocap_B.d - 1] += qrmanager->Q
              [(joystick_to_force_mocap_B.iAcol + joystick_to_force_mocap_B.d) -
              joystick_to_force_mocap_B.idx] *
              joystick_to_force_mocap_B.B[joystick_to_force_mocap_B.iac - 1];
          }

          joystick_to_force_mocap_B.iAcol += 7;
        }

        joystick_to_force_mocap_B.jBcol += 12;
      }
    }

    joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
    do {
      exitg1 = 0;
      if (joystick_to_force_mocap_B.mWConstr_tmp_tmp <= (uint8_T)
          joystick_to_force_mocap_B.nVar_tmp_tmp - 1) {
        if (rtIsInf(workspace[joystick_to_force_mocap_B.mWConstr_tmp_tmp]) ||
            rtIsNaN(workspace[joystick_to_force_mocap_B.mWConstr_tmp_tmp])) {
          nonDegenerateWset = false;
          exitg1 = 1;
        } else {
          joystick_to_force_mocap_B.c =
            workspace[joystick_to_force_mocap_B.mWConstr_tmp_tmp + 12];
          if (rtIsInf(joystick_to_force_mocap_B.c) || rtIsNaN
              (joystick_to_force_mocap_B.c)) {
            nonDegenerateWset = false;
            exitg1 = 1;
          } else {
            joystick_to_force_mocap_B.mWConstr_tmp_tmp++;
          }
        }
      } else {
        for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
             joystick_to_force_mocap_B.mWConstr_tmp_tmp <
             joystick_to_force_mocap_B.nVar_tmp_tmp;
             joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
          workspace[joystick_to_force_mocap_B.mWConstr_tmp_tmp] +=
            xCurrent[joystick_to_force_mocap_B.mWConstr_tmp_tmp];
        }

        if (workingset->probType == 2) {
          joystick_to_force_mocap_B.b_v = 0.0;
          workingset->maxConstrWorkspace[0] = workingset->beq[0];
          workingset->maxConstrWorkspace[1] = workingset->beq[1];
          workingset->maxConstrWorkspace[2] = workingset->beq[2];
          joystick_to_force_mocap_xgemv(4, workingset->Aeq, workspace,
            workingset->maxConstrWorkspace);
          joystick_to_force_mocap_B.v = (workingset->maxConstrWorkspace[0] -
            workspace[4]) + workspace[7];
          workingset->maxConstrWorkspace[0] = joystick_to_force_mocap_B.v;
          joystick_to_force_mocap_B.c = fabs(joystick_to_force_mocap_B.v);
          if ((!(joystick_to_force_mocap_B.c <= 0.0)) && (!rtIsNaN
               (joystick_to_force_mocap_B.c))) {
            joystick_to_force_mocap_B.b_v = joystick_to_force_mocap_B.c;
          }

          joystick_to_force_mocap_B.v = (workingset->maxConstrWorkspace[1] -
            workspace[5]) + workspace[8];
          workingset->maxConstrWorkspace[1] = joystick_to_force_mocap_B.v;
          joystick_to_force_mocap_B.c = fabs(joystick_to_force_mocap_B.v);
          if ((!(joystick_to_force_mocap_B.b_v >= joystick_to_force_mocap_B.c)) &&
              (!rtIsNaN(joystick_to_force_mocap_B.c))) {
            joystick_to_force_mocap_B.b_v = joystick_to_force_mocap_B.c;
          }

          joystick_to_force_mocap_B.v = (workingset->maxConstrWorkspace[2] -
            workspace[6]) + workspace[9];
          workingset->maxConstrWorkspace[2] = joystick_to_force_mocap_B.v;
          joystick_to_force_mocap_B.c = fabs(joystick_to_force_mocap_B.v);
          if ((joystick_to_force_mocap_B.b_v >= joystick_to_force_mocap_B.c) ||
              rtIsNaN(joystick_to_force_mocap_B.c)) {
            joystick_to_force_mocap_B.c = joystick_to_force_mocap_B.b_v;
          }
        } else {
          joystick_to_force_mocap_B.v = 0.0;
          workingset->maxConstrWorkspace[0] = workingset->beq[0];
          workingset->maxConstrWorkspace[1] = workingset->beq[1];
          workingset->maxConstrWorkspace[2] = workingset->beq[2];
          joystick_to_force_mocap_xgemv(workingset->nVar, workingset->Aeq,
            workspace, workingset->maxConstrWorkspace);
          joystick_to_force_mocap_B.c = fabs(workingset->maxConstrWorkspace[0]);
          if ((!(joystick_to_force_mocap_B.c <= 0.0)) && (!rtIsNaN
               (joystick_to_force_mocap_B.c))) {
            joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.c;
          }

          joystick_to_force_mocap_B.c = fabs(workingset->maxConstrWorkspace[1]);
          if ((!(joystick_to_force_mocap_B.v >= joystick_to_force_mocap_B.c)) &&
              (!rtIsNaN(joystick_to_force_mocap_B.c))) {
            joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.c;
          }

          joystick_to_force_mocap_B.c = fabs(workingset->maxConstrWorkspace[2]);
          if ((joystick_to_force_mocap_B.v >= joystick_to_force_mocap_B.c) ||
              rtIsNaN(joystick_to_force_mocap_B.c)) {
            joystick_to_force_mocap_B.c = joystick_to_force_mocap_B.v;
          }
        }

        if (workingset->sizes[3] > 0) {
          joystick_to_force_mocap_B.idx = (uint8_T)workingset->sizes[3];
          for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp <
               joystick_to_force_mocap_B.idx;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
            joystick_to_force_mocap_B.v = -workspace[workingset->
              indexLB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1] -
              workingset->lb[workingset->
              indexLB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1];
            if ((!(joystick_to_force_mocap_B.c >= joystick_to_force_mocap_B.v)) &&
                (!rtIsNaN(joystick_to_force_mocap_B.v))) {
              joystick_to_force_mocap_B.c = joystick_to_force_mocap_B.v;
            }
          }
        }

        if (workingset->sizes[4] > 0) {
          joystick_to_force_mocap_B.idx = (uint8_T)workingset->sizes[4];
          for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp <
               joystick_to_force_mocap_B.idx;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
            joystick_to_force_mocap_B.v = workspace[workingset->
              indexUB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1] -
              workingset->ub[workingset->
              indexUB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1];
            if ((!(joystick_to_force_mocap_B.c >= joystick_to_force_mocap_B.v)) &&
                (!rtIsNaN(joystick_to_force_mocap_B.v))) {
              joystick_to_force_mocap_B.c = joystick_to_force_mocap_B.v;
            }
          }
        }

        if (workingset->sizes[0] > 0) {
          joystick_to_force_mocap_B.idx = (uint8_T)workingset->sizes[0];
          for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp <
               joystick_to_force_mocap_B.idx;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
            joystick_to_force_mocap_B.v = fabs(workspace[workingset->
              indexFixed[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1] -
              workingset->ub[workingset->
              indexFixed[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1]);
            if ((!(joystick_to_force_mocap_B.c >= joystick_to_force_mocap_B.v)) &&
                (!rtIsNaN(joystick_to_force_mocap_B.v))) {
              joystick_to_force_mocap_B.c = joystick_to_force_mocap_B.v;
            }
          }
        }

        if (workingset->probType == 2) {
          joystick_to_force_mocap_B.b_v = 0.0;
          workingset->maxConstrWorkspace[0] = workingset->beq[0];
          workingset->maxConstrWorkspace[1] = workingset->beq[1];
          workingset->maxConstrWorkspace[2] = workingset->beq[2];
          joystick_to_force_mocap_xgemv_n(4, workingset->Aeq, workspace,
            workingset->maxConstrWorkspace);
          joystick_to_force_mocap_B.v = (workingset->maxConstrWorkspace[0] -
            workspace[16]) + workspace[19];
          workingset->maxConstrWorkspace[0] = joystick_to_force_mocap_B.v;
          joystick_to_force_mocap_B.v = fabs(joystick_to_force_mocap_B.v);
          if ((!(joystick_to_force_mocap_B.v <= 0.0)) && (!rtIsNaN
               (joystick_to_force_mocap_B.v))) {
            joystick_to_force_mocap_B.b_v = joystick_to_force_mocap_B.v;
          }

          joystick_to_force_mocap_B.v = (workingset->maxConstrWorkspace[1] -
            workspace[17]) + workspace[20];
          workingset->maxConstrWorkspace[1] = joystick_to_force_mocap_B.v;
          joystick_to_force_mocap_B.v = fabs(joystick_to_force_mocap_B.v);
          if ((!(joystick_to_force_mocap_B.b_v >= joystick_to_force_mocap_B.v)) &&
              (!rtIsNaN(joystick_to_force_mocap_B.v))) {
            joystick_to_force_mocap_B.b_v = joystick_to_force_mocap_B.v;
          }

          joystick_to_force_mocap_B.v = (workingset->maxConstrWorkspace[2] -
            workspace[18]) + workspace[21];
          workingset->maxConstrWorkspace[2] = joystick_to_force_mocap_B.v;
          joystick_to_force_mocap_B.v = fabs(joystick_to_force_mocap_B.v);
          if ((joystick_to_force_mocap_B.b_v >= joystick_to_force_mocap_B.v) ||
              rtIsNaN(joystick_to_force_mocap_B.v)) {
            joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.b_v;
          }
        } else {
          joystick_to_force_mocap_B.b_v = 0.0;
          workingset->maxConstrWorkspace[0] = workingset->beq[0];
          workingset->maxConstrWorkspace[1] = workingset->beq[1];
          workingset->maxConstrWorkspace[2] = workingset->beq[2];
          joystick_to_force_mocap_xgemv_n(workingset->nVar, workingset->Aeq,
            workspace, workingset->maxConstrWorkspace);
          joystick_to_force_mocap_B.v = fabs(workingset->maxConstrWorkspace[0]);
          if ((!(joystick_to_force_mocap_B.v <= 0.0)) && (!rtIsNaN
               (joystick_to_force_mocap_B.v))) {
            joystick_to_force_mocap_B.b_v = joystick_to_force_mocap_B.v;
          }

          joystick_to_force_mocap_B.v = fabs(workingset->maxConstrWorkspace[1]);
          if ((!(joystick_to_force_mocap_B.b_v >= joystick_to_force_mocap_B.v)) &&
              (!rtIsNaN(joystick_to_force_mocap_B.v))) {
            joystick_to_force_mocap_B.b_v = joystick_to_force_mocap_B.v;
          }

          joystick_to_force_mocap_B.v = fabs(workingset->maxConstrWorkspace[2]);
          if ((joystick_to_force_mocap_B.b_v >= joystick_to_force_mocap_B.v) ||
              rtIsNaN(joystick_to_force_mocap_B.v)) {
            joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.b_v;
          }
        }

        if (workingset->sizes[3] > 0) {
          joystick_to_force_mocap_B.idx = (uint8_T)workingset->sizes[3];
          for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp <
               joystick_to_force_mocap_B.idx;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
            joystick_to_force_mocap_B.b_v = -workspace[workingset->
              indexLB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] + 11] -
              workingset->lb[workingset->
              indexLB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1];
            if ((!(joystick_to_force_mocap_B.v >= joystick_to_force_mocap_B.b_v))
                && (!rtIsNaN(joystick_to_force_mocap_B.b_v))) {
              joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.b_v;
            }
          }
        }

        if (workingset->sizes[4] > 0) {
          joystick_to_force_mocap_B.idx = (uint8_T)workingset->sizes[4];
          for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp <
               joystick_to_force_mocap_B.idx;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
            joystick_to_force_mocap_B.b_v = workspace[workingset->
              indexUB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] + 11] -
              workingset->ub[workingset->
              indexUB[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1];
            if ((!(joystick_to_force_mocap_B.v >= joystick_to_force_mocap_B.b_v))
                && (!rtIsNaN(joystick_to_force_mocap_B.b_v))) {
              joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.b_v;
            }
          }
        }

        if (workingset->sizes[0] > 0) {
          joystick_to_force_mocap_B.idx = (uint8_T)workingset->sizes[0];
          for (joystick_to_force_mocap_B.mWConstr_tmp_tmp = 0;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp <
               joystick_to_force_mocap_B.idx;
               joystick_to_force_mocap_B.mWConstr_tmp_tmp++) {
            joystick_to_force_mocap_B.b_v = fabs(workspace
              [workingset->indexFixed[joystick_to_force_mocap_B.mWConstr_tmp_tmp]
              + 11] - workingset->ub[workingset->
              indexFixed[joystick_to_force_mocap_B.mWConstr_tmp_tmp] - 1]);
            if ((!(joystick_to_force_mocap_B.v >= joystick_to_force_mocap_B.b_v))
                && (!rtIsNaN(joystick_to_force_mocap_B.b_v))) {
              joystick_to_force_mocap_B.v = joystick_to_force_mocap_B.b_v;
            }
          }
        }

        if ((joystick_to_force_mocap_B.c <= 2.2204460492503131E-16) ||
            (joystick_to_force_mocap_B.c < joystick_to_force_mocap_B.v)) {
          joystick_to_force_mocap_B.mWConstr_tmp_tmp = (uint8_T)
            joystick_to_force_mocap_B.nVar_tmp_tmp;
          memcpy(&xCurrent[0], &workspace[0], (uint32_T)
                 joystick_to_force_mocap_B.mWConstr_tmp_tmp * sizeof(real_T));
        } else {
          joystick_to_force_mocap_B.mWConstr_tmp_tmp = (uint8_T)
            joystick_to_force_mocap_B.nVar_tmp_tmp;
          memcpy(&xCurrent[0], &workspace[12], (uint32_T)
                 joystick_to_force_mocap_B.mWConstr_tmp_tmp * sizeof(real_T));
        }

        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return nonDegenerateWset;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moca_xgemv_nr(int32_T m, const real_T A[15], const
  real_T x[5], real_T y[12])
{
  real_T c;
  int32_T b;
  int32_T ia;
  int32_T iac;
  y[0] = -y[0];
  y[1] = -y[1];
  y[2] = -y[2];
  for (iac = 0; iac <= 10; iac += 5) {
    c = 0.0;
    b = iac + m;
    for (ia = iac + 1; ia <= b; ia++) {
      c += x[(ia - iac) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(iac, 5);
    y[ia] += c;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_maxConstraintViolation(sFU6CjEcGjLAtPLbWxOieuC_joyst_T
  *obj, const real_T x[5])
{
  real_T u1;
  real_T v;
  int32_T b;
  int32_T idx;
  if (obj->probType == 2) {
    obj->maxConstrWorkspace[0] = obj->beq[0];
    obj->maxConstrWorkspace[1] = obj->beq[1];
    obj->maxConstrWorkspace[2] = obj->beq[2];
    joystick_to_force_moca_xgemv_nr(4, obj->Aeq, x, obj->maxConstrWorkspace);
    v = 0.0;
  } else {
    joystick_to_force_mocap_B.b_v_b = 0.0;
    obj->maxConstrWorkspace[0] = obj->beq[0];
    obj->maxConstrWorkspace[1] = obj->beq[1];
    obj->maxConstrWorkspace[2] = obj->beq[2];
    joystick_to_force_moca_xgemv_nr(obj->nVar, obj->Aeq, x,
      obj->maxConstrWorkspace);
    u1 = fabs(obj->maxConstrWorkspace[0]);
    if ((!(u1 <= 0.0)) && (!rtIsNaN(u1))) {
      joystick_to_force_mocap_B.b_v_b = u1;
    }

    u1 = fabs(obj->maxConstrWorkspace[1]);
    if ((!(joystick_to_force_mocap_B.b_v_b >= u1)) && (!rtIsNaN(u1))) {
      joystick_to_force_mocap_B.b_v_b = u1;
    }

    v = fabs(obj->maxConstrWorkspace[2]);
    if ((joystick_to_force_mocap_B.b_v_b >= v) || rtIsNaN(v)) {
      v = joystick_to_force_mocap_B.b_v_b;
    }
  }

  if (obj->sizes[3] > 0) {
    b = (uint8_T)obj->sizes[3];
    for (idx = 0; idx < b; idx++) {
      u1 = -x[obj->indexLB[idx] - 1] - obj->lb[obj->indexLB[idx] - 1];
      if ((!(v >= u1)) && (!rtIsNaN(u1))) {
        v = u1;
      }
    }
  }

  if (obj->sizes[4] > 0) {
    b = (uint8_T)obj->sizes[4];
    for (idx = 0; idx < b; idx++) {
      u1 = x[obj->indexUB[idx] - 1] - obj->ub[obj->indexUB[idx] - 1];
      if ((!(v >= u1)) && (!rtIsNaN(u1))) {
        v = u1;
      }
    }
  }

  if (obj->sizes[0] > 0) {
    b = (uint8_T)obj->sizes[0];
    for (idx = 0; idx < b; idx++) {
      u1 = fabs(x[obj->indexFixed[idx] - 1] - obj->ub[obj->indexFixed[idx] - 1]);
      if ((!(v >= u1)) && (!rtIsNaN(u1))) {
        v = u1;
      }
    }
  }

  return v;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to__PresolveWorkingSet(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager)
{
  boolean_T guard1;
  boolean_T okWorkingSet;
  solution->state = 82;
  qrmanager->ldq = 7;
  memset(&qrmanager->QR[0], 0, 84U * sizeof(real_T));
  memset(&qrmanager->Q[0], 0, 49U * sizeof(real_T));
  for (joystick_to_force_mocap_B.i_ja = 0; joystick_to_force_mocap_B.i_ja < 12;
       joystick_to_force_mocap_B.i_ja++) {
    qrmanager->jpvt[joystick_to_force_mocap_B.i_ja] = 0;
  }

  qrmanager->mrows = 0;
  qrmanager->ncols = 0;
  for (joystick_to_force_mocap_B.i_ja = 0; joystick_to_force_mocap_B.i_ja < 7;
       joystick_to_force_mocap_B.i_ja++) {
    qrmanager->tau[joystick_to_force_mocap_B.i_ja] = 0.0;
  }

  qrmanager->minRowCol = 0;
  qrmanager->usedPivoting = false;
  joystick_to_force_mocap_B.i_ja = workingset->nWConstr[0];
  joystick_to_force_mocap_B.mTotalWorkingEq = workingset->nWConstr[0] + 3;
  joystick_to_force_mocap_B.b_tmp = (uint8_T)(workingset->nWConstr[0] + 3);
  joystick_to_force_mocap_B.c_tmp = (uint8_T)workingset->nVar;
  for (joystick_to_force_mocap_B.idxStartIneq_n = 0;
       joystick_to_force_mocap_B.idxStartIneq_n <
       joystick_to_force_mocap_B.b_tmp; joystick_to_force_mocap_B.idxStartIneq_n
       ++) {
    for (joystick_to_force_mocap_B.idxEndIneq_m = 0;
         joystick_to_force_mocap_B.idxEndIneq_m <
         joystick_to_force_mocap_B.c_tmp; joystick_to_force_mocap_B.idxEndIneq_m
         ++) {
      qrmanager->QR[joystick_to_force_mocap_B.idxStartIneq_n + 7 *
        joystick_to_force_mocap_B.idxEndIneq_m] = workingset->ATwset[5 *
        joystick_to_force_mocap_B.idxStartIneq_n +
        joystick_to_force_mocap_B.idxEndIneq_m];
    }
  }

  joystick_to_force_mocap_B.idxStartIneq_n = joystick_ComputeNumDependentEq_
    (qrmanager, workingset->bwset, workingset->nWConstr[0] + 3, workingset->nVar);
  if (joystick_to_force_mocap_B.idxStartIneq_n > 0) {
    for (joystick_to_force_mocap_B.idxEndIneq_m = 0;
         joystick_to_force_mocap_B.idxEndIneq_m <
         joystick_to_force_mocap_B.b_tmp; joystick_to_force_mocap_B.idxEndIneq_m
         ++) {
      joystick_to_force_mocap_B.iy0_m = 7 *
        joystick_to_force_mocap_B.idxEndIneq_m;
      joystick_to_force_mocap_B.ix0_c = 5 *
        joystick_to_force_mocap_B.idxEndIneq_m;
      for (joystick_to_force_mocap_B.k_m = 0; joystick_to_force_mocap_B.k_m <
           joystick_to_force_mocap_B.c_tmp; joystick_to_force_mocap_B.k_m++) {
        qrmanager->QR[joystick_to_force_mocap_B.iy0_m +
          joystick_to_force_mocap_B.k_m] = workingset->
          ATwset[joystick_to_force_mocap_B.ix0_c + joystick_to_force_mocap_B.k_m];
      }
    }

    for (joystick_to_force_mocap_B.idxEndIneq_m = 0;
         joystick_to_force_mocap_B.idxEndIneq_m < joystick_to_force_mocap_B.i_ja;
         joystick_to_force_mocap_B.idxEndIneq_m++) {
      qrmanager->jpvt[joystick_to_force_mocap_B.idxEndIneq_m] = 1;
    }

    joystick_to_force_mocap_B.k_m = workingset->nWConstr[0] + 1;
    if (joystick_to_force_mocap_B.k_m <=
        joystick_to_force_mocap_B.mTotalWorkingEq) {
      memset(&qrmanager->jpvt[joystick_to_force_mocap_B.k_m + -1], 0, (uint32_T)
             ((joystick_to_force_mocap_B.mTotalWorkingEq -
               joystick_to_force_mocap_B.k_m) + 1) * sizeof(int32_T));
    }

    joystick_to_force_moc_factorQRE(qrmanager, workingset->nVar,
      workingset->nWConstr[0] + 3);
    for (joystick_to_force_mocap_B.mTotalWorkingEq = 0;
         joystick_to_force_mocap_B.mTotalWorkingEq <
         joystick_to_force_mocap_B.idxStartIneq_n;
         joystick_to_force_mocap_B.mTotalWorkingEq++) {
      memspace->workspace_int[joystick_to_force_mocap_B.mTotalWorkingEq] =
        qrmanager->jpvt[((joystick_to_force_mocap_B.i_ja -
                          joystick_to_force_mocap_B.idxStartIneq_n) +
                         joystick_to_force_mocap_B.mTotalWorkingEq) + 3];
    }

    joystick_to_force_moc_countsort(memspace->workspace_int,
      joystick_to_force_mocap_B.idxStartIneq_n, memspace->workspace_sort, 1,
      workingset->nWConstr[0] + 3);
    for (joystick_to_force_mocap_B.i_ja =
         joystick_to_force_mocap_B.idxStartIneq_n;
         joystick_to_force_mocap_B.i_ja >= 1; joystick_to_force_mocap_B.i_ja--)
    {
      joystick_to_forc_removeEqConstr(workingset, memspace->
        workspace_int[joystick_to_force_mocap_B.i_ja - 1]);
    }
  }

  if ((joystick_to_force_mocap_B.idxStartIneq_n != -1) &&
      (workingset->nActiveConstr <= 7)) {
    joystick_t_RemoveDependentIneq_(workingset, qrmanager, memspace, 100.0);
    okWorkingSet = joystic_feasibleX0ForWorkingSet(memspace->workspace_double,
      solution->xstar, workingset, qrmanager);
    guard1 = false;
    if (!okWorkingSet) {
      joystick_t_RemoveDependentIneq_(workingset, qrmanager, memspace, 1000.0);
      okWorkingSet = joystic_feasibleX0ForWorkingSet(memspace->workspace_double,
        solution->xstar, workingset, qrmanager);
      if (!okWorkingSet) {
        solution->state = -7;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (workingset->nWConstr[0] + workingset->nWConstr[1] == workingset->nVar)
      {
        joystick_to_force_mocap_B.constrViolation =
          joystick_maxConstraintViolation(workingset, solution->xstar);
        if (joystick_to_force_mocap_B.constrViolation > 1.0E-8) {
          solution->state = -2;
        }
      }
    }
  } else {
    solution->state = -3;
    joystick_to_force_mocap_B.mTotalWorkingEq = workingset->nWConstr[0] +
      workingset->nWConstr[1];
    joystick_to_force_mocap_B.idxStartIneq_n =
      joystick_to_force_mocap_B.mTotalWorkingEq + 1;
    joystick_to_force_mocap_B.idxEndIneq_m = workingset->nActiveConstr;
    for (joystick_to_force_mocap_B.i_ja =
         joystick_to_force_mocap_B.idxStartIneq_n;
         joystick_to_force_mocap_B.i_ja <=
         joystick_to_force_mocap_B.idxEndIneq_m; joystick_to_force_mocap_B.i_ja
         ++) {
      workingset->isActiveConstr[(workingset->isActiveIdx[workingset->
        Wid[joystick_to_force_mocap_B.i_ja - 1] - 1] + workingset->
        Wlocalidx[joystick_to_force_mocap_B.i_ja - 1]) - 2] = false;
    }

    workingset->nWConstr[2] = 0;
    workingset->nWConstr[3] = 0;
    workingset->nWConstr[4] = 0;
    workingset->nActiveConstr = joystick_to_force_mocap_B.mTotalWorkingEq;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_m_linearForm_(boolean_T obj_hasLinear, int32_T
  obj_nvar, real_T workspace[60], const real_T x[5])
{
  int32_T b;
  int32_T beta1;
  int32_T e;
  int32_T f;
  int32_T ix;
  int32_T tmp;
  static const int8_T g[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  beta1 = 0;
  if (obj_hasLinear) {
    if ((uint8_T)obj_nvar - 1 >= 0) {
      memset(&workspace[0], 0, (uint8_T)obj_nvar * sizeof(real_T));
    }

    beta1 = 1;
  }

  if (obj_nvar != 0) {
    if (beta1 != 1) {
      memset(&workspace[0], 0, (uint8_T)obj_nvar * sizeof(real_T));
    }

    ix = 0;
    e = (obj_nvar - 1) * obj_nvar + 1;
    for (beta1 = 1; obj_nvar < 0 ? beta1 >= e : beta1 <= e; beta1 += obj_nvar) {
      joystick_to_force_mocap_B.c_f = 0.5 * x[ix];
      f = (beta1 + obj_nvar) - 1;
      for (b = beta1; b <= f; b++) {
        tmp = b - beta1;
        workspace[tmp] += (real_T)g[b - 1] * joystick_to_force_mocap_B.c_f;
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_to_force_m_computeFval(const
  szdozZxcClCeUpd1TsA9nJF_joyst_T *obj, real_T workspace[60], const real_T x[5])
{
  real_T val;
  int32_T b;
  int32_T idx;
  switch (obj->objtype) {
   case 5:
    val = x[obj->nvar - 1] * obj->gammaScalar;
    break;

   case 3:
    joystick_to_force_m_linearForm_(obj->hasLinear, obj->nvar, workspace, x);
    val = 0.0;
    if (obj->nvar >= 1) {
      b = (uint8_T)obj->nvar;
      for (idx = 0; idx < b; idx++) {
        val += x[idx] * workspace[idx];
      }
    }
    break;

   default:
    joystick_to_force_m_linearForm_(obj->hasLinear, obj->nvar, workspace, x);
    b = obj->nvar + 1;
    for (idx = b; idx < 5; idx++) {
      workspace[idx - 1] = x[idx - 1] * 0.0;
    }

    val = ((x[0] * workspace[0] + x[1] * workspace[1]) + x[2] * workspace[2]) +
      x[3] * workspace[3];
    break;
  }

  return val;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moc_xgemv_nry(int32_T m, int32_T n, int32_T lda,
  const real_T x[5], real_T y[4])
{
  int32_T b;
  int32_T b_iy;
  int32_T c;
  int32_T d;
  int32_T ix;
  int32_T tmp;
  static const int8_T e[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  if ((m != 0) && (n != 0)) {
    memset(&y[0], 0, (uint8_T)m * sizeof(real_T));
    ix = 0;
    c = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= c : b_iy <= c; b_iy += lda) {
      d = (b_iy + m) - 1;
      for (b = b_iy; b <= d; b++) {
        tmp = b - b_iy;
        y[tmp] += (real_T)e[b - 1] * x[ix];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_computeGrad_StoreHx(szdozZxcClCeUpd1TsA9nJF_joyst_T *obj,
  const real_T x[5])
{
  int32_T d;
  int32_T idx;
  switch (obj->objtype) {
   case 5:
    if (obj->nvar - 2 >= 0) {
      memset(&obj->grad[0], 0, (uint32_T)(obj->nvar - 1) * sizeof(real_T));
    }

    obj->grad[obj->nvar - 1] = obj->gammaScalar;
    break;

   case 3:
    joystick_to_force_moc_xgemv_nry(obj->nvar, obj->nvar, obj->nvar, x, obj->Hx);
    if ((uint8_T)obj->nvar - 1 >= 0) {
      memcpy(&obj->grad[0], &obj->Hx[0], (uint8_T)obj->nvar * sizeof(real_T));
    }
    break;

   default:
    joystick_to_force_moc_xgemv_nry(obj->nvar, obj->nvar, obj->nvar, x, obj->Hx);
    d = obj->nvar + 1;
    for (idx = d; idx < 5; idx++) {
      obj->Hx[idx - 1] = x[idx - 1] * 0.0;
    }

    obj->grad[0] = obj->Hx[0];
    obj->grad[1] = obj->Hx[1];
    obj->grad[2] = obj->Hx[2];
    obj->grad[3] = obj->Hx[3];
    break;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_to_computeFval_ReuseHx(const
  szdozZxcClCeUpd1TsA9nJF_joyst_T *obj, real_T workspace[60], const real_T x[5])
{
  real_T val;
  int32_T e;
  int32_T idx;
  switch (obj->objtype) {
   case 5:
    val = x[obj->nvar - 1] * obj->gammaScalar;
    break;

   case 3:
    if (obj->hasLinear) {
      e = (uint8_T)obj->nvar;
      for (idx = 0; idx < e; idx++) {
        workspace[idx] = 0.5 * obj->Hx[idx];
      }

      val = 0.0;
      if (obj->nvar >= 1) {
        for (idx = 0; idx < e; idx++) {
          val += x[idx] * workspace[idx];
        }
      }
    } else {
      val = 0.0;
      if (obj->nvar >= 1) {
        e = (uint8_T)obj->nvar;
        for (idx = 0; idx < e; idx++) {
          val += x[idx] * obj->Hx[idx];
        }
      }

      val *= 0.5;
    }
    break;

   default:
    if (obj->hasLinear) {
      if ((uint8_T)obj->nvar - 1 >= 0) {
        memset(&workspace[0], 0, (uint8_T)obj->nvar * sizeof(real_T));
      }

      e = 3 - obj->nvar;
      for (idx = 0; idx <= e; idx++) {
        workspace[obj->nvar + idx] = 0.0;
      }

      workspace[0] += 0.5 * obj->Hx[0];
      workspace[1] += 0.5 * obj->Hx[1];
      workspace[2] += 0.5 * obj->Hx[2];
      workspace[3] += 0.5 * obj->Hx[3];
      val = ((x[0] * workspace[0] + x[1] * workspace[1]) + x[2] * workspace[2])
        + x[3] * workspace[3];
    } else {
      val = (((x[0] * obj->Hx[0] + x[1] * obj->Hx[1]) + x[2] * obj->Hx[2]) + x[3]
             * obj->Hx[3]) * 0.5;
      e = obj->nvar + 1;
      for (idx = e; idx < 5; idx++) {
        val += x[idx - 1] * 0.0;
      }
    }
    break;
  }

  return val;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  joystick_to_force_mocap_B.roe = *b;
  joystick_to_force_mocap_B.absa = fabs(*a);
  joystick_to_force_mocap_B.absb = fabs(*b);
  if (joystick_to_force_mocap_B.absa > joystick_to_force_mocap_B.absb) {
    joystick_to_force_mocap_B.roe = *a;
  }

  joystick_to_force_mocap_B.scale_b = joystick_to_force_mocap_B.absa +
    joystick_to_force_mocap_B.absb;
  if (joystick_to_force_mocap_B.scale_b == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *a = 0.0;
    *b = 0.0;
  } else {
    joystick_to_force_mocap_B.ads = joystick_to_force_mocap_B.absa /
      joystick_to_force_mocap_B.scale_b;
    joystick_to_force_mocap_B.bds = joystick_to_force_mocap_B.absb /
      joystick_to_force_mocap_B.scale_b;
    joystick_to_force_mocap_B.scale_b *= sqrt(joystick_to_force_mocap_B.ads *
      joystick_to_force_mocap_B.ads + joystick_to_force_mocap_B.bds *
      joystick_to_force_mocap_B.bds);
    if (joystick_to_force_mocap_B.roe < 0.0) {
      joystick_to_force_mocap_B.scale_b = -joystick_to_force_mocap_B.scale_b;
    }

    *c = *a / joystick_to_force_mocap_B.scale_b;
    *s = *b / joystick_to_force_mocap_B.scale_b;
    if (joystick_to_force_mocap_B.absa > joystick_to_force_mocap_B.absb) {
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }

    *a = joystick_to_force_mocap_B.scale_b;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_fo_deleteColMoveEnd(sjdap3l62Of6VUMNmDqEW7E_joyst_T *obj,
  int32_T idx)
{
  int32_T QRk0;
  int32_T b_n;
  int32_T b_temp_tmp;
  int32_T e_k;
  int32_T i;
  int32_T idxRotGCol;
  int32_T k;
  int32_T temp_tmp;
  if (obj->usedPivoting) {
    i = 1;
    while ((i <= obj->ncols) && (obj->jpvt[i - 1] != idx)) {
      i++;
    }

    idx = i;
  }

  if (idx >= obj->ncols) {
    obj->ncols--;
  } else {
    obj->jpvt[idx - 1] = obj->jpvt[obj->ncols - 1];
    QRk0 = obj->minRowCol;
    for (i = 0; i < QRk0; i++) {
      obj->QR[i + 7 * (idx - 1)] = obj->QR[(obj->ncols - 1) * 7 + i];
    }

    obj->ncols--;
    if (obj->mrows <= obj->ncols) {
      obj->minRowCol = obj->mrows;
    } else {
      obj->minRowCol = obj->ncols;
    }

    if (idx < obj->mrows) {
      if (obj->mrows - 1 <= obj->ncols) {
        i = obj->mrows - 1;
      } else {
        i = obj->ncols;
      }

      k = i;
      idxRotGCol = (idx - 1) * 7;
      while (k >= idx) {
        QRk0 = k + idxRotGCol;
        joystick_to_force_mocap_B.b_temp = obj->QR[QRk0];
        joystick_to_force_mocap_xrotg(&obj->QR[QRk0 - 1],
          &joystick_to_force_mocap_B.b_temp, &joystick_to_force_mocap_B.c_c,
          &joystick_to_force_mocap_B.b_s);
        obj->QR[QRk0] = joystick_to_force_mocap_B.b_temp;
        e_k = (k - 1) * 7;
        obj->QR[k + e_k] = 0.0;
        QRk0 = 7 * idx + k;
        b_temp_tmp = obj->ncols - idx;
        if (b_temp_tmp >= 1) {
          for (b_n = 0; b_n < b_temp_tmp; b_n++) {
            temp_tmp = b_n * 7 + QRk0;
            joystick_to_force_mocap_B.b_temp_tmp = obj->QR[temp_tmp - 1];
            joystick_to_force_mocap_B.b_temp =
              joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.c_c + obj->QR[temp_tmp] *
              joystick_to_force_mocap_B.b_s;
            obj->QR[temp_tmp] = obj->QR[temp_tmp] *
              joystick_to_force_mocap_B.c_c -
              joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.b_s;
            obj->QR[temp_tmp - 1] = joystick_to_force_mocap_B.b_temp;
          }
        }

        b_n = obj->mrows;
        if (obj->mrows >= 1) {
          for (QRk0 = 0; QRk0 < b_n; QRk0++) {
            b_temp_tmp = e_k + QRk0;
            joystick_to_force_mocap_B.b_temp_tmp = obj->Q[b_temp_tmp + 7];
            joystick_to_force_mocap_B.b_temp =
              joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.b_s + obj->Q[b_temp_tmp] *
              joystick_to_force_mocap_B.c_c;
            obj->Q[b_temp_tmp + 7] = joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.c_c - obj->Q[b_temp_tmp] *
              joystick_to_force_mocap_B.b_s;
            obj->Q[b_temp_tmp] = joystick_to_force_mocap_B.b_temp;
          }
        }

        k--;
      }

      for (k = idx + 1; k <= i; k++) {
        idxRotGCol = (k - 1) * 7;
        QRk0 = k + idxRotGCol;
        joystick_to_force_mocap_B.b_temp = obj->QR[QRk0];
        joystick_to_force_mocap_xrotg(&obj->QR[QRk0 - 1],
          &joystick_to_force_mocap_B.b_temp, &joystick_to_force_mocap_B.c_c,
          &joystick_to_force_mocap_B.b_s);
        obj->QR[QRk0] = joystick_to_force_mocap_B.b_temp;
        QRk0 = k << 3;
        b_n = obj->ncols - k;
        if (b_n >= 1) {
          for (e_k = 0; e_k < b_n; e_k++) {
            b_temp_tmp = e_k * 7 + QRk0;
            joystick_to_force_mocap_B.b_temp_tmp = obj->QR[b_temp_tmp - 1];
            joystick_to_force_mocap_B.b_temp =
              joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.c_c + obj->QR[b_temp_tmp] *
              joystick_to_force_mocap_B.b_s;
            obj->QR[b_temp_tmp] = obj->QR[b_temp_tmp] *
              joystick_to_force_mocap_B.c_c -
              joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.b_s;
            obj->QR[b_temp_tmp - 1] = joystick_to_force_mocap_B.b_temp;
          }
        }

        e_k = obj->mrows;
        if (obj->mrows >= 1) {
          for (QRk0 = 0; QRk0 < e_k; QRk0++) {
            b_n = idxRotGCol + QRk0;
            joystick_to_force_mocap_B.b_temp_tmp = obj->Q[b_n + 7];
            joystick_to_force_mocap_B.b_temp =
              joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.b_s + obj->Q[b_n] *
              joystick_to_force_mocap_B.c_c;
            obj->Q[b_n + 7] = joystick_to_force_mocap_B.b_temp_tmp *
              joystick_to_force_mocap_B.c_c - obj->Q[b_n] *
              joystick_to_force_mocap_B.b_s;
            obj->Q[b_n] = joystick_to_force_mocap_B.b_temp;
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force__fullColLDL2_(s8VdrbiRqBTaOPdh3e5fO1B_joyst_T *obj,
  int32_T NColsRemain, real_T REG_PRIMAL)
{
  int32_T LD_diagOffset;
  int32_T b;
  int32_T b_k;
  int32_T ijA;
  int32_T jA;
  int32_T lastDiag;
  int32_T subMatrixDim;
  for (lastDiag = 0; lastDiag < NColsRemain; lastDiag++) {
    LD_diagOffset = lastDiag << 3;
    joystick_to_force_mocap_B.obj_FMat = obj->FMat[LD_diagOffset];
    if (fabs(joystick_to_force_mocap_B.obj_FMat) <= obj->regTol_) {
      joystick_to_force_mocap_B.obj_FMat += REG_PRIMAL;
      obj->FMat[LD_diagOffset] = joystick_to_force_mocap_B.obj_FMat;
    }

    joystick_to_force_mocap_B.obj_FMat = -1.0 /
      joystick_to_force_mocap_B.obj_FMat;
    subMatrixDim = (NColsRemain - lastDiag) - 2;
    for (b_k = 0; b_k <= subMatrixDim; b_k++) {
      obj->workspace_[b_k] = obj->FMat[(LD_diagOffset + b_k) + 1];
    }

    if (!(joystick_to_force_mocap_B.obj_FMat == 0.0)) {
      jA = LD_diagOffset + 9;
      for (b_k = 0; b_k <= subMatrixDim; b_k++) {
        joystick_to_force_mocap_B.temp_o = obj->workspace_[b_k];
        if (joystick_to_force_mocap_B.temp_o != 0.0) {
          joystick_to_force_mocap_B.temp_o *= joystick_to_force_mocap_B.obj_FMat;
          b = subMatrixDim + jA;
          for (ijA = jA; ijA <= b; ijA++) {
            obj->FMat[ijA - 1] += obj->workspace_[ijA - jA] *
              joystick_to_force_mocap_B.temp_o;
          }
        }

        jA += 7;
      }
    }

    joystick_to_force_mocap_B.obj_FMat = 1.0 / obj->FMat[LD_diagOffset];
    b_k = LD_diagOffset + subMatrixDim;
    for (subMatrixDim = LD_diagOffset + 2; subMatrixDim <= b_k + 2; subMatrixDim
         ++) {
      obj->FMat[subMatrixDim - 1] *= joystick_to_force_mocap_B.obj_FMat;
    }
  }

  lastDiag = (NColsRemain - 1) << 3;
  if (fabs(obj->FMat[lastDiag]) <= obj->regTol_) {
    obj->FMat[lastDiag] += REG_PRIMAL;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mo_xgemv_nrys(int32_T m, int32_T n, const real_T
  A[49], int32_T ia0, const real_T x[60], real_T y[5])
{
  int32_T b;
  int32_T b_iy;
  int32_T c;
  int32_T ia;
  int32_T ix;
  int32_T tmp;
  if (m != 0) {
    memset(&y[0], 0, (uint32_T)m * sizeof(real_T));
    ix = 0;
    b = (n - 1) * 7 + ia0;
    for (b_iy = ia0; b_iy <= b; b_iy += 7) {
      c = (b_iy + m) - 1;
      for (ia = b_iy; ia <= c; ia++) {
        tmp = ia - b_iy;
        y[tmp] += A[ia - 1] * x[ix];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_forc_compute_deltax(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace, const
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager, s8VdrbiRqBTaOPdh3e5fO1B_joyst_T
  *cholmanager, const szdozZxcClCeUpd1TsA9nJF_joyst_T *objective)
{
  int32_T e_ix;
  int32_T mNull_tmp;
  static const int8_T p[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  int32_T exitg1;
  joystick_to_force_mocap_B.nVar_f = qrmanager->mrows - 1;
  mNull_tmp = qrmanager->mrows - qrmanager->ncols;
  if (mNull_tmp <= 0) {
    if (joystick_to_force_mocap_B.nVar_f >= 0) {
      memset(&solution->searchDir[0], 0, (uint32_T)
             (joystick_to_force_mocap_B.nVar_f + 1) * sizeof(real_T));
    }
  } else {
    for (joystick_to_force_mocap_B.A_maxDiag_idx = 0;
         joystick_to_force_mocap_B.A_maxDiag_idx <=
         joystick_to_force_mocap_B.nVar_f;
         joystick_to_force_mocap_B.A_maxDiag_idx++) {
      solution->searchDir[joystick_to_force_mocap_B.A_maxDiag_idx] =
        -objective->grad[joystick_to_force_mocap_B.A_maxDiag_idx];
    }

    if (qrmanager->ncols <= 0) {
      if (objective->objtype == 3) {
        joystick_to_force_mocap_B.temp_l = 1.4901161193847656E-6 * (real_T)
          qrmanager->mrows;
        cholmanager->ndims = qrmanager->mrows;
        for (mNull_tmp = 0; mNull_tmp <= joystick_to_force_mocap_B.nVar_f;
             mNull_tmp++) {
          joystick_to_force_mocap_B.nullStartIdx =
            (joystick_to_force_mocap_B.nVar_f + 1) * mNull_tmp;
          joystick_to_force_mocap_B.nVars = 7 * mNull_tmp;
          for (joystick_to_force_mocap_B.A_maxDiag_idx = 0;
               joystick_to_force_mocap_B.A_maxDiag_idx <=
               joystick_to_force_mocap_B.nVar_f;
               joystick_to_force_mocap_B.A_maxDiag_idx++) {
            cholmanager->FMat[joystick_to_force_mocap_B.nVars +
              joystick_to_force_mocap_B.A_maxDiag_idx] =
              p[joystick_to_force_mocap_B.A_maxDiag_idx +
              joystick_to_force_mocap_B.nullStartIdx];
          }
        }

        if (qrmanager->mrows < 1) {
          joystick_to_force_mocap_B.A_maxDiag_idx = -1;
        } else {
          joystick_to_force_mocap_B.A_maxDiag_idx = 0;
          if (qrmanager->mrows > 1) {
            joystick_to_force_mocap_B.smax_d = fabs(cholmanager->FMat[0]);
            for (mNull_tmp = 2; mNull_tmp <= joystick_to_force_mocap_B.nVar_f +
                 1; mNull_tmp++) {
              joystick_to_force_mocap_B.s_d = fabs(cholmanager->FMat[(mNull_tmp
                - 1) << 3]);
              if (joystick_to_force_mocap_B.s_d >
                  joystick_to_force_mocap_B.smax_d) {
                joystick_to_force_mocap_B.A_maxDiag_idx = mNull_tmp - 1;
                joystick_to_force_mocap_B.smax_d = joystick_to_force_mocap_B.s_d;
              }
            }
          }
        }

        joystick_to_force_mocap_B.smax_d = fabs(cholmanager->FMat[7 *
          joystick_to_force_mocap_B.A_maxDiag_idx +
          joystick_to_force_mocap_B.A_maxDiag_idx]) * 2.2204460492503131E-16;
        joystick_to_force_mocap_B.s_d = fabs(joystick_to_force_mocap_B.temp_l);
        if (joystick_to_force_mocap_B.smax_d >= joystick_to_force_mocap_B.s_d) {
          cholmanager->regTol_ = joystick_to_force_mocap_B.smax_d;
        } else {
          cholmanager->regTol_ = joystick_to_force_mocap_B.s_d;
        }

        joystick_to_force__fullColLDL2_(cholmanager, qrmanager->mrows,
          joystick_to_force_mocap_B.temp_l);
        if (cholmanager->ConvexCheck) {
          mNull_tmp = 0;
          do {
            exitg1 = 0;
            if (mNull_tmp <= joystick_to_force_mocap_B.nVar_f) {
              if (cholmanager->FMat[7 * mNull_tmp + mNull_tmp] <= 0.0) {
                cholmanager->info = -mNull_tmp - 1;
                exitg1 = 1;
              } else {
                mNull_tmp++;
              }
            } else {
              cholmanager->ConvexCheck = false;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (cholmanager->info != 0) {
          solution->state = -6;
        } else {
          joystick_to_force_mocap_B.nVar_f = cholmanager->ndims - 1;
          if (cholmanager->ndims != 0) {
            for (mNull_tmp = 0; mNull_tmp <= joystick_to_force_mocap_B.nVar_f;
                 mNull_tmp++) {
              joystick_to_force_mocap_B.nullStartIdx = mNull_tmp * 7 + mNull_tmp;
              joystick_to_force_mocap_B.nVars = joystick_to_force_mocap_B.nVar_f
                - mNull_tmp;
              for (joystick_to_force_mocap_B.A_maxDiag_idx = 0;
                   joystick_to_force_mocap_B.A_maxDiag_idx <
                   joystick_to_force_mocap_B.nVars;
                   joystick_to_force_mocap_B.A_maxDiag_idx++) {
                joystick_to_force_mocap_B.b_A_maxDiag_idx =
                  (joystick_to_force_mocap_B.A_maxDiag_idx + mNull_tmp) + 1;
                solution->searchDir[joystick_to_force_mocap_B.b_A_maxDiag_idx] -=
                  cholmanager->FMat[(joystick_to_force_mocap_B.A_maxDiag_idx +
                                     joystick_to_force_mocap_B.nullStartIdx) + 1]
                  * solution->searchDir[mNull_tmp];
              }
            }
          }

          joystick_to_force_mocap_B.nVar_f = cholmanager->ndims;
          for (mNull_tmp = 0; mNull_tmp < joystick_to_force_mocap_B.nVar_f;
               mNull_tmp++) {
            solution->searchDir[mNull_tmp] /= cholmanager->FMat[7 * mNull_tmp +
              mNull_tmp];
          }

          if (cholmanager->ndims != 0) {
            for (mNull_tmp = joystick_to_force_mocap_B.nVar_f; mNull_tmp >= 1;
                 mNull_tmp--) {
              joystick_to_force_mocap_B.nullStartIdx = (mNull_tmp - 1) * 7;
              joystick_to_force_mocap_B.temp_l = solution->searchDir[mNull_tmp -
                1];
              for (joystick_to_force_mocap_B.A_maxDiag_idx =
                   joystick_to_force_mocap_B.nVar_f;
                   joystick_to_force_mocap_B.A_maxDiag_idx >= mNull_tmp + 1;
                   joystick_to_force_mocap_B.A_maxDiag_idx--) {
                joystick_to_force_mocap_B.temp_l -= cholmanager->FMat
                  [(joystick_to_force_mocap_B.nullStartIdx +
                    joystick_to_force_mocap_B.A_maxDiag_idx) - 1] *
                  solution->searchDir[joystick_to_force_mocap_B.A_maxDiag_idx -
                  1];
              }

              solution->searchDir[mNull_tmp - 1] =
                joystick_to_force_mocap_B.temp_l;
            }
          }
        }
      }
    } else {
      joystick_to_force_mocap_B.A_maxDiag_idx = 7 * qrmanager->ncols;
      joystick_to_force_mocap_B.nullStartIdx =
        joystick_to_force_mocap_B.A_maxDiag_idx + 1;
      if (objective->objtype == 5) {
        for (joystick_to_force_mocap_B.nullStartIdx = 0;
             joystick_to_force_mocap_B.nullStartIdx < mNull_tmp;
             joystick_to_force_mocap_B.nullStartIdx++) {
          memspace->workspace_double[joystick_to_force_mocap_B.nullStartIdx] =
            -qrmanager->Q[(qrmanager->ncols +
                           joystick_to_force_mocap_B.nullStartIdx) * 7 +
            joystick_to_force_mocap_B.nVar_f];
        }

        joystick_to_force_mo_xgemv_nrys(qrmanager->mrows, mNull_tmp,
          qrmanager->Q, joystick_to_force_mocap_B.A_maxDiag_idx + 1,
          memspace->workspace_double, solution->searchDir);
      } else {
        if (objective->objtype == 3) {
          joystick_to_force_mocap_B.nVars = qrmanager->mrows;
          if ((qrmanager->mrows != 0) && (mNull_tmp != 0)) {
            joystick_to_force_mocap_B.br =
              joystick_to_force_mocap_B.A_maxDiag_idx;
            joystick_to_force_mocap_B.lastColC = (mNull_tmp - 1) * 12;
            for (joystick_to_force_mocap_B.b_A_maxDiag_idx = 0;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx <=
                 joystick_to_force_mocap_B.lastColC;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx += 12) {
              e_ix = joystick_to_force_mocap_B.b_A_maxDiag_idx +
                joystick_to_force_mocap_B.nVars;
              for (joystick_to_force_mocap_B.ic =
                   joystick_to_force_mocap_B.b_A_maxDiag_idx + 1;
                   joystick_to_force_mocap_B.ic <= e_ix;
                   joystick_to_force_mocap_B.ic++) {
                memspace->workspace_double[joystick_to_force_mocap_B.ic - 1] =
                  0.0;
              }
            }

            for (joystick_to_force_mocap_B.b_A_maxDiag_idx = 0;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx <=
                 joystick_to_force_mocap_B.lastColC;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx += 12) {
              joystick_to_force_mocap_B.ar = -1;
              joystick_to_force_mocap_B.h = joystick_to_force_mocap_B.br +
                joystick_to_force_mocap_B.nVars;
              for (joystick_to_force_mocap_B.ic = joystick_to_force_mocap_B.br +
                   1; joystick_to_force_mocap_B.ic <=
                   joystick_to_force_mocap_B.h; joystick_to_force_mocap_B.ic++)
              {
                joystick_to_force_mocap_B.i_g =
                  joystick_to_force_mocap_B.b_A_maxDiag_idx +
                  joystick_to_force_mocap_B.nVars;
                for (e_ix = joystick_to_force_mocap_B.b_A_maxDiag_idx + 1; e_ix <=
                     joystick_to_force_mocap_B.i_g; e_ix++) {
                  memspace->workspace_double[e_ix - 1] += (real_T)p
                    [(joystick_to_force_mocap_B.ar + e_ix) -
                    joystick_to_force_mocap_B.b_A_maxDiag_idx] * qrmanager->
                    Q[joystick_to_force_mocap_B.ic - 1];
                }

                joystick_to_force_mocap_B.ar += joystick_to_force_mocap_B.nVars;
              }

              joystick_to_force_mocap_B.br += 7;
            }
          }

          if (mNull_tmp != 0) {
            joystick_to_force_mocap_B.br = (mNull_tmp - 1) * 7;
            for (joystick_to_force_mocap_B.b_A_maxDiag_idx = 0;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx <=
                 joystick_to_force_mocap_B.br;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx += 7) {
              e_ix = joystick_to_force_mocap_B.b_A_maxDiag_idx + mNull_tmp;
              for (joystick_to_force_mocap_B.ic =
                   joystick_to_force_mocap_B.b_A_maxDiag_idx + 1;
                   joystick_to_force_mocap_B.ic <= e_ix;
                   joystick_to_force_mocap_B.ic++) {
                cholmanager->FMat[joystick_to_force_mocap_B.ic - 1] = 0.0;
              }
            }

            joystick_to_force_mocap_B.lastColC = -1;
            for (joystick_to_force_mocap_B.b_A_maxDiag_idx = 0;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx <=
                 joystick_to_force_mocap_B.br;
                 joystick_to_force_mocap_B.b_A_maxDiag_idx += 7) {
              joystick_to_force_mocap_B.ar =
                joystick_to_force_mocap_B.A_maxDiag_idx;
              joystick_to_force_mocap_B.h =
                joystick_to_force_mocap_B.b_A_maxDiag_idx + mNull_tmp;
              for (joystick_to_force_mocap_B.ic =
                   joystick_to_force_mocap_B.b_A_maxDiag_idx + 1;
                   joystick_to_force_mocap_B.ic <= joystick_to_force_mocap_B.h;
                   joystick_to_force_mocap_B.ic++) {
                joystick_to_force_mocap_B.temp_l = 0.0;
                for (e_ix = 0; e_ix < joystick_to_force_mocap_B.nVars; e_ix++) {
                  joystick_to_force_mocap_B.temp_l += memspace->
                    workspace_double[(e_ix + joystick_to_force_mocap_B.lastColC)
                    + 1] * qrmanager->Q[e_ix + joystick_to_force_mocap_B.ar];
                }

                cholmanager->FMat[joystick_to_force_mocap_B.ic - 1] +=
                  joystick_to_force_mocap_B.temp_l;
                joystick_to_force_mocap_B.ar += 7;
              }

              joystick_to_force_mocap_B.lastColC += 12;
            }
          }
        }

        joystick_to_force_mocap_B.temp_l = 1.4901161193847656E-6 * (real_T)
          mNull_tmp;
        cholmanager->ndims = mNull_tmp;
        joystick_to_force_mocap_B.b_A_maxDiag_idx = 0;
        if (mNull_tmp > 1) {
          joystick_to_force_mocap_B.smax_d = fabs(cholmanager->FMat[0]);
          for (joystick_to_force_mocap_B.nVars = 2;
               joystick_to_force_mocap_B.nVars <= mNull_tmp;
               joystick_to_force_mocap_B.nVars++) {
            joystick_to_force_mocap_B.s_d = fabs(cholmanager->FMat
              [(joystick_to_force_mocap_B.nVars - 1) << 3]);
            if (joystick_to_force_mocap_B.s_d > joystick_to_force_mocap_B.smax_d)
            {
              joystick_to_force_mocap_B.b_A_maxDiag_idx =
                joystick_to_force_mocap_B.nVars - 1;
              joystick_to_force_mocap_B.smax_d = joystick_to_force_mocap_B.s_d;
            }
          }
        }

        joystick_to_force_mocap_B.smax_d = fabs(cholmanager->FMat[7 *
          joystick_to_force_mocap_B.b_A_maxDiag_idx +
          joystick_to_force_mocap_B.b_A_maxDiag_idx]) * 2.2204460492503131E-16;
        if (joystick_to_force_mocap_B.smax_d >= joystick_to_force_mocap_B.temp_l)
        {
          cholmanager->regTol_ = joystick_to_force_mocap_B.smax_d;
        } else {
          cholmanager->regTol_ = joystick_to_force_mocap_B.temp_l;
        }

        joystick_to_force__fullColLDL2_(cholmanager, mNull_tmp,
          joystick_to_force_mocap_B.temp_l);
        if (cholmanager->ConvexCheck) {
          joystick_to_force_mocap_B.nVars = 0;
          do {
            exitg1 = 0;
            if (joystick_to_force_mocap_B.nVars <= mNull_tmp - 1) {
              if (cholmanager->FMat[7 * joystick_to_force_mocap_B.nVars +
                  joystick_to_force_mocap_B.nVars] <= 0.0) {
                cholmanager->info = -joystick_to_force_mocap_B.nVars - 1;
                exitg1 = 1;
              } else {
                joystick_to_force_mocap_B.nVars++;
              }
            } else {
              cholmanager->ConvexCheck = false;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (cholmanager->info != 0) {
          solution->state = -6;
        } else {
          if (qrmanager->mrows != 0) {
            memset(&memspace->workspace_double[0], 0, (uint32_T)mNull_tmp *
                   sizeof(real_T));
            joystick_to_force_mocap_B.ic = ((mNull_tmp - 1) * 7 +
              joystick_to_force_mocap_B.A_maxDiag_idx) + 1;
            for (joystick_to_force_mocap_B.nVars =
                 joystick_to_force_mocap_B.nullStartIdx;
                 joystick_to_force_mocap_B.nVars <= joystick_to_force_mocap_B.ic;
                 joystick_to_force_mocap_B.nVars += 7) {
              joystick_to_force_mocap_B.temp_l = 0.0;
              e_ix = joystick_to_force_mocap_B.nVars +
                joystick_to_force_mocap_B.nVar_f;
              for (joystick_to_force_mocap_B.b_A_maxDiag_idx =
                   joystick_to_force_mocap_B.nVars;
                   joystick_to_force_mocap_B.b_A_maxDiag_idx <= e_ix;
                   joystick_to_force_mocap_B.b_A_maxDiag_idx++) {
                joystick_to_force_mocap_B.temp_l += qrmanager->
                  Q[joystick_to_force_mocap_B.b_A_maxDiag_idx - 1] *
                  objective->grad[joystick_to_force_mocap_B.b_A_maxDiag_idx -
                  joystick_to_force_mocap_B.nVars];
              }

              joystick_to_force_mocap_B.b_A_maxDiag_idx = div_nde_s32_floor
                ((joystick_to_force_mocap_B.nVars -
                  joystick_to_force_mocap_B.A_maxDiag_idx) - 1, 7);
              memspace->
                workspace_double[joystick_to_force_mocap_B.b_A_maxDiag_idx] -=
                joystick_to_force_mocap_B.temp_l;
            }
          }

          joystick_to_force_mocap_B.nVars = cholmanager->ndims - 1;
          if (cholmanager->ndims != 0) {
            for (joystick_to_force_mocap_B.nVar_f = 0;
                 joystick_to_force_mocap_B.nVar_f <=
                 joystick_to_force_mocap_B.nVars;
                 joystick_to_force_mocap_B.nVar_f++) {
              joystick_to_force_mocap_B.b_A_maxDiag_idx =
                joystick_to_force_mocap_B.nVar_f * 7 +
                joystick_to_force_mocap_B.nVar_f;
              joystick_to_force_mocap_B.ic = joystick_to_force_mocap_B.nVars -
                joystick_to_force_mocap_B.nVar_f;
              for (joystick_to_force_mocap_B.nullStartIdx = 0;
                   joystick_to_force_mocap_B.nullStartIdx <
                   joystick_to_force_mocap_B.ic;
                   joystick_to_force_mocap_B.nullStartIdx++) {
                e_ix = (joystick_to_force_mocap_B.nullStartIdx +
                        joystick_to_force_mocap_B.nVar_f) + 1;
                memspace->workspace_double[e_ix] -= cholmanager->FMat
                  [(joystick_to_force_mocap_B.nullStartIdx +
                    joystick_to_force_mocap_B.b_A_maxDiag_idx) + 1] *
                  memspace->workspace_double[joystick_to_force_mocap_B.nVar_f];
              }
            }
          }

          joystick_to_force_mocap_B.nVars = cholmanager->ndims;
          for (joystick_to_force_mocap_B.nVar_f = 0;
               joystick_to_force_mocap_B.nVar_f <
               joystick_to_force_mocap_B.nVars; joystick_to_force_mocap_B.nVar_f
               ++) {
            memspace->workspace_double[joystick_to_force_mocap_B.nVar_f] /=
              cholmanager->FMat[7 * joystick_to_force_mocap_B.nVar_f +
              joystick_to_force_mocap_B.nVar_f];
          }

          if (cholmanager->ndims != 0) {
            for (joystick_to_force_mocap_B.nVar_f =
                 joystick_to_force_mocap_B.nVars;
                 joystick_to_force_mocap_B.nVar_f >= 1;
                 joystick_to_force_mocap_B.nVar_f--) {
              joystick_to_force_mocap_B.b_A_maxDiag_idx =
                (joystick_to_force_mocap_B.nVar_f - 1) * 7;
              joystick_to_force_mocap_B.temp_l = memspace->
                workspace_double[joystick_to_force_mocap_B.nVar_f - 1];
              for (joystick_to_force_mocap_B.nullStartIdx =
                   joystick_to_force_mocap_B.nVars;
                   joystick_to_force_mocap_B.nullStartIdx >=
                   joystick_to_force_mocap_B.nVar_f + 1;
                   joystick_to_force_mocap_B.nullStartIdx--) {
                joystick_to_force_mocap_B.temp_l -= cholmanager->FMat
                  [(joystick_to_force_mocap_B.b_A_maxDiag_idx +
                    joystick_to_force_mocap_B.nullStartIdx) - 1] *
                  memspace->
                  workspace_double[joystick_to_force_mocap_B.nullStartIdx - 1];
              }

              memspace->workspace_double[joystick_to_force_mocap_B.nVar_f - 1] =
                joystick_to_force_mocap_B.temp_l;
            }
          }

          joystick_to_force_mo_xgemv_nrys(qrmanager->mrows, mNull_tmp,
            qrmanager->Q, joystick_to_force_mocap_B.A_maxDiag_idx + 1,
            memspace->workspace_double, solution->searchDir);
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T joystick_to_force_moca_xnrm2_cn(int32_T n, const real_T x[5])
{
  real_T absxk;
  real_T t;
  real_T y;
  int32_T b;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[0]);
    } else {
      joystick_to_force_mocap_B.scale_n = 3.3121686421112381E-170;
      b = (uint8_T)n;
      for (k = 0; k < b; k++) {
        absxk = fabs(x[k]);
        if (absxk > joystick_to_force_mocap_B.scale_n) {
          t = joystick_to_force_mocap_B.scale_n / absxk;
          y = y * t * t + 1.0;
          joystick_to_force_mocap_B.scale_n = absxk;
        } else {
          t = absxk / joystick_to_force_mocap_B.scale_n;
          y += t * t;
        }
      }

      y = joystick_to_force_mocap_B.scale_n * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_moc_ratiotest(const real_T solution_xstar[5],
  const real_T solution_searchDir[5], int32_T workingset_nVar, const real_T
  workingset_lb[5], const real_T workingset_ub[5], const int32_T
  workingset_indexLB[5], const int32_T workingset_indexUB[5], const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const boolean_T
  workingset_isActiveConstr[12], const int32_T workingset_nWConstr[5], real_T
  *toldelta, real_T *alpha, boolean_T *newBlocking, int32_T *constrType, int32_T
  *constrIdx)
{
  int32_T b;
  int32_T idx;
  int32_T workingset_indexLB_0;
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  joystick_to_force_mocap_B.p_max = 0.0;
  joystick_to_force_mocap_B.denomTol = 2.2204460492503131E-13 *
    joystick_to_force_moca_xnrm2_cn(workingset_nVar, solution_searchDir);
  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    joystick_to_force_mocap_B.phaseOneCorrectionX =
      solution_xstar[workingset_nVar - 1] * 0.0;
    joystick_to_force_mocap_B.phaseOneCorrectionP =
      solution_searchDir[workingset_nVar - 1] * 0.0;
    b = workingset_sizes[3];
    for (idx = 0; idx <= b - 2; idx++) {
      workingset_indexLB_0 = workingset_indexLB[idx];
      joystick_to_force_mocap_B.pk_corrected =
        -solution_searchDir[workingset_indexLB_0 - 1] -
        joystick_to_force_mocap_B.phaseOneCorrectionP;
      if ((joystick_to_force_mocap_B.pk_corrected >
           joystick_to_force_mocap_B.denomTol) && (!workingset_isActiveConstr
           [(workingset_isActiveIdx[3] + idx) - 1])) {
        joystick_to_force_mocap_B.ratio_tmp =
          -solution_xstar[workingset_indexLB_0 - 1] -
          workingset_lb[workingset_indexLB_0 - 1];
        joystick_to_force_mocap_B.ratio = (joystick_to_force_mocap_B.ratio_tmp -
          *toldelta) - joystick_to_force_mocap_B.phaseOneCorrectionX;
        joystick_to_force_mocap_B.u0 = fabs(joystick_to_force_mocap_B.ratio);
        if ((!(joystick_to_force_mocap_B.u0 <= 1.0E-8 -
               joystick_to_force_mocap_B.ratio)) && (!rtIsNaN(1.0E-8 -
              joystick_to_force_mocap_B.ratio))) {
          joystick_to_force_mocap_B.u0 = 1.0E-8 -
            joystick_to_force_mocap_B.ratio;
        }

        joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.u0 /
          joystick_to_force_mocap_B.pk_corrected;
        if ((joystick_to_force_mocap_B.ratio <= *alpha) && (fabs
             (joystick_to_force_mocap_B.pk_corrected) >
             joystick_to_force_mocap_B.p_max)) {
          *alpha = joystick_to_force_mocap_B.ratio;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }

        joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.ratio_tmp -
          joystick_to_force_mocap_B.phaseOneCorrectionX;
        joystick_to_force_mocap_B.u0 = fabs(joystick_to_force_mocap_B.ratio);
        if ((!(joystick_to_force_mocap_B.u0 <= 1.0E-8 -
               joystick_to_force_mocap_B.ratio)) && (!rtIsNaN(1.0E-8 -
              joystick_to_force_mocap_B.ratio))) {
          joystick_to_force_mocap_B.u0 = 1.0E-8 -
            joystick_to_force_mocap_B.ratio;
        }

        joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.u0 /
          joystick_to_force_mocap_B.pk_corrected;
        if (joystick_to_force_mocap_B.ratio < *alpha) {
          *alpha = joystick_to_force_mocap_B.ratio;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
          joystick_to_force_mocap_B.p_max = fabs
            (joystick_to_force_mocap_B.pk_corrected);
        }
      }
    }

    idx = workingset_indexLB[workingset_sizes[3] - 1] - 1;
    joystick_to_force_mocap_B.phaseOneCorrectionX = solution_searchDir[idx];
    if ((-joystick_to_force_mocap_B.phaseOneCorrectionX >
         joystick_to_force_mocap_B.denomTol) && (!workingset_isActiveConstr
         [(workingset_isActiveIdx[3] + workingset_sizes[3]) - 2])) {
      joystick_to_force_mocap_B.ratio_tmp = -solution_xstar[idx] -
        workingset_lb[idx];
      joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.ratio_tmp -
        *toldelta;
      joystick_to_force_mocap_B.u0 = fabs(joystick_to_force_mocap_B.ratio);
      if ((!(joystick_to_force_mocap_B.u0 <= 1.0E-8 -
             joystick_to_force_mocap_B.ratio)) && (!rtIsNaN(1.0E-8 -
            joystick_to_force_mocap_B.ratio))) {
        joystick_to_force_mocap_B.u0 = 1.0E-8 - joystick_to_force_mocap_B.ratio;
      }

      joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.u0 /
        -joystick_to_force_mocap_B.phaseOneCorrectionX;
      if ((joystick_to_force_mocap_B.ratio <= *alpha) && (fabs
           (joystick_to_force_mocap_B.phaseOneCorrectionX) >
           joystick_to_force_mocap_B.p_max)) {
        *alpha = joystick_to_force_mocap_B.ratio;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }

      joystick_to_force_mocap_B.u0 = fabs(joystick_to_force_mocap_B.ratio_tmp);
      if ((!(joystick_to_force_mocap_B.u0 <= 1.0E-8 -
             joystick_to_force_mocap_B.ratio_tmp)) && (!rtIsNaN(1.0E-8 -
            joystick_to_force_mocap_B.ratio_tmp))) {
        joystick_to_force_mocap_B.u0 = 1.0E-8 -
          joystick_to_force_mocap_B.ratio_tmp;
      }

      joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.u0 /
        -joystick_to_force_mocap_B.phaseOneCorrectionX;
      if (joystick_to_force_mocap_B.ratio < *alpha) {
        *alpha = joystick_to_force_mocap_B.ratio;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
        joystick_to_force_mocap_B.p_max = fabs
          (joystick_to_force_mocap_B.phaseOneCorrectionX);
      }
    }
  }

  if (workingset_nWConstr[4] < workingset_sizes[4]) {
    joystick_to_force_mocap_B.phaseOneCorrectionX =
      solution_xstar[workingset_nVar - 1] * 0.0;
    joystick_to_force_mocap_B.phaseOneCorrectionP =
      solution_searchDir[workingset_nVar - 1] * 0.0;
    b = (uint8_T)workingset_sizes[4];
    for (idx = 0; idx < b; idx++) {
      workingset_indexLB_0 = workingset_indexUB[idx];
      joystick_to_force_mocap_B.pk_corrected =
        solution_searchDir[workingset_indexLB_0 - 1] -
        joystick_to_force_mocap_B.phaseOneCorrectionP;
      if ((joystick_to_force_mocap_B.pk_corrected >
           joystick_to_force_mocap_B.denomTol) && (!workingset_isActiveConstr
           [(workingset_isActiveIdx[4] + idx) - 1])) {
        joystick_to_force_mocap_B.ratio_tmp =
          solution_xstar[workingset_indexLB_0 - 1] -
          workingset_ub[workingset_indexLB_0 - 1];
        joystick_to_force_mocap_B.ratio = (joystick_to_force_mocap_B.ratio_tmp -
          *toldelta) - joystick_to_force_mocap_B.phaseOneCorrectionX;
        joystick_to_force_mocap_B.u0 = fabs(joystick_to_force_mocap_B.ratio);
        if ((!(joystick_to_force_mocap_B.u0 <= 1.0E-8 -
               joystick_to_force_mocap_B.ratio)) && (!rtIsNaN(1.0E-8 -
              joystick_to_force_mocap_B.ratio))) {
          joystick_to_force_mocap_B.u0 = 1.0E-8 -
            joystick_to_force_mocap_B.ratio;
        }

        joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.u0 /
          joystick_to_force_mocap_B.pk_corrected;
        if ((joystick_to_force_mocap_B.ratio <= *alpha) && (fabs
             (joystick_to_force_mocap_B.pk_corrected) >
             joystick_to_force_mocap_B.p_max)) {
          *alpha = joystick_to_force_mocap_B.ratio;
          *constrType = 5;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }

        joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.ratio_tmp -
          joystick_to_force_mocap_B.phaseOneCorrectionX;
        joystick_to_force_mocap_B.u0 = fabs(joystick_to_force_mocap_B.ratio);
        if ((!(joystick_to_force_mocap_B.u0 <= 1.0E-8 -
               joystick_to_force_mocap_B.ratio)) && (!rtIsNaN(1.0E-8 -
              joystick_to_force_mocap_B.ratio))) {
          joystick_to_force_mocap_B.u0 = 1.0E-8 -
            joystick_to_force_mocap_B.ratio;
        }

        joystick_to_force_mocap_B.ratio = joystick_to_force_mocap_B.u0 /
          joystick_to_force_mocap_B.pk_corrected;
        if (joystick_to_force_mocap_B.ratio < *alpha) {
          *alpha = joystick_to_force_mocap_B.ratio;
          *constrType = 5;
          *constrIdx = idx + 1;
          *newBlocking = true;
          joystick_to_force_mocap_B.p_max = fabs
            (joystick_to_force_mocap_B.pk_corrected);
        }
      }
    }
  }

  *toldelta += 6.608625846508183E-7;
  if (joystick_to_force_mocap_B.p_max > 0.0) {
    joystick_to_force_mocap_B.p_max = 6.608625846508183E-7 /
      joystick_to_force_mocap_B.p_max;
    if (!(*alpha >= joystick_to_force_mocap_B.p_max)) {
      *alpha = joystick_to_force_mocap_B.p_max;
    }
  }

  *newBlocking = (((!*newBlocking) || (!(*alpha > 1.0))) && (*newBlocking));
  if (!(*alpha <= 1.0)) {
    *alpha = 1.0;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_f_feasibleratiotest(const real_T solution_xstar[5],
  const real_T solution_searchDir[5], int32_T workingset_nVar, const real_T
  workingset_lb[5], const real_T workingset_ub[5], const int32_T
  workingset_indexLB[5], const int32_T workingset_indexUB[5], const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const boolean_T
  workingset_isActiveConstr[12], const int32_T workingset_nWConstr[5], boolean_T
  isPhaseOne, real_T *alpha, boolean_T *newBlocking, int32_T *constrType,
  int32_T *constrIdx)
{
  int32_T b;
  int32_T idx;
  int32_T workingset_indexLB_0;
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  joystick_to_force_mocap_B.denomTol_b = 2.2204460492503131E-13 *
    joystick_to_force_moca_xnrm2_cn(workingset_nVar, solution_searchDir);
  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    joystick_to_force_mocap_B.phaseOneCorrectionX_l =
      solution_xstar[workingset_nVar - 1] * (real_T)isPhaseOne;
    joystick_to_force_mocap_B.phaseOneCorrectionP_h =
      solution_searchDir[workingset_nVar - 1] * (real_T)isPhaseOne;
    b = workingset_sizes[3];
    for (idx = 0; idx <= b - 2; idx++) {
      workingset_indexLB_0 = workingset_indexLB[idx];
      joystick_to_force_mocap_B.pk_corrected_b =
        -solution_searchDir[workingset_indexLB_0 - 1] -
        joystick_to_force_mocap_B.phaseOneCorrectionP_h;
      if ((joystick_to_force_mocap_B.pk_corrected_b >
           joystick_to_force_mocap_B.denomTol_b) && (!workingset_isActiveConstr
           [(workingset_isActiveIdx[3] + idx) - 1])) {
        joystick_to_force_mocap_B.ratio_d =
          (-solution_xstar[workingset_indexLB_0 - 1] -
           workingset_lb[workingset_indexLB_0 - 1]) -
          joystick_to_force_mocap_B.phaseOneCorrectionX_l;
        joystick_to_force_mocap_B.u0_e = fabs(joystick_to_force_mocap_B.ratio_d);
        if ((!(joystick_to_force_mocap_B.u0_e <= 1.0E-8 -
               joystick_to_force_mocap_B.ratio_d)) && (!rtIsNaN(1.0E-8 -
              joystick_to_force_mocap_B.ratio_d))) {
          joystick_to_force_mocap_B.u0_e = 1.0E-8 -
            joystick_to_force_mocap_B.ratio_d;
        }

        joystick_to_force_mocap_B.ratio_d = joystick_to_force_mocap_B.u0_e /
          joystick_to_force_mocap_B.pk_corrected_b;
        if (joystick_to_force_mocap_B.ratio_d < *alpha) {
          *alpha = joystick_to_force_mocap_B.ratio_d;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }
      }
    }

    b = workingset_indexLB[workingset_sizes[3] - 1] - 1;
    joystick_to_force_mocap_B.phaseOneCorrectionX_l = -solution_searchDir[b];
    if ((joystick_to_force_mocap_B.phaseOneCorrectionX_l >
         joystick_to_force_mocap_B.denomTol_b) && (!workingset_isActiveConstr
         [(workingset_isActiveIdx[3] + workingset_sizes[3]) - 2])) {
      joystick_to_force_mocap_B.ratio_d = -solution_xstar[b] - workingset_lb[b];
      joystick_to_force_mocap_B.u0_e = fabs(joystick_to_force_mocap_B.ratio_d);
      if ((!(joystick_to_force_mocap_B.u0_e <= 1.0E-8 -
             joystick_to_force_mocap_B.ratio_d)) && (!rtIsNaN(1.0E-8 -
            joystick_to_force_mocap_B.ratio_d))) {
        joystick_to_force_mocap_B.u0_e = 1.0E-8 -
          joystick_to_force_mocap_B.ratio_d;
      }

      joystick_to_force_mocap_B.ratio_d = joystick_to_force_mocap_B.u0_e /
        joystick_to_force_mocap_B.phaseOneCorrectionX_l;
      if (joystick_to_force_mocap_B.ratio_d < *alpha) {
        *alpha = joystick_to_force_mocap_B.ratio_d;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }
    }
  }

  if (workingset_nWConstr[4] < workingset_sizes[4]) {
    joystick_to_force_mocap_B.phaseOneCorrectionX_l =
      solution_xstar[workingset_nVar - 1] * (real_T)isPhaseOne;
    joystick_to_force_mocap_B.phaseOneCorrectionP_h =
      solution_searchDir[workingset_nVar - 1] * (real_T)isPhaseOne;
    b = (uint8_T)workingset_sizes[4];
    for (idx = 0; idx < b; idx++) {
      workingset_indexLB_0 = workingset_indexUB[idx];
      joystick_to_force_mocap_B.pk_corrected_b =
        solution_searchDir[workingset_indexLB_0 - 1] -
        joystick_to_force_mocap_B.phaseOneCorrectionP_h;
      if ((joystick_to_force_mocap_B.pk_corrected_b >
           joystick_to_force_mocap_B.denomTol_b) && (!workingset_isActiveConstr
           [(workingset_isActiveIdx[4] + idx) - 1])) {
        joystick_to_force_mocap_B.ratio_d = (solution_xstar[workingset_indexLB_0
          - 1] - workingset_ub[workingset_indexLB_0 - 1]) -
          joystick_to_force_mocap_B.phaseOneCorrectionX_l;
        joystick_to_force_mocap_B.u0_e = fabs(joystick_to_force_mocap_B.ratio_d);
        if ((!(joystick_to_force_mocap_B.u0_e <= 1.0E-8 -
               joystick_to_force_mocap_B.ratio_d)) && (!rtIsNaN(1.0E-8 -
              joystick_to_force_mocap_B.ratio_d))) {
          joystick_to_force_mocap_B.u0_e = 1.0E-8 -
            joystick_to_force_mocap_B.ratio_d;
        }

        joystick_to_force_mocap_B.ratio_d = joystick_to_force_mocap_B.u0_e /
          joystick_to_force_mocap_B.pk_corrected_b;
        if (joystick_to_force_mocap_B.ratio_d < *alpha) {
          *alpha = joystick_to_force_mocap_B.ratio_d;
          *constrType = 5;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }
      }
    }
  }

  if (!isPhaseOne) {
    *newBlocking = (((!*newBlocking) || (!(*alpha > 1.0))) && (*newBlocking));
    if (!(*alpha <= 1.0)) {
      *alpha = 1.0;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joys_addBoundToActiveSetMatrix_(sFU6CjEcGjLAtPLbWxOieuC_joyst_T *obj,
  int32_T TYPE, int32_T idx_local)
{
  int32_T colOffset;
  int32_T idx_bnd_local;
  obj->nWConstr[TYPE - 1]++;
  obj->isActiveConstr[(obj->isActiveIdx[TYPE - 1] + idx_local) - 2] = true;
  obj->nActiveConstr++;
  obj->Wid[obj->nActiveConstr - 1] = TYPE;
  obj->Wlocalidx[obj->nActiveConstr - 1] = idx_local;
  colOffset = (obj->nActiveConstr - 1) * 5 - 1;
  if (TYPE == 5) {
    idx_bnd_local = obj->indexUB[idx_local - 1];
    obj->bwset[obj->nActiveConstr - 1] = obj->ub[idx_bnd_local - 1];
  } else {
    idx_bnd_local = obj->indexLB[idx_local - 1];
    obj->bwset[obj->nActiveConstr - 1] = obj->lb[idx_bnd_local - 1];
  }

  if ((uint8_T)(idx_bnd_local - 1) - 1 >= 0) {
    memset(&obj->ATwset[colOffset + 1], 0, (uint32_T)(((uint8_T)(idx_bnd_local -
              1) + colOffset) - colOffset) * sizeof(real_T));
  }

  obj->ATwset[idx_bnd_local + colOffset] = (real_T)(TYPE == 5) * 2.0 - 1.0;
  if (idx_bnd_local + 1 <= obj->nVar) {
    memset(&obj->ATwset[(idx_bnd_local + colOffset) + 1], 0, (uint32_T)
           (((obj->nVar + colOffset) - idx_bnd_local) - colOffset) * sizeof
           (real_T));
  }

  switch (obj->probType) {
   case 3:
   case 2:
    break;

   default:
    obj->ATwset[obj->nVar + colOffset] = -1.0;
    break;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_forc_compute_lambda(real_T workspace[60],
  sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T *solution, const
  szdozZxcClCeUpd1TsA9nJF_joyst_T *objective, const
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager)
{
  real_T c;
  int32_T b_idx;
  int32_T b_ix;
  int32_T idxQR;
  int32_T jjA;
  int32_T nActiveConstr_tmp_tmp;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T nonDegenerate;
  nActiveConstr_tmp_tmp = qrmanager->ncols;
  if (qrmanager->ncols > 0) {
    guard1 = false;
    if (objective->objtype != 4) {
      c = 100.0 * (real_T)qrmanager->mrows * 2.2204460492503131E-16;
      nonDegenerate = ((qrmanager->mrows > 0) && (qrmanager->ncols > 0));
      if (nonDegenerate) {
        b_idx = qrmanager->ncols;
        guard2 = false;
        if (qrmanager->mrows < qrmanager->ncols) {
          idxQR = (qrmanager->ncols - 1) * 7 + qrmanager->mrows;
          while ((b_idx > qrmanager->mrows) && (fabs(qrmanager->QR[idxQR - 1]) >=
                  c)) {
            b_idx--;
            idxQR -= 7;
          }

          nonDegenerate = (b_idx == qrmanager->mrows);
          if (!nonDegenerate) {
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }

        if (guard2) {
          idxQR = (b_idx - 1) * 7 + b_idx;
          while ((b_idx >= 1) && (fabs(qrmanager->QR[idxQR - 1]) >= c)) {
            b_idx--;
            idxQR -= 8;
          }

          nonDegenerate = (b_idx == 0);
        }
      }

      if (!nonDegenerate) {
        solution->state = -7;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (qrmanager->mrows != 0) {
        memset(&workspace[0], 0, (uint32_T)qrmanager->ncols * sizeof(real_T));
        jjA = (qrmanager->ncols - 1) * 7 + 1;
        for (b_idx = 1; b_idx <= jjA; b_idx += 7) {
          c = 0.0;
          b_ix = (b_idx + qrmanager->mrows) - 1;
          for (idxQR = b_idx; idxQR <= b_ix; idxQR++) {
            c += qrmanager->Q[idxQR - 1] * objective->grad[idxQR - b_idx];
          }

          idxQR = div_nde_s32_floor(b_idx - 1, 7);
          workspace[idxQR] += c;
        }
      }

      for (b_idx = nActiveConstr_tmp_tmp; b_idx >= 1; b_idx--) {
        jjA = ((b_idx - 1) * 7 + b_idx) - 2;
        workspace[b_idx - 1] /= qrmanager->QR[jjA + 1];
        for (idxQR = 0; idxQR <= b_idx - 2; idxQR++) {
          b_ix = (b_idx - idxQR) - 2;
          workspace[b_ix] -= workspace[b_idx - 1] * qrmanager->QR[jjA - idxQR];
        }
      }

      for (b_idx = 0; b_idx < nActiveConstr_tmp_tmp; b_idx++) {
        solution->lambda[b_idx] = -workspace[b_idx];
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_iterate(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager, s8VdrbiRqBTaOPdh3e5fO1B_joyst_T *cholmanager,
  szdozZxcClCeUpd1TsA9nJF_joyst_T *objective, real_T options_ObjectiveLimit,
  real_T options_StepTolerance, int32_T runTimeOptions_MaxIterations, real_T
  runTimeOptions_ConstrRelTolFact, real_T runTimeOptions_ProbRelTolFactor,
  boolean_T runTimeOptions_RemainFeasible)
{
  int32_T exitg1;
  boolean_T guard1;
  boolean_T newBlocking;
  boolean_T subProblemChanged;
  boolean_T updateFval;
  subProblemChanged = true;
  updateFval = true;
  joystick_to_force_mocap_B.activeSetChangeID = 0;
  joystick_to_force_mocap_B.TYPE = objective->objtype;
  joystick_to_force_mocap_B.tolDelta = 6.7434957617430445E-7;
  joystick_to_force_mocap_B.nVar = workingset->nVar;
  joystick_to_force_mocap_B.globalActiveConstrIdx = 0;
  joystick_to_computeGrad_StoreHx(objective, solution->xstar);
  solution->fstar = joystick_to_computeFval_ReuseHx(objective,
    memspace->workspace_double, solution->xstar);
  if (solution->iterations < runTimeOptions_MaxIterations) {
    solution->state = -5;
  } else {
    solution->state = 0;
  }

  memset(&solution->lambda[0], 0, 12U * sizeof(real_T));
  do {
    exitg1 = 0;
    if (solution->state == -5) {
      guard1 = false;
      if (subProblemChanged) {
        switch (joystick_to_force_mocap_B.activeSetChangeID) {
         case 1:
          joystick_to_force_mocap_B.Qk0 = (workingset->nActiveConstr - 1) * 5;
          if (qrmanager->mrows <= qrmanager->ncols + 1) {
            qrmanager->minRowCol = qrmanager->mrows;
          } else {
            qrmanager->minRowCol = qrmanager->ncols + 1;
          }

          joystick_to_force_mocap_B.iy0 = 7 * qrmanager->ncols;
          if (qrmanager->mrows != 0) {
            joystick_to_force_mocap_B.iyend = joystick_to_force_mocap_B.iy0 +
              qrmanager->mrows;
            if (joystick_to_force_mocap_B.iy0 + 1 <=
                joystick_to_force_mocap_B.iyend) {
              memset(&qrmanager->QR[joystick_to_force_mocap_B.iy0], 0, (uint32_T)
                     (joystick_to_force_mocap_B.iyend -
                      joystick_to_force_mocap_B.iy0) * sizeof(real_T));
            }

            joystick_to_force_mocap_B.j = (qrmanager->mrows - 1) * 7 + 1;
            for (joystick_to_force_mocap_B.localActiveConstrIdx = 1;
                 joystick_to_force_mocap_B.localActiveConstrIdx <=
                 joystick_to_force_mocap_B.j;
                 joystick_to_force_mocap_B.localActiveConstrIdx += 7) {
              joystick_to_force_mocap_B.normDelta = 0.0;
              joystick_to_force_mocap_B.l =
                (joystick_to_force_mocap_B.localActiveConstrIdx +
                 qrmanager->mrows) - 1;
              for (joystick_to_force_mocap_B.iyend =
                   joystick_to_force_mocap_B.localActiveConstrIdx;
                   joystick_to_force_mocap_B.iyend <=
                   joystick_to_force_mocap_B.l; joystick_to_force_mocap_B.iyend
                   ++) {
                joystick_to_force_mocap_B.normDelta += workingset->ATwset
                  [(joystick_to_force_mocap_B.Qk0 +
                    joystick_to_force_mocap_B.iyend) -
                  joystick_to_force_mocap_B.localActiveConstrIdx] * qrmanager->
                  Q[joystick_to_force_mocap_B.iyend - 1];
              }

              joystick_to_force_mocap_B.iyend = div_nde_s32_floor
                (joystick_to_force_mocap_B.localActiveConstrIdx - 1, 7) +
                joystick_to_force_mocap_B.iy0;
              qrmanager->QR[joystick_to_force_mocap_B.iyend] +=
                joystick_to_force_mocap_B.normDelta;
            }
          }

          qrmanager->ncols++;
          qrmanager->jpvt[qrmanager->ncols - 1] = qrmanager->ncols;
          joystick_to_force_mocap_B.iyend = qrmanager->mrows - 2;
          while (joystick_to_force_mocap_B.iyend + 2 > qrmanager->ncols) {
            joystick_to_force_mocap_B.localActiveConstrIdx = (qrmanager->ncols -
              1) * 7 + joystick_to_force_mocap_B.iyend;
            joystick_to_force_mocap_B.temp = qrmanager->
              QR[joystick_to_force_mocap_B.localActiveConstrIdx + 1];
            joystick_to_force_mocap_xrotg(&qrmanager->
              QR[joystick_to_force_mocap_B.localActiveConstrIdx],
              &joystick_to_force_mocap_B.temp,
              &joystick_to_force_mocap_B.normDelta, &joystick_to_force_mocap_B.s);
            qrmanager->QR[joystick_to_force_mocap_B.localActiveConstrIdx + 1] =
              joystick_to_force_mocap_B.temp;
            joystick_to_force_mocap_B.Qk0 = 7 * joystick_to_force_mocap_B.iyend;
            joystick_to_force_mocap_B.iy0 = qrmanager->mrows;
            if (qrmanager->mrows >= 1) {
              for (joystick_to_force_mocap_B.localActiveConstrIdx = 0;
                   joystick_to_force_mocap_B.localActiveConstrIdx <
                   joystick_to_force_mocap_B.iy0;
                   joystick_to_force_mocap_B.localActiveConstrIdx++) {
                joystick_to_force_mocap_B.j = joystick_to_force_mocap_B.Qk0 +
                  joystick_to_force_mocap_B.localActiveConstrIdx;
                joystick_to_force_mocap_B.temp_tmp = qrmanager->
                  Q[joystick_to_force_mocap_B.j + 7];
                joystick_to_force_mocap_B.temp =
                  joystick_to_force_mocap_B.temp_tmp *
                  joystick_to_force_mocap_B.s + qrmanager->
                  Q[joystick_to_force_mocap_B.j] *
                  joystick_to_force_mocap_B.normDelta;
                qrmanager->Q[joystick_to_force_mocap_B.j + 7] =
                  joystick_to_force_mocap_B.temp_tmp *
                  joystick_to_force_mocap_B.normDelta - qrmanager->
                  Q[joystick_to_force_mocap_B.j] * joystick_to_force_mocap_B.s;
                qrmanager->Q[joystick_to_force_mocap_B.j] =
                  joystick_to_force_mocap_B.temp;
              }
            }

            joystick_to_force_mocap_B.iyend--;
          }
          break;

         case -1:
          joystick_to_fo_deleteColMoveEnd(qrmanager,
            joystick_to_force_mocap_B.globalActiveConstrIdx);
          break;

         default:
          joystick_to_force_moca_factorQR(qrmanager, workingset->ATwset,
            joystick_to_force_mocap_B.nVar, workingset->nActiveConstr);
          joystick_to_force_moc_computeQ_(qrmanager, qrmanager->mrows);
          break;
        }

        joystick_to_forc_compute_deltax(solution, memspace, qrmanager,
          cholmanager, objective);
        if (solution->state != -5) {
          exitg1 = 1;
        } else {
          joystick_to_force_mocap_B.normDelta = joystick_to_force_moca_xnrm2_cn
            (joystick_to_force_mocap_B.nVar, solution->searchDir);
          guard1 = true;
        }
      } else {
        if (joystick_to_force_mocap_B.nVar - 1 >= 0) {
          memset(&solution->searchDir[0], 0, (uint32_T)
                 joystick_to_force_mocap_B.nVar * sizeof(real_T));
        }

        joystick_to_force_mocap_B.normDelta = 0.0;
        guard1 = true;
      }

      if (guard1) {
        if ((!subProblemChanged) || (joystick_to_force_mocap_B.normDelta <
             options_StepTolerance) || (workingset->nActiveConstr >=
             joystick_to_force_mocap_B.nVar)) {
          joystick_to_forc_compute_lambda(memspace->workspace_double, solution,
            objective, qrmanager);
          if ((solution->state != -7) || (workingset->nActiveConstr >
               joystick_to_force_mocap_B.nVar)) {
            joystick_to_force_mocap_B.iyend = 0;
            joystick_to_force_mocap_B.normDelta = 0.0 *
              runTimeOptions_ProbRelTolFactor * (real_T)
              (joystick_to_force_mocap_B.TYPE != 5);
            joystick_to_force_mocap_B.Qk0 = (workingset->nWConstr[0] +
              workingset->nWConstr[1]) + 1;
            joystick_to_force_mocap_B.iy0 = workingset->nActiveConstr;
            for (joystick_to_force_mocap_B.localActiveConstrIdx =
                 joystick_to_force_mocap_B.Qk0;
                 joystick_to_force_mocap_B.localActiveConstrIdx <=
                 joystick_to_force_mocap_B.iy0;
                 joystick_to_force_mocap_B.localActiveConstrIdx++) {
              joystick_to_force_mocap_B.s = solution->
                lambda[joystick_to_force_mocap_B.localActiveConstrIdx - 1];
              if (joystick_to_force_mocap_B.s <
                  joystick_to_force_mocap_B.normDelta) {
                joystick_to_force_mocap_B.normDelta =
                  joystick_to_force_mocap_B.s;
                joystick_to_force_mocap_B.iyend =
                  joystick_to_force_mocap_B.localActiveConstrIdx;
              }
            }

            if (joystick_to_force_mocap_B.iyend == 0) {
              solution->state = 1;
            } else {
              joystick_to_force_mocap_B.activeSetChangeID = -1;
              joystick_to_force_mocap_B.globalActiveConstrIdx =
                joystick_to_force_mocap_B.iyend;
              subProblemChanged = true;
              joystick_to_force__removeConstr(workingset,
                joystick_to_force_mocap_B.iyend);
              if (joystick_to_force_mocap_B.iyend < workingset->nActiveConstr +
                  1) {
                solution->lambda[joystick_to_force_mocap_B.iyend - 1] =
                  solution->lambda[workingset->nActiveConstr];
              }

              solution->lambda[workingset->nActiveConstr] = 0.0;
            }
          } else {
            joystick_to_force_mocap_B.iyend = workingset->nActiveConstr;
            joystick_to_force_mocap_B.activeSetChangeID = 0;
            joystick_to_force_mocap_B.globalActiveConstrIdx =
              workingset->nActiveConstr;
            subProblemChanged = true;
            joystick_to_force__removeConstr(workingset,
              workingset->nActiveConstr);
            solution->lambda[joystick_to_force_mocap_B.iyend - 1] = 0.0;
          }

          updateFval = false;
        } else {
          updateFval = (joystick_to_force_mocap_B.TYPE == 5);
          if (updateFval || runTimeOptions_RemainFeasible) {
            joystick_to_f_feasibleratiotest(solution->xstar, solution->searchDir,
              workingset->nVar, workingset->lb, workingset->ub,
              workingset->indexLB, workingset->indexUB, workingset->sizes,
              workingset->isActiveIdx, workingset->isActiveConstr,
              workingset->nWConstr, updateFval,
              &joystick_to_force_mocap_B.normDelta, &newBlocking,
              &joystick_to_force_mocap_B.iyend,
              &joystick_to_force_mocap_B.localActiveConstrIdx);
          } else {
            joystick_to_force_moc_ratiotest(solution->xstar, solution->searchDir,
              workingset->nVar, workingset->lb, workingset->ub,
              workingset->indexLB, workingset->indexUB, workingset->sizes,
              workingset->isActiveIdx, workingset->isActiveConstr,
              workingset->nWConstr, &joystick_to_force_mocap_B.tolDelta,
              &joystick_to_force_mocap_B.normDelta, &newBlocking,
              &joystick_to_force_mocap_B.iyend,
              &joystick_to_force_mocap_B.localActiveConstrIdx);
          }

          if (newBlocking) {
            switch (joystick_to_force_mocap_B.iyend) {
             case 3:
              workingset->nWConstr[2]++;
              workingset->isActiveConstr[(workingset->isActiveIdx[2] +
                joystick_to_force_mocap_B.localActiveConstrIdx) - 2] = true;
              workingset->nActiveConstr++;
              workingset->Wid[workingset->nActiveConstr - 1] = 3;
              workingset->Wlocalidx[workingset->nActiveConstr - 1] =
                joystick_to_force_mocap_B.localActiveConstrIdx;
              break;

             case 4:
              joys_addBoundToActiveSetMatrix_(workingset, 4,
                joystick_to_force_mocap_B.localActiveConstrIdx);
              break;

             default:
              joys_addBoundToActiveSetMatrix_(workingset, 5,
                joystick_to_force_mocap_B.localActiveConstrIdx);
              break;
            }

            joystick_to_force_mocap_B.activeSetChangeID = 1;
          } else {
            if (objective->objtype == 5) {
              if (joystick_to_force_moca_xnrm2_cn(objective->nvar,
                   solution->searchDir) > 100.0 * (real_T)objective->nvar *
                  1.4901161193847656E-8) {
                solution->state = 3;
              } else {
                solution->state = 4;
              }
            }

            subProblemChanged = false;
            if (workingset->nActiveConstr == 0) {
              solution->state = 1;
            }
          }

          if (!(joystick_to_force_mocap_B.normDelta == 0.0)) {
            for (joystick_to_force_mocap_B.localActiveConstrIdx = 0;
                 joystick_to_force_mocap_B.localActiveConstrIdx <
                 joystick_to_force_mocap_B.nVar;
                 joystick_to_force_mocap_B.localActiveConstrIdx++) {
              solution->xstar[joystick_to_force_mocap_B.localActiveConstrIdx] +=
                joystick_to_force_mocap_B.normDelta * solution->
                searchDir[joystick_to_force_mocap_B.localActiveConstrIdx];
            }
          }

          joystick_to_computeGrad_StoreHx(objective, solution->xstar);
          updateFval = true;
        }

        solution->iterations++;
        if ((solution->iterations >= runTimeOptions_MaxIterations) &&
            ((solution->state != 1) || (objective->objtype == 5))) {
          solution->state = 0;
        }

        if (solution->iterations - solution->iterations / 50 * 50 == 0) {
          solution->maxConstr = joystick_maxConstraintViolation(workingset,
            solution->xstar);
          joystick_to_force_mocap_B.normDelta = solution->maxConstr;
          if (objective->objtype == 5) {
            joystick_to_force_mocap_B.normDelta = solution->maxConstr -
              solution->xstar[objective->nvar - 1];
          }

          if (joystick_to_force_mocap_B.normDelta > 1.0E-8 *
              runTimeOptions_ConstrRelTolFact) {
            joystick_to_force_mocap_B.iyend = (uint8_T)objective->nvar;
            if (joystick_to_force_mocap_B.iyend - 1 >= 0) {
              memcpy(&solution->searchDir[0], &solution->xstar[0], (uint32_T)
                     joystick_to_force_mocap_B.iyend * sizeof(real_T));
            }

            newBlocking = joystic_feasibleX0ForWorkingSet
              (memspace->workspace_double, solution->searchDir, workingset,
               qrmanager);
            if ((!newBlocking) && (solution->state != 0)) {
              solution->state = -2;
            }

            joystick_to_force_mocap_B.activeSetChangeID = 0;
            joystick_to_force_mocap_B.normDelta =
              joystick_maxConstraintViolation(workingset, solution->searchDir);
            if (joystick_to_force_mocap_B.normDelta < solution->maxConstr) {
              if (joystick_to_force_mocap_B.iyend - 1 >= 0) {
                memcpy(&solution->xstar[0], &solution->searchDir[0], (uint32_T)
                       joystick_to_force_mocap_B.iyend * sizeof(real_T));
              }

              solution->maxConstr = joystick_to_force_mocap_B.normDelta;
            }
          }
        }

        if (updateFval) {
          solution->fstar = joystick_to_computeFval_ReuseHx(objective,
            memspace->workspace_double, solution->xstar);
          if ((solution->fstar < options_ObjectiveLimit) && ((solution->state !=
                0) || (objective->objtype != 5))) {
            solution->state = 2;
          }
        }
      }
    } else {
      if (!updateFval) {
        solution->fstar = joystick_to_computeFval_ReuseHx(objective,
          memspace->workspace_double, solution->xstar);
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_t_PresolveWorkingSet_h(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, sjdap3l62Of6VUMNmDqEW7E_joyst_T
  *qrmanager)
{
  boolean_T guard1;
  boolean_T okWorkingSet;
  solution->state = 82;
  joystick_to_force_mocap_B.mWorkingFixed = workingset->nWConstr[0];
  joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp = workingset->nWConstr[0] +
    workingset->nWConstr[1];
  joystick_to_force_mocap_B.idxStartIneq_a = 0;
  if (joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp > 0) {
    joystick_to_force_mocap_B.c_tmp_i = (uint8_T)workingset->nVar;
    for (joystick_to_force_mocap_B.idxStartIneq_a = 0;
         joystick_to_force_mocap_B.idxStartIneq_a <
         joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp;
         joystick_to_force_mocap_B.idxStartIneq_a++) {
      for (joystick_to_force_mocap_B.idxEndIneq_i = 0;
           joystick_to_force_mocap_B.idxEndIneq_i <
           joystick_to_force_mocap_B.c_tmp_i;
           joystick_to_force_mocap_B.idxEndIneq_i++) {
        qrmanager->QR[joystick_to_force_mocap_B.idxStartIneq_a + 7 *
          joystick_to_force_mocap_B.idxEndIneq_i] = workingset->ATwset[5 *
          joystick_to_force_mocap_B.idxStartIneq_a +
          joystick_to_force_mocap_B.idxEndIneq_i];
      }
    }

    joystick_to_force_mocap_B.idxStartIneq_a = joystick_ComputeNumDependentEq_
      (qrmanager, workingset->bwset,
       joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp, workingset->nVar);
    if (joystick_to_force_mocap_B.idxStartIneq_a > 0) {
      for (joystick_to_force_mocap_B.idxEndIneq_i = 0;
           joystick_to_force_mocap_B.idxEndIneq_i <
           joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp;
           joystick_to_force_mocap_B.idxEndIneq_i++) {
        joystick_to_force_mocap_B.iy0_o = 7 *
          joystick_to_force_mocap_B.idxEndIneq_i;
        joystick_to_force_mocap_B.ix0_l = 5 *
          joystick_to_force_mocap_B.idxEndIneq_i;
        for (joystick_to_force_mocap_B.k_o = 0; joystick_to_force_mocap_B.k_o <
             joystick_to_force_mocap_B.c_tmp_i; joystick_to_force_mocap_B.k_o++)
        {
          qrmanager->QR[joystick_to_force_mocap_B.iy0_o +
            joystick_to_force_mocap_B.k_o] = workingset->
            ATwset[joystick_to_force_mocap_B.ix0_l +
            joystick_to_force_mocap_B.k_o];
        }
      }

      for (joystick_to_force_mocap_B.idxEndIneq_i = 0;
           joystick_to_force_mocap_B.idxEndIneq_i <
           joystick_to_force_mocap_B.mWorkingFixed;
           joystick_to_force_mocap_B.idxEndIneq_i++) {
        qrmanager->jpvt[joystick_to_force_mocap_B.idxEndIneq_i] = 1;
      }

      joystick_to_force_mocap_B.k_o = workingset->nWConstr[0] + 1;
      if (joystick_to_force_mocap_B.k_o <=
          joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp) {
        memset(&qrmanager->jpvt[joystick_to_force_mocap_B.k_o + -1], 0,
               (uint32_T)((joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp -
                           joystick_to_force_mocap_B.k_o) + 1) * sizeof(int32_T));
      }

      joystick_to_force_moc_factorQRE(qrmanager, workingset->nVar,
        joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp);
      for (joystick_to_force_mocap_B.idxEndIneq_i = 0;
           joystick_to_force_mocap_B.idxEndIneq_i <
           joystick_to_force_mocap_B.idxStartIneq_a;
           joystick_to_force_mocap_B.idxEndIneq_i++) {
        memspace->workspace_int[joystick_to_force_mocap_B.idxEndIneq_i] =
          qrmanager->jpvt[(joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp -
                           joystick_to_force_mocap_B.idxStartIneq_a) +
          joystick_to_force_mocap_B.idxEndIneq_i];
      }

      joystick_to_force_moc_countsort(memspace->workspace_int,
        joystick_to_force_mocap_B.idxStartIneq_a, memspace->workspace_sort, 1,
        joystick_to_force_mocap_B.mTotalWorkingEq_tmp_tmp);
      for (joystick_to_force_mocap_B.k_o =
           joystick_to_force_mocap_B.idxStartIneq_a;
           joystick_to_force_mocap_B.k_o >= 1; joystick_to_force_mocap_B.k_o--)
      {
        joystick_to_forc_removeEqConstr(workingset, memspace->
          workspace_int[joystick_to_force_mocap_B.k_o - 1]);
      }
    }
  }

  if ((joystick_to_force_mocap_B.idxStartIneq_a != -1) &&
      (workingset->nActiveConstr <= 7)) {
    joystick_t_RemoveDependentIneq_(workingset, qrmanager, memspace, 100.0);
    okWorkingSet = joystic_feasibleX0ForWorkingSet(memspace->workspace_double,
      solution->xstar, workingset, qrmanager);
    guard1 = false;
    if (!okWorkingSet) {
      joystick_t_RemoveDependentIneq_(workingset, qrmanager, memspace, 1000.0);
      okWorkingSet = joystic_feasibleX0ForWorkingSet(memspace->workspace_double,
        solution->xstar, workingset, qrmanager);
      if (!okWorkingSet) {
        solution->state = -7;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (workingset->nWConstr[0] + workingset->nWConstr[1] == workingset->nVar)
      {
        joystick_to_force_mocap_B.constrViolation_g =
          joystick_maxConstraintViolation(workingset, solution->xstar);
        if (joystick_to_force_mocap_B.constrViolation_g > 1.0E-8) {
          solution->state = -2;
        }
      }
    }
  } else {
    solution->state = -3;
    joystick_to_force_mocap_B.idxStartIneq_a = (workingset->nWConstr[0] +
      workingset->nWConstr[1]) + 1;
    joystick_to_force_mocap_B.idxEndIneq_i = workingset->nActiveConstr;
    for (joystick_to_force_mocap_B.k_o =
         joystick_to_force_mocap_B.idxStartIneq_a; joystick_to_force_mocap_B.k_o
         <= joystick_to_force_mocap_B.idxEndIneq_i;
         joystick_to_force_mocap_B.k_o++) {
      workingset->isActiveConstr[(workingset->isActiveIdx[workingset->
        Wid[joystick_to_force_mocap_B.k_o - 1] - 1] + workingset->
        Wlocalidx[joystick_to_force_mocap_B.k_o - 1]) - 2] = false;
    }

    workingset->nWConstr[2] = 0;
    workingset->nWConstr[3] = 0;
    workingset->nWConstr[4] = 0;
    workingset->nActiveConstr = workingset->nWConstr[0] + workingset->nWConstr[1];
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_t_computeFirstOrderOpt(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, const szdozZxcClCeUpd1TsA9nJF_joyst_T *objective, int32_T
  workingset_nVar, const real_T workingset_ATwset[60], int32_T
  workingset_nActiveConstr, real_T workspace[60])
{
  real_T abs_workspace_i;
  int32_T b;
  int32_T c;
  int32_T d;
  int32_T ix;
  int32_T k;
  int32_T tmp;
  boolean_T exitg1;
  memcpy(&workspace[0], &objective->grad[0], (uint8_T)workingset_nVar * sizeof
         (real_T));
  if (workingset_nActiveConstr != 0) {
    ix = 0;
    c = (workingset_nActiveConstr - 1) * 5 + 1;
    for (k = 1; k <= c; k += 5) {
      d = (k + workingset_nVar) - 1;
      for (b = k; b <= d; b++) {
        tmp = b - k;
        workspace[tmp] += workingset_ATwset[b - 1] * solution->lambda[ix];
      }

      ix++;
    }
  }

  joystick_to_force_mocap_B.infNorm = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= (uint8_T)workingset_nVar - 1)) {
    abs_workspace_i = fabs(workspace[k]);
    if (rtIsNaN(abs_workspace_i)) {
      joystick_to_force_mocap_B.infNorm = (rtNaN);
      exitg1 = true;
    } else {
      if (!(joystick_to_force_mocap_B.infNorm >= abs_workspace_i)) {
        joystick_to_force_mocap_B.infNorm = abs_workspace_i;
      }

      k++;
    }
  }

  solution->firstorderopt = joystick_to_force_mocap_B.infNorm;
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_mocap_driver(sbg5SsVFwrzDOcc5EIAUQ0C_joyst_T
  *solution, sG7OiWonOOUUkAoMQTjQ1HE_joyst_T *memspace,
  sFU6CjEcGjLAtPLbWxOieuC_joyst_T *workingset, s8VdrbiRqBTaOPdh3e5fO1B_joyst_T
  *cholmanager, int32_T runTimeOptions_MaxIterations, real_T
  runTimeOptions_ConstrRelTolFact, real_T runTimeOptions_ProbRelTolFactor,
  sjdap3l62Of6VUMNmDqEW7E_joyst_T *qrmanager, szdozZxcClCeUpd1TsA9nJF_joyst_T
  *objective)
{
  boolean_T b_bool;
  static const char_T i_SolverName[8] = { 'q', 'u', 'a', 'd', 'p', 'r', 'o', 'g'
  };

  static const char_T j[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
    '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19',
    '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$',
    '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3',
    '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b',
    'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~',
    '\x7f' };

  int32_T exitg2;
  boolean_T exitg1;
  boolean_T guard1;
  for (joystick_to_force_mocap_B.i_j = 0; joystick_to_force_mocap_B.i_j < 5;
       joystick_to_force_mocap_B.i_j++) {
    objective->grad[joystick_to_force_mocap_B.i_j] = 0.0;
  }

  objective->Hx[0] = 0.0;
  objective->Hx[1] = 0.0;
  objective->Hx[2] = 0.0;
  objective->Hx[3] = 0.0;
  objective->hasLinear = true;
  objective->nvar = 4;
  objective->maxVar = 5;
  objective->beta = 0.0;
  objective->rho = 0.0;
  objective->objtype = 3;
  objective->prev_objtype = 3;
  objective->prev_nvar = 0;
  objective->prev_hasLinear = false;
  objective->gammaScalar = 0.0;
  solution->iterations = 0;
  joystick_to_force_mocap_B.b_mConstr_tmp = workingset->nVar;
  joystick_to_force_mocap_B.idxStartIneq = (uint8_T)workingset->sizes[0];
  for (joystick_to_force_mocap_B.i_j = 0; joystick_to_force_mocap_B.i_j <
       joystick_to_force_mocap_B.idxStartIneq; joystick_to_force_mocap_B.i_j++)
  {
    solution->xstar[workingset->indexFixed[joystick_to_force_mocap_B.i_j] - 1] =
      workingset->ub[workingset->indexFixed[joystick_to_force_mocap_B.i_j] - 1];
  }

  joystick_to_force_mocap_B.idxStartIneq = (uint8_T)workingset->sizes[3];
  for (joystick_to_force_mocap_B.i_j = 0; joystick_to_force_mocap_B.i_j <
       joystick_to_force_mocap_B.idxStartIneq; joystick_to_force_mocap_B.i_j++)
  {
    if (workingset->isActiveConstr[(workingset->isActiveIdx[3] +
         joystick_to_force_mocap_B.i_j) - 1]) {
      solution->xstar[workingset->indexLB[joystick_to_force_mocap_B.i_j] - 1] =
        -workingset->lb[workingset->indexLB[joystick_to_force_mocap_B.i_j] - 1];
    }
  }

  joystick_to_force_mocap_B.idxStartIneq = (uint8_T)workingset->sizes[4];
  for (joystick_to_force_mocap_B.i_j = 0; joystick_to_force_mocap_B.i_j <
       joystick_to_force_mocap_B.idxStartIneq; joystick_to_force_mocap_B.i_j++)
  {
    if (workingset->isActiveConstr[(workingset->isActiveIdx[4] +
         joystick_to_force_mocap_B.i_j) - 1]) {
      solution->xstar[workingset->indexUB[joystick_to_force_mocap_B.i_j] - 1] =
        workingset->ub[workingset->indexUB[joystick_to_force_mocap_B.i_j] - 1];
    }
  }

  joystick_to__PresolveWorkingSet(solution, memspace, workingset, qrmanager);
  for (joystick_to_force_mocap_B.i_j = 0; joystick_to_force_mocap_B.i_j < 8;
       joystick_to_force_mocap_B.i_j++) {
    joystick_to_force_mocap_B.options.SolverName[joystick_to_force_mocap_B.i_j] =
      i_SolverName[joystick_to_force_mocap_B.i_j];
  }

  if (solution->state >= 0) {
    solution->iterations = 0;
    solution->maxConstr = joystick_maxConstraintViolation(workingset,
      solution->xstar);
    guard1 = false;
    if (solution->maxConstr > 1.0E-8 * runTimeOptions_ConstrRelTolFact) {
      solution->xstar[4] = solution->maxConstr + 1.0;
      joystick_to_force_mocap_B.b_workingset = *workingset;
      joystick_to_forc_setProblemType(&joystick_to_force_mocap_B.b_workingset, 1);
      joystick_to_force_mocap_B.idxStartIneq =
        (joystick_to_force_mocap_B.b_workingset.nWConstr[0] +
         joystick_to_force_mocap_B.b_workingset.nWConstr[1]) + 1;
      joystick_to_force_mocap_B.idxEndIneq =
        joystick_to_force_mocap_B.b_workingset.nActiveConstr;
      for (joystick_to_force_mocap_B.i_j =
           joystick_to_force_mocap_B.idxStartIneq; joystick_to_force_mocap_B.i_j
           <= joystick_to_force_mocap_B.idxEndIneq;
           joystick_to_force_mocap_B.i_j++) {
        joystick_to_force_mocap_B.b_workingset.isActiveConstr
          [(joystick_to_force_mocap_B.b_workingset.isActiveIdx[joystick_to_force_mocap_B.b_workingset.Wid
            [joystick_to_force_mocap_B.i_j - 1] - 1] +
            joystick_to_force_mocap_B.b_workingset.Wlocalidx[joystick_to_force_mocap_B.i_j
            - 1]) - 2] = false;
      }

      joystick_to_force_mocap_B.b_workingset.nWConstr[2] = 0;
      joystick_to_force_mocap_B.b_workingset.nWConstr[3] = 0;
      joystick_to_force_mocap_B.b_workingset.nWConstr[4] = 0;
      joystick_to_force_mocap_B.b_workingset.nActiveConstr =
        joystick_to_force_mocap_B.b_workingset.nWConstr[0] +
        joystick_to_force_mocap_B.b_workingset.nWConstr[1];
      objective->prev_objtype = 3;
      objective->prev_nvar = 4;
      objective->prev_hasLinear = true;
      objective->objtype = 5;
      objective->nvar = 5;
      objective->gammaScalar = 1.0;
      objective->hasLinear = true;
      solution->fstar = joystick_to_force_m_computeFval(objective,
        memspace->workspace_double, solution->xstar);
      solution->state = 5;
      joystick_to_force_mocap_iterate(solution, memspace,
        &joystick_to_force_mocap_B.b_workingset, qrmanager, cholmanager,
        objective, 1.0E-8 * runTimeOptions_ConstrRelTolFact,
        1.4901161193847657E-10, runTimeOptions_MaxIterations,
        runTimeOptions_ConstrRelTolFact, runTimeOptions_ProbRelTolFactor, true);
      if (joystick_to_force_mocap_B.b_workingset.isActiveConstr
          [(joystick_to_force_mocap_B.b_workingset.isActiveIdx[3] +
            joystick_to_force_mocap_B.b_workingset.sizes[3]) - 2]) {
        joystick_to_force_mocap_B.i_j =
          joystick_to_force_mocap_B.b_workingset.sizes[0] + 4;
        exitg1 = false;
        while ((!exitg1) && (joystick_to_force_mocap_B.i_j <=
                             joystick_to_force_mocap_B.b_workingset.nActiveConstr))
        {
          if ((joystick_to_force_mocap_B.b_workingset.Wid[joystick_to_force_mocap_B.i_j
               - 1] == 4) &&
              (joystick_to_force_mocap_B.b_workingset.Wlocalidx[joystick_to_force_mocap_B.i_j
               - 1] == joystick_to_force_mocap_B.b_workingset.sizes[3])) {
            joystick_to_force__removeConstr
              (&joystick_to_force_mocap_B.b_workingset,
               joystick_to_force_mocap_B.i_j);
            exitg1 = true;
          } else {
            joystick_to_force_mocap_B.i_j++;
          }
        }
      }

      joystick_to_force_mocap_B.i_j =
        joystick_to_force_mocap_B.b_workingset.nActiveConstr;
      while ((joystick_to_force_mocap_B.i_j >
              joystick_to_force_mocap_B.b_workingset.sizes[0] + 3) &&
             (joystick_to_force_mocap_B.i_j > workingset->nVar)) {
        joystick_to_force__removeConstr(&joystick_to_force_mocap_B.b_workingset,
          joystick_to_force_mocap_B.i_j);
        joystick_to_force_mocap_B.i_j--;
      }

      solution->maxConstr = solution->xstar[4];
      joystick_to_forc_setProblemType(&joystick_to_force_mocap_B.b_workingset, 3);
      objective->objtype = objective->prev_objtype;
      objective->nvar = objective->prev_nvar;
      objective->hasLinear = objective->prev_hasLinear;
      *workingset = joystick_to_force_mocap_B.b_workingset;
      if (solution->state == 0) {
      } else {
        solution->maxConstr = joystick_maxConstraintViolation
          (&joystick_to_force_mocap_B.b_workingset, solution->xstar);
        *workingset = joystick_to_force_mocap_B.b_workingset;
        if (solution->maxConstr > 1.0E-8 * runTimeOptions_ConstrRelTolFact) {
          memset(&solution->lambda[0], 0, 12U * sizeof(real_T));
          solution->fstar = joystick_to_force_m_computeFval(objective,
            memspace->workspace_double, solution->xstar);
          solution->state = -2;
        } else {
          if (solution->maxConstr > 0.0) {
            joystick_to_force_mocap_B.i_j = (uint8_T)
              joystick_to_force_mocap_B.b_mConstr_tmp;
            if (joystick_to_force_mocap_B.i_j - 1 >= 0) {
              memcpy(&solution->searchDir[0], &solution->xstar[0], (uint32_T)
                     joystick_to_force_mocap_B.i_j * sizeof(real_T));
            }

            joystick_t_PresolveWorkingSet_h(solution, memspace,
              &joystick_to_force_mocap_B.b_workingset, qrmanager);
            *workingset = joystick_to_force_mocap_B.b_workingset;
            joystick_to_force_mocap_B.maxConstr_new =
              joystick_maxConstraintViolation(workingset, solution->xstar);
            if (joystick_to_force_mocap_B.maxConstr_new >= solution->maxConstr)
            {
              solution->maxConstr = joystick_to_force_mocap_B.maxConstr_new;
              if (joystick_to_force_mocap_B.i_j - 1 >= 0) {
                memcpy(&solution->xstar[0], &solution->searchDir[0], (uint32_T)
                       joystick_to_force_mocap_B.i_j * sizeof(real_T));
              }
            }
          }

          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      joystick_to_force_mocap_iterate(solution, memspace, workingset, qrmanager,
        cholmanager, objective, -1.0E+20, 1.0E-8, runTimeOptions_MaxIterations,
        runTimeOptions_ConstrRelTolFact, runTimeOptions_ProbRelTolFactor, true);
      b_bool = false;
      joystick_to_force_mocap_B.i_j = 0;
      do {
        exitg2 = 0;
        if (joystick_to_force_mocap_B.i_j < 8) {
          if (j[(int32_T)
              joystick_to_force_mocap_B.options.SolverName[joystick_to_force_mocap_B.i_j]]
              != j[(int32_T)i_SolverName[joystick_to_force_mocap_B.i_j]]) {
            exitg2 = 1;
          } else {
            joystick_to_force_mocap_B.i_j++;
          }
        } else {
          b_bool = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (b_bool && (solution->state != -6)) {
        solution->maxConstr = joystick_maxConstraintViolation(workingset,
          solution->xstar);
        joystick_t_computeFirstOrderOpt(solution, objective, workingset->nVar,
          workingset->ATwset, workingset->nActiveConstr,
          memspace->workspace_double);
        while ((solution->iterations < runTimeOptions_MaxIterations) &&
               ((solution->state == -7) || ((solution->state == 1) &&
                 ((solution->maxConstr > 1.0E-8 *
                   runTimeOptions_ConstrRelTolFact) || (solution->firstorderopt >
                   1.0E-8 * runTimeOptions_ProbRelTolFactor))))) {
          joystic_feasibleX0ForWorkingSet(memspace->workspace_double,
            solution->xstar, workingset, qrmanager);
          joystick_t_PresolveWorkingSet_h(solution, memspace, workingset,
            qrmanager);
          joystick_to_force_mocap_B.idxStartIneq = workingset->probType;
          joystick_to_force_mocap_B.b_mConstr_tmp = workingset->nVar;
          solution->xstar[4] = solution->maxConstr + 1.0;
          if (workingset->probType == 3) {
            joystick_to_force_mocap_B.i_j = 1;
          } else {
            joystick_to_force_mocap_B.i_j = 4;
          }

          joystick_to_forc_setProblemType(workingset,
            joystick_to_force_mocap_B.i_j);
          joystick_to_force_mocap_B.idxEndIneq = workingset->nWConstr[0] +
            workingset->nWConstr[1];
          joystick_to_force_mocap_B.b_idxStartIneq =
            joystick_to_force_mocap_B.idxEndIneq + 1;
          joystick_to_force_mocap_B.b_idxEndIneq = workingset->nActiveConstr;
          for (joystick_to_force_mocap_B.i_j =
               joystick_to_force_mocap_B.b_idxStartIneq;
               joystick_to_force_mocap_B.i_j <=
               joystick_to_force_mocap_B.b_idxEndIneq;
               joystick_to_force_mocap_B.i_j++) {
            workingset->isActiveConstr[(workingset->isActiveIdx[workingset->
              Wid[joystick_to_force_mocap_B.i_j - 1] - 1] +
              workingset->Wlocalidx[joystick_to_force_mocap_B.i_j - 1]) - 2] =
              false;
          }

          workingset->nWConstr[2] = 0;
          workingset->nWConstr[3] = 0;
          workingset->nWConstr[4] = 0;
          workingset->nActiveConstr = joystick_to_force_mocap_B.idxEndIneq;
          objective->prev_objtype = objective->objtype;
          objective->prev_nvar = objective->nvar;
          objective->prev_hasLinear = objective->hasLinear;
          objective->objtype = 5;
          objective->nvar = 5;
          objective->gammaScalar = 1.0;
          objective->hasLinear = true;
          solution->fstar = joystick_to_force_m_computeFval(objective,
            memspace->workspace_double, solution->xstar);
          solution->state = 5;
          joystick_to_force_mocap_iterate(solution, memspace, workingset,
            qrmanager, cholmanager, objective, 1.0E-8 *
            runTimeOptions_ConstrRelTolFact, 1.4901161193847657E-10,
            runTimeOptions_MaxIterations, runTimeOptions_ConstrRelTolFact,
            runTimeOptions_ProbRelTolFactor, false);
          if (workingset->isActiveConstr[(workingset->isActiveIdx[3] +
               workingset->sizes[3]) - 2]) {
            joystick_to_force_mocap_B.i_j = workingset->sizes[0] + 4;
            exitg1 = false;
            while ((!exitg1) && (joystick_to_force_mocap_B.i_j <=
                                 workingset->nActiveConstr)) {
              if ((workingset->Wid[joystick_to_force_mocap_B.i_j - 1] == 4) &&
                  (workingset->Wlocalidx[joystick_to_force_mocap_B.i_j - 1] ==
                   workingset->sizes[3])) {
                joystick_to_force__removeConstr(workingset,
                  joystick_to_force_mocap_B.i_j);
                exitg1 = true;
              } else {
                joystick_to_force_mocap_B.i_j++;
              }
            }
          }

          joystick_to_force_mocap_B.i_j = workingset->nActiveConstr;
          while ((joystick_to_force_mocap_B.i_j > workingset->sizes[0] + 3) &&
                 (joystick_to_force_mocap_B.i_j >
                  joystick_to_force_mocap_B.b_mConstr_tmp)) {
            joystick_to_force__removeConstr(workingset,
              joystick_to_force_mocap_B.i_j);
            joystick_to_force_mocap_B.i_j--;
          }

          solution->maxConstr = solution->xstar[4];
          joystick_to_forc_setProblemType(workingset,
            joystick_to_force_mocap_B.idxStartIneq);
          objective->objtype = objective->prev_objtype;
          objective->nvar = objective->prev_nvar;
          objective->hasLinear = objective->prev_hasLinear;
          joystick_to_force_mocap_iterate(solution, memspace, workingset,
            qrmanager, cholmanager, objective, -1.0E+20, 1.0E-8,
            runTimeOptions_MaxIterations, runTimeOptions_ConstrRelTolFact,
            runTimeOptions_ProbRelTolFactor, false);
          solution->maxConstr = joystick_maxConstraintViolation(workingset,
            solution->xstar);
          joystick_t_computeFirstOrderOpt(solution, objective, workingset->nVar,
            workingset->ATwset, workingset->nActiveConstr,
            memspace->workspace_double);
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void joystick_to_force_linearForm__c(boolean_T obj_hasLinear, int32_T
  obj_nvar, real_T workspace[5], const real_T x[5])
{
  int32_T b;
  int32_T beta1;
  int32_T d;
  int32_T e;
  int32_T ix;
  int32_T tmp;
  static const int8_T f[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  beta1 = 0;
  if (obj_hasLinear) {
    if ((uint8_T)obj_nvar - 1 >= 0) {
      memset(&workspace[0], 0, (uint8_T)obj_nvar * sizeof(real_T));
    }

    beta1 = 1;
  }

  if (obj_nvar != 0) {
    if (beta1 != 1) {
      memset(&workspace[0], 0, (uint8_T)obj_nvar * sizeof(real_T));
    }

    ix = 0;
    d = (obj_nvar - 1) * obj_nvar + 1;
    for (beta1 = 1; obj_nvar < 0 ? beta1 >= d : beta1 <= d; beta1 += obj_nvar) {
      e = (beta1 + obj_nvar) - 1;
      for (b = beta1; b <= e; b++) {
        tmp = b - beta1;
        workspace[tmp] += (real_T)f[b - 1] * x[ix];
      }

      ix++;
    }
  }
}

/* Model step function */
void joystick_to_force_mocap_step(void)
{
  static const int8_T H[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  boolean_T guard1;

  /* S-Function (rpi_sfun_iosocket): '<S3>/S-Function Builder' incorporates:
   *  Constant: '<S2>/Constant5'
   */
  rpi_sfun_iosocket_Outputs_wrapper(&joystick_to_force_mocap_B.SFunctionBuilder
    [0], &joystick_to_force_mocap_DW.SFunctionBuilder_DSTATE,
    &joystick_to_force_mocap_P.SFunctionBuilder_P1, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P2, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P3, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P4, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P5, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P6, 1);

  /* Reshape: '<S2>/Reshape' */
  memcpy(&joystick_to_force_mocap_B.Reshape[0],
         &joystick_to_force_mocap_B.SFunctionBuilder[5], 9U * sizeof(real_T));

  /* SignalConversion: '<S2>/Signal Conversion' */
  joystick_to_force_mocap_B.SignalConversion[0] =
    joystick_to_force_mocap_B.SFunctionBuilder[2];
  joystick_to_force_mocap_B.SignalConversion[1] =
    joystick_to_force_mocap_B.SFunctionBuilder[3];
  joystick_to_force_mocap_B.SignalConversion[2] =
    joystick_to_force_mocap_B.SFunctionBuilder[4];

  /* MATLABSystem: '<S2>/Coordinate Transformation Conversion' incorporates:
   *  Reshape: '<S2>/Reshape'
   */
  joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_B.Reshape[0] *
    joystick_to_force_mocap_B.Reshape[0] + joystick_to_force_mocap_B.Reshape[1] *
    joystick_to_force_mocap_B.Reshape[1];
  joystick_to_force_mocap_B.cy = sqrt(joystick_to_force_mocap_B.cySq);
  joystick_to_force_mocap_B.CoordinateTransformationConvers[0] = rt_atan2d_snf
    (joystick_to_force_mocap_B.Reshape[5], joystick_to_force_mocap_B.Reshape[8]);
  joystick_to_force_mocap_B.CoordinateTransformationConvers[1] = rt_atan2d_snf
    (-joystick_to_force_mocap_B.Reshape[2], joystick_to_force_mocap_B.cy);
  joystick_to_force_mocap_B.CoordinateTransformationConvers[2] = rt_atan2d_snf
    (joystick_to_force_mocap_B.Reshape[1], joystick_to_force_mocap_B.Reshape[0]);
  if (joystick_to_force_mocap_B.cySq < 2.2204460492503131E-15) {
    joystick_to_force_mocap_B.trueCount = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 1;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.trueCount++;
    }

    joystick_to_force_mocap_B.idxFillStart = joystick_to_force_mocap_B.trueCount;
    joystick_to_force_mocap_B.trueCount = 0;
    joystick_to_force_mocap_B.csz_idx_2 = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 1;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.csz_idx_2 = joystick_to_force_mocap_B.trueCount
        + 1;
      joystick_to_force_mocap_B.trueCount++;
    }

    if (joystick_to_force_mocap_B.csz_idx_2 - 1 >= 0) {
      joystick_to_force_mocap_B.y_data = -joystick_to_force_mocap_B.Reshape[7];
    }

    joystick_to_force_mocap_B.trueCount = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 1;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.trueCount++;
    }

    if (joystick_to_force_mocap_B.csz_idx_2 >
        joystick_to_force_mocap_B.trueCount) {
      joystick_to_force_mocap_B.csz_idx_2 = 0;
    }

    joystick_to_force_mocap_B.c_a = joystick_to_force_mocap_B.csz_idx_2 - 1;
    for (joystick_to_force_mocap_B.trueCount = 0;
         joystick_to_force_mocap_B.trueCount <= joystick_to_force_mocap_B.c_a;
         joystick_to_force_mocap_B.trueCount++) {
      joystick_to_force_mocap_B.i = 0;
      joystick_to_force_mocap_B.varargin_1_data_p = rt_atan2d_snf
        (joystick_to_force_mocap_B.y_data, joystick_to_force_mocap_B.Reshape[4]);
    }

    joystick_to_force_mocap_B.trueCount = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 1;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.trueCount++;
    }

    joystick_to_force_mocap_B.y_size[0] = 1;
    joystick_to_force_mocap_B.y_size[1] = 1;
    joystick_to_force_mocap_B.y_size[2] = joystick_to_force_mocap_B.trueCount;
    if (joystick_to_force_mocap_B.trueCount - 1 >= 0) {
      joystick_to_force_mocap_B.y_data = -joystick_to_force_mocap_B.Reshape[2];
    }

    if (joystick_to_force_mocap_B.idxFillStart ==
        joystick_to_force_mocap_B.trueCount) {
      joystick_to_force_mocap_B.varargin_2_size[2] =
        joystick_to_force_mocap_B.trueCount;
      if (joystick_to_force_mocap_B.trueCount - 1 >= 0) {
        joystick_to_force_mocap_B.trueCount = 0;
        joystick_to_force_mocap_B.varargin_2_data = rt_atan2d_snf
          (joystick_to_force_mocap_B.y_data, joystick_to_force_mocap_B.cy);
      }
    } else {
      joystick_to_force_mocap_B.trueCount = 0;
      for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 1;
           joystick_to_force_mocap_B.i++) {
        joystick_to_force_mocap_B.trueCount++;
      }

      joystick_to_force_mocap_B.cy_size[0] = 1;
      joystick_to_force_mocap_B.cy_size[1] = 1;
      joystick_to_force_mocap_B.cy_size[2] = joystick_to_force_mocap_B.trueCount;
      if (joystick_to_force_mocap_B.trueCount - 1 >= 0) {
        joystick_to_force_mocap_B.cy_data = joystick_to_force_mocap_B.cy;
      }

      joystick_to_force__expand_atan2(&joystick_to_force_mocap_B.y_data,
        joystick_to_force_mocap_B.y_size, &joystick_to_force_mocap_B.cy_data,
        joystick_to_force_mocap_B.cy_size,
        &joystick_to_force_mocap_B.varargin_2_data,
        joystick_to_force_mocap_B.varargin_2_size);
    }

    joystick_to_force_mocap_B.trueCount = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 1;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.trueCount++;
    }

    if (joystick_to_force_mocap_B.csz_idx_2 - 1 >= 0) {
      joystick_to_force_mocap_B.varargin_1_data[0] =
        joystick_to_force_mocap_B.varargin_1_data_p;
    }

    if (joystick_to_force_mocap_B.varargin_2_size[2] - 1 >= 0) {
      joystick_to_force_mocap_B.varargin_1_data[1] =
        joystick_to_force_mocap_B.varargin_2_data;
    }

    joystick_to_force_mocap_B.i = 2;
    joystick_to_force_mocap_B.varargin_1_data[joystick_to_force_mocap_B.i] = 0.0;
    if ((int8_T)joystick_to_force_mocap_B.trueCount - 1 >= 0) {
      joystick_to_force_mocap_B.CoordinateTransformationConvers[0] =
        joystick_to_force_mocap_B.varargin_1_data[0];
      joystick_to_force_mocap_B.CoordinateTransformationConvers[1] =
        joystick_to_force_mocap_B.varargin_1_data[1];
      joystick_to_force_mocap_B.CoordinateTransformationConvers[2] =
        joystick_to_force_mocap_B.varargin_1_data[joystick_to_force_mocap_B.i];
    }
  }

  joystick_to_force_mocap_B.cySq =
    joystick_to_force_mocap_B.CoordinateTransformationConvers[0];
  joystick_to_force_mocap_B.CoordinateTransformationConvers[0] =
    joystick_to_force_mocap_B.CoordinateTransformationConvers[2];
  joystick_to_force_mocap_B.CoordinateTransformationConvers[2] =
    joystick_to_force_mocap_B.cySq;

  /* End of MATLABSystem: '<S2>/Coordinate Transformation Conversion' */

  /* SignalConversion: '<S2>/Signal Conversion1' */
  joystick_to_force_mocap_B.SignalConversion1[0] =
    joystick_to_force_mocap_B.SFunctionBuilder[14];
  joystick_to_force_mocap_B.SignalConversion1[1] =
    joystick_to_force_mocap_B.SFunctionBuilder[15];
  joystick_to_force_mocap_B.SignalConversion1[2] =
    joystick_to_force_mocap_B.SFunctionBuilder[16];
  joystick_to_force_LowpassFilter(joystick_to_force_mocap_B.SignalConversion1[0],
    &joystick_to_force_mocap_B.LowpassFilter,
    &joystick_to_force_mocap_DW.LowpassFilter);
  joystick_to_force_LowpassFilter(joystick_to_force_mocap_B.SignalConversion1[1],
    &joystick_to_force_mocap_B.LowpassFilter2,
    &joystick_to_force_mocap_DW.LowpassFilter2);

  /* SignalConversion: '<S2>/Signal Conversion2' */
  joystick_to_force_mocap_B.SignalConversion2[0] =
    joystick_to_force_mocap_B.SFunctionBuilder[17];
  joystick_to_force_mocap_B.SignalConversion2[1] =
    joystick_to_force_mocap_B.SFunctionBuilder[18];
  joystick_to_force_mocap_B.SignalConversion2[2] =
    joystick_to_force_mocap_B.SFunctionBuilder[19];
  joystick_to_force_LowpassFilter(joystick_to_force_mocap_B.SignalConversion2[2],
    &joystick_to_force_mocap_B.LowpassFilter1,
    &joystick_to_force_mocap_DW.LowpassFilter1);

  /* SignalConversion generated from: '<S1>/ SFunction ' incorporates:
   *  Constant: '<Root>/Constant1'
   *  MATLAB Function: '<Root>/control'
   */
  joystick_to_force_mocap_B.cy = joystick_to_force_mocap_P.Constant1_Value[0] -
    joystick_to_force_mocap_B.SignalConversion[0];
  joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.Constant1_Value[1]
    - joystick_to_force_mocap_B.SignalConversion[1];
  joystick_to_force_mocap_B.unnamed_idx_2 =
    joystick_to_force_mocap_P.Constant1_Value[2] -
    joystick_to_force_mocap_B.CoordinateTransformationConvers[0];

  /* MATLAB Function: '<Root>/control' */
  for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 3;
       joystick_to_force_mocap_B.i++) {
    joystick_to_force_mocap_B.varargin_1_data[joystick_to_force_mocap_B.i] =
      (joystick_to_force_mocap_P.Kp[joystick_to_force_mocap_B.i + 3] *
       joystick_to_force_mocap_B.cySq +
       joystick_to_force_mocap_P.Kp[joystick_to_force_mocap_B.i] *
       joystick_to_force_mocap_B.cy) +
      joystick_to_force_mocap_P.Kp[joystick_to_force_mocap_B.i + 6] *
      joystick_to_force_mocap_B.unnamed_idx_2;
  }

  joystick_to_force_moca_mldivide(joystick_to_force_mocap_P.W,
    joystick_to_force_mocap_B.varargin_1_data, joystick_to_force_mocap_B.x0);
  joystick_to_force_mocap_B.exitflag = (rtInf);
  joystick_to_force_mocap_B.trueCount = 0;
  exitg1 = false;
  while ((!exitg1) && (joystick_to_force_mocap_B.trueCount < 4)) {
    if (joystick_to_force_mocap_P.f_min[joystick_to_force_mocap_B.trueCount] >
        joystick_to_force_mocap_P.f_max[joystick_to_force_mocap_B.trueCount]) {
      joystick_to_force_mocap_B.exitflag = -2.0;
      exitg1 = true;
    } else {
      joystick_to_force_mocap_B.trueCount++;
    }
  }

  if (!(joystick_to_force_mocap_B.exitflag == -2.0)) {
    joystick_to_force_mocap_B.solution.fstar = 0.0;
    joystick_to_force_mocap_B.solution.firstorderopt = 0.0;
    memset(&joystick_to_force_mocap_B.solution.lambda[0], 0, 12U * sizeof(real_T));
    joystick_to_force_mocap_B.solution.state = 0;
    joystick_to_force_mocap_B.solution.maxConstr = 0.0;
    joystick_to_force_mocap_B.solution.iterations = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.solution.searchDir[joystick_to_force_mocap_B.i] =
        0.0;
    }

    joystick_to_force_mocap_B.solution.xstar[0] = joystick_to_force_mocap_B.x0[0];
    joystick_to_force_mocap_B.solution.xstar[1] = joystick_to_force_mocap_B.x0[1];
    joystick_to_force_mocap_B.solution.xstar[2] = joystick_to_force_mocap_B.x0[2];
    joystick_to_force_mocap_B.solution.xstar[3] = joystick_to_force_mocap_B.x0[3];
    joystick_to_force_mocap_B.CholRegManager.ldm = 7;
    joystick_to_force_mocap_B.CholRegManager.ndims = 0;
    joystick_to_force_mocap_B.CholRegManager.info = 0;
    joystick_to_force_mocap_B.CholRegManager.ConvexCheck = true;
    joystick_to_force_mocap_B.CholRegManager.regTol_ = 0.0;
    joystick_to_force_mocap_B.CholRegManager.scaleFactor = 100.0;
    joystick_to_force_mocap_B.WorkingSet.nVar = 4;
    joystick_to_force_mocap_B.WorkingSet.nVarOrig = 4;
    joystick_to_force_mocap_B.WorkingSet.nVarMax = 5;
    joystick_to_force_mocap_B.WorkingSet.ldA = 5;
    memset(&joystick_to_force_mocap_B.WorkingSet.Aeq[0], 0, 15U * sizeof(real_T));
    joystick_to_force_mocap_B.WorkingSet.beq[0] = 0.0;
    joystick_to_force_mocap_B.WorkingSet.beq[1] = 0.0;
    joystick_to_force_mocap_B.WorkingSet.beq[2] = 0.0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.lb[joystick_to_force_mocap_B.i] = 0.0;
      joystick_to_force_mocap_B.WorkingSet.ub[joystick_to_force_mocap_B.i] = 0.0;
    }

    joystick_to_force_mocap_B.WorkingSet.mEqRemoved = 0;
    joystick_to_force_mocap_B.WorkingSet.indexEqRemoved[0] = 0;
    joystick_to_force_mocap_B.WorkingSet.indexEqRemoved[1] = 0;
    joystick_to_force_mocap_B.WorkingSet.indexEqRemoved[2] = 0;
    memset(&joystick_to_force_mocap_B.WorkingSet.ATwset[0], 0, 60U * sizeof
           (real_T));
    joystick_to_force_mocap_B.WorkingSet.nActiveConstr = 0;
    memset(&joystick_to_force_mocap_B.WorkingSet.bwset[0], 0, 12U * sizeof
           (real_T));
    memset(&joystick_to_force_mocap_B.WorkingSet.maxConstrWorkspace[0], 0, 12U *
           sizeof(real_T));
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 12;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveConstr[joystick_to_force_mocap_B.i]
        = false;
      joystick_to_force_mocap_B.WorkingSet.Wid[joystick_to_force_mocap_B.i] = 0;
      joystick_to_force_mocap_B.WorkingSet.Wlocalidx[joystick_to_force_mocap_B.i]
        = 0;
    }

    joystick_to_force_mocap_B.WorkingSet.probType = 3;
    joystick_to_force_mocap_B.WorkingSet.SLACK0 = 1.0E-5;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.nWConstr[joystick_to_force_mocap_B.i]
        = 0;
      joystick_to_force_mocap_B.WorkingSet.indexLB[joystick_to_force_mocap_B.i] =
        0;
      joystick_to_force_mocap_B.WorkingSet.indexUB[joystick_to_force_mocap_B.i] =
        0;
      joystick_to_force_mocap_B.WorkingSet.indexFixed[joystick_to_force_mocap_B.i]
        = 0;
    }

    joystick_to_force_mocap_B.trueCount = 7;
    joystick_to_force_mocap_B.csz_idx_2 = 0;
    joystick_to_force_mocap_B.mFixed = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 4;
         joystick_to_force_mocap_B.i++) {
      guard1 = false;
      if ((!rtIsInf(joystick_to_force_mocap_P.f_min[joystick_to_force_mocap_B.i]))
          && (!rtIsNaN
              (joystick_to_force_mocap_P.f_min[joystick_to_force_mocap_B.i]))) {
        if (fabs(joystick_to_force_mocap_P.f_min[joystick_to_force_mocap_B.i] -
                 joystick_to_force_mocap_P.f_max[joystick_to_force_mocap_B.i]) <
            1.0E-8) {
          joystick_to_force_mocap_B.mFixed++;
          joystick_to_force_mocap_B.WorkingSet.indexFixed[joystick_to_force_mocap_B.mFixed
            - 1] = joystick_to_force_mocap_B.i + 1;
        } else {
          joystick_to_force_mocap_B.trueCount++;
          joystick_to_force_mocap_B.WorkingSet.indexLB[joystick_to_force_mocap_B.trueCount
            - 8] = joystick_to_force_mocap_B.i + 1;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        if ((!rtIsInf
             (joystick_to_force_mocap_P.f_max[joystick_to_force_mocap_B.i])) &&
            (!rtIsNaN
             (joystick_to_force_mocap_P.f_max[joystick_to_force_mocap_B.i]))) {
          joystick_to_force_mocap_B.csz_idx_2++;
          joystick_to_force_mocap_B.WorkingSet.indexUB[joystick_to_force_mocap_B.csz_idx_2
            - 1] = joystick_to_force_mocap_B.i + 1;
        }
      }
    }

    joystick_to_force_mocap_B.i = ((joystick_to_force_mocap_B.trueCount +
      joystick_to_force_mocap_B.csz_idx_2) + joystick_to_force_mocap_B.mFixed) -
      4;
    joystick_to_force_mocap_B.WorkingSet.mConstr = joystick_to_force_mocap_B.i;
    joystick_to_force_mocap_B.WorkingSet.mConstrOrig =
      joystick_to_force_mocap_B.i;
    joystick_to_force_mocap_B.WorkingSet.mConstrMax = 12;
    joystick_to_force_mocap_B.WorkingSet.sizes[0] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.sizes[1] = 3;
    joystick_to_force_mocap_B.WorkingSet.sizes[2] = 0;
    joystick_to_force_mocap_B.WorkingSet.sizes[3] =
      joystick_to_force_mocap_B.trueCount - 7;
    joystick_to_force_mocap_B.WorkingSet.sizes[4] =
      joystick_to_force_mocap_B.csz_idx_2;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.sizesNormal[joystick_to_force_mocap_B.i]
        = joystick_to_force_mocap_B.WorkingSet.sizes[joystick_to_force_mocap_B.i];
    }

    joystick_to_force_mocap_B.WorkingSet.sizesPhaseOne[0] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.sizesPhaseOne[1] = 3;
    joystick_to_force_mocap_B.WorkingSet.sizesPhaseOne[2] = 0;
    joystick_to_force_mocap_B.WorkingSet.sizesPhaseOne[3] =
      joystick_to_force_mocap_B.trueCount - 6;
    joystick_to_force_mocap_B.WorkingSet.sizesPhaseOne[4] =
      joystick_to_force_mocap_B.csz_idx_2;
    joystick_to_force_mocap_B.WorkingSet.sizesRegularized[0] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.sizesRegularized[1] = 3;
    joystick_to_force_mocap_B.WorkingSet.sizesRegularized[2] = 0;
    joystick_to_force_mocap_B.WorkingSet.sizesRegularized[3] =
      joystick_to_force_mocap_B.trueCount - 1;
    joystick_to_force_mocap_B.WorkingSet.sizesRegularized[4] =
      joystick_to_force_mocap_B.csz_idx_2;
    joystick_to_force_mocap_B.WorkingSet.sizesRegPhaseOne[0] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.sizesRegPhaseOne[1] = 3;
    joystick_to_force_mocap_B.WorkingSet.sizesRegPhaseOne[2] = 0;
    joystick_to_force_mocap_B.WorkingSet.sizesRegPhaseOne[3] =
      joystick_to_force_mocap_B.trueCount;
    joystick_to_force_mocap_B.WorkingSet.sizesRegPhaseOne[4] =
      joystick_to_force_mocap_B.csz_idx_2;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[0] = 1;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[1] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[2] = 3;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[3] = 0;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[4] =
      joystick_to_force_mocap_B.trueCount - 7;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[5] =
      joystick_to_force_mocap_B.csz_idx_2;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 6;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i]
        =
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[joystick_to_force_mocap_B.i];
    }

    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i
        + 1] +=
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 6;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdx[joystick_to_force_mocap_B.i]
        =
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[1] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[2] = 3;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[3] = 0;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[4] =
      joystick_to_force_mocap_B.trueCount - 6;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[5] =
      joystick_to_force_mocap_B.csz_idx_2;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[joystick_to_force_mocap_B.i
        + 1] +=
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxNormal[joystick_to_force_mocap_B.i];
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i
        + 1] +=
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 6;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxPhaseOne[joystick_to_force_mocap_B.i]
        =
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[1] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[2] = 3;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[3] = 0;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[4] =
      joystick_to_force_mocap_B.trueCount - 1;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[5] =
      joystick_to_force_mocap_B.csz_idx_2;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i
        + 1] +=
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 6;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegularized[joystick_to_force_mocap_B.i]
        =
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[1] =
      joystick_to_force_mocap_B.mFixed;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[2] = 3;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[3] = 0;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[4] =
      joystick_to_force_mocap_B.trueCount;
    joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[5] =
      joystick_to_force_mocap_B.csz_idx_2;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 5;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i
        + 1] +=
        joystick_to_force_mocap_B.WorkingSet.isActiveIdxRegPhaseOne[joystick_to_force_mocap_B.i];
    }

    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 3;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.Aeq[5 * joystick_to_force_mocap_B.i] =
        joystick_to_force_mocap_P.W[joystick_to_force_mocap_B.i];
      joystick_to_force_mocap_B.WorkingSet.Aeq[5 * joystick_to_force_mocap_B.i +
        1] = joystick_to_force_mocap_P.W[joystick_to_force_mocap_B.i + 3];
      joystick_to_force_mocap_B.WorkingSet.Aeq[5 * joystick_to_force_mocap_B.i +
        2] = joystick_to_force_mocap_P.W[joystick_to_force_mocap_B.i + 6];
      joystick_to_force_mocap_B.WorkingSet.Aeq[5 * joystick_to_force_mocap_B.i +
        3] = joystick_to_force_mocap_P.W[joystick_to_force_mocap_B.i + 9];
      joystick_to_force_mocap_B.WorkingSet.beq[joystick_to_force_mocap_B.i] =
        joystick_to_force_mocap_B.varargin_1_data[joystick_to_force_mocap_B.i];
    }

    joystick_to_force_mocap_B.WorkingSet.lb[0] =
      -joystick_to_force_mocap_P.f_min[0];
    joystick_to_force_mocap_B.WorkingSet.ub[0] =
      joystick_to_force_mocap_P.f_max[0];
    joystick_to_force_mocap_B.WorkingSet.lb[1] =
      -joystick_to_force_mocap_P.f_min[1];
    joystick_to_force_mocap_B.WorkingSet.ub[1] =
      joystick_to_force_mocap_P.f_max[1];
    joystick_to_force_mocap_B.WorkingSet.lb[2] =
      -joystick_to_force_mocap_P.f_min[2];
    joystick_to_force_mocap_B.WorkingSet.ub[2] =
      joystick_to_force_mocap_P.f_max[2];
    joystick_to_force_mocap_B.WorkingSet.lb[3] =
      -joystick_to_force_mocap_P.f_min[3];
    joystick_to_force_mocap_B.WorkingSet.ub[3] =
      joystick_to_force_mocap_P.f_max[3];
    joystick_to_forc_setProblemType(&joystick_to_force_mocap_B.WorkingSet, 3);
    joystick_to_force_mocap_B.idxFillStart =
      joystick_to_force_mocap_B.WorkingSet.isActiveIdx[2];
    for (joystick_to_force_mocap_B.i = joystick_to_force_mocap_B.idxFillStart;
         joystick_to_force_mocap_B.i < 13; joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.WorkingSet.isActiveConstr[joystick_to_force_mocap_B.i
        - 1] = false;
    }

    joystick_to_force_mocap_B.WorkingSet.nWConstr[0] =
      joystick_to_force_mocap_B.WorkingSet.sizes[0];
    joystick_to_force_mocap_B.WorkingSet.nWConstr[1] = 3;
    joystick_to_force_mocap_B.WorkingSet.nWConstr[2] = 0;
    joystick_to_force_mocap_B.WorkingSet.nWConstr[3] = 0;
    joystick_to_force_mocap_B.WorkingSet.nWConstr[4] = 0;
    joystick_to_force_mocap_B.WorkingSet.nActiveConstr =
      joystick_to_force_mocap_B.WorkingSet.nWConstr[0] + 3;
    joystick_to_force_mocap_B.b = (uint8_T)
      joystick_to_force_mocap_B.WorkingSet.sizes[0];
    for (joystick_to_force_mocap_B.idxFillStart = 0;
         joystick_to_force_mocap_B.idxFillStart < joystick_to_force_mocap_B.b;
         joystick_to_force_mocap_B.idxFillStart++) {
      joystick_to_force_mocap_B.WorkingSet.Wid[joystick_to_force_mocap_B.idxFillStart]
        = 1;
      joystick_to_force_mocap_B.WorkingSet.Wlocalidx[joystick_to_force_mocap_B.idxFillStart]
        = joystick_to_force_mocap_B.idxFillStart + 1;
      joystick_to_force_mocap_B.WorkingSet.isActiveConstr[joystick_to_force_mocap_B.idxFillStart]
        = true;
      joystick_to_force_mocap_B.colOffsetATw = 5 *
        joystick_to_force_mocap_B.idxFillStart;
      joystick_to_force_mocap_B.c_a =
        joystick_to_force_mocap_B.WorkingSet.indexFixed[joystick_to_force_mocap_B.idxFillStart];
      if (joystick_to_force_mocap_B.c_a - 2 >= 0) {
        memset
          (&joystick_to_force_mocap_B.WorkingSet.ATwset[joystick_to_force_mocap_B.colOffsetATw],
           0, (uint32_T)(((joystick_to_force_mocap_B.c_a +
                           joystick_to_force_mocap_B.colOffsetATw) -
                          joystick_to_force_mocap_B.colOffsetATw) - 1) * sizeof
           (real_T));
      }

      joystick_to_force_mocap_B.WorkingSet.ATwset
        [(joystick_to_force_mocap_B.WorkingSet.indexFixed[joystick_to_force_mocap_B.idxFillStart]
          + joystick_to_force_mocap_B.colOffsetATw) - 1] = 1.0;
      joystick_to_force_mocap_B.c_a =
        joystick_to_force_mocap_B.WorkingSet.indexFixed[joystick_to_force_mocap_B.idxFillStart]
        + 1;
      joystick_to_force_mocap_B.iATw0 =
        joystick_to_force_mocap_B.WorkingSet.nVar;
      if (joystick_to_force_mocap_B.c_a <= joystick_to_force_mocap_B.iATw0) {
        memset(&joystick_to_force_mocap_B.WorkingSet.ATwset
               [(joystick_to_force_mocap_B.c_a +
                 joystick_to_force_mocap_B.colOffsetATw) + -1], 0, (uint32_T)
               ((((joystick_to_force_mocap_B.iATw0 +
                   joystick_to_force_mocap_B.colOffsetATw) -
                  joystick_to_force_mocap_B.c_a) -
                 joystick_to_force_mocap_B.colOffsetATw) + 1) * sizeof(real_T));
      }

      joystick_to_force_mocap_B.WorkingSet.bwset[joystick_to_force_mocap_B.idxFillStart]
        =
        joystick_to_force_mocap_B.WorkingSet.ub[joystick_to_force_mocap_B.WorkingSet.indexFixed
        [joystick_to_force_mocap_B.idxFillStart] - 1];
    }

    joystick_to_force_mocap_B.WorkingSet.SLACK0 = 0.0;
    joystick_to_force_mocap_B.cySq = 1.0;
    joystick_to_force_mocap_B.b = joystick_to_force_mocap_B.WorkingSet.nVar - 1;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 3;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.colOffsetATw =
        joystick_to_force_mocap_B.WorkingSet.sizes[0] +
        joystick_to_force_mocap_B.i;
      joystick_to_force_mocap_B.WorkingSet.Wid[joystick_to_force_mocap_B.colOffsetATw]
        = 2;
      joystick_to_force_mocap_B.WorkingSet.Wlocalidx[joystick_to_force_mocap_B.colOffsetATw]
        = joystick_to_force_mocap_B.i + 1;
      joystick_to_force_mocap_B.WorkingSet.isActiveConstr[joystick_to_force_mocap_B.colOffsetATw]
        = true;
      joystick_to_force_mocap_B.c_a = 5 * joystick_to_force_mocap_B.i;
      joystick_to_force_mocap_B.iATw0 = 5 *
        joystick_to_force_mocap_B.colOffsetATw;
      for (joystick_to_force_mocap_B.idxFillStart = 0;
           joystick_to_force_mocap_B.idxFillStart <= joystick_to_force_mocap_B.b;
           joystick_to_force_mocap_B.idxFillStart++) {
        joystick_to_force_mocap_B.WorkingSet.ATwset[joystick_to_force_mocap_B.iATw0
          + joystick_to_force_mocap_B.idxFillStart] =
          joystick_to_force_mocap_B.WorkingSet.Aeq[joystick_to_force_mocap_B.c_a
          + joystick_to_force_mocap_B.idxFillStart];
      }

      joystick_to_force_mocap_B.WorkingSet.bwset[joystick_to_force_mocap_B.colOffsetATw]
        = joystick_to_force_mocap_B.WorkingSet.beq[joystick_to_force_mocap_B.i];
      joystick_to_force_mocap_B.cy = ((fabs
        (joystick_to_force_mocap_B.WorkingSet.Aeq[joystick_to_force_mocap_B.c_a
         + 1]) + fabs
        (joystick_to_force_mocap_B.WorkingSet.Aeq[joystick_to_force_mocap_B.c_a]))
        + fabs
        (joystick_to_force_mocap_B.WorkingSet.Aeq[joystick_to_force_mocap_B.c_a
         + 2])) + fabs
        (joystick_to_force_mocap_B.WorkingSet.Aeq[joystick_to_force_mocap_B.c_a
         + 3]);
      if ((!(joystick_to_force_mocap_B.cySq >= joystick_to_force_mocap_B.cy)) &&
          (!rtIsNaN(joystick_to_force_mocap_B.cy))) {
        joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_B.cy;
      }
    }

    joystick_to_force_mocap_B.idxFillStart = 0;
    for (joystick_to_force_mocap_B.i = 0; joystick_to_force_mocap_B.i < 4;
         joystick_to_force_mocap_B.i++) {
      joystick_to_force_mocap_B.b = joystick_to_force_mocap_B.i << 2;
      joystick_to_force_mocap_B.b = ((H[joystick_to_force_mocap_B.b + 1] +
        H[joystick_to_force_mocap_B.b]) + H[joystick_to_force_mocap_B.b + 2]) +
        H[joystick_to_force_mocap_B.b + 3];
      if (joystick_to_force_mocap_B.idxFillStart < joystick_to_force_mocap_B.b)
      {
        joystick_to_force_mocap_B.idxFillStart = joystick_to_force_mocap_B.b;
      }
    }

    if (joystick_to_force_mocap_B.cySq >= joystick_to_force_mocap_B.idxFillStart)
    {
      joystick_to_force_mocap_B.cy = joystick_to_force_mocap_B.cySq;
    } else {
      joystick_to_force_mocap_B.cy = joystick_to_force_mocap_B.idxFillStart;
    }

    joystick_to_force_mocap_driver(&joystick_to_force_mocap_B.solution,
      &joystick_to_force_mocap_B.memspace, &joystick_to_force_mocap_B.WorkingSet,
      &joystick_to_force_mocap_B.CholRegManager, 10 *
      ((joystick_to_force_mocap_B.mFixed + joystick_to_force_mocap_B.trueCount)
       + joystick_to_force_mocap_B.csz_idx_2), joystick_to_force_mocap_B.cySq,
      joystick_to_force_mocap_B.cy, &joystick_to_force_mocap_B.QRManager,
      &joystick_to_force_mocap_B.QPObjective);
    joystick_to_force_mocap_B.x0[0] = joystick_to_force_mocap_B.solution.xstar[0];
    joystick_to_force_mocap_B.x0[1] = joystick_to_force_mocap_B.solution.xstar[1];
    joystick_to_force_mocap_B.x0[2] = joystick_to_force_mocap_B.solution.xstar[2];
    joystick_to_force_mocap_B.x0[3] = joystick_to_force_mocap_B.solution.xstar[3];
    if (joystick_to_force_mocap_B.solution.state <= 0) {
      joystick_to_force_m_computeFval(&joystick_to_force_mocap_B.QPObjective,
        joystick_to_force_mocap_B.memspace.workspace_double,
        joystick_to_force_mocap_B.solution.xstar);
    }

    switch (joystick_to_force_mocap_B.solution.state) {
     case 2:
      joystick_to_force_mocap_B.solution.state = -3;
      break;

     case -3:
      joystick_to_force_mocap_B.solution.state = -2;
      break;

     case 4:
      joystick_to_force_mocap_B.solution.state = -2;
      break;
    }

    joystick_to_force_mocap_B.exitflag =
      joystick_to_force_mocap_B.solution.state;
    if ((joystick_to_force_mocap_B.solution.state != -2) &&
        (joystick_to_force_mocap_B.solution.state <= 0)) {
      joystick_to_force_mocap_B.solution.maxConstr =
        joystick_maxConstraintViolation(&joystick_to_force_mocap_B.WorkingSet,
        joystick_to_force_mocap_B.solution.xstar);
      if (joystick_to_force_mocap_B.solution.maxConstr <= 1.0E-8 *
          joystick_to_force_mocap_B.cySq) {
        switch (joystick_to_force_mocap_B.QPObjective.objtype) {
         case 5:
          break;

         case 3:
          joystick_to_force_linearForm__c
            (joystick_to_force_mocap_B.QPObjective.hasLinear,
             joystick_to_force_mocap_B.QPObjective.nvar,
             joystick_to_force_mocap_B.QPObjective.grad,
             joystick_to_force_mocap_B.solution.xstar);
          break;

         default:
          joystick_to_force_linearForm__c
            (joystick_to_force_mocap_B.QPObjective.hasLinear,
             joystick_to_force_mocap_B.QPObjective.nvar,
             joystick_to_force_mocap_B.QPObjective.grad,
             joystick_to_force_mocap_B.solution.xstar);
          break;
        }
      }
    }
  }

  if ((joystick_to_force_mocap_B.x0[0] >= joystick_to_force_mocap_P.f_min[0]) ||
      rtIsNaN(joystick_to_force_mocap_P.f_min[0])) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_B.x0[0];
  } else {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_min[0];
  }

  if ((!(joystick_to_force_mocap_B.cySq <= joystick_to_force_mocap_P.f_max[0])) &&
      (!rtIsNaN(joystick_to_force_mocap_P.f_max[0]))) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_max[0];
  }

  joystick_to_force_mocap_B.w_rpm[0] = joystick_to_force_mocap_B.cySq /
    joystick_to_force_mocap_P.c_t[0];
  joystick_to_force_mocap_B.w_rpm[0] = sqrt(joystick_to_force_mocap_B.w_rpm[0]);
  joystick_to_force_mocap_B.w_rpm[0] = joystick_to_force_mocap_B.w_rpm[0] * 30.0
    / 3.1415926535897931;
  joystick_to_force_mocap_B.f[0] = joystick_to_force_mocap_B.cySq;
  if ((joystick_to_force_mocap_B.x0[1] >= joystick_to_force_mocap_P.f_min[1]) ||
      rtIsNaN(joystick_to_force_mocap_P.f_min[1])) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_B.x0[1];
  } else {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_min[1];
  }

  if ((!(joystick_to_force_mocap_B.cySq <= joystick_to_force_mocap_P.f_max[1])) &&
      (!rtIsNaN(joystick_to_force_mocap_P.f_max[1]))) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_max[1];
  }

  joystick_to_force_mocap_B.w_rpm[1] = joystick_to_force_mocap_B.cySq /
    joystick_to_force_mocap_P.c_t[1];
  joystick_to_force_mocap_B.w_rpm[1] = sqrt(joystick_to_force_mocap_B.w_rpm[1]);
  joystick_to_force_mocap_B.w_rpm[1] = joystick_to_force_mocap_B.w_rpm[1] * 30.0
    / 3.1415926535897931;
  joystick_to_force_mocap_B.f[1] = joystick_to_force_mocap_B.cySq;
  if ((joystick_to_force_mocap_B.x0[2] >= joystick_to_force_mocap_P.f_min[2]) ||
      rtIsNaN(joystick_to_force_mocap_P.f_min[2])) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_B.x0[2];
  } else {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_min[2];
  }

  if ((!(joystick_to_force_mocap_B.cySq <= joystick_to_force_mocap_P.f_max[2])) &&
      (!rtIsNaN(joystick_to_force_mocap_P.f_max[2]))) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_max[2];
  }

  joystick_to_force_mocap_B.w_rpm[2] = joystick_to_force_mocap_B.cySq /
    joystick_to_force_mocap_P.c_t[2];
  joystick_to_force_mocap_B.w_rpm[2] = sqrt(joystick_to_force_mocap_B.w_rpm[2]);
  joystick_to_force_mocap_B.w_rpm[2] = joystick_to_force_mocap_B.w_rpm[2] * 30.0
    / 3.1415926535897931;
  joystick_to_force_mocap_B.f[2] = joystick_to_force_mocap_B.cySq;
  if ((joystick_to_force_mocap_B.x0[3] >= joystick_to_force_mocap_P.f_min[3]) ||
      rtIsNaN(joystick_to_force_mocap_P.f_min[3])) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_B.x0[3];
  } else {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_min[3];
  }

  if ((!(joystick_to_force_mocap_B.cySq <= joystick_to_force_mocap_P.f_max[3])) &&
      (!rtIsNaN(joystick_to_force_mocap_P.f_max[3]))) {
    joystick_to_force_mocap_B.cySq = joystick_to_force_mocap_P.f_max[3];
  }

  joystick_to_force_mocap_B.w_rpm[3] = joystick_to_force_mocap_B.cySq /
    joystick_to_force_mocap_P.c_t[3];
  joystick_to_force_mocap_B.w_rpm[3] = sqrt(joystick_to_force_mocap_B.w_rpm[3]);
  joystick_to_force_mocap_B.w_rpm[3] = joystick_to_force_mocap_B.w_rpm[3] * 30.0
    / 3.1415926535897931;
  joystick_to_force_mocap_B.f[3] = joystick_to_force_mocap_B.cySq;

  /* Constant: '<Root>/Constant' */
  joystick_to_force_mocap_B.Constant = joystick_to_force_mocap_P.Constant_Value;

  /* SignalConversion generated from: '<Root>/Mux' */
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[0] =
    joystick_to_force_mocap_B.w_rpm[2];
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[1] =
    joystick_to_force_mocap_B.w_rpm[0];
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[2] =
    joystick_to_force_mocap_B.w_rpm[3];
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[3] =
    joystick_to_force_mocap_B.w_rpm[1];
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[4] =
    joystick_to_force_mocap_B.Constant;
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[5] =
    joystick_to_force_mocap_B.Constant;
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[6] =
    joystick_to_force_mocap_B.Constant;
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLogg[7] =
    joystick_to_force_mocap_B.Constant;

  /* SignalConversion generated from: '<Root>/mocap' */
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLo_b[0] =
    joystick_to_force_mocap_B.LowpassFilter.LowpassFilter;
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLo_b[1] =
    joystick_to_force_mocap_B.LowpassFilter2.LowpassFilter;
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLo_b[2] =
    joystick_to_force_mocap_B.LowpassFilter1.LowpassFilter;

  /* SignalConversion generated from: '<Root>/mocap' */
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLo_i[0] =
    joystick_to_force_mocap_B.SignalConversion[0];
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLo_i[1] =
    joystick_to_force_mocap_B.SignalConversion[1];
  joystick_to_force_mocap_B.TmpSignalConversionAtTAQSigLo_i[2] =
    joystick_to_force_mocap_B.CoordinateTransformationConvers[0];

  /* Update for S-Function (rpi_sfun_iosocket): '<S3>/S-Function Builder' incorporates:
   *  Constant: '<S2>/Constant5'
   */

  /* S-Function "rpi_sfun_iosocket_wrapper" Block: <S3>/S-Function Builder */
  rpi_sfun_iosocket_Update_wrapper(&joystick_to_force_mocap_P.Constant5_Value[0],
    &joystick_to_force_mocap_B.SFunctionBuilder[0],
    &joystick_to_force_mocap_DW.SFunctionBuilder_DSTATE,
    &joystick_to_force_mocap_P.SFunctionBuilder_P1, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P2, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P3, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P4, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P5, 1,
    &joystick_to_force_mocap_P.SFunctionBuilder_P6, 1);

  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  joystick_to_force_mocap_M->Timing.taskTime0 =
    ((time_T)(++joystick_to_force_mocap_M->Timing.clockTick0)) *
    joystick_to_force_mocap_M->Timing.stepSize0;
}

/* Model initialize function */
void joystick_to_force_mocap_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(joystick_to_force_mocap_M, -1);
  joystick_to_force_mocap_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  joystick_to_force_mocap_M->Sizes.checksums[0] = (678122105U);
  joystick_to_force_mocap_M->Sizes.checksums[1] = (694708689U);
  joystick_to_force_mocap_M->Sizes.checksums[2] = (496329210U);
  joystick_to_force_mocap_M->Sizes.checksums[3] = (280510155U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    joystick_to_force_mocap_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(joystick_to_force_mocap_M->extModeInfo,
      &joystick_to_force_mocap_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(joystick_to_force_mocap_M->extModeInfo,
                        joystick_to_force_mocap_M->Sizes.checksums);
    rteiSetTPtr(joystick_to_force_mocap_M->extModeInfo, rtmGetTPtr
                (joystick_to_force_mocap_M));
  }

  /* Start for S-Function (rpi_sfun_iosocket): '<S3>/S-Function Builder' incorporates:
   *  Constant: '<S2>/Constant5'
   */

  /* S-Function Block: <S3>/S-Function Builder */
  rpi_sfun_iosocket_Start_wrapper
    (&joystick_to_force_mocap_DW.SFunctionBuilder_DSTATE,
     &joystick_to_force_mocap_P.SFunctionBuilder_P1, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P2, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P3, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P4, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P5, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P6, 1);

  /* InitializeConditions for S-Function (rpi_sfun_iosocket): '<S3>/S-Function Builder' incorporates:
   *  Constant: '<S2>/Constant5'
   */

  /* S-Function Block: <S3>/S-Function Builder */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        joystick_to_force_mocap_DW.SFunctionBuilder_DSTATE = initVector[0];
      }
    }
  }

  joystick_to__LowpassFilter_Init(&joystick_to_force_mocap_DW.LowpassFilter);
  joystick_to__LowpassFilter_Init(&joystick_to_force_mocap_DW.LowpassFilter2);
  joystick_to__LowpassFilter_Init(&joystick_to_force_mocap_DW.LowpassFilter1);
}

/* Model terminate function */
void joystick_to_force_mocap_terminate(void)
{
  /* Terminate for S-Function (rpi_sfun_iosocket): '<S3>/S-Function Builder' incorporates:
   *  Constant: '<S2>/Constant5'
   */

  /* S-Function Block: <S3>/S-Function Builder */
  rpi_sfun_iosocket_Terminate_wrapper
    (&joystick_to_force_mocap_DW.SFunctionBuilder_DSTATE,
     &joystick_to_force_mocap_P.SFunctionBuilder_P1, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P2, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P3, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P4, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P5, 1,
     &joystick_to_force_mocap_P.SFunctionBuilder_P6, 1);
  joystick_to__LowpassFilter_Term(&joystick_to_force_mocap_DW.LowpassFilter);
  joystick_to__LowpassFilter_Term(&joystick_to_force_mocap_DW.LowpassFilter2);
  joystick_to__LowpassFilter_Term(&joystick_to_force_mocap_DW.LowpassFilter1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
