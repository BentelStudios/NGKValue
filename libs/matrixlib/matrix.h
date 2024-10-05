/*
=======================================================
            MATRIX.H HAS MATRIX FUNCTION
=======================================================
*/
#pragma once

#ifndef MATRIX_H
#define MATRIX_H

#endif

#include "matrix_identity.h"

class Matrix {
public:

    int MatrixId = 1024;
    int m4x4Point[16];
    const int MatrixXAxis; const int MatrixYAxis; const int MatrixZAxis;
    Matrix& mMatCallback_signal;

    void mMatrix_CallbackSignal(Matrix* mMatrixCallbackSignal)
    {
        mMatrixCallbackSignal->MatrixId = 1024;
    };

    void Matrix4x4(Matrix* matrix, Matrix& matcall)
    {
        int x[3];
        int y[3];
        int z[3];

            matrix->m4x4Point[0], matrix->m4x4Point[1], matrix->m4x4Point[2],
            matrix->m4x4Point[3], matrix->m4x4Point[4], matrix->m4x4Point[5],
            matrix->m4x4Point[6], matrix->m4x4Point[7], matrix->m4x4Point[8],
            matrix->m4x4Point[9], matrix->m4x4Point[10], matrix->m4x4Point[11],
            matrix->m4x4Point[12], matrix->m4x4Point[13], matrix->m4x4Point[14],
            matrix->m4x4Point[15];
            
            matrix->m4x4Point[0] = x[0]; matrix->m4x4Point[1] = y[0]; matrix->m4x4Point[2] = z[0];
            matrix->m4x4Point[3] = x[1]; matrix->m4x4Point[4] = y[1]; matrix->m4x4Point[5] = z[1];
            matrix->m4x4Point[6] = x[2]; matrix->m4x4Point[7] = y[2]; matrix->m4x4Point[8] = z[2];
    };

    void Matrix3x3(Matrix);
    void Matrix3x4(Matrix);
    virtual void MatrixType(Matrix* mMatrixType);

    enum MatrixFunction{
     MATRIX_TRANSLATE = 0,
     MATRIX_SCALE = 1,
     MATRIX_ROTATE = 2
    };

    float matrix_degree;

    float& degree;

    float MATRIX_ROTATE_CLIP = 90;
    float MATRIX_ROTATE_CLIP_SEMI = 180;
    float MATRIX_ROTATE_FULL = 360;

};
