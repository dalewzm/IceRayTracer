#pragma once
#include <cmath>
template <typename T>
class Vector3
{
public:
	Vector3(T a, T b, T c) :x(a), y(b), z(c) {};
	T operator - (const T& rhs)
	{
		return Vector3<T>(x - rhs.x, y - rhs.y, z - rhs.z);
	}
	T& operator = (const T& rhs)
	{
		x = rhs.x;
		y = rhs.y;
		z = rhs.z;
		return this;
	}
	FLOAT length()
	{
		return sqrt(x*x + y*y + z*z);
	}
private:
	T x;
	T y;
	T z;
};

class Vector3f
{
public:
	Vector3f(FLOAT a, FLOAT b, FLOAT c) :x(a), y(b), z(c) {};

private:
	FLOAT x;
	FLOAT y;
	FLOAT z;
};