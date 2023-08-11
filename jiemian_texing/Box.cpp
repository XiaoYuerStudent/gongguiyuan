
#include "Box.h"

Box::Box(double h, double b, double tf, double tw) : B_H(h), B_B(b), B_Tf(tf), B_Tw(tw)
{
	//计算面积
	double A1 = 2.0 * B_B * B_Tf;
	double A2 = 2.0 * (B_H - 2.0 * B_Tf) * B_Tw;
	B_A = A1 + A2;

	//计算y方向剪切形状系数
	B_Sy = B_A / (2.0* B_B * B_Tf);
	//计算z方向剪切形状系数
	B_Sz = B_A / (2.0 * B_H * B_Tw);
		
	//计算抗扭惯性矩
	B_Ixx = 2.0 * pow((B_B - B_Tw) * (B_H - B_Tf), 2) / ((B_B - B_Tw) / B_Tf + (B_H - B_Tf) / B_Tw);

	//计算y方向抗弯惯性矩
	B_Iyy = 1.0 / 12.0 * B_B * pow(B_H, 3) - 1.0 / 12.0 * (B_B - 2.0 * B_Tw) * pow(B_H - 2.0 * B_Tf, 3);
	//计算z方向抗弯惯性矩
	B_Izz = 1.0 / 12.0 * B_H * pow(B_B, 3) - 1.0 / 12.0 * (B_H - 2.0 * B_Tf) * pow(B_B - 2.0 * B_Tw, 3);

}