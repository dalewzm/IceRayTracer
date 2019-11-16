#pragma once

#define USE_SELF_MATH 
typedef  float FLOAT;
#ifdef USE_SELF_MATH


#include "Vector.h"
typedef Vector3<FLOAT> VECTOR3;
typedef VECTOR3 Color;


#else
// use math lib from https://github.com/imvu/gmtl
#include <gmtl/gmtl.h>
#define VECTOR3 gmtl::Vec3f
#endif
