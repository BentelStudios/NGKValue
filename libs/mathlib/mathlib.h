/*
====================
 MATHLIB.H ALL MATH
====================
*/
#pragma once

#ifndef __MATHLIB__H
#define __MATHLIB__H

#endif

auto ConstructVector();

template<class Vector>Vec;

typedef float vec;
typedef vec vec3[3];
typedef vec vec4[4];
typedef vec vec5[5];
typedef vec vec6[6];

#define VECTOR_X_AXIS 10
#define VECTOR_Y_AXIS 20
#define VECTOR_Z_AXIS 30

#define VectorDot(dot) (dot[0] * vec[0] + dot[1] * vec[1] + dot[2] * vec[2])
#define Debug_Vector(vector)

vec vec_snaptogrid(int snap);
vec vec_point(int vpoint);



