#pragma once
#include<iostream>
using namespace std;

class invert_T
{
public:
	invert_T(double h, double b, double tf, double tw);


	double iT_H;
	double iT_B;
	double iT_Tf;
	double iT_Tw;
	double iT_A;
	double iT_Sy;
	double iT_Sz;
	double iT_Ixx;
	double iT_Iyy;
	double iT_Izz;
};
