#pragma once

#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(double b, double h);


	double re_H;//��
	double re_B;//��
	double re_A;
	double re_Sy = 1.2;//y���������״ϵ��
	double re_Sz = 1.2;//z���������״ϵ��
	double re_Ixx;
	double re_Iyy;
	double re_Izz;
};
