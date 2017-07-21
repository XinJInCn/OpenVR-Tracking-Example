#ifndef CYLINDER_H_
#define CYLINDER_H_
#include <algorithm>
#include <cmath>
class Cylinder 
{


	
	

public:
	~Cylinder();
	Cylinder();
	void init();
	bool isInside(float x, float y, float z);

	float* s1;
	float* s2;

	float xOrigin;
	float zOrigin;
	float yMin;
	float yMax;
	float radius;

	bool hasInit;
};



#endif