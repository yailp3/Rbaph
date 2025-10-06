/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: to_point_minE.c
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

#include "to_point_minE.h"
#include "rtwtypes.h"
#include "to_point_minE_types.h"
#include <string.h>
#include <math.h>
#include "to_point_minE_private.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (default storage) */
B_to_point_minE_T to_point_minE_B;

/* Block states (default storage) */
DW_to_point_minE_T to_point_minE_DW;

/* Real-time model */
static RT_MODEL_to_point_minE_T to_point_minE_M_;
RT_MODEL_to_point_minE_T *const to_point_minE_M = &to_point_minE_M_;

/* Forward declaration for local functions */
static void to_point_minE_expand_atan2(const real_T a_data[], const int32_T
  a_size[3], const real_T b_data[], const int32_T b_size[3], real_T c_data[],
  int32_T c_size[3]);
static void to_point_minE_wrapToPi(real_T *lambda);
static real_T to_point_minE_xnrm2(int32_T n, const real_T x[12], int32_T ix0);
static real_T to_point_minE_rt_hypotd_snf(real_T u0, real_T u1);
static void to_point_minE_mldivide(const real_T A[12], const real_T B[3], real_T
  Y[4]);
static void to_poin_modifyOverheadPhaseOne_(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj);
static void to_point_minE_setProblemType(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
  int32_T PROBLEM_TYPE);
static real_T to_point_minE_xnrm2_c(int32_T n, const real_T x[45], int32_T ix0);
static real_T to_point_minE_xzlarfg(int32_T n, real_T *alpha1, real_T x[45],
  int32_T ix0);
static void to_point_minE_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  real_T C[45], int32_T ic0, real_T work[9]);
static void to_point_minE_qrf(real_T A[45], int32_T m, int32_T n, int32_T nfxd,
  real_T tau[5]);
static void to_point_minE_factorQRE(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj,
  int32_T mrows, int32_T ncols);
static void to_point_minE_computeQ_(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj,
  int32_T nrows);
static int32_T to_point_ComputeNumDependentEq_(s78GCJvmtD1Rws5pzEtzVXF_to_po_T
  *qrmanager, const real_T beqf[9], int32_T mConstr, int32_T nVar);
static void to_point_minE_countsort(int32_T x[9], int32_T xLen, int32_T
  workspace[9], int32_T xMin, int32_T xMax);
static void to_point_minE_removeConstr(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
  int32_T idx_global);
static void to_point_minE_removeEqConstr(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
  int32_T idx_global);
static void to_point_m_RemoveDependentIneq_(sTTULnc01OVJqZqpgkzM1HG_to_po_T
  *workingset, s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager,
  sJ3M3ABZDNagg0am8RHBkvE_to_po_T *memspace, real_T tolfactor);
static void to_point_minE_factorQR(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj, const
  real_T A[45], int32_T mrows, int32_T ncols);
static real_T to_point_maxConstraintViolation(const
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj, const real_T x[45], int32_T ix0);
static boolean_T to_poin_feasibleX0ForWorkingSet(real_T workspace[45], real_T
  xCurrent[5], const sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset,
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager);
static real_T to_poi_maxConstraintViolation_l(const
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj, const real_T x[5]);
static void to_point_min_PresolveWorkingSet(sRQ09YwUNBScnorFf9oRpHD_to_po_T
  *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T *memspace,
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset, s78GCJvmtD1Rws5pzEtzVXF_to_po_T
  *qrmanager);
static void to_point_minE_linearForm_(int32_T obj_nvar, real_T workspace[45],
  const real_T H[16], const real_T f[4], const real_T x[5]);
static real_T to_point_minE_computeFval(const szdozZxcClCeUpd1TsA9nJF_to_po_T
  *obj, real_T workspace[45], const real_T H[16], const real_T f[4], const
  real_T x[5]);
static void to_point_minE_xgemv(int32_T m, int32_T n, const real_T A[16],
  int32_T lda, const real_T x[5], real_T y[4]);
static void to_point_mi_computeGrad_StoreHx(szdozZxcClCeUpd1TsA9nJF_to_po_T *obj,
  const real_T H[16], const real_T f[4], const real_T x[5]);
static real_T to_point_mi_computeFval_ReuseHx(const
  szdozZxcClCeUpd1TsA9nJF_to_po_T *obj, real_T workspace[45], const real_T f[4],
  const real_T x[5]);
static void to_point_minE_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void to_point_minE_deleteColMoveEnd(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj,
  int32_T idx);
static void to_point_minE_fullColLDL2_(sY034dY3cx1IgSIMa0jtlQE_to_po_T *obj,
  int32_T NColsRemain, real_T REG_PRIMAL);
static void to_point_minE_xgemv_n(int32_T m, int32_T n, const real_T A[25],
  int32_T ia0, const real_T x[45], real_T y[5]);
static void to_point_minE_compute_deltax(const real_T H[16],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T
  *memspace, const s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager,
  sY034dY3cx1IgSIMa0jtlQE_to_po_T *cholmanager, const
  szdozZxcClCeUpd1TsA9nJF_to_po_T *objective);
static real_T to_point_minE_xnrm2_cn(int32_T n, const real_T x[5]);
static void to_point_minE_ratiotest(const real_T solution_xstar[5], const real_T
  solution_searchDir[5], int32_T workingset_nVar, const real_T workingset_lb[5],
  const real_T workingset_ub[5], const int32_T workingset_indexLB[5], const
  int32_T workingset_indexUB[5], const int32_T workingset_sizes[5], const
  int32_T workingset_isActiveIdx[6], const boolean_T workingset_isActiveConstr[9],
  const int32_T workingset_nWConstr[5], real_T *toldelta, real_T *alpha,
  boolean_T *newBlocking, int32_T *constrType, int32_T *constrIdx);
static void to_point_minE_feasibleratiotest(const real_T solution_xstar[5],
  const real_T solution_searchDir[5], int32_T workingset_nVar, const real_T
  workingset_lb[5], const real_T workingset_ub[5], const int32_T
  workingset_indexLB[5], const int32_T workingset_indexUB[5], const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const boolean_T
  workingset_isActiveConstr[9], const int32_T workingset_nWConstr[5], boolean_T
  isPhaseOne, real_T *alpha, boolean_T *newBlocking, int32_T *constrType,
  int32_T *constrIdx);
static void to_p_addBoundToActiveSetMatrix_(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
  int32_T TYPE, int32_T idx_local);
static void to_point_minE_compute_lambda(real_T workspace[45],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, const
  szdozZxcClCeUpd1TsA9nJF_to_po_T *objective, const
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager);
static void to_point_minE_iterate(const real_T H[16], const real_T f[4],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T
  *memspace, sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset,
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager, sY034dY3cx1IgSIMa0jtlQE_to_po_T
  *cholmanager, szdozZxcClCeUpd1TsA9nJF_to_po_T *objective, real_T
  options_ObjectiveLimit, real_T options_StepTolerance, int32_T
  runTimeOptions_MaxIterations, real_T runTimeOptions_ProbRelTolFactor,
  boolean_T runTimeOptions_RemainFeasible);
static void to_point_m_PresolveWorkingSet_h(sRQ09YwUNBScnorFf9oRpHD_to_po_T
  *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T *memspace,
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset, s78GCJvmtD1Rws5pzEtzVXF_to_po_T
  *qrmanager);
static void to_point_m_computeFirstOrderOpt(sRQ09YwUNBScnorFf9oRpHD_to_po_T
  *solution, const szdozZxcClCeUpd1TsA9nJF_to_po_T *objective, int32_T
  workingset_nVar, const real_T workingset_ATwset[45], int32_T
  workingset_nActiveConstr, real_T workspace[45]);
static void to_point_minE_driver(const real_T H[16], const real_T f[4],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T
  *memspace, sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset,
  sY034dY3cx1IgSIMa0jtlQE_to_po_T *cholmanager, int32_T
  runTimeOptions_MaxIterations, real_T runTimeOptions_ProbRelTolFactor,
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager, szdozZxcClCeUpd1TsA9nJF_to_po_T
  *objective);
int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
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

static void to_point_minE_expand_atan2(const real_T a_data[], const int32_T
  a_size[3], const real_T b_data[], const int32_T b_size[3], real_T c_data[],
  int32_T c_size[3])
{
  int32_T c_data_tmp;
  c_size[0] = 1;
  c_size[1] = 1;

  /* Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion' */
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

  /* End of Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion' */
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_wrapToPi(real_T *lambda)
{
  real_T q;
  real_T varargout_1;
  int32_T i;
  int32_T trueCount;
  boolean_T rEQ0;
  boolean_T tmp;
  boolean_T tmp_data;
  trueCount = 0;
  tmp = ((*lambda < -3.1415926535897931) || (*lambda > 3.1415926535897931));
  if (tmp) {
    for (i = 0; i < 1; i++) {
      trueCount++;
    }
  }

  if (trueCount - 1 >= 0) {
    if (rtIsNaN(*lambda + 3.1415926535897931)) {
      varargout_1 = (rtNaN);
    } else if (rtIsInf(*lambda + 3.1415926535897931)) {
      varargout_1 = (rtNaN);
    } else if (*lambda + 3.1415926535897931 == 0.0) {
      varargout_1 = 0.0;
    } else {
      varargout_1 = fmod(*lambda + 3.1415926535897931, 6.2831853071795862);
      rEQ0 = (varargout_1 == 0.0);
      if (!rEQ0) {
        q = fabs((*lambda + 3.1415926535897931) / 6.2831853071795862);
        rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        varargout_1 = 0.0;
      } else if (*lambda + 3.1415926535897931 < 0.0) {
        varargout_1 += 6.2831853071795862;
      }
    }
  }

  if (trueCount - 1 >= 0) {
    tmp_data = ((varargout_1 == 0.0) && (*lambda + 3.1415926535897931 > 0.0));
  }

  if (tmp_data && (trueCount - 1 >= 0)) {
    varargout_1 = 6.2831853071795862;
  }

  if (tmp) {
    *lambda = varargout_1 - 3.1415926535897931;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_minE_xnrm2(int32_T n, const real_T x[12], int32_T ix0)
{
  real_T absxk;
  real_T t;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      to_point_minE_B.scale_j = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x[k - 1]);
        if (absxk > to_point_minE_B.scale_j) {
          t = to_point_minE_B.scale_j / absxk;
          y = y * t * t + 1.0;
          to_point_minE_B.scale_j = absxk;
        } else {
          t = absxk / to_point_minE_B.scale_j;
          y += t * t;
        }
      }

      y = to_point_minE_B.scale_j * sqrt(y);
    }
  }

  return y;
}

