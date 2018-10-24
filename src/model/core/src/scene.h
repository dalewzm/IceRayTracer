#pragma once
#include <string>



class Primitive
{
public:
	enum
	{
		SPHERE = 1,
		PLANE
	};
protected:
	std::string m_name;
};
