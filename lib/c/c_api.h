#pragma once
#include "lib/export.h"

#ifndef MathDouble
typedef double real;
#else
typedef float real;
#endif

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct Matrix Matrix;

Matrix* MATRIXLIB_EXPORT createMatrix(int row, int col);

void MATRIXLIB_EXPORT deleteMatrix(Matrix* matrix);

real MATRIXLIB_EXPORT mat_get(Matrix* m, int row, int col);

void MATRIXLIB_EXPORT mat_set(Matrix* m, int row, int col, real value);

Matrix* MATRIXLIB_EXPORT match_add(Matrix* M1, Matrix* M2);

Matrix* MATRIXLIB_EXPORT match_substract(Matrix* M1, Matrix* M2);

Matrix* MATRIXLIB_EXPORT match_dot(Matrix* M1, Matrix* M2);

void MATRIXLIB_EXPORT print(const Matrix* M);

#ifdef __cplusplus
}
#endif