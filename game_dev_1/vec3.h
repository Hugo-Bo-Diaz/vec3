#pragma once
#include <math.h>
template <class TYPE>
class vec3 {

private:
	TYPE x, y, z;
public:
	
	vec3 operator +(const vec3 other) {
		vec3 ret = {
		x + other.x,
		y +other.y,
		z + other.z
		};
		return ret;
	}
	vec3 operator-(const vec3 other) {
		vec3 ret = {
		x - other.x,
		y - other.y,
		z - other.z
		};
		return ret;
	}
	void operator+=(const vec3 other) {
		x += other.x;
		y += other.y;
		z += other.z;
	}
	void operator-=(const vec3 other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
	}

	bool operator==(const vec3 other) {
	return (x==other.x&& y==other.y && z= other.z)
	}

	vec3<float> Normalise()
	{
		float module = sqrt(x*x + y*y + z*z);

		vec3<float> ret = {
			(float)x / module,
			(float)y / module,
			(float)z / module
		};
		return ret;
	}

	bool is_zero()
	{
		return this = { 0,0,0 };
	}

	float distance_to(const vec3 other)
	{
		vec3 resta = *this - other;
		float module = sqrt(resta.x*resta.x + resta.y*resta.y + resta.z*resta.z);
		return module;
	}

	vec3(TYPE _x, TYPE _y, TYPE _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	~vec3()
	{

	}
};