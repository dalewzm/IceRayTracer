#pragma once

//#define USE_SELF_MATH 1
#ifdef USE_SELF_MATH
#include "Vector.h"
typedef  float FLOAT
#define VECTOR3 Vector3<1.0>

#else
// use math lib from https://github.com/imvu/gmtl
#include <gmtl/gmtl.h>
#define VECTOR3 gmtl::Vec3f
#endif
