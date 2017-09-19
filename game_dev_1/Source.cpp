#include "vec3.h"

int main()
{
	vec3<int> v1 = {1,1,1};
	vec3<int> v2 = {2,0,1};
	vec3<int> v3 = v1 - v2;

	vec3<float> normalised = v1.Normalise();
	float dist = v1.distance_to(v3);
}