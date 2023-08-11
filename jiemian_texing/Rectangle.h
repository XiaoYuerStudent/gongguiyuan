#pragma once

#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(double b, double h);


	double re_H;//高
	double re_B;//宽
	double re_A;
	double re_Sy = 1.2;//y方向剪切形状系数
	double re_Sz = 1.2;//z方向剪切形状系数
	double re_Ixx;
	double re_Iyy;
	double re_Izz;
};
