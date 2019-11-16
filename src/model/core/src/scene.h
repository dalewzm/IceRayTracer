#pragma once
#include <string>
#include "math_def.h"
class Material
{
public:
	Material();
	void SetColor(Color &c) { m_Color = c; };
	Color GetColor() { return m_Color; }
	void SetDiffuse(FLOAT t_diff) { m_Diff = t_diff; }
	void SetReflection(FLOAT t_ref) { m_Refl = t_ref; }
	FLOAT GetSpecular();
	FLOAT GetDiffuse();
	FLOAT GetRlection();
private:
	Color m_Color;
	FLOAT m_Refl;
	FLOAT m_Diff;
};

class Primitive
{
public:
	enum class PTIM_TYPE
	{
		SPHERE = 1,
		PLANE =2,
	};
	Primitive();

protected:
	std::string m_name;
};

class Sphere :public Primitive
{

};

class Scene
{
public:
	Scene() {}
	void build_scene();
};
