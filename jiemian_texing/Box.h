#pragma once

#include<iostream>

using namespace std;

class Box
{
public:
	Box(double h, double b, double tf, double tw);


	double B_H;
	double B_B;
	double B_Tf;
	double B_Tw;
	double B_A;
	double B_Sy;
	double B_Sz;
	double B_Ixx;
	double B_Iyy;
	double B_Izz;
};
