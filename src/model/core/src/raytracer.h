#pragma once

#include "math_def.h"

class Ray
{
public:
	Ray() :m_origin(VECTOR3(0.0, 0, 0)), m_dir(VECTOR3(0, 0, 0))
	{

	};
	Ray(VECTOR3 &a_origin, VECTOR3 &a_dir);
private:
	VECTOR3 m_origin;
	VECTOR3 m_dir;
};
