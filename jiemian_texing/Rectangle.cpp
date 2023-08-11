
#include"Rectangle.h"

Rectangle::Rectangle(double b, double h) :re_B(b), re_H(h)
{

	double H;
	double B;

	if (re_B > re_H)
	{
		H = re_B;
		B = re_H;
	}
	if (re_B <= re_H)
	{
		H = re_H;
		B = re_B;
	}

	re_A = re_H * re_B;//面积

	//注意！！！抗扭惯性矩,要求H>=B!!!
	re_Ixx = 1.0 / 3.0 * (1.0 - 0.63 * B / H * (1.0 - 1.0 / 12.0 * pow(B, 4) / pow(H, 4))) * H * pow(B, 3);
	re_Iyy = 1.0 / 12.0 * re_B * pow(re_H, 3);//y方向抗弯惯性矩
	re_Izz = 1.0 / 12.0 * re_H * pow(re_B, 3);//z方向抗弯惯性矩
}