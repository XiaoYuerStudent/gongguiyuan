#pragma once

#include<iostream>
using namespace std;

#define _USE_MATH_DEFINES
#include <math.h>

class Loop
{
public:
	Loop(double d, double tw);

	
	double Lo_D;
	double Lo_Tw;
	double Lo_A;
	double Lo_Sy = 2;
	double Lo_Sz = 2;
	double Lo_Ixx;
	double Lo_Iyy;
	double Lo_Izz;
};

