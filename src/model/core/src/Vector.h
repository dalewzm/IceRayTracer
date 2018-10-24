#pragma once

template<T>
class Vector3
{
public:
	Vector3(T a, T b, T c) :x(a), y(b), z(c) {};

private:
	T x;
	T y;
	T z;
};