static real_T to_point_minE_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  to_point_minE_B.a_l = fabs(u0);
  to_point_minE_B.b = fabs(u1);
  if (to_point_minE_B.a_l < to_point_minE_B.b) {
    to_point_minE_B.a_l /= to_point_minE_B.b;
    y = sqrt(to_point_minE_B.a_l * to_point_minE_B.a_l + 1.0) *
      to_point_minE_B.b;
  } else if (to_point_minE_B.a_l > to_point_minE_B.b) {
    to_point_minE_B.b /= to_point_minE_B.a_l;
    y = sqrt(to_point_minE_B.b * to_point_minE_B.b + 1.0) * to_point_minE_B.a_l;
  } else if (rtIsNaN(to_point_minE_B.b)) {
    y = (rtNaN);
  } else {
    y = to_point_minE_B.a_l * 1.4142135623730951;
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_mldivide(const real_T A[12], const real_T B[3], real_T
  Y[4])
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
  int8_T jpvt[4];
  boolean_T exitg2;
  memcpy(&to_point_minE_B.b_A[0], &A[0], 12U * sizeof(real_T));
  to_point_minE_B.b_B[0] = B[0];
  to_point_minE_B.b_B[1] = B[1];
  to_point_minE_B.b_B[2] = B[2];
  jpvt[0] = 1;
  jpvt[1] = 2;
  jpvt[2] = 3;
  jpvt[3] = 4;
  to_point_minE_B.tau[0] = 0.0;
  to_point_minE_B.tau[1] = 0.0;
  to_point_minE_B.tau[2] = 0.0;
  for (c_j = 0; c_j < 4; c_j++) {
    to_point_minE_B.work_cx[c_j] = 0.0;
    ii = c_j * 3 + 1;
    to_point_minE_B.smax = 0.0;
    to_point_minE_B.scale_n = 3.3121686421112381E-170;
    for (pvt = ii; pvt <= ii + 2; pvt++) {
      to_point_minE_B.absxk_p = fabs(A[pvt - 1]);
      if (to_point_minE_B.absxk_p > to_point_minE_B.scale_n) {
        to_point_minE_B.t_l = to_point_minE_B.scale_n / to_point_minE_B.absxk_p;
        to_point_minE_B.smax = to_point_minE_B.smax * to_point_minE_B.t_l *
          to_point_minE_B.t_l + 1.0;
        to_point_minE_B.scale_n = to_point_minE_B.absxk_p;
      } else {
        to_point_minE_B.t_l = to_point_minE_B.absxk_p / to_point_minE_B.scale_n;
        to_point_minE_B.smax += to_point_minE_B.t_l * to_point_minE_B.t_l;
      }
    }

    to_point_minE_B.smax = to_point_minE_B.scale_n * sqrt(to_point_minE_B.smax);
    to_point_minE_B.vn1_b[c_j] = to_point_minE_B.smax;
    to_point_minE_B.vn2_p[c_j] = to_point_minE_B.smax;
  }

  for (c_j = 0; c_j < 3; c_j++) {
    ii = c_j * 3 + c_j;
    pvt = 4 - c_j;
    b_ix = 0;
    to_point_minE_B.smax = fabs(to_point_minE_B.vn1_b[c_j]);
    for (iy = 2; iy <= pvt; iy++) {
      to_point_minE_B.scale_n = fabs(to_point_minE_B.vn1_b[(c_j + iy) - 1]);
      if (to_point_minE_B.scale_n > to_point_minE_B.smax) {
        b_ix = iy - 1;
        to_point_minE_B.smax = to_point_minE_B.scale_n;
      }
    }

    pvt = c_j + b_ix;
    if (pvt != c_j) {
      b_ix = pvt * 3;
      iy = c_j * 3;
      to_point_minE_B.smax = to_point_minE_B.b_A[b_ix];
      to_point_minE_B.b_A[b_ix] = to_point_minE_B.b_A[iy];
      to_point_minE_B.b_A[iy] = to_point_minE_B.smax;
      to_point_minE_B.smax = to_point_minE_B.b_A[b_ix + 1];
      to_point_minE_B.b_A[b_ix + 1] = to_point_minE_B.b_A[iy + 1];
      to_point_minE_B.b_A[iy + 1] = to_point_minE_B.smax;
      to_point_minE_B.smax = to_point_minE_B.b_A[b_ix + 2];
      to_point_minE_B.b_A[b_ix + 2] = to_point_minE_B.b_A[iy + 2];
      to_point_minE_B.b_A[iy + 2] = to_point_minE_B.smax;
      b_ix = jpvt[pvt];
      jpvt[pvt] = jpvt[c_j];
      jpvt[c_j] = (int8_T)b_ix;
      to_point_minE_B.vn1_b[pvt] = to_point_minE_B.vn1_b[c_j];
      to_point_minE_B.vn2_p[pvt] = to_point_minE_B.vn2_p[c_j];
    }

    if (c_j + 1 < 3) {
      to_point_minE_B.scale_n = to_point_minE_B.b_A[ii];
      pvt = ii + 2;
      to_point_minE_B.tau[c_j] = 0.0;
      to_point_minE_B.smax = to_point_minE_xnrm2(2 - c_j, to_point_minE_B.b_A,
        ii + 2);
      if (to_point_minE_B.smax != 0.0) {
        to_point_minE_B.absxk_p = to_point_minE_B.b_A[ii];
        to_point_minE_B.smax = to_point_minE_rt_hypotd_snf
          (to_point_minE_B.absxk_p, to_point_minE_B.smax);
        if (to_point_minE_B.absxk_p >= 0.0) {
          to_point_minE_B.smax = -to_point_minE_B.smax;
        }

        if (fabs(to_point_minE_B.smax) < 1.0020841800044864E-292) {
          b_ix = 0;
          iy = (ii - c_j) + 3;
          do {
            b_ix++;
            for (h_k = pvt; h_k <= iy; h_k++) {
              to_point_minE_B.b_A[h_k - 1] *= 9.9792015476736E+291;
            }

            to_point_minE_B.smax *= 9.9792015476736E+291;
            to_point_minE_B.scale_n *= 9.9792015476736E+291;
          } while ((fabs(to_point_minE_B.smax) < 1.0020841800044864E-292) &&
                   (b_ix < 20));

          to_point_minE_B.smax = to_point_minE_rt_hypotd_snf
            (to_point_minE_B.scale_n, to_point_minE_xnrm2(2 - c_j,
              to_point_minE_B.b_A, ii + 2));
          if (to_point_minE_B.scale_n >= 0.0) {
            to_point_minE_B.smax = -to_point_minE_B.smax;
          }

          to_point_minE_B.tau[c_j] = (to_point_minE_B.smax -
            to_point_minE_B.scale_n) / to_point_minE_B.smax;
          to_point_minE_B.scale_n = 1.0 / (to_point_minE_B.scale_n -
            to_point_minE_B.smax);
          for (h_k = pvt; h_k <= iy; h_k++) {
            to_point_minE_B.b_A[h_k - 1] *= to_point_minE_B.scale_n;
          }

          for (pvt = 0; pvt < b_ix; pvt++) {
            to_point_minE_B.smax *= 1.0020841800044864E-292;
          }

          to_point_minE_B.scale_n = to_point_minE_B.smax;
        } else {
          to_point_minE_B.tau[c_j] = (to_point_minE_B.smax -
            to_point_minE_B.absxk_p) / to_point_minE_B.smax;
          to_point_minE_B.scale_n = 1.0 / (to_point_minE_B.absxk_p -
            to_point_minE_B.smax);
          b_ix = (ii - c_j) + 3;
          for (iy = pvt; iy <= b_ix; iy++) {
            to_point_minE_B.b_A[iy - 1] *= to_point_minE_B.scale_n;
          }

          to_point_minE_B.scale_n = to_point_minE_B.smax;
        }
      }

      to_point_minE_B.b_A[ii] = to_point_minE_B.scale_n;
    } else {
      to_point_minE_B.tau[2] = 0.0;
    }

    to_point_minE_B.smax = to_point_minE_B.b_A[ii];
    to_point_minE_B.b_A[ii] = 1.0;
    if (to_point_minE_B.tau[c_j] != 0.0) {
      pvt = 3 - c_j;
      b_ix = (ii - c_j) + 2;
      while ((pvt > 0) && (to_point_minE_B.b_A[b_ix] == 0.0)) {
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
            if (to_point_minE_B.b_A[h_k] != 0.0) {
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
        memset(&to_point_minE_B.work_cx[0], 0, (uint32_T)(b_ix + 1) * sizeof
               (real_T));
        iy = (3 * b_ix + ii) + 4;
        for (h_k = ii + 4; h_k <= iy; h_k += 3) {
          to_point_minE_B.scale_n = 0.0;
          g = (h_k + pvt) - 1;
          for (ia = h_k; ia <= g; ia++) {
            to_point_minE_B.scale_n += to_point_minE_B.b_A[(ii + ia) - h_k] *
              to_point_minE_B.b_A[ia - 1];
          }

          g = div_nde_s32_floor((h_k - ii) - 4, 3);
          to_point_minE_B.work_cx[g] += to_point_minE_B.scale_n;
        }
      }

      if (!(-to_point_minE_B.tau[c_j] == 0.0)) {
        iy = ii + 4;
        for (h_k = 0; h_k <= b_ix; h_k++) {
          to_point_minE_B.scale_n = to_point_minE_B.work_cx[h_k];
          if (to_point_minE_B.scale_n != 0.0) {
            to_point_minE_B.scale_n *= -to_point_minE_B.tau[c_j];
            g = pvt + iy;
            for (ia = iy; ia < g; ia++) {
              to_point_minE_B.b_A[ia - 1] += to_point_minE_B.b_A[(ii + ia) - iy]
                * to_point_minE_B.scale_n;
            }
          }

          iy += 3;
        }
      }
    }

    to_point_minE_B.b_A[ii] = to_point_minE_B.smax;
    for (ii = c_j + 2; ii < 5; ii++) {
      pvt = (ii - 1) * 3 + c_j;
      to_point_minE_B.smax = to_point_minE_B.vn1_b[ii - 1];
      if (to_point_minE_B.smax != 0.0) {
        to_point_minE_B.scale_n = fabs(to_point_minE_B.b_A[pvt]) /
          to_point_minE_B.smax;
        to_point_minE_B.scale_n = 1.0 - to_point_minE_B.scale_n *
          to_point_minE_B.scale_n;
        if (to_point_minE_B.scale_n < 0.0) {
          to_point_minE_B.scale_n = 0.0;
        }

        to_point_minE_B.absxk_p = to_point_minE_B.smax /
          to_point_minE_B.vn2_p[ii - 1];
        to_point_minE_B.absxk_p = to_point_minE_B.absxk_p *
          to_point_minE_B.absxk_p * to_point_minE_B.scale_n;
        if (to_point_minE_B.absxk_p <= 1.4901161193847656E-8) {
          if (c_j + 1 < 3) {
            to_point_minE_B.smax = to_point_minE_xnrm2(2 - c_j,
              to_point_minE_B.b_A, pvt + 2);
            to_point_minE_B.vn1_b[ii - 1] = to_point_minE_B.smax;
            to_point_minE_B.vn2_p[ii - 1] = to_point_minE_B.smax;
          } else {
            to_point_minE_B.vn1_b[ii - 1] = 0.0;
            to_point_minE_B.vn2_p[ii - 1] = 0.0;
          }
        } else {
          to_point_minE_B.vn1_b[ii - 1] = to_point_minE_B.smax * sqrt
            (to_point_minE_B.scale_n);
        }
      }
    }
  }

  c_j = 0;
  to_point_minE_B.smax = 8.8817841970012523E-15 * fabs(to_point_minE_B.b_A[0]);
  while ((c_j < 3) && (!(fabs(to_point_minE_B.b_A[3 * c_j + c_j]) <=
                         to_point_minE_B.smax))) {
    c_j++;
  }

  Y[0] = 0.0;
  Y[1] = 0.0;
  Y[2] = 0.0;
  Y[3] = 0.0;
  for (ii = 0; ii < 3; ii++) {
    if (to_point_minE_B.tau[ii] != 0.0) {
      to_point_minE_B.smax = to_point_minE_B.b_B[ii];
      for (pvt = ii + 2; pvt < 4; pvt++) {
        to_point_minE_B.smax += to_point_minE_B.b_A[(3 * ii + pvt) - 1] *
          to_point_minE_B.b_B[pvt - 1];
      }

      to_point_minE_B.smax *= to_point_minE_B.tau[ii];
      if (to_point_minE_B.smax != 0.0) {
        to_point_minE_B.b_B[ii] -= to_point_minE_B.smax;
        for (pvt = ii + 2; pvt < 4; pvt++) {
          to_point_minE_B.b_B[pvt - 1] -= to_point_minE_B.b_A[(3 * ii + pvt) - 1]
            * to_point_minE_B.smax;
        }
      }
    }
  }

  for (ii = 0; ii < c_j; ii++) {
    Y[jpvt[ii] - 1] = to_point_minE_B.b_B[ii];
  }

  for (ii = c_j; ii >= 1; ii--) {
    pvt = (ii - 1) * 3;
    h_k = jpvt[ii - 1] - 1;
    Y[jpvt[ii - 1] - 1] = Y[h_k] / to_point_minE_B.b_A[(pvt + ii) - 1];
    for (b_ix = 0; b_ix <= ii - 2; b_ix++) {
      iy = jpvt[b_ix] - 1;
      Y[iy] -= to_point_minE_B.b_A[pvt + b_ix] * Y[h_k];
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_poin_modifyOverheadPhaseOne_(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj)
{
  int32_T c;
  int32_T idx;
  int32_T idxStartIneq;
  int32_T tmp;
  idxStartIneq = (uint8_T)obj->sizes[0];
  for (idx = 0; idx < idxStartIneq; idx++) {
    obj->ATwset[5 * idx + 4] = 0.0;
  }

  obj->indexLB[obj->sizes[3] - 1] = 5;
  obj->lb[4] = obj->SLACK0;
  idxStartIneq = obj->isActiveIdx[2];
  c = obj->nActiveConstr;
  for (idx = idxStartIneq; idx <= c; idx++) {
    obj->ATwset[5 * (idx - 1) + 4] = -1.0;
  }

  idxStartIneq = obj->isActiveIdx[4] - 1;
  if (obj->nWConstr[4] > 0) {
    c = obj->sizesNormal[4];
    for (idx = c; idx >= 1; idx--) {
      tmp = idxStartIneq + idx;
      obj->isActiveConstr[tmp] = obj->isActiveConstr[tmp - 1];
    }
  } else {
    obj->isActiveConstr[(obj->isActiveIdx[4] + obj->sizesNormal[4]) - 1] = false;
  }

  obj->isActiveConstr[obj->isActiveIdx[4] - 1] = false;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_setProblemType(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
  int32_T PROBLEM_TYPE)
{
  int32_T b_idx;
  int32_T colOffsetATw;
  int32_T i_tmp;
  int32_T idxUpperExisting;
  int32_T idx_lb;
  switch (PROBLEM_TYPE) {
   case 3:
    obj->nVar = 4;
    obj->mConstr = obj->mConstrOrig;
    if (obj->nWConstr[4] > 0) {
      idxUpperExisting = obj->isActiveIdx[4] - 1;
      colOffsetATw = (uint8_T)obj->sizesNormal[4];
      for (idx_lb = 0; idx_lb < colOffsetATw; idx_lb++) {
        b_idx = idxUpperExisting + idx_lb;
        obj->isActiveConstr[(obj->isActiveIdxNormal[4] + idx_lb) - 1] =
          obj->isActiveConstr[b_idx];
        obj->isActiveConstr[b_idx] = false;
      }
    }

    for (b_idx = 0; b_idx < 5; b_idx++) {
      obj->sizes[b_idx] = obj->sizesNormal[b_idx];
    }

    for (b_idx = 0; b_idx < 6; b_idx++) {
      obj->isActiveIdx[b_idx] = obj->isActiveIdxNormal[b_idx];
    }
    break;

   case 1:
    obj->nVar = 5;
    obj->mConstr = obj->mConstrOrig + 1;
    for (b_idx = 0; b_idx < 5; b_idx++) {
      obj->sizes[b_idx] = obj->sizesPhaseOne[b_idx];
    }

    to_poin_modifyOverheadPhaseOne_(obj);
    for (b_idx = 0; b_idx < 6; b_idx++) {
      obj->isActiveIdx[b_idx] = obj->isActiveIdxPhaseOne[b_idx];
    }
    break;

   case 2:
    obj->nVar = 4;
    obj->mConstr = 8;
    for (b_idx = 0; b_idx < 5; b_idx++) {
      obj->sizes[b_idx] = obj->sizesRegularized[b_idx];
    }

    if (obj->probType != 4) {
      idx_lb = 4;
      idxUpperExisting = obj->sizesNormal[3] + 1;
      colOffsetATw = obj->sizesRegularized[3];
      for (b_idx = idxUpperExisting; b_idx <= colOffsetATw; b_idx++) {
        idx_lb++;
        obj->indexLB[b_idx - 1] = idx_lb;
      }

      if (obj->nWConstr[4] > 0) {
        idx_lb = (uint8_T)obj->sizesRegularized[4];
        for (b_idx = 0; b_idx < idx_lb; b_idx++) {
          obj->isActiveConstr[obj->isActiveIdxRegularized[4] + b_idx] =
            obj->isActiveConstr[(obj->isActiveIdx[4] + b_idx) - 1];
        }
      }

      idx_lb = obj->isActiveIdx[4];
      idxUpperExisting = obj->isActiveIdxRegularized[4] - 1;
      if (idx_lb <= idxUpperExisting) {
        memset(&obj->isActiveConstr[idx_lb + -1], 0, (uint32_T)
               ((idxUpperExisting - idx_lb) + 1) * sizeof(boolean_T));
      }

      idx_lb = obj->isActiveIdx[2];
      idxUpperExisting = obj->nActiveConstr;
      for (b_idx = idx_lb; b_idx <= idxUpperExisting; b_idx++) {
        colOffsetATw = (b_idx - 1) * 5 - 1;
        if (obj->Wid[b_idx - 1] == 3) {
          i_tmp = obj->Wlocalidx[b_idx - 1];
          if (i_tmp + 3 >= 5) {
            memset(&obj->ATwset[colOffsetATw + 5], 0, (uint32_T)((((i_tmp + 3) +
                      colOffsetATw) - colOffsetATw) - 4) * sizeof(real_T));
          }

          obj->ATwset[(i_tmp + colOffsetATw) + 4] = -1.0;
          i_tmp += 5;
          if (i_tmp <= 4) {
            memset(&obj->ATwset[i_tmp + colOffsetATw], 0, (uint32_T)
                   (((colOffsetATw - i_tmp) - colOffsetATw) + 5) * sizeof(real_T));
          }
        }
      }
    }

    for (b_idx = 0; b_idx < 6; b_idx++) {
      obj->isActiveIdx[b_idx] = obj->isActiveIdxRegularized[b_idx];
    }
    break;

   default:
    obj->nVar = 5;
    obj->mConstr = 9;
    for (b_idx = 0; b_idx < 5; b_idx++) {
      obj->sizes[b_idx] = obj->sizesRegPhaseOne[b_idx];
    }

    to_poin_modifyOverheadPhaseOne_(obj);
    for (b_idx = 0; b_idx < 6; b_idx++) {
      obj->isActiveIdx[b_idx] = obj->isActiveIdxRegPhaseOne[b_idx];
    }
    break;
  }

  obj->probType = PROBLEM_TYPE;
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_minE_xnrm2_c(int32_T n, const real_T x[45], int32_T ix0)
{
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      to_point_minE_B.scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        to_point_minE_B.absxk = fabs(x[k - 1]);
        if (to_point_minE_B.absxk > to_point_minE_B.scale) {
          to_point_minE_B.t = to_point_minE_B.scale / to_point_minE_B.absxk;
          y = y * to_point_minE_B.t * to_point_minE_B.t + 1.0;
          to_point_minE_B.scale = to_point_minE_B.absxk;
        } else {
          to_point_minE_B.t = to_point_minE_B.absxk / to_point_minE_B.scale;
          y += to_point_minE_B.t * to_point_minE_B.t;
        }
      }

      y = to_point_minE_B.scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_minE_xzlarfg(int32_T n, real_T *alpha1, real_T x[45],
  int32_T ix0)
{
  real_T tau;
  int32_T c;
  int32_T d_tmp;
  int32_T knt;
  tau = 0.0;
  if (n > 0) {
    to_point_minE_B.xnorm = to_point_minE_xnrm2_c(n - 1, x, ix0);
    if (to_point_minE_B.xnorm != 0.0) {
      to_point_minE_B.xnorm = to_point_minE_rt_hypotd_snf(*alpha1,
        to_point_minE_B.xnorm);
      if (*alpha1 >= 0.0) {
        to_point_minE_B.xnorm = -to_point_minE_B.xnorm;
      }

      if (fabs(to_point_minE_B.xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        d_tmp = (ix0 + n) - 2;
        do {
          knt++;
          for (c = ix0; c <= d_tmp; c++) {
            x[c - 1] *= 9.9792015476736E+291;
          }

          to_point_minE_B.xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while ((fabs(to_point_minE_B.xnorm) < 1.0020841800044864E-292) && (knt
                  < 20));

        to_point_minE_B.xnorm = to_point_minE_rt_hypotd_snf(*alpha1,
          to_point_minE_xnrm2_c(n - 1, x, ix0));
        if (*alpha1 >= 0.0) {
          to_point_minE_B.xnorm = -to_point_minE_B.xnorm;
        }

        tau = (to_point_minE_B.xnorm - *alpha1) / to_point_minE_B.xnorm;
        to_point_minE_B.a = 1.0 / (*alpha1 - to_point_minE_B.xnorm);
        for (c = ix0; c <= d_tmp; c++) {
          x[c - 1] *= to_point_minE_B.a;
        }

        for (c = 0; c < knt; c++) {
          to_point_minE_B.xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = to_point_minE_B.xnorm;
      } else {
        tau = (to_point_minE_B.xnorm - *alpha1) / to_point_minE_B.xnorm;
        to_point_minE_B.a = 1.0 / (*alpha1 - to_point_minE_B.xnorm);
        c = (ix0 + n) - 2;
        for (knt = ix0; knt <= c; knt++) {
          x[knt - 1] *= to_point_minE_B.a;
        }

        *alpha1 = to_point_minE_B.xnorm;
      }
    }
  }

  return tau;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  real_T C[45], int32_T ic0, real_T work[9])
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
      coltop = (lastc - 1) * 5 + ic0;
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

      jA = 5 * lastc + ic0;
      for (coltop = ic0; coltop <= jA; coltop += 5) {
        to_point_minE_B.c_m = 0.0;
        d = (coltop + lastv) - 1;
        for (b_ia = coltop; b_ia <= d; b_ia++) {
          to_point_minE_B.c_m += C[((iv0 + b_ia) - coltop) - 1] * C[b_ia - 1];
        }

        b_ia = div_nde_s32_floor(coltop - ic0, 5);
        work[b_ia] += to_point_minE_B.c_m;
      }
    }

    if (!(-tau == 0.0)) {
      jA = ic0;
      for (coltop = 0; coltop <= lastc; coltop++) {
        to_point_minE_B.c_m = work[coltop];
        if (to_point_minE_B.c_m != 0.0) {
          to_point_minE_B.c_m *= -tau;
          d = lastv + jA;
          for (b_ia = jA; b_ia < d; b_ia++) {
            C[b_ia - 1] += C[((iv0 + b_ia) - jA) - 1] * to_point_minE_B.c_m;
          }
        }

        jA += 5;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_qrf(real_T A[45], int32_T m, int32_T n, int32_T nfxd,
  real_T tau[5])
{
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  memset(&to_point_minE_B.work[0], 0, 9U * sizeof(real_T));
  b = (uint8_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 5 + i;
    mmi = m - i;
    if (i + 1 < m) {
      to_point_minE_B.b_atmp = A[ii];
      to_point_minE_B.tau_f = to_point_minE_xzlarfg(mmi, &to_point_minE_B.b_atmp,
        A, ii + 2);
      tau[i] = to_point_minE_B.tau_f;
      A[ii] = to_point_minE_B.b_atmp;
    } else {
      to_point_minE_B.tau_f = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      to_point_minE_B.b_atmp = A[ii];
      A[ii] = 1.0;
      to_point_minE_xzlarf(mmi, (n - i) - 1, ii + 1, to_point_minE_B.tau_f, A,
                           ii + 6, to_point_minE_B.work);
      A[ii] = to_point_minE_B.b_atmp;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_factorQRE(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj,
  int32_T mrows, int32_T ncols)
{
  int32_T b_temp_tmp;
  int32_T c_k;
  int32_T i;
  int32_T temp_tmp;
  int32_T u1;
  if (mrows * ncols == 0) {
    obj->mrows = mrows;
    obj->ncols = ncols;
    obj->minRowCol = 0;
  } else {
    obj->usedPivoting = true;
    obj->mrows = mrows;
    obj->ncols = ncols;
    if (mrows <= ncols) {
      u1 = mrows;
    } else {
      u1 = ncols;
    }

    obj->minRowCol = u1;
    for (i = 0; i < 5; i++) {
      obj->tau[i] = 0.0;
    }

    if (u1 < 1) {
      for (u1 = 0; u1 < ncols; u1++) {
        obj->jpvt[u1] = u1 + 1;
      }
    } else {
      to_point_minE_B.nfxd = -1;
      for (i = 0; i < ncols; i++) {
        if (obj->jpvt[i] != 0) {
          to_point_minE_B.nfxd++;
          if (i + 1 != to_point_minE_B.nfxd + 1) {
            to_point_minE_B.ix = i * 5;
            to_point_minE_B.iy = to_point_minE_B.nfxd * 5;
            for (to_point_minE_B.mmi = 0; to_point_minE_B.mmi < mrows;
                 to_point_minE_B.mmi++) {
              temp_tmp = to_point_minE_B.ix + to_point_minE_B.mmi;
              to_point_minE_B.temp_g = obj->QR[temp_tmp];
              to_point_minE_B.itemp = to_point_minE_B.iy + to_point_minE_B.mmi;
              obj->QR[temp_tmp] = obj->QR[to_point_minE_B.itemp];
              obj->QR[to_point_minE_B.itemp] = to_point_minE_B.temp_g;
            }

            obj->jpvt[i] = obj->jpvt[to_point_minE_B.nfxd];
            obj->jpvt[to_point_minE_B.nfxd] = i + 1;
          } else {
            obj->jpvt[i] = i + 1;
          }
        } else {
          obj->jpvt[i] = i + 1;
        }
      }

      if (to_point_minE_B.nfxd + 1 <= u1) {
        to_point_minE_B.nfxd++;
      } else {
        to_point_minE_B.nfxd = u1;
      }

      for (i = 0; i < 5; i++) {
        obj->tau[i] = 0.0;
      }

      to_point_minE_qrf(obj->QR, mrows, ncols, to_point_minE_B.nfxd, obj->tau);
      if (to_point_minE_B.nfxd < u1) {
        memset(&to_point_minE_B.work_c[0], 0, 9U * sizeof(real_T));
        memset(&to_point_minE_B.vn1[0], 0, 9U * sizeof(real_T));
        memset(&to_point_minE_B.vn2[0], 0, 9U * sizeof(real_T));
        for (i = to_point_minE_B.nfxd + 1; i <= ncols; i++) {
          to_point_minE_B.temp_g = to_point_minE_xnrm2_c(mrows -
            to_point_minE_B.nfxd, obj->QR, ((i - 1) * 5 + to_point_minE_B.nfxd)
            + 1);
          to_point_minE_B.vn1[i - 1] = to_point_minE_B.temp_g;
          to_point_minE_B.vn2[i - 1] = to_point_minE_B.temp_g;
        }

        for (i = to_point_minE_B.nfxd + 1; i <= u1; i++) {
          temp_tmp = (i - 1) * 5;
          to_point_minE_B.ix = (temp_tmp + i) - 1;
          to_point_minE_B.iy = ncols - i;
          to_point_minE_B.mmi = mrows - i;
          if (to_point_minE_B.iy + 1 < 1) {
            to_point_minE_B.pvt = -2;
          } else {
            to_point_minE_B.pvt = -1;
            if (to_point_minE_B.iy + 1 > 1) {
              to_point_minE_B.temp_g = fabs(to_point_minE_B.vn1[i - 1]);
              for (to_point_minE_B.itemp = 2; to_point_minE_B.itemp <=
                   to_point_minE_B.iy + 1; to_point_minE_B.itemp++) {
                to_point_minE_B.s_g = fabs(to_point_minE_B.vn1[(i +
                  to_point_minE_B.itemp) - 2]);
                if (to_point_minE_B.s_g > to_point_minE_B.temp_g) {
                  to_point_minE_B.pvt = to_point_minE_B.itemp - 2;
                  to_point_minE_B.temp_g = to_point_minE_B.s_g;
                }
              }
            }
          }

          to_point_minE_B.pvt += i;
          if (to_point_minE_B.pvt + 1 != i) {
            to_point_minE_B.c_ix = to_point_minE_B.pvt * 5;
            for (c_k = 0; c_k < mrows; c_k++) {
              b_temp_tmp = to_point_minE_B.c_ix + c_k;
              to_point_minE_B.temp_g = obj->QR[b_temp_tmp];
              to_point_minE_B.itemp = temp_tmp + c_k;
              obj->QR[b_temp_tmp] = obj->QR[to_point_minE_B.itemp];
              obj->QR[to_point_minE_B.itemp] = to_point_minE_B.temp_g;
            }

            to_point_minE_B.itemp = obj->jpvt[to_point_minE_B.pvt];
            obj->jpvt[to_point_minE_B.pvt] = obj->jpvt[i - 1];
            obj->jpvt[i - 1] = to_point_minE_B.itemp;
            to_point_minE_B.vn1[to_point_minE_B.pvt] = to_point_minE_B.vn1[i - 1];
            to_point_minE_B.vn2[to_point_minE_B.pvt] = to_point_minE_B.vn2[i - 1];
          }

          if (i < mrows) {
            to_point_minE_B.temp_g = obj->QR[to_point_minE_B.ix];
            obj->tau[i - 1] = to_point_minE_xzlarfg(to_point_minE_B.mmi + 1,
              &to_point_minE_B.temp_g, obj->QR, to_point_minE_B.ix + 2);
            obj->QR[to_point_minE_B.ix] = to_point_minE_B.temp_g;
          } else {
            obj->tau[i - 1] = 0.0;
          }

          if (i < ncols) {
            to_point_minE_B.temp_g = obj->QR[to_point_minE_B.ix];
            obj->QR[to_point_minE_B.ix] = 1.0;
            to_point_minE_xzlarf(to_point_minE_B.mmi + 1, to_point_minE_B.iy,
                                 to_point_minE_B.ix + 1, obj->tau[i - 1],
                                 obj->QR, to_point_minE_B.ix + 6,
                                 to_point_minE_B.work_c);
            obj->QR[to_point_minE_B.ix] = to_point_minE_B.temp_g;
          }

          for (to_point_minE_B.itemp = i + 1; to_point_minE_B.itemp <= ncols;
               to_point_minE_B.itemp++) {
            to_point_minE_B.ix = (to_point_minE_B.itemp - 1) * 5 + i;
            to_point_minE_B.temp_g = to_point_minE_B.vn1[to_point_minE_B.itemp -
              1];
            if (to_point_minE_B.temp_g != 0.0) {
              to_point_minE_B.s_g = fabs(obj->QR[to_point_minE_B.ix - 1]) /
                to_point_minE_B.temp_g;
              to_point_minE_B.s_g = 1.0 - to_point_minE_B.s_g *
                to_point_minE_B.s_g;
              if (to_point_minE_B.s_g < 0.0) {
                to_point_minE_B.s_g = 0.0;
              }

              to_point_minE_B.temp2 = to_point_minE_B.temp_g /
                to_point_minE_B.vn2[to_point_minE_B.itemp - 1];
              to_point_minE_B.temp2 = to_point_minE_B.temp2 *
                to_point_minE_B.temp2 * to_point_minE_B.s_g;
              if (to_point_minE_B.temp2 <= 1.4901161193847656E-8) {
                if (i < mrows) {
                  to_point_minE_B.temp_g = to_point_minE_xnrm2_c
                    (to_point_minE_B.mmi, obj->QR, to_point_minE_B.ix + 1);
                  to_point_minE_B.vn1[to_point_minE_B.itemp - 1] =
                    to_point_minE_B.temp_g;
                  to_point_minE_B.vn2[to_point_minE_B.itemp - 1] =
                    to_point_minE_B.temp_g;
                } else {
                  to_point_minE_B.vn1[to_point_minE_B.itemp - 1] = 0.0;
                  to_point_minE_B.vn2[to_point_minE_B.itemp - 1] = 0.0;
                }
              } else {
                to_point_minE_B.vn1[to_point_minE_B.itemp - 1] =
                  to_point_minE_B.temp_g * sqrt(to_point_minE_B.s_g);
              }
            }
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_computeQ_(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj,
  int32_T nrows)
{
  int32_T c_ia;
  int32_T coltop;
  int32_T exitg1;
  int32_T f;
  int32_T i;
  int32_T iQR0;
  int32_T ia;
  int32_T idx;
  int32_T itau;
  int32_T jA;
  int32_T lastc;
  boolean_T exitg2;
  i = obj->minRowCol;
  for (idx = 0; idx < i; idx++) {
    iQR0 = 5 * idx + idx;
    ia = obj->mrows - idx;
    if (ia - 2 >= 0) {
      memcpy(&obj->Q[iQR0 + 1], &obj->QR[iQR0 + 1], (uint32_T)(((ia + iQR0) -
               iQR0) - 1) * sizeof(real_T));
    }
  }

  idx = obj->mrows;
  if (nrows >= 1) {
    for (itau = i; itau < nrows; itau++) {
      ia = itau * 5;
      memset(&obj->Q[ia], 0, (uint32_T)((idx + ia) - ia) * sizeof(real_T));
      obj->Q[ia + itau] = 1.0;
    }

    itau = obj->minRowCol - 1;
    for (i = 0; i < 5; i++) {
      to_point_minE_B.work_k[i] = 0.0;
    }

    for (i = obj->minRowCol; i >= 1; i--) {
      iQR0 = ((i - 1) * 5 + i) - 1;
      if (i < nrows) {
        obj->Q[iQR0] = 1.0;
        ia = idx - i;
        if (obj->tau[itau] != 0.0) {
          lastc = iQR0 + ia;
          while ((ia + 1 > 0) && (obj->Q[lastc] == 0.0)) {
            ia--;
            lastc--;
          }

          lastc = nrows - i;
          exitg2 = false;
          while ((!exitg2) && (lastc > 0)) {
            coltop = ((lastc - 1) * 5 + iQR0) + 6;
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
              memset(&to_point_minE_B.work_k[0], 0, (uint32_T)(lastc + 1) *
                     sizeof(real_T));
            }

            c_ia = (5 * lastc + iQR0) + 6;
            for (coltop = iQR0 + 6; coltop <= c_ia; coltop += 5) {
              to_point_minE_B.b_c = 0.0;
              f = coltop + ia;
              for (jA = coltop; jA <= f; jA++) {
                to_point_minE_B.b_c += obj->Q[(iQR0 + jA) - coltop] * obj->Q[jA
                  - 1];
              }

              jA = div_nde_s32_floor((coltop - iQR0) - 6, 5);
              to_point_minE_B.work_k[jA] += to_point_minE_B.b_c;
            }
          }

          if (!(-obj->tau[itau] == 0.0)) {
            jA = iQR0 + 6;
            for (coltop = 0; coltop <= lastc; coltop++) {
              to_point_minE_B.b_c = to_point_minE_B.work_k[coltop];
              if (to_point_minE_B.b_c != 0.0) {
                to_point_minE_B.b_c *= -obj->tau[itau];
                f = ia + jA;
                for (c_ia = jA; c_ia <= f; c_ia++) {
                  obj->Q[c_ia - 1] += obj->Q[(iQR0 + c_ia) - jA] *
                    to_point_minE_B.b_c;
                }
              }

              jA += 5;
            }
          }
        }
      }

      if (i < idx) {
        lastc = ((iQR0 + idx) - i) + 1;
        for (ia = iQR0 + 2; ia <= lastc; ia++) {
          obj->Q[ia - 1] *= -obj->tau[itau];
        }
      }

      obj->Q[iQR0] = 1.0 - obj->tau[itau];
      lastc = (uint8_T)(i - 1);
      for (ia = 0; ia < lastc; ia++) {
        obj->Q[(iQR0 - ia) - 1] = 0.0;
      }

      itau--;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static int32_T to_point_ComputeNumDependentEq_(s78GCJvmtD1Rws5pzEtzVXF_to_po_T
  *qrmanager, const real_T beqf[9], int32_T mConstr, int32_T nVar)
{
  int32_T numDependent;
  boolean_T exitg1;
  numDependent = mConstr - nVar;
  if (numDependent <= 0) {
    numDependent = 0;
  }

  to_point_minE_B.b_o = (uint8_T)nVar;
  memset(&qrmanager->jpvt[0], 0, (uint32_T)to_point_minE_B.b_o * sizeof(int32_T));
  to_point_minE_factorQRE(qrmanager, mConstr, nVar);
  to_point_minE_B.tol_g = 100.0 * (real_T)nVar * 2.2204460492503131E-16;
  if (nVar <= mConstr) {
    to_point_minE_B.totalRank = nVar;
  } else {
    to_point_minE_B.totalRank = mConstr;
  }

  to_point_minE_B.totalRank += (to_point_minE_B.totalRank - 1) * 5;
  while ((to_point_minE_B.totalRank > 0) && (fabs(qrmanager->
           QR[to_point_minE_B.totalRank - 1]) < to_point_minE_B.tol_g)) {
    to_point_minE_B.totalRank -= 6;
    numDependent++;
  }

  if (numDependent > 0) {
    to_point_minE_computeQ_(qrmanager, qrmanager->mrows);
    to_point_minE_B.b_o = 0;
    exitg1 = false;
    while ((!exitg1) && (to_point_minE_B.b_o <= numDependent - 1)) {
      to_point_minE_B.ix_n = ((mConstr - to_point_minE_B.b_o) - 1) * 5;
      to_point_minE_B.qtb = 0.0;
      for (to_point_minE_B.totalRank = 0; to_point_minE_B.totalRank < mConstr;
           to_point_minE_B.totalRank++) {
        to_point_minE_B.qtb += qrmanager->Q[to_point_minE_B.ix_n +
          to_point_minE_B.totalRank] * beqf[to_point_minE_B.totalRank];
      }

      if (fabs(to_point_minE_B.qtb) >= to_point_minE_B.tol_g) {
        numDependent = -1;
        exitg1 = true;
      } else {
        to_point_minE_B.b_o++;
      }
    }
  }

  return numDependent;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_countsort(int32_T x[9], int32_T xLen, int32_T
  workspace[9], int32_T xMin, int32_T xMax)
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
static void to_point_minE_removeConstr(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
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
static void to_point_minE_removeEqConstr(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
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
      to_point_minE_removeConstr(obj, idx_global);
    } else {
      obj->mEqRemoved++;
      TYPE_tmp = obj->Wid[idx_global - 1] - 1;
      obj->isActiveConstr[(obj->isActiveIdx[TYPE_tmp] + obj->
                           Wlocalidx[idx_global - 1]) - 2] = false;
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
static void to_point_m_RemoveDependentIneq_(sTTULnc01OVJqZqpgkzM1HG_to_po_T
  *workingset, s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager,
  sJ3M3ABZDNagg0am8RHBkvE_to_po_T *memspace, real_T tolfactor)
{
  to_point_minE_B.nActiveConstr_tmp = workingset->nActiveConstr;
  to_point_minE_B.nFixedConstr = workingset->nWConstr[0] + workingset->nWConstr
    [1];
  to_point_minE_B.nVar_j = workingset->nVar;
  if ((workingset->nWConstr[2] + workingset->nWConstr[3]) + workingset->
      nWConstr[4] > 0) {
    to_point_minE_B.tol = tolfactor * (real_T)workingset->nVar *
      2.2204460492503131E-16;
    for (to_point_minE_B.nDepIneq = 0; to_point_minE_B.nDepIneq <
         to_point_minE_B.nFixedConstr; to_point_minE_B.nDepIneq++) {
      qrmanager->jpvt[to_point_minE_B.nDepIneq] = 1;
    }

    if (to_point_minE_B.nFixedConstr + 1 <= to_point_minE_B.nActiveConstr_tmp) {
      memset(&qrmanager->jpvt[to_point_minE_B.nFixedConstr], 0, (uint32_T)
             (to_point_minE_B.nActiveConstr_tmp - to_point_minE_B.nFixedConstr) *
             sizeof(int32_T));
    }

    for (to_point_minE_B.nDepIneq = 0; to_point_minE_B.nDepIneq <
         to_point_minE_B.nActiveConstr_tmp; to_point_minE_B.nDepIneq++) {
      to_point_minE_B.iy0_tmp_a = 5 * to_point_minE_B.nDepIneq;
      to_point_minE_B.c_f = (uint8_T)to_point_minE_B.nVar_j;
      memcpy(&qrmanager->QR[to_point_minE_B.iy0_tmp_a], &workingset->
             ATwset[to_point_minE_B.iy0_tmp_a], (uint32_T)((to_point_minE_B.c_f
               + to_point_minE_B.iy0_tmp_a) - to_point_minE_B.iy0_tmp_a) *
             sizeof(real_T));
    }

    to_point_minE_factorQRE(qrmanager, workingset->nVar,
      workingset->nActiveConstr);
    to_point_minE_B.nDepIneq = 0;
    to_point_minE_B.nActiveConstr_tmp = workingset->nActiveConstr - 1;
    while (to_point_minE_B.nActiveConstr_tmp + 1 > to_point_minE_B.nVar_j) {
      to_point_minE_B.nDepIneq++;
      memspace->workspace_int[to_point_minE_B.nDepIneq - 1] = qrmanager->
        jpvt[to_point_minE_B.nActiveConstr_tmp];
      to_point_minE_B.nActiveConstr_tmp--;
    }

    if (to_point_minE_B.nActiveConstr_tmp + 1 <= workingset->nVar) {
      to_point_minE_B.nVar_j = 5 * to_point_minE_B.nActiveConstr_tmp +
        to_point_minE_B.nActiveConstr_tmp;
      while ((to_point_minE_B.nActiveConstr_tmp + 1 >
              to_point_minE_B.nFixedConstr) && (fabs(qrmanager->
               QR[to_point_minE_B.nVar_j]) < to_point_minE_B.tol)) {
        to_point_minE_B.nDepIneq++;
        memspace->workspace_int[to_point_minE_B.nDepIneq - 1] = qrmanager->
          jpvt[to_point_minE_B.nActiveConstr_tmp];
        to_point_minE_B.nActiveConstr_tmp--;
        to_point_minE_B.nVar_j -= 6;
      }
    }

    to_point_minE_countsort(memspace->workspace_int, to_point_minE_B.nDepIneq,
      memspace->workspace_sort, to_point_minE_B.nFixedConstr + 1,
      workingset->nActiveConstr);
    for (to_point_minE_B.nFixedConstr = to_point_minE_B.nDepIneq;
         to_point_minE_B.nFixedConstr >= 1; to_point_minE_B.nFixedConstr--) {
      to_point_minE_removeConstr(workingset, memspace->
        workspace_int[to_point_minE_B.nFixedConstr - 1]);
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_factorQR(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj, const
  real_T A[45], int32_T mrows, int32_T ncols)
{
  int32_T i;
  int32_T k;
  boolean_T guard1;
  k = mrows * ncols;
  guard1 = false;
  if (k > 0) {
    for (i = 0; i < ncols; i++) {
      k = 5 * i;
      memcpy(&obj->QR[k], &A[k], (uint32_T)(((uint8_T)mrows + k) - k) * sizeof
             (real_T));
    }

    guard1 = true;
  } else if (k == 0) {
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
    for (i = 0; i < ncols; i++) {
      obj->jpvt[i] = i + 1;
    }

    if (mrows <= ncols) {
      k = mrows;
    } else {
      k = ncols;
    }

    obj->minRowCol = k;
    for (i = 0; i < 5; i++) {
      obj->tau[i] = 0.0;
    }

    if (k >= 1) {
      for (i = 0; i < 5; i++) {
        obj->tau[i] = 0.0;
      }

      to_point_minE_qrf(obj->QR, mrows, ncols, k, obj->tau);
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_maxConstraintViolation(const
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj, const real_T x[45], int32_T ix0)
{
  real_T u1;
  real_T v;
  int32_T b;
  int32_T idx;
  v = 0.0;
  if (obj->sizes[3] > 0) {
    b = (uint8_T)obj->sizes[3];
    for (idx = 0; idx < b; idx++) {
      u1 = -x[(ix0 + obj->indexLB[idx]) - 2] - obj->lb[obj->indexLB[idx] - 1];
      if ((!(v >= u1)) && (!rtIsNaN(u1))) {
        v = u1;
      }
    }
  }

  if (obj->sizes[4] > 0) {
    b = (uint8_T)obj->sizes[4];
    for (idx = 0; idx < b; idx++) {
      u1 = x[(ix0 + obj->indexUB[idx]) - 2] - obj->ub[obj->indexUB[idx] - 1];
      if ((!(v >= u1)) && (!rtIsNaN(u1))) {
        v = u1;
      }
    }
  }

  if (obj->sizes[0] > 0) {
    b = (uint8_T)obj->sizes[0];
    for (idx = 0; idx < b; idx++) {
      u1 = fabs(x[(ix0 + obj->indexFixed[idx]) - 2] - obj->ub[obj->
                indexFixed[idx] - 1]);
      if ((!(v >= u1)) && (!rtIsNaN(u1))) {
        v = u1;
      }
    }
  }

  return v;
}

/* Function for MATLAB Function: '<Root>/control' */
static boolean_T to_poin_feasibleX0ForWorkingSet(real_T workspace[45], real_T
  xCurrent[5], const sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset,
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager)
{
  int32_T exitg1;
  int32_T mWConstr_tmp_tmp;
  int32_T nVar_tmp_tmp;
  boolean_T nonDegenerateWset;
  mWConstr_tmp_tmp = workingset->nActiveConstr - 1;
  nVar_tmp_tmp = workingset->nVar;
  nonDegenerateWset = true;
  if (workingset->nActiveConstr != 0) {
    for (to_point_minE_B.idx = 0; to_point_minE_B.idx <= mWConstr_tmp_tmp;
         to_point_minE_B.idx++) {
      workspace[to_point_minE_B.idx] = workingset->bwset[to_point_minE_B.idx];
      workspace[to_point_minE_B.idx + 9] = workingset->bwset[to_point_minE_B.idx];
    }

    if (workingset->nActiveConstr != 0) {
      to_point_minE_B.d = (workingset->nActiveConstr - 1) * 5 + 1;
      for (to_point_minE_B.iac = 1; to_point_minE_B.iac <= to_point_minE_B.d;
           to_point_minE_B.iac += 5) {
        to_point_minE_B.c = 0.0;
        to_point_minE_B.jBcol = (to_point_minE_B.iac + nVar_tmp_tmp) - 1;
        for (to_point_minE_B.idx = to_point_minE_B.iac; to_point_minE_B.idx <=
             to_point_minE_B.jBcol; to_point_minE_B.idx++) {
          to_point_minE_B.c += workingset->ATwset[to_point_minE_B.idx - 1] *
            xCurrent[to_point_minE_B.idx - to_point_minE_B.iac];
        }

        to_point_minE_B.idx = div_nde_s32_floor(to_point_minE_B.iac - 1, 5);
        workspace[to_point_minE_B.idx] -= to_point_minE_B.c;
      }
    }

    if (workingset->nActiveConstr >= workingset->nVar) {
      to_point_minE_B.d = (uint8_T)workingset->nVar;
      qrmanager->usedPivoting = false;
      qrmanager->mrows = workingset->nActiveConstr;
      qrmanager->ncols = workingset->nVar;
      for (to_point_minE_B.idx = 0; to_point_minE_B.idx < to_point_minE_B.d;
           to_point_minE_B.idx++) {
        to_point_minE_B.jBcol = 5 * to_point_minE_B.idx;
        for (to_point_minE_B.iac = 0; to_point_minE_B.iac <= mWConstr_tmp_tmp;
             to_point_minE_B.iac++) {
          qrmanager->QR[to_point_minE_B.iac + to_point_minE_B.jBcol] =
            workingset->ATwset[5 * to_point_minE_B.iac + to_point_minE_B.idx];
        }

        qrmanager->jpvt[to_point_minE_B.idx] = to_point_minE_B.idx + 1;
      }

      if (workingset->nActiveConstr <= workingset->nVar) {
        to_point_minE_B.idx = workingset->nActiveConstr;
      } else {
        to_point_minE_B.idx = workingset->nVar;
      }

      qrmanager->minRowCol = to_point_minE_B.idx;
      memcpy(&to_point_minE_B.B[0], &qrmanager->QR[0], 45U * sizeof(real_T));
      for (to_point_minE_B.iac = 0; to_point_minE_B.iac < 5; to_point_minE_B.iac
           ++) {
        qrmanager->tau[to_point_minE_B.iac] = 0.0;
      }

      if (to_point_minE_B.idx >= 1) {
        for (to_point_minE_B.iac = 0; to_point_minE_B.iac < 5;
             to_point_minE_B.iac++) {
          qrmanager->tau[to_point_minE_B.iac] = 0.0;
        }

        to_point_minE_qrf(to_point_minE_B.B, workingset->nActiveConstr,
                          workingset->nVar, to_point_minE_B.idx, qrmanager->tau);
      }

      memcpy(&qrmanager->QR[0], &to_point_minE_B.B[0], 45U * sizeof(real_T));
      to_point_minE_computeQ_(qrmanager, qrmanager->mrows);
      memcpy(&to_point_minE_B.B[0], &workspace[0], 45U * sizeof(real_T));
      for (to_point_minE_B.idx = 0; to_point_minE_B.idx <= 9;
           to_point_minE_B.idx += 9) {
        to_point_minE_B.d = to_point_minE_B.idx + nVar_tmp_tmp;
        for (to_point_minE_B.iac = to_point_minE_B.idx + 1; to_point_minE_B.iac <=
             to_point_minE_B.d; to_point_minE_B.iac++) {
          workspace[to_point_minE_B.iac - 1] = 0.0;
        }
      }

      to_point_minE_B.jBcol = -1;
      for (to_point_minE_B.idx = 0; to_point_minE_B.idx <= 9;
           to_point_minE_B.idx += 9) {
        to_point_minE_B.iAcol = -1;
        to_point_minE_B.kAcol = to_point_minE_B.idx + nVar_tmp_tmp;
        for (to_point_minE_B.iac = to_point_minE_B.idx + 1; to_point_minE_B.iac <=
             to_point_minE_B.kAcol; to_point_minE_B.iac++) {
          to_point_minE_B.c = 0.0;
          for (to_point_minE_B.d = 0; to_point_minE_B.d <= mWConstr_tmp_tmp;
               to_point_minE_B.d++) {
            to_point_minE_B.c += qrmanager->Q[(to_point_minE_B.d +
              to_point_minE_B.iAcol) + 1] * to_point_minE_B.B[(to_point_minE_B.d
              + to_point_minE_B.jBcol) + 1];
          }

          workspace[to_point_minE_B.iac - 1] += to_point_minE_B.c;
          to_point_minE_B.iAcol += 5;
        }

        to_point_minE_B.jBcol += 9;
      }

      for (mWConstr_tmp_tmp = 0; mWConstr_tmp_tmp < 2; mWConstr_tmp_tmp++) {
        to_point_minE_B.iAcol = 9 * mWConstr_tmp_tmp - 1;
        for (to_point_minE_B.d = nVar_tmp_tmp; to_point_minE_B.d >= 1;
             to_point_minE_B.d--) {
          to_point_minE_B.kAcol = (to_point_minE_B.d - 1) * 5;
          to_point_minE_B.idx = to_point_minE_B.d + to_point_minE_B.iAcol;
          to_point_minE_B.c = workspace[to_point_minE_B.idx];
          if (to_point_minE_B.c != 0.0) {
            workspace[to_point_minE_B.idx] = to_point_minE_B.c / qrmanager->QR
              [(to_point_minE_B.d + to_point_minE_B.kAcol) - 1];
            to_point_minE_B.f_d = (uint8_T)(to_point_minE_B.d - 1);
            for (to_point_minE_B.jBcol = 0; to_point_minE_B.jBcol <
                 to_point_minE_B.f_d; to_point_minE_B.jBcol++) {
              to_point_minE_B.iac = (to_point_minE_B.jBcol +
                to_point_minE_B.iAcol) + 1;
              workspace[to_point_minE_B.iac] -= qrmanager->
                QR[to_point_minE_B.jBcol + to_point_minE_B.kAcol] *
                workspace[to_point_minE_B.idx];
            }
          }
        }
      }
    } else {
      to_point_minE_factorQR(qrmanager, workingset->ATwset, workingset->nVar,
        workingset->nActiveConstr);
      to_point_minE_computeQ_(qrmanager, qrmanager->minRowCol);
      for (to_point_minE_B.idx = 0; to_point_minE_B.idx < 2; to_point_minE_B.idx
           ++) {
        to_point_minE_B.jBcol = 9 * to_point_minE_B.idx;
        for (to_point_minE_B.iac = 0; to_point_minE_B.iac <= mWConstr_tmp_tmp;
             to_point_minE_B.iac++) {
          to_point_minE_B.iAcol = 5 * to_point_minE_B.iac;
          to_point_minE_B.kAcol = to_point_minE_B.iac + to_point_minE_B.jBcol;
          to_point_minE_B.c = workspace[to_point_minE_B.kAcol];
          to_point_minE_B.f_d = (uint8_T)to_point_minE_B.iac;
          for (to_point_minE_B.d = 0; to_point_minE_B.d < to_point_minE_B.f_d;
               to_point_minE_B.d++) {
            to_point_minE_B.c -= qrmanager->QR[to_point_minE_B.d +
              to_point_minE_B.iAcol] * workspace[to_point_minE_B.d +
              to_point_minE_B.jBcol];
          }

          workspace[to_point_minE_B.kAcol] = to_point_minE_B.c / qrmanager->
            QR[to_point_minE_B.iac + to_point_minE_B.iAcol];
        }
      }

      memcpy(&to_point_minE_B.B[0], &workspace[0], 45U * sizeof(real_T));
      for (to_point_minE_B.idx = 0; to_point_minE_B.idx <= 9;
           to_point_minE_B.idx += 9) {
        to_point_minE_B.d = to_point_minE_B.idx + nVar_tmp_tmp;
        for (to_point_minE_B.iac = to_point_minE_B.idx + 1; to_point_minE_B.iac <=
             to_point_minE_B.d; to_point_minE_B.iac++) {
          workspace[to_point_minE_B.iac - 1] = 0.0;
        }
      }

      to_point_minE_B.jBcol = 1;
      for (to_point_minE_B.idx = 0; to_point_minE_B.idx <= 9;
           to_point_minE_B.idx += 9) {
        to_point_minE_B.iAcol = -1;
        to_point_minE_B.kAcol = to_point_minE_B.jBcol + mWConstr_tmp_tmp;
        for (to_point_minE_B.iac = to_point_minE_B.jBcol; to_point_minE_B.iac <=
             to_point_minE_B.kAcol; to_point_minE_B.iac++) {
          to_point_minE_B.f_d = to_point_minE_B.idx + nVar_tmp_tmp;
          for (to_point_minE_B.d = to_point_minE_B.idx + 1; to_point_minE_B.d <=
               to_point_minE_B.f_d; to_point_minE_B.d++) {
            workspace[to_point_minE_B.d - 1] += qrmanager->Q
              [(to_point_minE_B.iAcol + to_point_minE_B.d) - to_point_minE_B.idx]
              * to_point_minE_B.B[to_point_minE_B.iac - 1];
          }

          to_point_minE_B.iAcol += 5;
        }

        to_point_minE_B.jBcol += 9;
      }
    }

    mWConstr_tmp_tmp = 0;
    do {
      exitg1 = 0;
      if (mWConstr_tmp_tmp <= (uint8_T)nVar_tmp_tmp - 1) {
        if (rtIsInf(workspace[mWConstr_tmp_tmp]) || rtIsNaN
            (workspace[mWConstr_tmp_tmp])) {
          nonDegenerateWset = false;
          exitg1 = 1;
        } else {
          to_point_minE_B.c = workspace[mWConstr_tmp_tmp + 9];
          if (rtIsInf(to_point_minE_B.c) || rtIsNaN(to_point_minE_B.c)) {
            nonDegenerateWset = false;
            exitg1 = 1;
          } else {
            mWConstr_tmp_tmp++;
          }
        }
      } else {
        for (mWConstr_tmp_tmp = 0; mWConstr_tmp_tmp < nVar_tmp_tmp;
             mWConstr_tmp_tmp++) {
          workspace[mWConstr_tmp_tmp] += xCurrent[mWConstr_tmp_tmp];
        }

        to_point_minE_B.c = to_point_maxConstraintViolation(workingset,
          workspace, 1);
        to_point_minE_B.constrViolation_basicX = to_point_maxConstraintViolation
          (workingset, workspace, 10);
        if ((to_point_minE_B.c <= 2.2204460492503131E-16) || (to_point_minE_B.c <
             to_point_minE_B.constrViolation_basicX)) {
          memcpy(&xCurrent[0], &workspace[0], (uint8_T)nVar_tmp_tmp * sizeof
                 (real_T));
        } else {
          memcpy(&xCurrent[0], &workspace[9], (uint8_T)nVar_tmp_tmp * sizeof
                 (real_T));
        }

        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return nonDegenerateWset;
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_poi_maxConstraintViolation_l(const
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj, const real_T x[5])
{
  real_T u1;
  real_T v;
  int32_T b;
  int32_T idx;
  v = 0.0;
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
static void to_point_min_PresolveWorkingSet(sRQ09YwUNBScnorFf9oRpHD_to_po_T
  *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T *memspace,
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset, s78GCJvmtD1Rws5pzEtzVXF_to_po_T
  *qrmanager)
{
  boolean_T guard1;
  boolean_T okWorkingSet;
  solution->state = 82;
  qrmanager->ldq = 5;
  memset(&qrmanager->QR[0], 0, 45U * sizeof(real_T));
  memset(&qrmanager->Q[0], 0, 25U * sizeof(real_T));
  for (to_point_minE_B.i_o = 0; to_point_minE_B.i_o < 9; to_point_minE_B.i_o++)
  {
    qrmanager->jpvt[to_point_minE_B.i_o] = 0;
  }

  qrmanager->mrows = 0;
  qrmanager->ncols = 0;
  for (to_point_minE_B.i_o = 0; to_point_minE_B.i_o < 5; to_point_minE_B.i_o++)
  {
    qrmanager->tau[to_point_minE_B.i_o] = 0.0;
  }

  qrmanager->minRowCol = 0;
  qrmanager->usedPivoting = false;
  to_point_minE_B.i_o = workingset->nWConstr[0];
  to_point_minE_B.idx_row = 0;
  if (workingset->nWConstr[0] > 0) {
    to_point_minE_B.idxEndIneq_j = (uint8_T)workingset->nWConstr[0];
    to_point_minE_B.d_tmp = (uint8_T)workingset->nVar;
    for (to_point_minE_B.idx_row = 0; to_point_minE_B.idx_row <
         to_point_minE_B.idxEndIneq_j; to_point_minE_B.idx_row++) {
      for (to_point_minE_B.idxStartIneq_j = 0; to_point_minE_B.idxStartIneq_j <
           to_point_minE_B.d_tmp; to_point_minE_B.idxStartIneq_j++) {
        qrmanager->QR[to_point_minE_B.idx_row + 5 *
          to_point_minE_B.idxStartIneq_j] = workingset->ATwset[5 *
          to_point_minE_B.idx_row + to_point_minE_B.idxStartIneq_j];
      }
    }

    to_point_minE_B.idx_row = to_point_ComputeNumDependentEq_(qrmanager,
      workingset->bwset, workingset->nWConstr[0], workingset->nVar);
    if (to_point_minE_B.idx_row > 0) {
      for (to_point_minE_B.idxStartIneq_j = 0; to_point_minE_B.idxStartIneq_j <
           to_point_minE_B.idxEndIneq_j; to_point_minE_B.idxStartIneq_j++) {
        to_point_minE_B.iy0_tmp_i = 5 * to_point_minE_B.idxStartIneq_j;
        memcpy(&qrmanager->QR[to_point_minE_B.iy0_tmp_i], &workingset->
               ATwset[to_point_minE_B.iy0_tmp_i], (uint32_T)
               ((to_point_minE_B.d_tmp + to_point_minE_B.iy0_tmp_i) -
                to_point_minE_B.iy0_tmp_i) * sizeof(real_T));
      }

      for (to_point_minE_B.idxStartIneq_j = 0; to_point_minE_B.idxStartIneq_j <
           to_point_minE_B.i_o; to_point_minE_B.idxStartIneq_j++) {
        qrmanager->jpvt[to_point_minE_B.idxStartIneq_j] = 1;
      }

      to_point_minE_B.idxEndIneq_j = workingset->nWConstr[0] + 1;
      if (to_point_minE_B.idxEndIneq_j <= to_point_minE_B.i_o) {
        memset(&qrmanager->jpvt[to_point_minE_B.idxEndIneq_j + -1], 0, (uint32_T)
               ((to_point_minE_B.i_o - to_point_minE_B.idxEndIneq_j) + 1) *
               sizeof(int32_T));
      }

      to_point_minE_factorQRE(qrmanager, workingset->nVar, workingset->nWConstr
        [0]);
      for (to_point_minE_B.idxStartIneq_j = 0; to_point_minE_B.idxStartIneq_j <
           to_point_minE_B.idx_row; to_point_minE_B.idxStartIneq_j++) {
        memspace->workspace_int[to_point_minE_B.idxStartIneq_j] =
          qrmanager->jpvt[(to_point_minE_B.i_o - to_point_minE_B.idx_row) +
          to_point_minE_B.idxStartIneq_j];
      }

      to_point_minE_countsort(memspace->workspace_int, to_point_minE_B.idx_row,
        memspace->workspace_sort, 1, workingset->nWConstr[0]);
      for (to_point_minE_B.i_o = to_point_minE_B.idx_row; to_point_minE_B.i_o >=
           1; to_point_minE_B.i_o--) {
        to_point_minE_removeEqConstr(workingset, memspace->
          workspace_int[to_point_minE_B.i_o - 1]);
      }
    }
  }

  if ((to_point_minE_B.idx_row != -1) && (workingset->nActiveConstr <= 5)) {
    to_point_m_RemoveDependentIneq_(workingset, qrmanager, memspace, 100.0);
    okWorkingSet = to_poin_feasibleX0ForWorkingSet(memspace->workspace_double,
      solution->xstar, workingset, qrmanager);
    guard1 = false;
    if (!okWorkingSet) {
      to_point_m_RemoveDependentIneq_(workingset, qrmanager, memspace, 1000.0);
      okWorkingSet = to_poin_feasibleX0ForWorkingSet(memspace->workspace_double,
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
        to_point_minE_B.constrViolation_d = to_poi_maxConstraintViolation_l
          (workingset, solution->xstar);
        if (to_point_minE_B.constrViolation_d > 1.0E-8) {
          solution->state = -2;
        }
      }
    }
  } else {
    solution->state = -3;
    to_point_minE_B.idx_row = workingset->nWConstr[0] + workingset->nWConstr[1];
    to_point_minE_B.idxStartIneq_j = to_point_minE_B.idx_row + 1;
    to_point_minE_B.idxEndIneq_j = workingset->nActiveConstr;
    for (to_point_minE_B.i_o = to_point_minE_B.idxStartIneq_j;
         to_point_minE_B.i_o <= to_point_minE_B.idxEndIneq_j;
         to_point_minE_B.i_o++) {
      workingset->isActiveConstr[(workingset->isActiveIdx[workingset->
        Wid[to_point_minE_B.i_o - 1] - 1] + workingset->
        Wlocalidx[to_point_minE_B.i_o - 1]) - 2] = false;
    }

    workingset->nWConstr[2] = 0;
    workingset->nWConstr[3] = 0;
    workingset->nWConstr[4] = 0;
    workingset->nActiveConstr = to_point_minE_B.idx_row;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_linearForm_(int32_T obj_nvar, real_T workspace[45],
  const real_T H[16], const real_T f[4], const real_T x[5])
{
  real_T c;
  int32_T b;
  int32_T d;
  int32_T e;
  int32_T i;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &f[0], (uint8_T)obj_nvar * sizeof(real_T));
  ix = 0;
  d = (obj_nvar - 1) * obj_nvar + 1;
  for (i = 1; obj_nvar < 0 ? i >= d : i <= d; i += obj_nvar) {
    c = 0.5 * x[ix];
    e = (i + obj_nvar) - 1;
    for (b = i; b <= e; b++) {
      tmp = b - i;
      workspace[tmp] += H[b - 1] * c;
    }

    ix++;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_minE_computeFval(const szdozZxcClCeUpd1TsA9nJF_to_po_T
  *obj, real_T workspace[45], const real_T H[16], const real_T f[4], const
  real_T x[5])
{
  real_T val;
  int32_T b;
  int32_T k;
  switch (obj->objtype) {
   case 5:
    val = x[obj->nvar - 1];
    break;

   case 3:
    to_point_minE_linearForm_(obj->nvar, workspace, H, f, x);
    val = 0.0;
    if (obj->nvar >= 1) {
      b = (uint8_T)obj->nvar;
      for (k = 0; k < b; k++) {
        val += x[k] * workspace[k];
      }
    }
    break;

   default:
    to_point_minE_linearForm_(obj->nvar, workspace, H, f, x);
    val = ((x[0] * workspace[0] + x[1] * workspace[1]) + x[2] * workspace[2]) +
      x[3] * workspace[3];
    break;
  }

  return val;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_xgemv(int32_T m, int32_T n, const real_T A[16],
  int32_T lda, const real_T x[5], real_T y[4])
{
  int32_T b;
  int32_T b_iy;
  int32_T c;
  int32_T d;
  int32_T ix;
  int32_T tmp;
  if ((m != 0) && (n != 0)) {
    memset(&y[0], 0, (uint8_T)m * sizeof(real_T));
    ix = 0;
    c = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= c : b_iy <= c; b_iy += lda) {
      d = (b_iy + m) - 1;
      for (b = b_iy; b <= d; b++) {
        tmp = b - b_iy;
        y[tmp] += A[b - 1] * x[ix];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_mi_computeGrad_StoreHx(szdozZxcClCeUpd1TsA9nJF_to_po_T *obj,
  const real_T H[16], const real_T f[4], const real_T x[5])
{
  int32_T b_ixlast;
  int32_T idx;
  switch (obj->objtype) {
   case 5:
    if (obj->nvar - 2 >= 0) {
      memset(&obj->grad[0], 0, (uint32_T)(obj->nvar - 1) * sizeof(real_T));
    }

    obj->grad[obj->nvar - 1] = obj->gammaScalar;
    break;

   case 3:
    to_point_minE_xgemv(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
    if ((uint8_T)obj->nvar - 1 >= 0) {
      memcpy(&obj->grad[0], &obj->Hx[0], (uint8_T)obj->nvar * sizeof(real_T));
    }

    if (obj->hasLinear && (obj->nvar >= 1)) {
      b_ixlast = obj->nvar - 1;
      for (idx = 0; idx <= b_ixlast; idx++) {
        obj->grad[idx] += f[idx];
      }
    }
    break;

   default:
    to_point_minE_xgemv(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
    b_ixlast = obj->nvar + 1;
    for (idx = b_ixlast; idx < 5; idx++) {
      obj->Hx[idx - 1] = x[idx - 1] * 0.0;
    }

    obj->grad[0] = obj->Hx[0];
    obj->grad[1] = obj->Hx[1];
    obj->grad[2] = obj->Hx[2];
    obj->grad[3] = obj->Hx[3];
    if (obj->hasLinear && (obj->nvar >= 1)) {
      b_ixlast = obj->nvar - 1;
      for (idx = 0; idx <= b_ixlast; idx++) {
        obj->grad[idx] += f[idx];
      }
    }
    break;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_mi_computeFval_ReuseHx(const
  szdozZxcClCeUpd1TsA9nJF_to_po_T *obj, real_T workspace[45], const real_T f[4],
  const real_T x[5])
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
        workspace[idx] = 0.5 * obj->Hx[idx] + f[idx];
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
        memcpy(&workspace[0], &f[0], (uint8_T)obj->nvar * sizeof(real_T));
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
static void to_point_minE_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T ads;
  real_T bds;
  real_T scale;
  to_point_minE_B.roe = *b;
  to_point_minE_B.absa = fabs(*a);
  to_point_minE_B.absb = fabs(*b);
  if (to_point_minE_B.absa > to_point_minE_B.absb) {
    to_point_minE_B.roe = *a;
  }

  scale = to_point_minE_B.absa + to_point_minE_B.absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *a = 0.0;
    *b = 0.0;
  } else {
    ads = to_point_minE_B.absa / scale;
    bds = to_point_minE_B.absb / scale;
    scale *= sqrt(ads * ads + bds * bds);
    if (to_point_minE_B.roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (to_point_minE_B.absa > to_point_minE_B.absb) {
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }

    *a = scale;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_deleteColMoveEnd(s78GCJvmtD1Rws5pzEtzVXF_to_po_T *obj,
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
      obj->QR[i + 5 * (idx - 1)] = obj->QR[(obj->ncols - 1) * 5 + i];
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
      idxRotGCol = (idx - 1) * 5;
      while (k >= idx) {
        QRk0 = k + idxRotGCol;
        to_point_minE_B.b_temp = obj->QR[QRk0];
        to_point_minE_xrotg(&obj->QR[QRk0 - 1], &to_point_minE_B.b_temp,
                            &to_point_minE_B.c_c, &to_point_minE_B.b_s);
        obj->QR[QRk0] = to_point_minE_B.b_temp;
        e_k = (k - 1) * 5;
        obj->QR[k + e_k] = 0.0;
        QRk0 = 5 * idx + k;
        b_temp_tmp = obj->ncols - idx;
        if (b_temp_tmp >= 1) {
          for (b_n = 0; b_n < b_temp_tmp; b_n++) {
            temp_tmp = b_n * 5 + QRk0;
            to_point_minE_B.b_temp_tmp = obj->QR[temp_tmp - 1];
            to_point_minE_B.b_temp = to_point_minE_B.b_temp_tmp *
              to_point_minE_B.c_c + obj->QR[temp_tmp] * to_point_minE_B.b_s;
            obj->QR[temp_tmp] = obj->QR[temp_tmp] * to_point_minE_B.c_c -
              to_point_minE_B.b_temp_tmp * to_point_minE_B.b_s;
            obj->QR[temp_tmp - 1] = to_point_minE_B.b_temp;
          }
        }

        b_n = obj->mrows;
        if (obj->mrows >= 1) {
          for (QRk0 = 0; QRk0 < b_n; QRk0++) {
            b_temp_tmp = e_k + QRk0;
            to_point_minE_B.b_temp_tmp = obj->Q[b_temp_tmp + 5];
            to_point_minE_B.b_temp = to_point_minE_B.b_temp_tmp *
              to_point_minE_B.b_s + obj->Q[b_temp_tmp] * to_point_minE_B.c_c;
            obj->Q[b_temp_tmp + 5] = to_point_minE_B.b_temp_tmp *
              to_point_minE_B.c_c - obj->Q[b_temp_tmp] * to_point_minE_B.b_s;
            obj->Q[b_temp_tmp] = to_point_minE_B.b_temp;
          }
        }

        k--;
      }

      for (k = idx + 1; k <= i; k++) {
        idxRotGCol = (k - 1) * 5;
        QRk0 = k + idxRotGCol;
        to_point_minE_B.b_temp = obj->QR[QRk0];
        to_point_minE_xrotg(&obj->QR[QRk0 - 1], &to_point_minE_B.b_temp,
                            &to_point_minE_B.c_c, &to_point_minE_B.b_s);
        obj->QR[QRk0] = to_point_minE_B.b_temp;
        QRk0 = k * 6;
        b_n = obj->ncols - k;
        if (b_n >= 1) {
          for (e_k = 0; e_k < b_n; e_k++) {
            b_temp_tmp = e_k * 5 + QRk0;
            to_point_minE_B.b_temp_tmp = obj->QR[b_temp_tmp - 1];
            to_point_minE_B.b_temp = to_point_minE_B.b_temp_tmp *
              to_point_minE_B.c_c + obj->QR[b_temp_tmp] * to_point_minE_B.b_s;
            obj->QR[b_temp_tmp] = obj->QR[b_temp_tmp] * to_point_minE_B.c_c -
              to_point_minE_B.b_temp_tmp * to_point_minE_B.b_s;
            obj->QR[b_temp_tmp - 1] = to_point_minE_B.b_temp;
          }
        }

        e_k = obj->mrows;
        if (obj->mrows >= 1) {
          for (QRk0 = 0; QRk0 < e_k; QRk0++) {
            b_n = idxRotGCol + QRk0;
            to_point_minE_B.b_temp_tmp = obj->Q[b_n + 5];
            to_point_minE_B.b_temp = to_point_minE_B.b_temp_tmp *
              to_point_minE_B.b_s + obj->Q[b_n] * to_point_minE_B.c_c;
            obj->Q[b_n + 5] = to_point_minE_B.b_temp_tmp * to_point_minE_B.c_c -
              obj->Q[b_n] * to_point_minE_B.b_s;
            obj->Q[b_n] = to_point_minE_B.b_temp;
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_fullColLDL2_(sY034dY3cx1IgSIMa0jtlQE_to_po_T *obj,
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
    LD_diagOffset = 6 * lastDiag;
    to_point_minE_B.obj_FMat = obj->FMat[LD_diagOffset];
    if (fabs(to_point_minE_B.obj_FMat) <= obj->regTol_) {
      to_point_minE_B.obj_FMat += REG_PRIMAL;
      obj->FMat[LD_diagOffset] = to_point_minE_B.obj_FMat;
    }

    to_point_minE_B.obj_FMat = -1.0 / to_point_minE_B.obj_FMat;
    subMatrixDim = (NColsRemain - lastDiag) - 2;
    for (b_k = 0; b_k <= subMatrixDim; b_k++) {
      obj->workspace_[b_k] = obj->FMat[(LD_diagOffset + b_k) + 1];
    }

    if (!(to_point_minE_B.obj_FMat == 0.0)) {
      jA = LD_diagOffset + 7;
      for (b_k = 0; b_k <= subMatrixDim; b_k++) {
        to_point_minE_B.temp_l = obj->workspace_[b_k];
        if (to_point_minE_B.temp_l != 0.0) {
          to_point_minE_B.temp_l *= to_point_minE_B.obj_FMat;
          b = subMatrixDim + jA;
          for (ijA = jA; ijA <= b; ijA++) {
            obj->FMat[ijA - 1] += obj->workspace_[ijA - jA] *
              to_point_minE_B.temp_l;
          }
        }

        jA += 5;
      }
    }

    to_point_minE_B.obj_FMat = 1.0 / obj->FMat[LD_diagOffset];
    b_k = LD_diagOffset + subMatrixDim;
    for (subMatrixDim = LD_diagOffset + 2; subMatrixDim <= b_k + 2; subMatrixDim
         ++) {
      obj->FMat[subMatrixDim - 1] *= to_point_minE_B.obj_FMat;
    }
  }

  lastDiag = (NColsRemain - 1) * 6;
  if (fabs(obj->FMat[lastDiag]) <= obj->regTol_) {
    obj->FMat[lastDiag] += REG_PRIMAL;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_xgemv_n(int32_T m, int32_T n, const real_T A[25],
  int32_T ia0, const real_T x[45], real_T y[5])
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
    b = (n - 1) * 5 + ia0;
    for (b_iy = ia0; b_iy <= b; b_iy += 5) {
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
static void to_point_minE_compute_deltax(const real_T H[16],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T
  *memspace, const s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager,
  sY034dY3cx1IgSIMa0jtlQE_to_po_T *cholmanager, const
  szdozZxcClCeUpd1TsA9nJF_to_po_T *objective)
{
  int32_T ar;
  int32_T br;
  int32_T e_ix;
  int32_T exitg1;
  int32_T h;
  int32_T i;
  int32_T ic;
  int32_T lastColC;
  int32_T mNull_tmp;
  to_point_minE_B.nVar_n = qrmanager->mrows - 1;
  mNull_tmp = qrmanager->mrows - qrmanager->ncols;
  if (mNull_tmp <= 0) {
    if (to_point_minE_B.nVar_n >= 0) {
      memset(&solution->searchDir[0], 0, (uint32_T)(to_point_minE_B.nVar_n + 1) *
             sizeof(real_T));
    }
  } else {
    for (to_point_minE_B.A_maxDiag_idx = 0; to_point_minE_B.A_maxDiag_idx <=
         to_point_minE_B.nVar_n; to_point_minE_B.A_maxDiag_idx++) {
      solution->searchDir[to_point_minE_B.A_maxDiag_idx] = -objective->
        grad[to_point_minE_B.A_maxDiag_idx];
    }

    if (qrmanager->ncols <= 0) {
      if (objective->objtype == 3) {
        to_point_minE_B.temp_d = 1.4901161193847656E-6 * (real_T)
          qrmanager->mrows;
        cholmanager->ndims = qrmanager->mrows;
        for (mNull_tmp = 0; mNull_tmp <= to_point_minE_B.nVar_n; mNull_tmp++) {
          to_point_minE_B.nullStartIdx = (to_point_minE_B.nVar_n + 1) *
            mNull_tmp;
          to_point_minE_B.nVars = 5 * mNull_tmp;
          for (to_point_minE_B.A_maxDiag_idx = 0; to_point_minE_B.A_maxDiag_idx <=
               to_point_minE_B.nVar_n; to_point_minE_B.A_maxDiag_idx++) {
            cholmanager->FMat[to_point_minE_B.nVars +
              to_point_minE_B.A_maxDiag_idx] = H[to_point_minE_B.A_maxDiag_idx +
              to_point_minE_B.nullStartIdx];
          }
        }

        if (qrmanager->mrows < 1) {
          to_point_minE_B.A_maxDiag_idx = -1;
        } else {
          to_point_minE_B.A_maxDiag_idx = 0;
          if (qrmanager->mrows > 1) {
            to_point_minE_B.smax_l = fabs(cholmanager->FMat[0]);
            for (mNull_tmp = 2; mNull_tmp <= to_point_minE_B.nVar_n + 1;
                 mNull_tmp++) {
              to_point_minE_B.s_d = fabs(cholmanager->FMat[(mNull_tmp - 1) * 6]);
              if (to_point_minE_B.s_d > to_point_minE_B.smax_l) {
                to_point_minE_B.A_maxDiag_idx = mNull_tmp - 1;
                to_point_minE_B.smax_l = to_point_minE_B.s_d;
              }
            }
          }
        }

        to_point_minE_B.smax_l = fabs(cholmanager->FMat[5 *
          to_point_minE_B.A_maxDiag_idx + to_point_minE_B.A_maxDiag_idx]) *
          2.2204460492503131E-16;
        to_point_minE_B.s_d = fabs(to_point_minE_B.temp_d);
        if (to_point_minE_B.smax_l >= to_point_minE_B.s_d) {
          cholmanager->regTol_ = to_point_minE_B.smax_l;
        } else {
          cholmanager->regTol_ = to_point_minE_B.s_d;
        }

        to_point_minE_fullColLDL2_(cholmanager, qrmanager->mrows,
          to_point_minE_B.temp_d);
        if (cholmanager->ConvexCheck) {
          mNull_tmp = 0;
          do {
            exitg1 = 0;
            if (mNull_tmp <= to_point_minE_B.nVar_n) {
              if (cholmanager->FMat[5 * mNull_tmp + mNull_tmp] <= 0.0) {
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
          to_point_minE_B.nVar_n = cholmanager->ndims - 1;
          if (cholmanager->ndims != 0) {
            for (mNull_tmp = 0; mNull_tmp <= to_point_minE_B.nVar_n; mNull_tmp++)
            {
              to_point_minE_B.nullStartIdx = mNull_tmp * 5 + mNull_tmp;
              to_point_minE_B.nVars = to_point_minE_B.nVar_n - mNull_tmp;
              for (to_point_minE_B.A_maxDiag_idx = 0;
                   to_point_minE_B.A_maxDiag_idx < to_point_minE_B.nVars;
                   to_point_minE_B.A_maxDiag_idx++) {
                to_point_minE_B.b_A_maxDiag_idx = (to_point_minE_B.A_maxDiag_idx
                  + mNull_tmp) + 1;
                solution->searchDir[to_point_minE_B.b_A_maxDiag_idx] -=
                  cholmanager->FMat[(to_point_minE_B.A_maxDiag_idx +
                                     to_point_minE_B.nullStartIdx) + 1] *
                  solution->searchDir[mNull_tmp];
              }
            }
          }

          to_point_minE_B.nVar_n = cholmanager->ndims;
          for (mNull_tmp = 0; mNull_tmp < to_point_minE_B.nVar_n; mNull_tmp++) {
            solution->searchDir[mNull_tmp] /= cholmanager->FMat[5 * mNull_tmp +
              mNull_tmp];
          }

          if (cholmanager->ndims != 0) {
            for (mNull_tmp = to_point_minE_B.nVar_n; mNull_tmp >= 1; mNull_tmp--)
            {
              to_point_minE_B.nullStartIdx = (mNull_tmp - 1) * 5;
              to_point_minE_B.temp_d = solution->searchDir[mNull_tmp - 1];
              for (to_point_minE_B.A_maxDiag_idx = to_point_minE_B.nVar_n;
                   to_point_minE_B.A_maxDiag_idx >= mNull_tmp + 1;
                   to_point_minE_B.A_maxDiag_idx--) {
                to_point_minE_B.temp_d -= cholmanager->FMat
                  [(to_point_minE_B.nullStartIdx + to_point_minE_B.A_maxDiag_idx)
                  - 1] * solution->searchDir[to_point_minE_B.A_maxDiag_idx - 1];
              }

              solution->searchDir[mNull_tmp - 1] = to_point_minE_B.temp_d;
            }
          }
        }
      }
    } else {
      to_point_minE_B.A_maxDiag_idx = 5 * qrmanager->ncols;
      to_point_minE_B.nullStartIdx = to_point_minE_B.A_maxDiag_idx + 1;
      if (objective->objtype == 5) {
        for (to_point_minE_B.nullStartIdx = 0; to_point_minE_B.nullStartIdx <
             mNull_tmp; to_point_minE_B.nullStartIdx++) {
          memspace->workspace_double[to_point_minE_B.nullStartIdx] =
            -qrmanager->Q[(qrmanager->ncols + to_point_minE_B.nullStartIdx) * 5
            + to_point_minE_B.nVar_n];
        }

        to_point_minE_xgemv_n(qrmanager->mrows, mNull_tmp, qrmanager->Q,
                              to_point_minE_B.A_maxDiag_idx + 1,
                              memspace->workspace_double, solution->searchDir);
      } else {
        if (objective->objtype == 3) {
          to_point_minE_B.nVars = qrmanager->mrows;
          if ((qrmanager->mrows != 0) && (mNull_tmp != 0)) {
            br = to_point_minE_B.A_maxDiag_idx;
            lastColC = (mNull_tmp - 1) * 9;
            for (to_point_minE_B.b_A_maxDiag_idx = 0;
                 to_point_minE_B.b_A_maxDiag_idx <= lastColC;
                 to_point_minE_B.b_A_maxDiag_idx += 9) {
              e_ix = to_point_minE_B.b_A_maxDiag_idx + to_point_minE_B.nVars;
              for (ic = to_point_minE_B.b_A_maxDiag_idx + 1; ic <= e_ix; ic++) {
                memspace->workspace_double[ic - 1] = 0.0;
              }
            }

            for (to_point_minE_B.b_A_maxDiag_idx = 0;
                 to_point_minE_B.b_A_maxDiag_idx <= lastColC;
                 to_point_minE_B.b_A_maxDiag_idx += 9) {
              ar = -1;
              h = br + to_point_minE_B.nVars;
              for (ic = br + 1; ic <= h; ic++) {
                i = to_point_minE_B.b_A_maxDiag_idx + to_point_minE_B.nVars;
                for (e_ix = to_point_minE_B.b_A_maxDiag_idx + 1; e_ix <= i; e_ix
                     ++) {
                  memspace->workspace_double[e_ix - 1] += H[(ar + e_ix) -
                    to_point_minE_B.b_A_maxDiag_idx] * qrmanager->Q[ic - 1];
                }

                ar += to_point_minE_B.nVars;
              }

              br += 5;
            }
          }

          if (mNull_tmp != 0) {
            br = (mNull_tmp - 1) * 5;
            for (to_point_minE_B.b_A_maxDiag_idx = 0;
                 to_point_minE_B.b_A_maxDiag_idx <= br;
                 to_point_minE_B.b_A_maxDiag_idx += 5) {
              e_ix = to_point_minE_B.b_A_maxDiag_idx + mNull_tmp;
              for (ic = to_point_minE_B.b_A_maxDiag_idx + 1; ic <= e_ix; ic++) {
                cholmanager->FMat[ic - 1] = 0.0;
              }
            }

            lastColC = -1;
            for (to_point_minE_B.b_A_maxDiag_idx = 0;
                 to_point_minE_B.b_A_maxDiag_idx <= br;
                 to_point_minE_B.b_A_maxDiag_idx += 5) {
              ar = to_point_minE_B.A_maxDiag_idx;
              h = to_point_minE_B.b_A_maxDiag_idx + mNull_tmp;
              for (ic = to_point_minE_B.b_A_maxDiag_idx + 1; ic <= h; ic++) {
                to_point_minE_B.temp_d = 0.0;
                for (e_ix = 0; e_ix < to_point_minE_B.nVars; e_ix++) {
                  to_point_minE_B.temp_d += memspace->workspace_double[(e_ix +
                    lastColC) + 1] * qrmanager->Q[e_ix + ar];
                }

                cholmanager->FMat[ic - 1] += to_point_minE_B.temp_d;
                ar += 5;
              }

              lastColC += 9;
            }
          }
        }

        to_point_minE_B.temp_d = 1.4901161193847656E-6 * (real_T)mNull_tmp;
        cholmanager->ndims = mNull_tmp;
        to_point_minE_B.b_A_maxDiag_idx = 0;
        if (mNull_tmp > 1) {
          to_point_minE_B.smax_l = fabs(cholmanager->FMat[0]);
          for (to_point_minE_B.nVars = 2; to_point_minE_B.nVars <= mNull_tmp;
               to_point_minE_B.nVars++) {
            to_point_minE_B.s_d = fabs(cholmanager->FMat[(to_point_minE_B.nVars
              - 1) * 6]);
            if (to_point_minE_B.s_d > to_point_minE_B.smax_l) {
              to_point_minE_B.b_A_maxDiag_idx = to_point_minE_B.nVars - 1;
              to_point_minE_B.smax_l = to_point_minE_B.s_d;
            }
          }
        }

        to_point_minE_B.smax_l = fabs(cholmanager->FMat[5 *
          to_point_minE_B.b_A_maxDiag_idx + to_point_minE_B.b_A_maxDiag_idx]) *
          2.2204460492503131E-16;
        if (to_point_minE_B.smax_l >= to_point_minE_B.temp_d) {
          cholmanager->regTol_ = to_point_minE_B.smax_l;
        } else {
          cholmanager->regTol_ = to_point_minE_B.temp_d;
        }

        to_point_minE_fullColLDL2_(cholmanager, mNull_tmp,
          to_point_minE_B.temp_d);
        if (cholmanager->ConvexCheck) {
          to_point_minE_B.nVars = 0;
          do {
            exitg1 = 0;
            if (to_point_minE_B.nVars <= mNull_tmp - 1) {
              if (cholmanager->FMat[5 * to_point_minE_B.nVars +
                  to_point_minE_B.nVars] <= 0.0) {
                cholmanager->info = -to_point_minE_B.nVars - 1;
                exitg1 = 1;
              } else {
                to_point_minE_B.nVars++;
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
            ic = ((mNull_tmp - 1) * 5 + to_point_minE_B.A_maxDiag_idx) + 1;
            for (to_point_minE_B.nVars = to_point_minE_B.nullStartIdx;
                 to_point_minE_B.nVars <= ic; to_point_minE_B.nVars += 5) {
              to_point_minE_B.temp_d = 0.0;
              e_ix = to_point_minE_B.nVars + to_point_minE_B.nVar_n;
              for (to_point_minE_B.b_A_maxDiag_idx = to_point_minE_B.nVars;
                   to_point_minE_B.b_A_maxDiag_idx <= e_ix;
                   to_point_minE_B.b_A_maxDiag_idx++) {
                to_point_minE_B.temp_d += qrmanager->
                  Q[to_point_minE_B.b_A_maxDiag_idx - 1] * objective->
                  grad[to_point_minE_B.b_A_maxDiag_idx - to_point_minE_B.nVars];
              }

              to_point_minE_B.b_A_maxDiag_idx = div_nde_s32_floor
                ((to_point_minE_B.nVars - to_point_minE_B.A_maxDiag_idx) - 1, 5);
              memspace->workspace_double[to_point_minE_B.b_A_maxDiag_idx] -=
                to_point_minE_B.temp_d;
            }
          }

          to_point_minE_B.nVars = cholmanager->ndims - 1;
          if (cholmanager->ndims != 0) {
            for (to_point_minE_B.nVar_n = 0; to_point_minE_B.nVar_n <=
                 to_point_minE_B.nVars; to_point_minE_B.nVar_n++) {
              to_point_minE_B.b_A_maxDiag_idx = to_point_minE_B.nVar_n * 5 +
                to_point_minE_B.nVar_n;
              ic = to_point_minE_B.nVars - to_point_minE_B.nVar_n;
              for (to_point_minE_B.nullStartIdx = 0;
                   to_point_minE_B.nullStartIdx < ic;
                   to_point_minE_B.nullStartIdx++) {
                e_ix = (to_point_minE_B.nullStartIdx + to_point_minE_B.nVar_n) +
                  1;
                memspace->workspace_double[e_ix] -= cholmanager->FMat
                  [(to_point_minE_B.nullStartIdx +
                    to_point_minE_B.b_A_maxDiag_idx) + 1] *
                  memspace->workspace_double[to_point_minE_B.nVar_n];
              }
            }
          }

          to_point_minE_B.nVars = cholmanager->ndims;
          for (to_point_minE_B.nVar_n = 0; to_point_minE_B.nVar_n <
               to_point_minE_B.nVars; to_point_minE_B.nVar_n++) {
            memspace->workspace_double[to_point_minE_B.nVar_n] /=
              cholmanager->FMat[5 * to_point_minE_B.nVar_n +
              to_point_minE_B.nVar_n];
          }

          if (cholmanager->ndims != 0) {
            for (to_point_minE_B.nVar_n = to_point_minE_B.nVars;
                 to_point_minE_B.nVar_n >= 1; to_point_minE_B.nVar_n--) {
              to_point_minE_B.b_A_maxDiag_idx = (to_point_minE_B.nVar_n - 1) * 5;
              to_point_minE_B.temp_d = memspace->
                workspace_double[to_point_minE_B.nVar_n - 1];
              for (to_point_minE_B.nullStartIdx = to_point_minE_B.nVars;
                   to_point_minE_B.nullStartIdx >= to_point_minE_B.nVar_n + 1;
                   to_point_minE_B.nullStartIdx--) {
                to_point_minE_B.temp_d -= cholmanager->FMat
                  [(to_point_minE_B.b_A_maxDiag_idx +
                    to_point_minE_B.nullStartIdx) - 1] *
                  memspace->workspace_double[to_point_minE_B.nullStartIdx - 1];
              }

              memspace->workspace_double[to_point_minE_B.nVar_n - 1] =
                to_point_minE_B.temp_d;
            }
          }

          to_point_minE_xgemv_n(qrmanager->mrows, mNull_tmp, qrmanager->Q,
                                to_point_minE_B.A_maxDiag_idx + 1,
                                memspace->workspace_double, solution->searchDir);
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static real_T to_point_minE_xnrm2_cn(int32_T n, const real_T x[5])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T b;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[0]);
    } else {
      scale = 3.3121686421112381E-170;
      b = (uint8_T)n;
      for (k = 0; k < b; k++) {
        absxk = fabs(x[k]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_ratiotest(const real_T solution_xstar[5], const real_T
  solution_searchDir[5], int32_T workingset_nVar, const real_T workingset_lb[5],
  const real_T workingset_ub[5], const int32_T workingset_indexLB[5], const
  int32_T workingset_indexUB[5], const int32_T workingset_sizes[5], const
  int32_T workingset_isActiveIdx[6], const boolean_T workingset_isActiveConstr[9],
  const int32_T workingset_nWConstr[5], real_T *toldelta, real_T *alpha,
  boolean_T *newBlocking, int32_T *constrType, int32_T *constrIdx)
{
  real_T ratio_tmp;
  real_T u0;
  int32_T b;
  int32_T idx;
  int32_T workingset_indexLB_0;
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  to_point_minE_B.p_max = 0.0;
  to_point_minE_B.denomTol = 2.2204460492503131E-13 * to_point_minE_xnrm2_cn
    (workingset_nVar, solution_searchDir);
  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    to_point_minE_B.phaseOneCorrectionX = solution_xstar[workingset_nVar - 1] *
      0.0;
    to_point_minE_B.phaseOneCorrectionP = solution_searchDir[workingset_nVar - 1]
      * 0.0;
    b = workingset_sizes[3];
    for (idx = 0; idx <= b - 2; idx++) {
      workingset_indexLB_0 = workingset_indexLB[idx];
      to_point_minE_B.pk_corrected = -solution_searchDir[workingset_indexLB_0 -
        1] - to_point_minE_B.phaseOneCorrectionP;
      if ((to_point_minE_B.pk_corrected > to_point_minE_B.denomTol) &&
          (!workingset_isActiveConstr[(workingset_isActiveIdx[3] + idx) - 1])) {
        ratio_tmp = -solution_xstar[workingset_indexLB_0 - 1] -
          workingset_lb[workingset_indexLB_0 - 1];
        to_point_minE_B.ratio = (ratio_tmp - *toldelta) -
          to_point_minE_B.phaseOneCorrectionX;
        u0 = fabs(to_point_minE_B.ratio);
        if ((!(u0 <= 1.0E-8 - to_point_minE_B.ratio)) && (!rtIsNaN(1.0E-8 -
              to_point_minE_B.ratio))) {
          u0 = 1.0E-8 - to_point_minE_B.ratio;
        }

        to_point_minE_B.ratio = u0 / to_point_minE_B.pk_corrected;
        if ((to_point_minE_B.ratio <= *alpha) && (fabs
             (to_point_minE_B.pk_corrected) > to_point_minE_B.p_max)) {
          *alpha = to_point_minE_B.ratio;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }

        to_point_minE_B.ratio = ratio_tmp - to_point_minE_B.phaseOneCorrectionX;
        u0 = fabs(to_point_minE_B.ratio);
        if ((!(u0 <= 1.0E-8 - to_point_minE_B.ratio)) && (!rtIsNaN(1.0E-8 -
              to_point_minE_B.ratio))) {
          u0 = 1.0E-8 - to_point_minE_B.ratio;
        }

        to_point_minE_B.ratio = u0 / to_point_minE_B.pk_corrected;
        if (to_point_minE_B.ratio < *alpha) {
          *alpha = to_point_minE_B.ratio;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
          to_point_minE_B.p_max = fabs(to_point_minE_B.pk_corrected);
        }
      }
    }

    idx = workingset_indexLB[workingset_sizes[3] - 1] - 1;
    to_point_minE_B.phaseOneCorrectionX = solution_searchDir[idx];
    if ((-to_point_minE_B.phaseOneCorrectionX > to_point_minE_B.denomTol) &&
        (!workingset_isActiveConstr[(workingset_isActiveIdx[3] +
          workingset_sizes[3]) - 2])) {
      ratio_tmp = -solution_xstar[idx] - workingset_lb[idx];
      to_point_minE_B.ratio = ratio_tmp - *toldelta;
      u0 = fabs(to_point_minE_B.ratio);
      if ((!(u0 <= 1.0E-8 - to_point_minE_B.ratio)) && (!rtIsNaN(1.0E-8 -
            to_point_minE_B.ratio))) {
        u0 = 1.0E-8 - to_point_minE_B.ratio;
      }

      to_point_minE_B.ratio = u0 / -to_point_minE_B.phaseOneCorrectionX;
      if ((to_point_minE_B.ratio <= *alpha) && (fabs
           (to_point_minE_B.phaseOneCorrectionX) > to_point_minE_B.p_max)) {
        *alpha = to_point_minE_B.ratio;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }

      u0 = fabs(ratio_tmp);
      if ((!(u0 <= 1.0E-8 - ratio_tmp)) && (!rtIsNaN(1.0E-8 - ratio_tmp))) {
        u0 = 1.0E-8 - ratio_tmp;
      }

      to_point_minE_B.ratio = u0 / -to_point_minE_B.phaseOneCorrectionX;
      if (to_point_minE_B.ratio < *alpha) {
        *alpha = to_point_minE_B.ratio;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
        to_point_minE_B.p_max = fabs(to_point_minE_B.phaseOneCorrectionX);
      }
    }
  }

  if (workingset_nWConstr[4] < workingset_sizes[4]) {
    to_point_minE_B.phaseOneCorrectionX = solution_xstar[workingset_nVar - 1] *
      0.0;
    to_point_minE_B.phaseOneCorrectionP = solution_searchDir[workingset_nVar - 1]
      * 0.0;
    b = (uint8_T)workingset_sizes[4];
    for (idx = 0; idx < b; idx++) {
      workingset_indexLB_0 = workingset_indexUB[idx];
      to_point_minE_B.pk_corrected = solution_searchDir[workingset_indexLB_0 - 1]
        - to_point_minE_B.phaseOneCorrectionP;
      if ((to_point_minE_B.pk_corrected > to_point_minE_B.denomTol) &&
          (!workingset_isActiveConstr[(workingset_isActiveIdx[4] + idx) - 1])) {
        ratio_tmp = solution_xstar[workingset_indexLB_0 - 1] -
          workingset_ub[workingset_indexLB_0 - 1];
        to_point_minE_B.ratio = (ratio_tmp - *toldelta) -
          to_point_minE_B.phaseOneCorrectionX;
        u0 = fabs(to_point_minE_B.ratio);
        if ((!(u0 <= 1.0E-8 - to_point_minE_B.ratio)) && (!rtIsNaN(1.0E-8 -
              to_point_minE_B.ratio))) {
          u0 = 1.0E-8 - to_point_minE_B.ratio;
        }

        to_point_minE_B.ratio = u0 / to_point_minE_B.pk_corrected;
        if ((to_point_minE_B.ratio <= *alpha) && (fabs
             (to_point_minE_B.pk_corrected) > to_point_minE_B.p_max)) {
          *alpha = to_point_minE_B.ratio;
          *constrType = 5;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }

        to_point_minE_B.ratio = ratio_tmp - to_point_minE_B.phaseOneCorrectionX;
        u0 = fabs(to_point_minE_B.ratio);
        if ((!(u0 <= 1.0E-8 - to_point_minE_B.ratio)) && (!rtIsNaN(1.0E-8 -
              to_point_minE_B.ratio))) {
          u0 = 1.0E-8 - to_point_minE_B.ratio;
        }

        to_point_minE_B.ratio = u0 / to_point_minE_B.pk_corrected;
        if (to_point_minE_B.ratio < *alpha) {
          *alpha = to_point_minE_B.ratio;
          *constrType = 5;
          *constrIdx = idx + 1;
          *newBlocking = true;
          to_point_minE_B.p_max = fabs(to_point_minE_B.pk_corrected);
        }
      }
    }
  }

  *toldelta += 6.608625846508183E-7;
  if (to_point_minE_B.p_max > 0.0) {
    to_point_minE_B.p_max = 6.608625846508183E-7 / to_point_minE_B.p_max;
    if (!(*alpha >= to_point_minE_B.p_max)) {
      *alpha = to_point_minE_B.p_max;
    }
  }

  *newBlocking = (((!*newBlocking) || (!(*alpha > 1.0))) && (*newBlocking));
  if (!(*alpha <= 1.0)) {
    *alpha = 1.0;
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_feasibleratiotest(const real_T solution_xstar[5],
  const real_T solution_searchDir[5], int32_T workingset_nVar, const real_T
  workingset_lb[5], const real_T workingset_ub[5], const int32_T
  workingset_indexLB[5], const int32_T workingset_indexUB[5], const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const boolean_T
  workingset_isActiveConstr[9], const int32_T workingset_nWConstr[5], boolean_T
  isPhaseOne, real_T *alpha, boolean_T *newBlocking, int32_T *constrType,
  int32_T *constrIdx)
{
  real_T ratio;
  real_T u0;
  int32_T b;
  int32_T idx;
  int32_T workingset_indexLB_0;
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  to_point_minE_B.denomTol_o = 2.2204460492503131E-13 * to_point_minE_xnrm2_cn
    (workingset_nVar, solution_searchDir);
  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    to_point_minE_B.phaseOneCorrectionX_b = solution_xstar[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    to_point_minE_B.phaseOneCorrectionP_n = solution_searchDir[workingset_nVar -
      1] * (real_T)isPhaseOne;
    b = workingset_sizes[3];
    for (idx = 0; idx <= b - 2; idx++) {
      workingset_indexLB_0 = workingset_indexLB[idx];
      to_point_minE_B.pk_corrected_b = -solution_searchDir[workingset_indexLB_0
        - 1] - to_point_minE_B.phaseOneCorrectionP_n;
      if ((to_point_minE_B.pk_corrected_b > to_point_minE_B.denomTol_o) &&
          (!workingset_isActiveConstr[(workingset_isActiveIdx[3] + idx) - 1])) {
        ratio = (-solution_xstar[workingset_indexLB_0 - 1] -
                 workingset_lb[workingset_indexLB_0 - 1]) -
          to_point_minE_B.phaseOneCorrectionX_b;
        u0 = fabs(ratio);
        if ((!(u0 <= 1.0E-8 - ratio)) && (!rtIsNaN(1.0E-8 - ratio))) {
          u0 = 1.0E-8 - ratio;
        }

        ratio = u0 / to_point_minE_B.pk_corrected_b;
        if (ratio < *alpha) {
          *alpha = ratio;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }
      }
    }

    b = workingset_indexLB[workingset_sizes[3] - 1] - 1;
    to_point_minE_B.phaseOneCorrectionX_b = -solution_searchDir[b];
    if ((to_point_minE_B.phaseOneCorrectionX_b > to_point_minE_B.denomTol_o) &&
        (!workingset_isActiveConstr[(workingset_isActiveIdx[3] +
          workingset_sizes[3]) - 2])) {
      ratio = -solution_xstar[b] - workingset_lb[b];
      u0 = fabs(ratio);
      if ((!(u0 <= 1.0E-8 - ratio)) && (!rtIsNaN(1.0E-8 - ratio))) {
        u0 = 1.0E-8 - ratio;
      }

      ratio = u0 / to_point_minE_B.phaseOneCorrectionX_b;
      if (ratio < *alpha) {
        *alpha = ratio;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }
    }
  }

  if (workingset_nWConstr[4] < workingset_sizes[4]) {
    to_point_minE_B.phaseOneCorrectionX_b = solution_xstar[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    to_point_minE_B.phaseOneCorrectionP_n = solution_searchDir[workingset_nVar -
      1] * (real_T)isPhaseOne;
    b = (uint8_T)workingset_sizes[4];
    for (idx = 0; idx < b; idx++) {
      workingset_indexLB_0 = workingset_indexUB[idx];
      to_point_minE_B.pk_corrected_b = solution_searchDir[workingset_indexLB_0 -
        1] - to_point_minE_B.phaseOneCorrectionP_n;
      if ((to_point_minE_B.pk_corrected_b > to_point_minE_B.denomTol_o) &&
          (!workingset_isActiveConstr[(workingset_isActiveIdx[4] + idx) - 1])) {
        ratio = (solution_xstar[workingset_indexLB_0 - 1] -
                 workingset_ub[workingset_indexLB_0 - 1]) -
          to_point_minE_B.phaseOneCorrectionX_b;
        u0 = fabs(ratio);
        if ((!(u0 <= 1.0E-8 - ratio)) && (!rtIsNaN(1.0E-8 - ratio))) {
          u0 = 1.0E-8 - ratio;
        }

        ratio = u0 / to_point_minE_B.pk_corrected_b;
        if (ratio < *alpha) {
          *alpha = ratio;
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
static void to_p_addBoundToActiveSetMatrix_(sTTULnc01OVJqZqpgkzM1HG_to_po_T *obj,
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
static void to_point_minE_compute_lambda(real_T workspace[45],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, const
  szdozZxcClCeUpd1TsA9nJF_to_po_T *objective, const
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager)
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
          idxQR = (qrmanager->ncols - 1) * 5 + qrmanager->mrows;
          while ((b_idx > qrmanager->mrows) && (fabs(qrmanager->QR[idxQR - 1]) >=
                  c)) {
            b_idx--;
            idxQR -= 5;
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
          idxQR = (b_idx - 1) * 5 + b_idx;
          while ((b_idx >= 1) && (fabs(qrmanager->QR[idxQR - 1]) >= c)) {
            b_idx--;
            idxQR -= 6;
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
        jjA = (qrmanager->ncols - 1) * 5 + 1;
        for (b_idx = 1; b_idx <= jjA; b_idx += 5) {
          c = 0.0;
          b_ix = (b_idx + qrmanager->mrows) - 1;
          for (idxQR = b_idx; idxQR <= b_ix; idxQR++) {
            c += qrmanager->Q[idxQR - 1] * objective->grad[idxQR - b_idx];
          }

          idxQR = div_nde_s32_floor(b_idx - 1, 5);
          workspace[idxQR] += c;
        }
      }

      for (b_idx = nActiveConstr_tmp_tmp; b_idx >= 1; b_idx--) {
        jjA = ((b_idx - 1) * 5 + b_idx) - 2;
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
static void to_point_minE_iterate(const real_T H[16], const real_T f[4],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T
  *memspace, sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset,
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager, sY034dY3cx1IgSIMa0jtlQE_to_po_T
  *cholmanager, szdozZxcClCeUpd1TsA9nJF_to_po_T *objective, real_T
  options_ObjectiveLimit, real_T options_StepTolerance, int32_T
  runTimeOptions_MaxIterations, real_T runTimeOptions_ProbRelTolFactor,
  boolean_T runTimeOptions_RemainFeasible)
{
  int32_T exitg1;
  boolean_T guard1;
  boolean_T newBlocking;
  boolean_T subProblemChanged;
  boolean_T updateFval;
  subProblemChanged = true;
  updateFval = true;
  to_point_minE_B.activeSetChangeID = 0;
  to_point_minE_B.TYPE = objective->objtype;
  to_point_minE_B.tolDelta = 6.7434957617430445E-7;
  to_point_minE_B.nVar = workingset->nVar;
  to_point_minE_B.globalActiveConstrIdx = 0;
  to_point_mi_computeGrad_StoreHx(objective, H, f, solution->xstar);
  solution->fstar = to_point_mi_computeFval_ReuseHx(objective,
    memspace->workspace_double, f, solution->xstar);
  if (solution->iterations < runTimeOptions_MaxIterations) {
    solution->state = -5;
  } else {
    solution->state = 0;
  }

  memset(&solution->lambda[0], 0, 9U * sizeof(real_T));
  do {
    exitg1 = 0;
    if (solution->state == -5) {
      guard1 = false;
      if (subProblemChanged) {
        switch (to_point_minE_B.activeSetChangeID) {
         case 1:
          to_point_minE_B.Qk0 = (workingset->nActiveConstr - 1) * 5;
          if (qrmanager->mrows <= qrmanager->ncols + 1) {
            qrmanager->minRowCol = qrmanager->mrows;
          } else {
            qrmanager->minRowCol = qrmanager->ncols + 1;
          }

          to_point_minE_B.iy0 = 5 * qrmanager->ncols;
          if (qrmanager->mrows != 0) {
            to_point_minE_B.iyend = to_point_minE_B.iy0 + qrmanager->mrows;
            if (to_point_minE_B.iy0 + 1 <= to_point_minE_B.iyend) {
              memset(&qrmanager->QR[to_point_minE_B.iy0], 0, (uint32_T)
                     (to_point_minE_B.iyend - to_point_minE_B.iy0) * sizeof
                     (real_T));
            }

            to_point_minE_B.l = (qrmanager->mrows - 1) * 5 + 1;
            for (to_point_minE_B.localActiveConstrIdx = 1;
                 to_point_minE_B.localActiveConstrIdx <= to_point_minE_B.l;
                 to_point_minE_B.localActiveConstrIdx += 5) {
              to_point_minE_B.normDelta = 0.0;
              to_point_minE_B.m = (to_point_minE_B.localActiveConstrIdx +
                                   qrmanager->mrows) - 1;
              for (to_point_minE_B.iyend = to_point_minE_B.localActiveConstrIdx;
                   to_point_minE_B.iyend <= to_point_minE_B.m;
                   to_point_minE_B.iyend++) {
                to_point_minE_B.normDelta += workingset->ATwset
                  [(to_point_minE_B.Qk0 + to_point_minE_B.iyend) -
                  to_point_minE_B.localActiveConstrIdx] * qrmanager->
                  Q[to_point_minE_B.iyend - 1];
              }

              to_point_minE_B.iyend = div_nde_s32_floor
                (to_point_minE_B.localActiveConstrIdx - 1, 5) +
                to_point_minE_B.iy0;
              qrmanager->QR[to_point_minE_B.iyend] += to_point_minE_B.normDelta;
            }
          }

          qrmanager->ncols++;
          qrmanager->jpvt[qrmanager->ncols - 1] = qrmanager->ncols;
          to_point_minE_B.iyend = qrmanager->mrows - 2;
          while (to_point_minE_B.iyend + 2 > qrmanager->ncols) {
            to_point_minE_B.localActiveConstrIdx = (qrmanager->ncols - 1) * 5 +
              to_point_minE_B.iyend;
            to_point_minE_B.temp = qrmanager->
              QR[to_point_minE_B.localActiveConstrIdx + 1];
            to_point_minE_xrotg(&qrmanager->
                                QR[to_point_minE_B.localActiveConstrIdx],
                                &to_point_minE_B.temp,
                                &to_point_minE_B.normDelta, &to_point_minE_B.s);
            qrmanager->QR[to_point_minE_B.localActiveConstrIdx + 1] =
              to_point_minE_B.temp;
            to_point_minE_B.Qk0 = 5 * to_point_minE_B.iyend;
            to_point_minE_B.iy0 = qrmanager->mrows;
            if (qrmanager->mrows >= 1) {
              for (to_point_minE_B.localActiveConstrIdx = 0;
                   to_point_minE_B.localActiveConstrIdx < to_point_minE_B.iy0;
                   to_point_minE_B.localActiveConstrIdx++) {
                to_point_minE_B.l = to_point_minE_B.Qk0 +
                  to_point_minE_B.localActiveConstrIdx;
                to_point_minE_B.temp_tmp = qrmanager->Q[to_point_minE_B.l + 5];
                to_point_minE_B.temp = to_point_minE_B.temp_tmp *
                  to_point_minE_B.s + qrmanager->Q[to_point_minE_B.l] *
                  to_point_minE_B.normDelta;
                qrmanager->Q[to_point_minE_B.l + 5] = to_point_minE_B.temp_tmp *
                  to_point_minE_B.normDelta - qrmanager->Q[to_point_minE_B.l] *
                  to_point_minE_B.s;
                qrmanager->Q[to_point_minE_B.l] = to_point_minE_B.temp;
              }
            }

            to_point_minE_B.iyend--;
          }
          break;

         case -1:
          to_point_minE_deleteColMoveEnd(qrmanager,
            to_point_minE_B.globalActiveConstrIdx);
          break;

         default:
          to_point_minE_factorQR(qrmanager, workingset->ATwset,
            to_point_minE_B.nVar, workingset->nActiveConstr);
          to_point_minE_computeQ_(qrmanager, qrmanager->mrows);
          break;
        }

        to_point_minE_compute_deltax(H, solution, memspace, qrmanager,
          cholmanager, objective);
        if (solution->state != -5) {
          exitg1 = 1;
        } else {
          to_point_minE_B.normDelta = to_point_minE_xnrm2_cn
            (to_point_minE_B.nVar, solution->searchDir);
          guard1 = true;
        }
      } else {
        to_point_minE_B.iyend = (uint8_T)to_point_minE_B.nVar;
        memset(&solution->searchDir[0], 0, (uint32_T)to_point_minE_B.iyend *
               sizeof(real_T));
        to_point_minE_B.normDelta = 0.0;
        guard1 = true;
      }

      if (guard1) {
        if ((!subProblemChanged) || (to_point_minE_B.normDelta <
             options_StepTolerance) || (workingset->nActiveConstr >=
             to_point_minE_B.nVar)) {
          to_point_minE_compute_lambda(memspace->workspace_double, solution,
            objective, qrmanager);
          if ((solution->state != -7) || (workingset->nActiveConstr >
               to_point_minE_B.nVar)) {
            to_point_minE_B.iyend = 0;
            to_point_minE_B.normDelta = 0.0 * runTimeOptions_ProbRelTolFactor *
              (real_T)(to_point_minE_B.TYPE != 5);
            to_point_minE_B.Qk0 = (workingset->nWConstr[0] +
              workingset->nWConstr[1]) + 1;
            to_point_minE_B.iy0 = workingset->nActiveConstr;
            for (to_point_minE_B.localActiveConstrIdx = to_point_minE_B.Qk0;
                 to_point_minE_B.localActiveConstrIdx <= to_point_minE_B.iy0;
                 to_point_minE_B.localActiveConstrIdx++) {
              to_point_minE_B.s = solution->
                lambda[to_point_minE_B.localActiveConstrIdx - 1];
              if (to_point_minE_B.s < to_point_minE_B.normDelta) {
                to_point_minE_B.normDelta = to_point_minE_B.s;
                to_point_minE_B.iyend = to_point_minE_B.localActiveConstrIdx;
              }
            }

            if (to_point_minE_B.iyend == 0) {
              solution->state = 1;
            } else {
              to_point_minE_B.activeSetChangeID = -1;
              to_point_minE_B.globalActiveConstrIdx = to_point_minE_B.iyend;
              subProblemChanged = true;
              to_point_minE_removeConstr(workingset, to_point_minE_B.iyend);
              if (to_point_minE_B.iyend < workingset->nActiveConstr + 1) {
                solution->lambda[to_point_minE_B.iyend - 1] = solution->
                  lambda[workingset->nActiveConstr];
              }

              solution->lambda[workingset->nActiveConstr] = 0.0;
            }
          } else {
            to_point_minE_B.iyend = workingset->nActiveConstr;
            to_point_minE_B.activeSetChangeID = 0;
            to_point_minE_B.globalActiveConstrIdx = workingset->nActiveConstr;
            subProblemChanged = true;
            to_point_minE_removeConstr(workingset, workingset->nActiveConstr);
            solution->lambda[to_point_minE_B.iyend - 1] = 0.0;
          }

          updateFval = false;
        } else {
          updateFval = (to_point_minE_B.TYPE == 5);
          if (updateFval || runTimeOptions_RemainFeasible) {
            to_point_minE_feasibleratiotest(solution->xstar, solution->searchDir,
              workingset->nVar, workingset->lb, workingset->ub,
              workingset->indexLB, workingset->indexUB, workingset->sizes,
              workingset->isActiveIdx, workingset->isActiveConstr,
              workingset->nWConstr, updateFval, &to_point_minE_B.normDelta,
              &newBlocking, &to_point_minE_B.iyend,
              &to_point_minE_B.localActiveConstrIdx);
          } else {
            to_point_minE_ratiotest(solution->xstar, solution->searchDir,
              workingset->nVar, workingset->lb, workingset->ub,
              workingset->indexLB, workingset->indexUB, workingset->sizes,
              workingset->isActiveIdx, workingset->isActiveConstr,
              workingset->nWConstr, &to_point_minE_B.tolDelta,
              &to_point_minE_B.normDelta, &newBlocking, &to_point_minE_B.iyend,
              &to_point_minE_B.localActiveConstrIdx);
          }

          if (newBlocking) {
            switch (to_point_minE_B.iyend) {
             case 3:
              workingset->nWConstr[2]++;
              workingset->isActiveConstr[(workingset->isActiveIdx[2] +
                to_point_minE_B.localActiveConstrIdx) - 2] = true;
              workingset->nActiveConstr++;
              workingset->Wid[workingset->nActiveConstr - 1] = 3;
              workingset->Wlocalidx[workingset->nActiveConstr - 1] =
                to_point_minE_B.localActiveConstrIdx;
              break;

             case 4:
              to_p_addBoundToActiveSetMatrix_(workingset, 4,
                to_point_minE_B.localActiveConstrIdx);
              break;

             default:
              to_p_addBoundToActiveSetMatrix_(workingset, 5,
                to_point_minE_B.localActiveConstrIdx);
              break;
            }

            to_point_minE_B.activeSetChangeID = 1;
          } else {
            if (objective->objtype == 5) {
              if (to_point_minE_xnrm2_cn(objective->nvar, solution->searchDir) >
                  100.0 * (real_T)objective->nvar * 1.4901161193847656E-8) {
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

          if (!(to_point_minE_B.normDelta == 0.0)) {
            for (to_point_minE_B.localActiveConstrIdx = 0;
                 to_point_minE_B.localActiveConstrIdx < to_point_minE_B.nVar;
                 to_point_minE_B.localActiveConstrIdx++) {
              solution->xstar[to_point_minE_B.localActiveConstrIdx] +=
                to_point_minE_B.normDelta * solution->
                searchDir[to_point_minE_B.localActiveConstrIdx];
            }
          }

          to_point_mi_computeGrad_StoreHx(objective, H, f, solution->xstar);
          updateFval = true;
        }

        solution->iterations++;
        if ((solution->iterations >= runTimeOptions_MaxIterations) &&
            ((solution->state != 1) || (objective->objtype == 5))) {
          solution->state = 0;
        }

        if (solution->iterations - solution->iterations / 50 * 50 == 0) {
          solution->maxConstr = to_poi_maxConstraintViolation_l(workingset,
            solution->xstar);
          to_point_minE_B.normDelta = solution->maxConstr;
          if (objective->objtype == 5) {
            to_point_minE_B.normDelta = solution->maxConstr - solution->
              xstar[objective->nvar - 1];
          }

          if (to_point_minE_B.normDelta > 1.0E-8) {
            to_point_minE_B.iyend = (uint8_T)objective->nvar;
            if (to_point_minE_B.iyend - 1 >= 0) {
              memcpy(&solution->searchDir[0], &solution->xstar[0], (uint32_T)
                     to_point_minE_B.iyend * sizeof(real_T));
            }

            newBlocking = to_poin_feasibleX0ForWorkingSet
              (memspace->workspace_double, solution->searchDir, workingset,
               qrmanager);
            if ((!newBlocking) && (solution->state != 0)) {
              solution->state = -2;
            }

            to_point_minE_B.activeSetChangeID = 0;
            to_point_minE_B.normDelta = to_poi_maxConstraintViolation_l
              (workingset, solution->searchDir);
            if (to_point_minE_B.normDelta < solution->maxConstr) {
              if (to_point_minE_B.iyend - 1 >= 0) {
                memcpy(&solution->xstar[0], &solution->searchDir[0], (uint32_T)
                       to_point_minE_B.iyend * sizeof(real_T));
              }

              solution->maxConstr = to_point_minE_B.normDelta;
            }
          }
        }

        if (updateFval) {
          solution->fstar = to_point_mi_computeFval_ReuseHx(objective,
            memspace->workspace_double, f, solution->xstar);
          if ((solution->fstar < options_ObjectiveLimit) && ((solution->state !=
                0) || (objective->objtype != 5))) {
            solution->state = 2;
          }
        }
      }
    } else {
      if (!updateFval) {
        solution->fstar = to_point_mi_computeFval_ReuseHx(objective,
          memspace->workspace_double, f, solution->xstar);
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_m_PresolveWorkingSet_h(sRQ09YwUNBScnorFf9oRpHD_to_po_T
  *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T *memspace,
  sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset, s78GCJvmtD1Rws5pzEtzVXF_to_po_T
  *qrmanager)
{
  boolean_T guard1;
  boolean_T okWorkingSet;
  solution->state = 82;
  to_point_minE_B.mWorkingFixed = workingset->nWConstr[0];
  to_point_minE_B.mTotalWorkingEq_tmp_tmp = workingset->nWConstr[0] +
    workingset->nWConstr[1];
  to_point_minE_B.idxStartIneq_e = 0;
  if (to_point_minE_B.mTotalWorkingEq_tmp_tmp > 0) {
    to_point_minE_B.c_tmp = (uint8_T)workingset->nVar;
    for (to_point_minE_B.idxStartIneq_e = 0; to_point_minE_B.idxStartIneq_e <
         to_point_minE_B.mTotalWorkingEq_tmp_tmp; to_point_minE_B.idxStartIneq_e
         ++) {
      for (to_point_minE_B.idxEndIneq_b = 0; to_point_minE_B.idxEndIneq_b <
           to_point_minE_B.c_tmp; to_point_minE_B.idxEndIneq_b++) {
        qrmanager->QR[to_point_minE_B.idxStartIneq_e + 5 *
          to_point_minE_B.idxEndIneq_b] = workingset->ATwset[5 *
          to_point_minE_B.idxStartIneq_e + to_point_minE_B.idxEndIneq_b];
      }
    }

    to_point_minE_B.idxStartIneq_e = to_point_ComputeNumDependentEq_(qrmanager,
      workingset->bwset, to_point_minE_B.mTotalWorkingEq_tmp_tmp,
      workingset->nVar);
    if (to_point_minE_B.idxStartIneq_e > 0) {
      for (to_point_minE_B.idxEndIneq_b = 0; to_point_minE_B.idxEndIneq_b <
           to_point_minE_B.mTotalWorkingEq_tmp_tmp; to_point_minE_B.idxEndIneq_b
           ++) {
        to_point_minE_B.iy0_tmp = 5 * to_point_minE_B.idxEndIneq_b;
        memcpy(&qrmanager->QR[to_point_minE_B.iy0_tmp], &workingset->
               ATwset[to_point_minE_B.iy0_tmp], (uint32_T)
               ((to_point_minE_B.c_tmp + to_point_minE_B.iy0_tmp) -
                to_point_minE_B.iy0_tmp) * sizeof(real_T));
      }

      for (to_point_minE_B.idxEndIneq_b = 0; to_point_minE_B.idxEndIneq_b <
           to_point_minE_B.mWorkingFixed; to_point_minE_B.idxEndIneq_b++) {
        qrmanager->jpvt[to_point_minE_B.idxEndIneq_b] = 1;
      }

      to_point_minE_B.idxEndIneq_b = workingset->nWConstr[0] + 1;
      if (to_point_minE_B.idxEndIneq_b <=
          to_point_minE_B.mTotalWorkingEq_tmp_tmp) {
        memset(&qrmanager->jpvt[to_point_minE_B.idxEndIneq_b + -1], 0, (uint32_T)
               ((to_point_minE_B.mTotalWorkingEq_tmp_tmp -
                 to_point_minE_B.idxEndIneq_b) + 1) * sizeof(int32_T));
      }

      to_point_minE_factorQRE(qrmanager, workingset->nVar,
        to_point_minE_B.mTotalWorkingEq_tmp_tmp);
      for (to_point_minE_B.idxEndIneq_b = 0; to_point_minE_B.idxEndIneq_b <
           to_point_minE_B.idxStartIneq_e; to_point_minE_B.idxEndIneq_b++) {
        memspace->workspace_int[to_point_minE_B.idxEndIneq_b] = qrmanager->jpvt
          [(to_point_minE_B.mTotalWorkingEq_tmp_tmp -
            to_point_minE_B.idxStartIneq_e) + to_point_minE_B.idxEndIneq_b];
      }

      to_point_minE_countsort(memspace->workspace_int,
        to_point_minE_B.idxStartIneq_e, memspace->workspace_sort, 1,
        to_point_minE_B.mTotalWorkingEq_tmp_tmp);
      for (to_point_minE_B.mTotalWorkingEq_tmp_tmp =
           to_point_minE_B.idxStartIneq_e;
           to_point_minE_B.mTotalWorkingEq_tmp_tmp >= 1;
           to_point_minE_B.mTotalWorkingEq_tmp_tmp--) {
        to_point_minE_removeEqConstr(workingset, memspace->
          workspace_int[to_point_minE_B.mTotalWorkingEq_tmp_tmp - 1]);
      }
    }
  }

  if ((to_point_minE_B.idxStartIneq_e != -1) && (workingset->nActiveConstr <= 5))
  {
    to_point_m_RemoveDependentIneq_(workingset, qrmanager, memspace, 100.0);
    okWorkingSet = to_poin_feasibleX0ForWorkingSet(memspace->workspace_double,
      solution->xstar, workingset, qrmanager);
    guard1 = false;
    if (!okWorkingSet) {
      to_point_m_RemoveDependentIneq_(workingset, qrmanager, memspace, 1000.0);
      okWorkingSet = to_poin_feasibleX0ForWorkingSet(memspace->workspace_double,
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
        to_point_minE_B.constrViolation = to_poi_maxConstraintViolation_l
          (workingset, solution->xstar);
        if (to_point_minE_B.constrViolation > 1.0E-8) {
          solution->state = -2;
        }
      }
    }
  } else {
    solution->state = -3;
    to_point_minE_B.idxStartIneq_e = (workingset->nWConstr[0] +
      workingset->nWConstr[1]) + 1;
    to_point_minE_B.idxEndIneq_b = workingset->nActiveConstr;
    for (to_point_minE_B.mTotalWorkingEq_tmp_tmp =
         to_point_minE_B.idxStartIneq_e; to_point_minE_B.mTotalWorkingEq_tmp_tmp
         <= to_point_minE_B.idxEndIneq_b;
         to_point_minE_B.mTotalWorkingEq_tmp_tmp++) {
      workingset->isActiveConstr[(workingset->isActiveIdx[workingset->
        Wid[to_point_minE_B.mTotalWorkingEq_tmp_tmp - 1] - 1] +
        workingset->Wlocalidx[to_point_minE_B.mTotalWorkingEq_tmp_tmp - 1]) - 2]
        = false;
    }

    workingset->nWConstr[2] = 0;
    workingset->nWConstr[3] = 0;
    workingset->nWConstr[4] = 0;
    workingset->nActiveConstr = workingset->nWConstr[0] + workingset->nWConstr[1];
  }
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_m_computeFirstOrderOpt(sRQ09YwUNBScnorFf9oRpHD_to_po_T
  *solution, const szdozZxcClCeUpd1TsA9nJF_to_po_T *objective, int32_T
  workingset_nVar, const real_T workingset_ATwset[45], int32_T
  workingset_nActiveConstr, real_T workspace[45])
{
  real_T abs_workspace_i;
  real_T infNorm;
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

  infNorm = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= (uint8_T)workingset_nVar - 1)) {
    abs_workspace_i = fabs(workspace[k]);
    if (rtIsNaN(abs_workspace_i)) {
      infNorm = (rtNaN);
      exitg1 = true;
    } else {
      if (!(infNorm >= abs_workspace_i)) {
        infNorm = abs_workspace_i;
      }

      k++;
    }
  }

  solution->firstorderopt = infNorm;
}

/* Function for MATLAB Function: '<Root>/control' */
static void to_point_minE_driver(const real_T H[16], const real_T f[4],
  sRQ09YwUNBScnorFf9oRpHD_to_po_T *solution, sJ3M3ABZDNagg0am8RHBkvE_to_po_T
  *memspace, sTTULnc01OVJqZqpgkzM1HG_to_po_T *workingset,
  sY034dY3cx1IgSIMa0jtlQE_to_po_T *cholmanager, int32_T
  runTimeOptions_MaxIterations, real_T runTimeOptions_ProbRelTolFactor,
  s78GCJvmtD1Rws5pzEtzVXF_to_po_T *qrmanager, szdozZxcClCeUpd1TsA9nJF_to_po_T
  *objective)
{
  boolean_T b_bool;
  static const char_T j_SolverName[8] = { 'q', 'u', 'a', 'd', 'p', 'r', 'o', 'g'
  };

  static const char_T l[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
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
  for (to_point_minE_B.i_b = 0; to_point_minE_B.i_b < 5; to_point_minE_B.i_b++)
  {
    objective->grad[to_point_minE_B.i_b] = 0.0;
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
  to_point_minE_B.b_mConstr_tmp = workingset->nVar;
  to_point_minE_B.idxStartIneq = (uint8_T)workingset->sizes[0];
  for (to_point_minE_B.i_b = 0; to_point_minE_B.i_b <
       to_point_minE_B.idxStartIneq; to_point_minE_B.i_b++) {
    solution->xstar[workingset->indexFixed[to_point_minE_B.i_b] - 1] =
      workingset->ub[workingset->indexFixed[to_point_minE_B.i_b] - 1];
  }

  to_point_minE_B.idxStartIneq = (uint8_T)workingset->sizes[3];
  for (to_point_minE_B.i_b = 0; to_point_minE_B.i_b <
       to_point_minE_B.idxStartIneq; to_point_minE_B.i_b++) {
    if (workingset->isActiveConstr[(workingset->isActiveIdx[3] +
         to_point_minE_B.i_b) - 1]) {
      solution->xstar[workingset->indexLB[to_point_minE_B.i_b] - 1] =
        -workingset->lb[workingset->indexLB[to_point_minE_B.i_b] - 1];
    }
  }

  to_point_minE_B.idxStartIneq = (uint8_T)workingset->sizes[4];
  for (to_point_minE_B.i_b = 0; to_point_minE_B.i_b <
       to_point_minE_B.idxStartIneq; to_point_minE_B.i_b++) {
    if (workingset->isActiveConstr[(workingset->isActiveIdx[4] +
         to_point_minE_B.i_b) - 1]) {
      solution->xstar[workingset->indexUB[to_point_minE_B.i_b] - 1] =
        workingset->ub[workingset->indexUB[to_point_minE_B.i_b] - 1];
    }
  }

  to_point_min_PresolveWorkingSet(solution, memspace, workingset, qrmanager);
  for (to_point_minE_B.i_b = 0; to_point_minE_B.i_b < 8; to_point_minE_B.i_b++)
  {
    to_point_minE_B.options.SolverName[to_point_minE_B.i_b] =
      j_SolverName[to_point_minE_B.i_b];
  }

  if (solution->state >= 0) {
    solution->iterations = 0;
    solution->maxConstr = to_poi_maxConstraintViolation_l(workingset,
      solution->xstar);
    guard1 = false;
    if (solution->maxConstr > 1.0E-8) {
      solution->xstar[4] = solution->maxConstr + 1.0;
      to_point_minE_B.b_workingset = *workingset;
      to_point_minE_setProblemType(&to_point_minE_B.b_workingset, 1);
      to_point_minE_B.idxStartIneq = (to_point_minE_B.b_workingset.nWConstr[0] +
        to_point_minE_B.b_workingset.nWConstr[1]) + 1;
      to_point_minE_B.idxEndIneq = to_point_minE_B.b_workingset.nActiveConstr;
      for (to_point_minE_B.i_b = to_point_minE_B.idxStartIneq;
           to_point_minE_B.i_b <= to_point_minE_B.idxEndIneq;
           to_point_minE_B.i_b++) {
        to_point_minE_B.b_workingset.isActiveConstr
          [(to_point_minE_B.b_workingset.isActiveIdx[to_point_minE_B.b_workingset.Wid
            [to_point_minE_B.i_b - 1] - 1] +
            to_point_minE_B.b_workingset.Wlocalidx[to_point_minE_B.i_b - 1]) - 2]
          = false;
      }

      to_point_minE_B.b_workingset.nWConstr[2] = 0;
      to_point_minE_B.b_workingset.nWConstr[3] = 0;
      to_point_minE_B.b_workingset.nWConstr[4] = 0;
      to_point_minE_B.b_workingset.nActiveConstr =
        to_point_minE_B.b_workingset.nWConstr[0] +
        to_point_minE_B.b_workingset.nWConstr[1];
      objective->prev_objtype = 3;
      objective->prev_nvar = 4;
      objective->prev_hasLinear = true;
      objective->objtype = 5;
      objective->nvar = 5;
      objective->gammaScalar = 1.0;
      objective->hasLinear = true;
      solution->fstar = to_point_minE_computeFval(objective,
        memspace->workspace_double, H, f, solution->xstar);
      solution->state = 5;
      to_point_minE_iterate(H, f, solution, memspace,
                            &to_point_minE_B.b_workingset, qrmanager,
                            cholmanager, objective, 1.0E-8,
                            1.4901161193847657E-10, runTimeOptions_MaxIterations,
                            runTimeOptions_ProbRelTolFactor, true);
      if (to_point_minE_B.b_workingset.isActiveConstr
          [(to_point_minE_B.b_workingset.isActiveIdx[3] +
            to_point_minE_B.b_workingset.sizes[3]) - 2]) {
        to_point_minE_B.i_b = to_point_minE_B.b_workingset.sizes[0];
        exitg1 = false;
        while ((!exitg1) && (to_point_minE_B.i_b + 1 <=
                             to_point_minE_B.b_workingset.nActiveConstr)) {
          if ((to_point_minE_B.b_workingset.Wid[to_point_minE_B.i_b] == 4) &&
              (to_point_minE_B.b_workingset.Wlocalidx[to_point_minE_B.i_b] ==
               to_point_minE_B.b_workingset.sizes[3])) {
            to_point_minE_removeConstr(&to_point_minE_B.b_workingset,
              to_point_minE_B.i_b + 1);
            exitg1 = true;
          } else {
            to_point_minE_B.i_b++;
          }
        }
      }

      to_point_minE_B.i_b = to_point_minE_B.b_workingset.nActiveConstr;
      while ((to_point_minE_B.i_b > to_point_minE_B.b_workingset.sizes[0]) &&
             (to_point_minE_B.i_b > workingset->nVar)) {
        to_point_minE_removeConstr(&to_point_minE_B.b_workingset,
          to_point_minE_B.i_b);
        to_point_minE_B.i_b--;
      }

      solution->maxConstr = solution->xstar[4];
      to_point_minE_setProblemType(&to_point_minE_B.b_workingset, 3);
      objective->objtype = objective->prev_objtype;
      objective->nvar = objective->prev_nvar;
      objective->hasLinear = objective->prev_hasLinear;
      *workingset = to_point_minE_B.b_workingset;
      if (solution->state == 0) {
      } else {
        solution->maxConstr = to_poi_maxConstraintViolation_l
          (&to_point_minE_B.b_workingset, solution->xstar);
        if (solution->maxConstr > 1.0E-8) {
          memset(&solution->lambda[0], 0, 9U * sizeof(real_T));
          solution->fstar = to_point_minE_computeFval(objective,
            memspace->workspace_double, H, f, solution->xstar);
          solution->state = -2;
        } else {
          if (solution->maxConstr > 0.0) {
            to_point_minE_B.i_b = (uint8_T)to_point_minE_B.b_mConstr_tmp;
            if (to_point_minE_B.i_b - 1 >= 0) {
              memcpy(&solution->searchDir[0], &solution->xstar[0], (uint32_T)
                     to_point_minE_B.i_b * sizeof(real_T));
            }

            to_point_m_PresolveWorkingSet_h(solution, memspace,
              &to_point_minE_B.b_workingset, qrmanager);
            *workingset = to_point_minE_B.b_workingset;
            to_point_minE_B.maxConstr_new = to_poi_maxConstraintViolation_l
              (workingset, solution->xstar);
            if (to_point_minE_B.maxConstr_new >= solution->maxConstr) {
              solution->maxConstr = to_point_minE_B.maxConstr_new;
              if (to_point_minE_B.i_b - 1 >= 0) {
                memcpy(&solution->xstar[0], &solution->searchDir[0], (uint32_T)
                       to_point_minE_B.i_b * sizeof(real_T));
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
      to_point_minE_iterate(H, f, solution, memspace, workingset, qrmanager,
                            cholmanager, objective, -1.0E+20, 1.0E-8,
                            runTimeOptions_MaxIterations,
                            runTimeOptions_ProbRelTolFactor, true);
      b_bool = false;
      to_point_minE_B.i_b = 0;
      do {
        exitg2 = 0;
        if (to_point_minE_B.i_b < 8) {
          if (l[(int32_T)to_point_minE_B.options.SolverName[to_point_minE_B.i_b]]
              != l[(int32_T)j_SolverName[to_point_minE_B.i_b]]) {
            exitg2 = 1;
          } else {
            to_point_minE_B.i_b++;
          }
        } else {
          b_bool = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (b_bool && (solution->state != -6)) {
        solution->maxConstr = to_poi_maxConstraintViolation_l(workingset,
          solution->xstar);
        to_point_m_computeFirstOrderOpt(solution, objective, workingset->nVar,
          workingset->ATwset, workingset->nActiveConstr,
          memspace->workspace_double);
        while ((solution->iterations < runTimeOptions_MaxIterations) &&
               ((solution->state == -7) || ((solution->state == 1) &&
                 ((solution->maxConstr > 1.0E-8) || (solution->firstorderopt >
                   1.0E-8 * runTimeOptions_ProbRelTolFactor))))) {
          to_poin_feasibleX0ForWorkingSet(memspace->workspace_double,
            solution->xstar, workingset, qrmanager);
          to_point_m_PresolveWorkingSet_h(solution, memspace, workingset,
            qrmanager);
          to_point_minE_B.idxStartIneq = workingset->probType;
          to_point_minE_B.b_mConstr_tmp = workingset->nVar;
          solution->xstar[4] = solution->maxConstr + 1.0;
          if (workingset->probType == 3) {
            to_point_minE_B.i_b = 1;
          } else {
            to_point_minE_B.i_b = 4;
          }

          to_point_minE_setProblemType(workingset, to_point_minE_B.i_b);
          to_point_minE_B.idxEndIneq = workingset->nWConstr[0] +
            workingset->nWConstr[1];
          to_point_minE_B.b_idxStartIneq = to_point_minE_B.idxEndIneq + 1;
          to_point_minE_B.b_idxEndIneq = workingset->nActiveConstr;
          for (to_point_minE_B.i_b = to_point_minE_B.b_idxStartIneq;
               to_point_minE_B.i_b <= to_point_minE_B.b_idxEndIneq;
               to_point_minE_B.i_b++) {
            workingset->isActiveConstr[(workingset->isActiveIdx[workingset->
              Wid[to_point_minE_B.i_b - 1] - 1] + workingset->
              Wlocalidx[to_point_minE_B.i_b - 1]) - 2] = false;
          }

          workingset->nWConstr[2] = 0;
          workingset->nWConstr[3] = 0;
          workingset->nWConstr[4] = 0;
          workingset->nActiveConstr = to_point_minE_B.idxEndIneq;
          objective->prev_objtype = objective->objtype;
          objective->prev_nvar = objective->nvar;
          objective->prev_hasLinear = objective->hasLinear;
          objective->objtype = 5;
          objective->nvar = 5;
          objective->gammaScalar = 1.0;
          objective->hasLinear = true;
          solution->fstar = to_point_minE_computeFval(objective,
            memspace->workspace_double, H, f, solution->xstar);
          solution->state = 5;
          to_point_minE_iterate(H, f, solution, memspace, workingset, qrmanager,
                                cholmanager, objective, 1.0E-8,
                                1.4901161193847657E-10,
                                runTimeOptions_MaxIterations,
                                runTimeOptions_ProbRelTolFactor, false);
          if (workingset->isActiveConstr[(workingset->isActiveIdx[3] +
               workingset->sizes[3]) - 2]) {
            to_point_minE_B.i_b = workingset->sizes[0];
            exitg1 = false;
            while ((!exitg1) && (to_point_minE_B.i_b + 1 <=
                                 workingset->nActiveConstr)) {
              if ((workingset->Wid[to_point_minE_B.i_b] == 4) &&
                  (workingset->Wlocalidx[to_point_minE_B.i_b] ==
                   workingset->sizes[3])) {
                to_point_minE_removeConstr(workingset, to_point_minE_B.i_b + 1);
                exitg1 = true;
              } else {
                to_point_minE_B.i_b++;
              }
            }
          }

          to_point_minE_B.i_b = workingset->nActiveConstr;
          while ((to_point_minE_B.i_b > workingset->sizes[0]) &&
                 (to_point_minE_B.i_b > to_point_minE_B.b_mConstr_tmp)) {
            to_point_minE_removeConstr(workingset, to_point_minE_B.i_b);
            to_point_minE_B.i_b--;
          }

          solution->maxConstr = solution->xstar[4];
          to_point_minE_setProblemType(workingset, to_point_minE_B.idxStartIneq);
          objective->objtype = objective->prev_objtype;
          objective->nvar = objective->prev_nvar;
          objective->hasLinear = objective->prev_hasLinear;
          to_point_minE_iterate(H, f, solution, memspace, workingset, qrmanager,
                                cholmanager, objective, -1.0E+20, 1.0E-8,
                                runTimeOptions_MaxIterations,
                                runTimeOptions_ProbRelTolFactor, false);
          solution->maxConstr = to_poi_maxConstraintViolation_l(workingset,
            solution->xstar);
          to_point_m_computeFirstOrderOpt(solution, objective, workingset->nVar,
            workingset->ATwset, workingset->nActiveConstr,
            memspace->workspace_double);
        }
      }
    }
  }
}

/* Model step function */
void to_point_minE_step(void)
{
  static const real_T h[16] = { 0.001, 0.0, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0,
    0.0, 0.001, 0.0, 0.0, 0.0, 0.0, 0.001 };

  boolean_T exitg1;
  boolean_T guard1;

  /* Reset subsysRan breadcrumbs */
  srClearBC(to_point_minE_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(to_point_minE_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(to_point_minE_DW.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(to_point_minE_DW.IfActionSubsystem3_SubsysRanBC);

  /* S-Function (rpi_sfun_xboxone): '<S6>/S-Function Builder' */
  rpi_sfun_xboxone_Outputs_wrapper(&to_point_minE_B.SFunctionBuilder_o1[0],
    &to_point_minE_B.SFunctionBuilder_o2[0],
    &to_point_minE_P.SFunctionBuilder_P1, 1,
    &to_point_minE_P.SFunctionBuilder_P2, 1);

  /* S-Function (rpi_sfun_iosocket): '<S11>/S-Function Builder' incorporates:
   *  Constant: '<S5>/Constant5'
   */
  rpi_sfun_iosocket_Outputs_wrapper(&to_point_minE_B.SFunctionBuilder[0],
    &to_point_minE_DW.SFunctionBuilder_DSTATE,
    &to_point_minE_P.SFunctionBuilder_P1_n, 1,
    &to_point_minE_P.SFunctionBuilder_P2_h, 1,
    &to_point_minE_P.SFunctionBuilder_P3, 1,
    &to_point_minE_P.SFunctionBuilder_P4, 1,
    &to_point_minE_P.SFunctionBuilder_P5, 1,
    &to_point_minE_P.SFunctionBuilder_P6, 1);

  /* Stop: '<Root>/Stop Simulation' */
  if (to_point_minE_B.SFunctionBuilder_o2[1] != 0.0) {
    rtmSetStopRequested(to_point_minE_M, 1);
  }

  /* End of Stop: '<Root>/Stop Simulation' */
  /* Reshape: '<S5>/Reshape' */
  memcpy(&to_point_minE_B.Reshape[0], &to_point_minE_B.SFunctionBuilder[5], 9U *
         sizeof(real_T));

  /* MATLABSystem: '<S5>/Coordinate Transformation Conversion' incorporates:
   *  Reshape: '<S5>/Reshape'
   */
  to_point_minE_B.cySq = to_point_minE_B.Reshape[0] * to_point_minE_B.Reshape[0]
    + to_point_minE_B.Reshape[1] * to_point_minE_B.Reshape[1];
  to_point_minE_B.cy = sqrt(to_point_minE_B.cySq);
  to_point_minE_B.CoordinateTransformationConvers[0] = rt_atan2d_snf
    (to_point_minE_B.Reshape[5], to_point_minE_B.Reshape[8]);
  to_point_minE_B.CoordinateTransformationConvers[1] = rt_atan2d_snf
    (-to_point_minE_B.Reshape[2], to_point_minE_B.cy);
  to_point_minE_B.CoordinateTransformationConvers[2] = rt_atan2d_snf
    (to_point_minE_B.Reshape[1], to_point_minE_B.Reshape[0]);
  if (to_point_minE_B.cySq < 2.2204460492503131E-15) {
    to_point_minE_B.trueCount = 0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 1; to_point_minE_B.i++) {
      to_point_minE_B.trueCount++;
    }

    to_point_minE_B.idxFillStart = to_point_minE_B.trueCount;
    to_point_minE_B.trueCount = 0;
    to_point_minE_B.csz_idx_2 = 0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 1; to_point_minE_B.i++) {
      to_point_minE_B.csz_idx_2 = to_point_minE_B.trueCount + 1;
      to_point_minE_B.trueCount++;
    }

    if (to_point_minE_B.csz_idx_2 - 1 >= 0) {
      to_point_minE_B.y_data = -to_point_minE_B.Reshape[7];
    }

    to_point_minE_B.trueCount = 0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 1; to_point_minE_B.i++) {
      to_point_minE_B.trueCount++;
    }

    if (to_point_minE_B.csz_idx_2 > to_point_minE_B.trueCount) {
      to_point_minE_B.csz_idx_2 = 0;
    }

    to_point_minE_B.i = to_point_minE_B.csz_idx_2 - 1;
    for (to_point_minE_B.trueCount = 0; to_point_minE_B.trueCount <=
         to_point_minE_B.i; to_point_minE_B.trueCount++) {
      to_point_minE_B.varargin_1_data_tmp = 0;
      to_point_minE_B.varargin_1_data = rt_atan2d_snf(to_point_minE_B.y_data,
        to_point_minE_B.Reshape[4]);
    }

    to_point_minE_B.trueCount = 0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 1; to_point_minE_B.i++) {
      to_point_minE_B.trueCount++;
    }

    to_point_minE_B.y_size[0] = 1;
    to_point_minE_B.y_size[1] = 1;
    to_point_minE_B.y_size[2] = to_point_minE_B.trueCount;
    if (to_point_minE_B.trueCount - 1 >= 0) {
      to_point_minE_B.y_data = -to_point_minE_B.Reshape[2];
    }

    if (to_point_minE_B.idxFillStart == to_point_minE_B.trueCount) {
      to_point_minE_B.varargin_2_size[2] = to_point_minE_B.trueCount;
      if (to_point_minE_B.trueCount - 1 >= 0) {
        to_point_minE_B.trueCount = 0;
        to_point_minE_B.varargin_2_data = rt_atan2d_snf(to_point_minE_B.y_data,
          to_point_minE_B.cy);
      }
    } else {
      to_point_minE_B.trueCount = 0;
      for (to_point_minE_B.i = 0; to_point_minE_B.i < 1; to_point_minE_B.i++) {
        to_point_minE_B.trueCount++;
      }

      to_point_minE_B.cy_size[0] = 1;
      to_point_minE_B.cy_size[1] = 1;
      to_point_minE_B.cy_size[2] = to_point_minE_B.trueCount;
      if (to_point_minE_B.trueCount - 1 >= 0) {
        to_point_minE_B.cy_data = to_point_minE_B.cy;
      }

      to_point_minE_expand_atan2(&to_point_minE_B.y_data, to_point_minE_B.y_size,
        &to_point_minE_B.cy_data, to_point_minE_B.cy_size,
        &to_point_minE_B.varargin_2_data, to_point_minE_B.varargin_2_size);
    }

    to_point_minE_B.trueCount = 0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 1; to_point_minE_B.i++) {
      to_point_minE_B.trueCount++;
    }

    if (to_point_minE_B.csz_idx_2 - 1 >= 0) {
      to_point_minE_B.tau_c[0] = to_point_minE_B.varargin_1_data;
    }

    if (to_point_minE_B.varargin_2_size[2] - 1 >= 0) {
      to_point_minE_B.tau_c[1] = to_point_minE_B.varargin_2_data;
    }

    to_point_minE_B.varargin_1_data_tmp = 2;
    to_point_minE_B.tau_c[to_point_minE_B.varargin_1_data_tmp] = 0.0;
    if ((int8_T)to_point_minE_B.trueCount - 1 >= 0) {
      to_point_minE_B.CoordinateTransformationConvers[0] =
        to_point_minE_B.tau_c[0];
      to_point_minE_B.CoordinateTransformationConvers[1] =
        to_point_minE_B.tau_c[1];
      to_point_minE_B.CoordinateTransformationConvers[2] =
        to_point_minE_B.tau_c[to_point_minE_B.varargin_1_data_tmp];
    }
  }

  to_point_minE_B.cySq = to_point_minE_B.CoordinateTransformationConvers[0];
  to_point_minE_B.CoordinateTransformationConvers[0] =
    to_point_minE_B.CoordinateTransformationConvers[2];
  to_point_minE_B.CoordinateTransformationConvers[2] = to_point_minE_B.cySq;

  /* End of MATLABSystem: '<S5>/Coordinate Transformation Conversion' */

  /* SignalConversion: '<S5>/Signal Conversion' */
  to_point_minE_B.SignalConversion[0] = to_point_minE_B.SFunctionBuilder[2];
  to_point_minE_B.SignalConversion[1] = to_point_minE_B.SFunctionBuilder[3];
  to_point_minE_B.SignalConversion[2] = to_point_minE_B.SFunctionBuilder[4];

  /* If: '<S2>/If' */
  if (to_point_minE_B.SFunctionBuilder_o2[0] > 0.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Merge: '<S2>/Merge' incorporates:
     *  Constant: '<S7>/Constant1'
     *  SignalConversion generated from: '<S7>/Out1'
     */
    to_point_minE_B.Merge[0] = to_point_minE_P.Constant1_Value[0];
    to_point_minE_B.Merge[1] = to_point_minE_P.Constant1_Value[1];
    to_point_minE_B.Merge[2] = to_point_minE_P.Constant1_Value[2];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Update for If: '<S2>/If' */
    srUpdateBC(to_point_minE_DW.IfActionSubsystem_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem' */
  } else if (to_point_minE_B.SFunctionBuilder_o2[2] > 0.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Merge: '<S2>/Merge' incorporates:
     *  Constant: '<S8>/Constant'
     *  SignalConversion generated from: '<S8>/Out1'
     *  SignalConversion generated from: '<S8>/p2'
     *  SignalConversion generated from: '<S8>/p3'
     */
    to_point_minE_B.Merge[0] = to_point_minE_P.Constant_Value;
    to_point_minE_B.Merge[1] = to_point_minE_B.SignalConversion[1];
    to_point_minE_B.Merge[2] = to_point_minE_B.CoordinateTransformationConvers[0];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Update for If: '<S2>/If' */
    srUpdateBC(to_point_minE_DW.IfActionSubsystem1_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem1' */
  } else if (to_point_minE_B.SFunctionBuilder_o2[3] > 0.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Merge: '<S2>/Merge' incorporates:
     *  Constant: '<S9>/Constant'
     *  SignalConversion generated from: '<S9>/Out1'
     *  SignalConversion generated from: '<S9>/p1'
     *  SignalConversion generated from: '<S9>/p3'
     */
    to_point_minE_B.Merge[0] = to_point_minE_B.SignalConversion[0];
    to_point_minE_B.Merge[1] = to_point_minE_P.Constant_Value_k;
    to_point_minE_B.Merge[2] = to_point_minE_B.CoordinateTransformationConvers[0];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Update for If: '<S2>/If' */
    srUpdateBC(to_point_minE_DW.IfActionSubsystem2_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Merge: '<S2>/Merge' incorporates:
     *  SignalConversion generated from: '<S10>/p'
     */
    to_point_minE_B.Merge[0] = to_point_minE_B.SignalConversion[0];
    to_point_minE_B.Merge[1] = to_point_minE_B.SignalConversion[1];
    to_point_minE_B.Merge[2] = to_point_minE_B.CoordinateTransformationConvers[0];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Update for If: '<S2>/If' */
    srUpdateBC(to_point_minE_DW.IfActionSubsystem3_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem3' */
  }

  /* End of If: '<S2>/If' */
  /* SignalConversion: '<S5>/Signal Conversion1' */
  to_point_minE_B.SignalConversion1[0] = to_point_minE_B.SFunctionBuilder[14];

  /* SignalConversion: '<S5>/Signal Conversion2' */
  to_point_minE_B.SignalConversion2[0] = to_point_minE_B.SFunctionBuilder[17];

  /* SignalConversion: '<S5>/Signal Conversion1' */
  to_point_minE_B.SignalConversion1[1] = to_point_minE_B.SFunctionBuilder[15];

  /* SignalConversion: '<S5>/Signal Conversion2' */
  to_point_minE_B.SignalConversion2[1] = to_point_minE_B.SFunctionBuilder[18];

  /* SignalConversion: '<S5>/Signal Conversion1' */
  to_point_minE_B.SignalConversion1[2] = to_point_minE_B.SFunctionBuilder[16];

  /* SignalConversion: '<S5>/Signal Conversion2' */
  to_point_minE_B.SignalConversion2[2] = to_point_minE_B.SFunctionBuilder[19];

  /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
   *  MATLAB Function: '<Root>/control'
   */
  to_point_minE_B.err[0] = to_point_minE_B.SignalConversion[0];
  to_point_minE_B.err[1] = to_point_minE_B.SignalConversion[1];
  to_point_minE_B.err[2] = to_point_minE_B.CoordinateTransformationConvers[0];

  /* MATLAB Function: '<Root>/control' incorporates:
   *  SignalConversion generated from: '<S4>/ SFunction '
   */
  to_point_minE_B.cy = to_point_minE_B.err[2];
  to_point_minE_wrapToPi(&to_point_minE_B.cy);
  to_point_minE_B.cySq = sin(to_point_minE_B.cy);
  to_point_minE_B.cy = cos(to_point_minE_B.cy);
  to_point_minE_B.W_rot_tmp[0] = to_point_minE_B.cy;
  to_point_minE_B.W_rot_tmp[3] = -to_point_minE_B.cySq;
  to_point_minE_B.W_rot_tmp[6] = 0.0;
  to_point_minE_B.W_rot_tmp[1] = to_point_minE_B.cySq;
  to_point_minE_B.W_rot_tmp[4] = to_point_minE_B.cy;
  to_point_minE_B.W_rot_tmp[7] = 0.0;
  to_point_minE_B.W_rot_tmp[2] = 0.0;
  to_point_minE_B.W_rot_tmp[5] = 0.0;
  to_point_minE_B.W_rot_tmp[8] = 1.0;
  for (to_point_minE_B.i = 0; to_point_minE_B.i < 4; to_point_minE_B.i++) {
    to_point_minE_B.cySq = to_point_minE_P.W[3 * to_point_minE_B.i + 1];
    to_point_minE_B.cy = to_point_minE_P.W[3 * to_point_minE_B.i];
    to_point_minE_B.colSum = to_point_minE_P.W[3 * to_point_minE_B.i + 2];
    for (to_point_minE_B.trueCount = 0; to_point_minE_B.trueCount < 3;
         to_point_minE_B.trueCount++) {
      to_point_minE_B.W_rot[to_point_minE_B.trueCount + 3 * to_point_minE_B.i] =
        (to_point_minE_B.W_rot_tmp[to_point_minE_B.trueCount + 3] *
         to_point_minE_B.cySq + to_point_minE_B.cy *
         to_point_minE_B.W_rot_tmp[to_point_minE_B.trueCount]) +
        to_point_minE_B.W_rot_tmp[to_point_minE_B.trueCount + 6] *
        to_point_minE_B.colSum;
    }
  }

  for (to_point_minE_B.trueCount = 0; to_point_minE_B.trueCount < 3;
       to_point_minE_B.trueCount++) {
    to_point_minE_B.err[to_point_minE_B.trueCount] =
      to_point_minE_B.Merge[to_point_minE_B.trueCount] -
      to_point_minE_B.err[to_point_minE_B.trueCount];
  }

  to_point_minE_wrapToPi(&to_point_minE_B.err[2]);
  to_point_minE_B.cySq = to_point_minE_B.err[1];
  to_point_minE_B.cy = to_point_minE_B.err[0];
  to_point_minE_B.colSum = to_point_minE_B.err[2];
  for (to_point_minE_B.i = 0; to_point_minE_B.i < 3; to_point_minE_B.i++) {
    to_point_minE_B.tau_c[to_point_minE_B.i] =
      (to_point_minE_P.Kp[to_point_minE_B.i + 3] * to_point_minE_B.cySq +
       to_point_minE_P.Kp[to_point_minE_B.i] * to_point_minE_B.cy) +
      to_point_minE_P.Kp[to_point_minE_B.i + 6] * to_point_minE_B.colSum;
  }

  to_point_minE_B.cySq = to_point_minE_B.tau_c[1];
  to_point_minE_B.cy = to_point_minE_B.tau_c[0];
  to_point_minE_B.colSum = to_point_minE_B.tau_c[2];
  for (to_point_minE_B.i = 0; to_point_minE_B.i < 3; to_point_minE_B.i++) {
    to_point_minE_B.tau_c[to_point_minE_B.i] =
      (to_point_minE_P.M[to_point_minE_B.i + 3] * to_point_minE_B.cySq +
       to_point_minE_P.M[to_point_minE_B.i] * to_point_minE_B.cy) +
      to_point_minE_P.M[to_point_minE_B.i + 6] * to_point_minE_B.colSum;
    to_point_minE_B.csz_idx_2 = to_point_minE_B.i << 2;
    to_point_minE_B.H_tmp_m[to_point_minE_B.csz_idx_2] =
      to_point_minE_B.W_rot[to_point_minE_B.i];
    to_point_minE_B.H_tmp_m[to_point_minE_B.csz_idx_2 + 1] =
      to_point_minE_B.W_rot[to_point_minE_B.i + 3];
    to_point_minE_B.H_tmp_m[to_point_minE_B.csz_idx_2 + 2] =
      to_point_minE_B.W_rot[to_point_minE_B.i + 6];
    to_point_minE_B.H_tmp_m[to_point_minE_B.csz_idx_2 + 3] =
      to_point_minE_B.W_rot[to_point_minE_B.i + 9];
  }

  for (to_point_minE_B.i = 0; to_point_minE_B.i < 4; to_point_minE_B.i++) {
    to_point_minE_B.cySq = to_point_minE_B.H_tmp_m[to_point_minE_B.i + 4];
    to_point_minE_B.cy = to_point_minE_B.H_tmp_m[to_point_minE_B.i];
    to_point_minE_B.colSum = to_point_minE_B.H_tmp_m[to_point_minE_B.i + 8];
    for (to_point_minE_B.trueCount = 0; to_point_minE_B.trueCount < 4;
         to_point_minE_B.trueCount++) {
      to_point_minE_B.csz_idx_2 = (to_point_minE_B.trueCount << 2) +
        to_point_minE_B.i;
      to_point_minE_B.H_tmp[to_point_minE_B.csz_idx_2] =
        ((to_point_minE_B.W_rot[3 * to_point_minE_B.trueCount + 1] *
          to_point_minE_B.cySq + to_point_minE_B.W_rot[3 *
          to_point_minE_B.trueCount] * to_point_minE_B.cy) +
         to_point_minE_B.W_rot[3 * to_point_minE_B.trueCount + 2] *
         to_point_minE_B.colSum) + h[to_point_minE_B.csz_idx_2];
    }
  }

  for (to_point_minE_B.i = 0; to_point_minE_B.i < 16; to_point_minE_B.i++) {
    to_point_minE_B.H[to_point_minE_B.i] = 2.0 *
      to_point_minE_B.H_tmp[to_point_minE_B.i];
  }

  to_point_minE_B.cySq = to_point_minE_B.tau_c[1];
  to_point_minE_B.cy = to_point_minE_B.tau_c[0];
  to_point_minE_B.colSum = to_point_minE_B.tau_c[2];
  for (to_point_minE_B.i = 0; to_point_minE_B.i < 4; to_point_minE_B.i++) {
    to_point_minE_B.f[to_point_minE_B.i] =
      (to_point_minE_B.H_tmp_m[to_point_minE_B.i + 4] * -2.0 *
       to_point_minE_B.cySq + -2.0 * to_point_minE_B.H_tmp_m[to_point_minE_B.i] *
       to_point_minE_B.cy) + to_point_minE_B.H_tmp_m[to_point_minE_B.i + 8] *
      -2.0 * to_point_minE_B.colSum;
  }

  to_point_minE_mldivide(to_point_minE_P.W, to_point_minE_B.tau_c,
    to_point_minE_B.w_rpm);
  to_point_minE_B.cySq = (rtInf);
  to_point_minE_B.trueCount = 0;
  exitg1 = false;
  while ((!exitg1) && (to_point_minE_B.trueCount < 4)) {
    if (to_point_minE_P.f_min[to_point_minE_B.trueCount] >
        to_point_minE_P.f_max[to_point_minE_B.trueCount]) {
      to_point_minE_B.cySq = -2.0;
      exitg1 = true;
    } else {
      to_point_minE_B.trueCount++;
    }
  }

  if (!(to_point_minE_B.cySq == -2.0)) {
    to_point_minE_B.solution.fstar = 0.0;
    to_point_minE_B.solution.firstorderopt = 0.0;
    memset(&to_point_minE_B.solution.lambda[0], 0, 9U * sizeof(real_T));
    to_point_minE_B.solution.state = 0;
    to_point_minE_B.solution.maxConstr = 0.0;
    to_point_minE_B.solution.iterations = 0;
    to_point_minE_B.solution.xstar[0] = to_point_minE_B.w_rpm[0];
    to_point_minE_B.solution.xstar[1] = to_point_minE_B.w_rpm[1];
    to_point_minE_B.solution.xstar[2] = to_point_minE_B.w_rpm[2];
    to_point_minE_B.solution.xstar[3] = to_point_minE_B.w_rpm[3];
    to_point_minE_B.CholRegManager.ldm = 5;
    to_point_minE_B.CholRegManager.ndims = 0;
    to_point_minE_B.CholRegManager.info = 0;
    to_point_minE_B.CholRegManager.ConvexCheck = true;
    to_point_minE_B.CholRegManager.regTol_ = 0.0;
    to_point_minE_B.CholRegManager.scaleFactor = 100.0;
    to_point_minE_B.WorkingSet.nVar = 4;
    to_point_minE_B.WorkingSet.nVarOrig = 4;
    to_point_minE_B.WorkingSet.nVarMax = 5;
    to_point_minE_B.WorkingSet.ldA = 5;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 5; to_point_minE_B.i++) {
      to_point_minE_B.solution.searchDir[to_point_minE_B.i] = 0.0;
      to_point_minE_B.WorkingSet.lb[to_point_minE_B.i] = 0.0;
      to_point_minE_B.WorkingSet.ub[to_point_minE_B.i] = 0.0;
    }

    to_point_minE_B.WorkingSet.mEqRemoved = 0;
    memset(&to_point_minE_B.WorkingSet.ATwset[0], 0, 45U * sizeof(real_T));
    to_point_minE_B.WorkingSet.nActiveConstr = 0;
    memset(&to_point_minE_B.WorkingSet.bwset[0], 0, 9U * sizeof(real_T));
    memset(&to_point_minE_B.WorkingSet.maxConstrWorkspace[0], 0, 9U * sizeof
           (real_T));
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 9; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveConstr[to_point_minE_B.i] = false;
      to_point_minE_B.WorkingSet.Wid[to_point_minE_B.i] = 0;
      to_point_minE_B.WorkingSet.Wlocalidx[to_point_minE_B.i] = 0;
    }

    to_point_minE_B.WorkingSet.probType = 3;
    to_point_minE_B.WorkingSet.SLACK0 = 1.0E-5;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 5; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.nWConstr[to_point_minE_B.i] = 0;
      to_point_minE_B.WorkingSet.indexLB[to_point_minE_B.i] = 0;
      to_point_minE_B.WorkingSet.indexUB[to_point_minE_B.i] = 0;
      to_point_minE_B.WorkingSet.indexFixed[to_point_minE_B.i] = 0;
    }

    to_point_minE_B.trueCount = 0;
    to_point_minE_B.csz_idx_2 = 0;
    to_point_minE_B.varargin_1_data_tmp = 0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 4; to_point_minE_B.i++) {
      guard1 = false;
      if ((!rtIsInf(to_point_minE_P.f_min[to_point_minE_B.i])) && (!rtIsNaN
           (to_point_minE_P.f_min[to_point_minE_B.i]))) {
        if (fabs(to_point_minE_P.f_min[to_point_minE_B.i] -
                 to_point_minE_P.f_max[to_point_minE_B.i]) < 1.0E-8) {
          to_point_minE_B.varargin_1_data_tmp++;
          to_point_minE_B.WorkingSet.indexFixed[to_point_minE_B.varargin_1_data_tmp
            - 1] = to_point_minE_B.i + 1;
        } else {
          to_point_minE_B.trueCount++;
          to_point_minE_B.WorkingSet.indexLB[to_point_minE_B.trueCount - 1] =
            to_point_minE_B.i + 1;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        if ((!rtIsInf(to_point_minE_P.f_max[to_point_minE_B.i])) && (!rtIsNaN
             (to_point_minE_P.f_max[to_point_minE_B.i]))) {
          to_point_minE_B.csz_idx_2++;
          to_point_minE_B.WorkingSet.indexUB[to_point_minE_B.csz_idx_2 - 1] =
            to_point_minE_B.i + 1;
        }
      }
    }

    to_point_minE_B.i = (to_point_minE_B.trueCount + to_point_minE_B.csz_idx_2)
      + to_point_minE_B.varargin_1_data_tmp;
    to_point_minE_B.WorkingSet.mConstr = to_point_minE_B.i;
    to_point_minE_B.WorkingSet.mConstrOrig = to_point_minE_B.i;
    to_point_minE_B.WorkingSet.mConstrMax = 9;
    to_point_minE_B.WorkingSet.sizes[0] = to_point_minE_B.varargin_1_data_tmp;
    to_point_minE_B.WorkingSet.sizes[1] = 0;
    to_point_minE_B.WorkingSet.sizes[2] = 0;
    to_point_minE_B.WorkingSet.sizes[3] = to_point_minE_B.trueCount;
    to_point_minE_B.WorkingSet.sizes[4] = to_point_minE_B.csz_idx_2;
    to_point_minE_B.WorkingSet.sizesPhaseOne[0] =
      to_point_minE_B.varargin_1_data_tmp;
    to_point_minE_B.WorkingSet.sizesPhaseOne[1] = 0;
    to_point_minE_B.WorkingSet.sizesPhaseOne[2] = 0;
    to_point_minE_B.WorkingSet.sizesPhaseOne[3] = to_point_minE_B.trueCount + 1;
    to_point_minE_B.WorkingSet.sizesPhaseOne[4] = to_point_minE_B.csz_idx_2;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 5; to_point_minE_B.i++) {
      to_point_minE_B.idxFillStart =
        to_point_minE_B.WorkingSet.sizes[to_point_minE_B.i];
      to_point_minE_B.WorkingSet.sizesNormal[to_point_minE_B.i] =
        to_point_minE_B.idxFillStart;
      to_point_minE_B.WorkingSet.sizesRegularized[to_point_minE_B.i] =
        to_point_minE_B.idxFillStart;
      to_point_minE_B.WorkingSet.sizesRegPhaseOne[to_point_minE_B.i] =
        to_point_minE_B.WorkingSet.sizesPhaseOne[to_point_minE_B.i];
    }

    to_point_minE_B.WorkingSet.isActiveIdxRegularized[0] = 1;
    to_point_minE_B.WorkingSet.isActiveIdxRegularized[1] =
      to_point_minE_B.varargin_1_data_tmp;
    to_point_minE_B.WorkingSet.isActiveIdxRegularized[2] = 0;
    to_point_minE_B.WorkingSet.isActiveIdxRegularized[3] = 0;
    to_point_minE_B.WorkingSet.isActiveIdxRegularized[4] =
      to_point_minE_B.trueCount;
    to_point_minE_B.WorkingSet.isActiveIdxRegularized[5] =
      to_point_minE_B.csz_idx_2;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 6; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i] =
        to_point_minE_B.WorkingSet.isActiveIdxRegularized[to_point_minE_B.i];
    }

    for (to_point_minE_B.i = 0; to_point_minE_B.i < 5; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i + 1] +=
        to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i];
    }

    for (to_point_minE_B.i = 0; to_point_minE_B.i < 6; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveIdx[to_point_minE_B.i] =
        to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i];
      to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i] =
        to_point_minE_B.WorkingSet.isActiveIdxRegularized[to_point_minE_B.i];
    }

    for (to_point_minE_B.i = 0; to_point_minE_B.i < 5; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i + 1] +=
        to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i];
    }

    to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
    to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[1] =
      to_point_minE_B.varargin_1_data_tmp;
    to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[2] = 0;
    to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[3] = 0;
    to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[4] =
      to_point_minE_B.trueCount + 1;
    to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[5] =
      to_point_minE_B.csz_idx_2;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 6; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveIdxNormal[to_point_minE_B.i] =
        to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i];
      to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i] =
        to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[to_point_minE_B.i];
    }

    for (to_point_minE_B.i = 0; to_point_minE_B.i < 5; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i + 1] +=
        to_point_minE_B.WorkingSet.isActiveIdxPhaseOne[to_point_minE_B.i];
      to_point_minE_B.WorkingSet.isActiveIdxRegularized[to_point_minE_B.i + 1] +=
        to_point_minE_B.WorkingSet.isActiveIdxRegularized[to_point_minE_B.i];
      to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[to_point_minE_B.i + 1] +=
        to_point_minE_B.WorkingSet.isActiveIdxRegPhaseOne[to_point_minE_B.i];
    }

    to_point_minE_B.WorkingSet.lb[0] = -to_point_minE_P.f_min[0];
    to_point_minE_B.WorkingSet.ub[0] = to_point_minE_P.f_max[0];
    to_point_minE_B.WorkingSet.lb[1] = -to_point_minE_P.f_min[1];
    to_point_minE_B.WorkingSet.ub[1] = to_point_minE_P.f_max[1];
    to_point_minE_B.WorkingSet.lb[2] = -to_point_minE_P.f_min[2];
    to_point_minE_B.WorkingSet.ub[2] = to_point_minE_P.f_max[2];
    to_point_minE_B.WorkingSet.lb[3] = -to_point_minE_P.f_min[3];
    to_point_minE_B.WorkingSet.ub[3] = to_point_minE_P.f_max[3];
    to_point_minE_setProblemType(&to_point_minE_B.WorkingSet, 3);
    to_point_minE_B.idxFillStart = to_point_minE_B.WorkingSet.isActiveIdx[2];
    for (to_point_minE_B.i = to_point_minE_B.idxFillStart; to_point_minE_B.i <
         10; to_point_minE_B.i++) {
      to_point_minE_B.WorkingSet.isActiveConstr[to_point_minE_B.i - 1] = false;
    }

    to_point_minE_B.WorkingSet.nWConstr[0] = to_point_minE_B.WorkingSet.sizes[0];
    to_point_minE_B.WorkingSet.nWConstr[1] = 0;
    to_point_minE_B.WorkingSet.nWConstr[2] = 0;
    to_point_minE_B.WorkingSet.nWConstr[3] = 0;
    to_point_minE_B.WorkingSet.nWConstr[4] = 0;
    to_point_minE_B.WorkingSet.nActiveConstr =
      to_point_minE_B.WorkingSet.nWConstr[0];
    to_point_minE_B.b_h = (uint8_T)to_point_minE_B.WorkingSet.sizes[0];
    for (to_point_minE_B.idxFillStart = 0; to_point_minE_B.idxFillStart <
         to_point_minE_B.b_h; to_point_minE_B.idxFillStart++) {
      to_point_minE_B.WorkingSet.Wid[to_point_minE_B.idxFillStart] = 1;
      to_point_minE_B.WorkingSet.Wlocalidx[to_point_minE_B.idxFillStart] =
        to_point_minE_B.idxFillStart + 1;
      to_point_minE_B.WorkingSet.isActiveConstr[to_point_minE_B.idxFillStart] =
        true;
      to_point_minE_B.colOffsetATw = 5 * to_point_minE_B.idxFillStart;
      to_point_minE_B.i =
        to_point_minE_B.WorkingSet.indexFixed[to_point_minE_B.idxFillStart];
      if (to_point_minE_B.i - 2 >= 0) {
        memset(&to_point_minE_B.WorkingSet.ATwset[to_point_minE_B.colOffsetATw],
               0, (uint32_T)(((to_point_minE_B.i + to_point_minE_B.colOffsetATw)
                              - to_point_minE_B.colOffsetATw) - 1) * sizeof
               (real_T));
      }

      to_point_minE_B.WorkingSet.ATwset
        [(to_point_minE_B.WorkingSet.indexFixed[to_point_minE_B.idxFillStart] +
          to_point_minE_B.colOffsetATw) - 1] = 1.0;
      to_point_minE_B.i =
        to_point_minE_B.WorkingSet.indexFixed[to_point_minE_B.idxFillStart] + 1;
      to_point_minE_B.e = to_point_minE_B.WorkingSet.nVar;
      if (to_point_minE_B.i <= to_point_minE_B.e) {
        memset(&to_point_minE_B.WorkingSet.ATwset[(to_point_minE_B.i +
                to_point_minE_B.colOffsetATw) + -1], 0, (uint32_T)
               ((((to_point_minE_B.e + to_point_minE_B.colOffsetATw) -
                  to_point_minE_B.i) - to_point_minE_B.colOffsetATw) + 1) *
               sizeof(real_T));
      }

      to_point_minE_B.WorkingSet.bwset[to_point_minE_B.idxFillStart] =
        to_point_minE_B.WorkingSet.ub[to_point_minE_B.WorkingSet.indexFixed[to_point_minE_B.idxFillStart]
        - 1];
    }

    to_point_minE_B.WorkingSet.SLACK0 = 0.0;
    to_point_minE_B.cySq = 0.0;
    to_point_minE_B.cy = 0.0;
    for (to_point_minE_B.i = 0; to_point_minE_B.i < 4; to_point_minE_B.i++) {
      to_point_minE_B.idxFillStart = to_point_minE_B.i << 2;
      to_point_minE_B.colSum = ((fabs
        (to_point_minE_B.H[to_point_minE_B.idxFillStart + 1]) + fabs
        (to_point_minE_B.H[to_point_minE_B.idxFillStart])) + fabs
        (to_point_minE_B.H[to_point_minE_B.idxFillStart + 2])) + fabs
        (to_point_minE_B.H[to_point_minE_B.idxFillStart + 3]);
      if ((!(to_point_minE_B.cySq >= to_point_minE_B.colSum)) && (!rtIsNaN
           (to_point_minE_B.colSum))) {
        to_point_minE_B.cySq = to_point_minE_B.colSum;
      }

      to_point_minE_B.colSum = fabs(to_point_minE_B.f[to_point_minE_B.i]);
      if ((!(to_point_minE_B.cy >= to_point_minE_B.colSum)) && (!rtIsNaN
           (to_point_minE_B.colSum))) {
        to_point_minE_B.cy = to_point_minE_B.colSum;
      }
    }

    if (to_point_minE_B.cy <= 1.0) {
      to_point_minE_B.cy = 1.0;
    }

    if (to_point_minE_B.cy >= to_point_minE_B.cySq) {
      to_point_minE_B.cySq = to_point_minE_B.cy;
    }

    to_point_minE_driver(to_point_minE_B.H, to_point_minE_B.f,
                         &to_point_minE_B.solution, &to_point_minE_B.memspace,
                         &to_point_minE_B.WorkingSet,
                         &to_point_minE_B.CholRegManager, 10 *
                         (((to_point_minE_B.varargin_1_data_tmp +
      to_point_minE_B.trueCount) + to_point_minE_B.csz_idx_2) + 4),
                         to_point_minE_B.cySq, &to_point_minE_B.QRManager,
                         &to_point_minE_B.QPObjective);
    to_point_minE_B.w_rpm[0] = to_point_minE_B.solution.xstar[0];
    to_point_minE_B.w_rpm[1] = to_point_minE_B.solution.xstar[1];
    to_point_minE_B.w_rpm[2] = to_point_minE_B.solution.xstar[2];
    to_point_minE_B.w_rpm[3] = to_point_minE_B.solution.xstar[3];
  }

  to_point_minE_B.w_rpm[0] /= to_point_minE_P.c_t[0];
  to_point_minE_B.w_rpm[0] = sqrt(to_point_minE_B.w_rpm[0]);
  to_point_minE_B.w_rpm[0] = to_point_minE_B.w_rpm[0] * 30.0 /
    3.1415926535897931;
  to_point_minE_B.w_rpm[1] /= to_point_minE_P.c_t[1];
  to_point_minE_B.w_rpm[1] = sqrt(to_point_minE_B.w_rpm[1]);
  to_point_minE_B.w_rpm[1] = to_point_minE_B.w_rpm[1] * 30.0 /
    3.1415926535897931;
  to_point_minE_B.w_rpm[2] /= to_point_minE_P.c_t[2];
  to_point_minE_B.w_rpm[2] = sqrt(to_point_minE_B.w_rpm[2]);
  to_point_minE_B.w_rpm[2] = to_point_minE_B.w_rpm[2] * 30.0 /
    3.1415926535897931;
  to_point_minE_B.w_rpm[3] /= to_point_minE_P.c_t[3];
  to_point_minE_B.w_rpm[3] = sqrt(to_point_minE_B.w_rpm[3]);
  to_point_minE_B.w_rpm[3] = to_point_minE_B.w_rpm[3] * 30.0 /
    3.1415926535897931;

  /* Constant: '<Root>/Constant' */
  to_point_minE_B.Constant = to_point_minE_P.Constant_Value_e;

  /* SignalConversion generated from: '<Root>/Mux' */
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[0] = to_point_minE_B.w_rpm[2];
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[1] = to_point_minE_B.w_rpm[0];
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[2] = to_point_minE_B.w_rpm[3];
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[3] = to_point_minE_B.w_rpm[1];
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[4] = to_point_minE_B.Constant;
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[5] = to_point_minE_B.Constant;
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[6] = to_point_minE_B.Constant;
  to_point_minE_B.TmpSignalConversionAtTAQSigLogg[7] = to_point_minE_B.Constant;

  /* S-Function (rpi_sfun_betalink): '<S3>/S-Function Builder' */
  rpi_sfun_betalink_Outputs_wrapper
    (&to_point_minE_B.TmpSignalConversionAtTAQSigLogg[0],
     &to_point_minE_B.SFunctionBuilder_o1_n,
     &to_point_minE_B.SFunctionBuilder_o2_p[0],
     &to_point_minE_B.SFunctionBuilder_o3[0],
     &to_point_minE_B.SFunctionBuilder_o4[0],
     &to_point_minE_B.SFunctionBuilder_o5[0],
     &to_point_minE_B.SFunctionBuilder_o6[0],
     &to_point_minE_B.SFunctionBuilder_o7, &to_point_minE_B.SFunctionBuilder_o8,
     &to_point_minE_B.SFunctionBuilder_o9, &to_point_minE_B.SFunctionBuilder_o10,
     &to_point_minE_B.SFunctionBuilder_o11,
     &to_point_minE_B.SFunctionBuilder_o12,
     &to_point_minE_P.SFunctionBuilder_P1_p, 1,
     &to_point_minE_P.SFunctionBuilder_P2_f, 1);

  /* SignalConversion generated from: '<Root>/mocap' */
  to_point_minE_B.TmpSignalConversionAtTAQSigLo_i[2] =
    to_point_minE_B.CoordinateTransformationConvers[0];
  to_point_minE_B.TmpSignalConversionAtTAQSigLo_i[0] =
    to_point_minE_B.SignalConversion[0];

  /* SignalConversion generated from: '<Root>/mocap' */
  to_point_minE_B.TmpSignalConversionAtTAQSigLo_b[0] =
    to_point_minE_B.SignalConversion1[0];

  /* SignalConversion generated from: '<Root>/mocap' */
  to_point_minE_B.TmpSignalConversionAtTAQSigLo_i[1] =
    to_point_minE_B.SignalConversion[1];

  /* SignalConversion generated from: '<Root>/mocap' */
  to_point_minE_B.TmpSignalConversionAtTAQSigLo_b[1] =
    to_point_minE_B.SignalConversion1[1];
  to_point_minE_B.TmpSignalConversionAtTAQSigLo_b[2] =
    to_point_minE_B.SignalConversion2[2];

  /* Update for S-Function (rpi_sfun_iosocket): '<S11>/S-Function Builder' incorporates:
   *  Constant: '<S5>/Constant5'
   */

  /* S-Function "rpi_sfun_iosocket_wrapper" Block: <S11>/S-Function Builder */
  rpi_sfun_iosocket_Update_wrapper(&to_point_minE_P.Constant5_Value[0],
    &to_point_minE_B.SFunctionBuilder[0],
    &to_point_minE_DW.SFunctionBuilder_DSTATE,
    &to_point_minE_P.SFunctionBuilder_P1_n, 1,
    &to_point_minE_P.SFunctionBuilder_P2_h, 1,
    &to_point_minE_P.SFunctionBuilder_P3, 1,
    &to_point_minE_P.SFunctionBuilder_P4, 1,
    &to_point_minE_P.SFunctionBuilder_P5, 1,
    &to_point_minE_P.SFunctionBuilder_P6, 1);

  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  to_point_minE_M->Timing.taskTime0 =
    ((time_T)(++to_point_minE_M->Timing.clockTick0)) *
    to_point_minE_M->Timing.stepSize0;
}

/* Model initialize function */
void to_point_minE_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(to_point_minE_M, -1);
  to_point_minE_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  to_point_minE_M->Sizes.checksums[0] = (1847229886U);
  to_point_minE_M->Sizes.checksums[1] = (3802834799U);
  to_point_minE_M->Sizes.checksums[2] = (188062370U);
  to_point_minE_M->Sizes.checksums[3] = (2648542249U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[7];
    to_point_minE_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &to_point_minE_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &to_point_minE_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &to_point_minE_DW.IfActionSubsystem2_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &to_point_minE_DW.IfActionSubsystem3_SubsysRanBC;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(to_point_minE_M->extModeInfo,
      &to_point_minE_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(to_point_minE_M->extModeInfo,
                        to_point_minE_M->Sizes.checksums);
    rteiSetTPtr(to_point_minE_M->extModeInfo, rtmGetTPtr(to_point_minE_M));
  }

  /* Start for S-Function (rpi_sfun_iosocket): '<S11>/S-Function Builder' incorporates:
   *  Constant: '<S5>/Constant5'
   */

  /* S-Function Block: <S11>/S-Function Builder */
  rpi_sfun_iosocket_Start_wrapper(&to_point_minE_DW.SFunctionBuilder_DSTATE,
    &to_point_minE_P.SFunctionBuilder_P1_n, 1,
    &to_point_minE_P.SFunctionBuilder_P2_h, 1,
    &to_point_minE_P.SFunctionBuilder_P3, 1,
    &to_point_minE_P.SFunctionBuilder_P4, 1,
    &to_point_minE_P.SFunctionBuilder_P5, 1,
    &to_point_minE_P.SFunctionBuilder_P6, 1);

  /* Start for S-Function (rpi_sfun_betalink): '<S3>/S-Function Builder' */

  /* S-Function Block: <S3>/S-Function Builder */
  rpi_sfun_betalink_Start_wrapper(&to_point_minE_P.SFunctionBuilder_P1_p, 1,
    &to_point_minE_P.SFunctionBuilder_P2_f, 1);

  /* InitializeConditions for S-Function (rpi_sfun_iosocket): '<S11>/S-Function Builder' incorporates:
   *  Constant: '<S5>/Constant5'
   */

  /* S-Function Block: <S11>/S-Function Builder */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        to_point_minE_DW.SFunctionBuilder_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void to_point_minE_terminate(void)
{
  /* Terminate for S-Function (rpi_sfun_iosocket): '<S11>/S-Function Builder' incorporates:
   *  Constant: '<S5>/Constant5'
   */

  /* S-Function Block: <S11>/S-Function Builder */
  rpi_sfun_iosocket_Terminate_wrapper(&to_point_minE_DW.SFunctionBuilder_DSTATE,
    &to_point_minE_P.SFunctionBuilder_P1_n, 1,
    &to_point_minE_P.SFunctionBuilder_P2_h, 1,
    &to_point_minE_P.SFunctionBuilder_P3, 1,
    &to_point_minE_P.SFunctionBuilder_P4, 1,
    &to_point_minE_P.SFunctionBuilder_P5, 1,
    &to_point_minE_P.SFunctionBuilder_P6, 1);

  /* Terminate for S-Function (rpi_sfun_betalink): '<S3>/S-Function Builder' */

  /* S-Function Block: <S3>/S-Function Builder */
  rpi_sfun_betalink_Terminate_wrapper(&to_point_minE_P.SFunctionBuilder_P1_p, 1,
    &to_point_minE_P.SFunctionBuilder_P2_f, 1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
