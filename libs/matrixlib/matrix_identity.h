/*
=================================================================
        MATRIX_IDENTITY.H CONTAINS MATRIX INFORMATION
=================================================================
*/
#pragma once

#ifndef MATRIX_IDENTITY_H
#define MATRIX_IDENTITY_H

#endif

#include <math.h>

class MatrixIdentity{
public:

  MatrixIdentity();
   virtual ~MatrixIdentity();

  const int MatrixNumber[1024];
  static int MatrixBuffer[2048];

  bool RefreshMatrix(MatrixIdentity, float mTick);

  enum MatrixIdentity{
   M4X4 = 0, M3X4 = 1, M3X3 = 2 
  };

  void LoadIdentity(MatrixIdentity * matrix_identity, int mNumber, static int mBuffer);

};

