#pragma once
#include<iostream>
using namespace std;

class Ishape
{
public:
	Ishape(double h, double bt, double bb, double tt, double tb, double tw);


	double I_H;
	double I_Bt;
	double I_Bb;
	double I_Tt;
	double I_Tb;
	double I_Tw;
	double I_A;
	double I_Sy;
	double I_Sz;
	double I_Ixx;
	double I_Iyy;
	double I_Izz;
};
