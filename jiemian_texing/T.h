#pragma once
#include<iostream>
using namespace std;

class Tshape
{
public:

	Tshape(double h, double b, double tf, double tw);

	double T_H;
	double T_B;
	double T_Tf;
	double T_Tw;
	double T_A;
	double T_Sy;
	double T_Sz;
	double T_Ixx;
	double T_Iyy;
	double T_Izz;
};