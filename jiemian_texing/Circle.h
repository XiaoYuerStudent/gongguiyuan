#pragma once
#include<iostream>
using namespace std;

#define _USE_MATH_DEFINES
#include <math.h>

class Circle
{
public:

	Circle(double d);


	double ci_D;
	double ci_A;
	double ci_Sy = 10.0 / 9.0;
	double ci_Sz = 10.0 / 9.0;
	double ci_Ixx;
	double ci_Iyy;
	double ci_Izz;
};
