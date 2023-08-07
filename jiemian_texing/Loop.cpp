#include<iostream>
using namespace std;

class Loop
{
public:
	Loop(double d,double tw):Lo_D(d),Lo_Tw(tw)

	{
		//计算面积
		Lo_A = 1.0 / 4.0 * PI * (Lo_D * Lo_D - pow(Lo_D - 2 * Lo_Tw, 2));

		//计算抗扭惯性矩
		Lo_Ixx = 1.0 / 32.0 * PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

		//计算y方向抗弯惯性矩
		Lo_Iyy = 1.0 / 64.0 * PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

		//计算z方向抗弯惯性矩
		Lo_Izz = 1.0 / 64.0 * PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));


	}

	const double PI = 3.14159265358979323846;
	double Lo_D;
	double Lo_Tw;
	double Lo_A;
	double Lo_Sy = 2.1;
	double Lo_Sz = 2;
	double Lo_Ixx;
	double Lo_Iyy;
	double Lo_Izz;
};

//int main()
//{
//	
//	double d = 0.016;
//	double tw = 0.016;
//	cout << "请输入环型截面的直径、壁厚" << endl;
//	cin >>d >> tw ;
//	
//	double D = static_cast<double>(d);
//	double Tw = static_cast<double>(tw);
//
//	Loop t1(D, Tw);
//
//
//
//	cout << "面积为：  " << t1.Lo_A << endl;
//	cout << "y方向剪切形状系数为：  " << t1.Lo_Sy << endl;
//	cout << "z方向剪切形状系数为：  " << t1.Lo_Sz << endl;
//	cout << "抗扭惯性矩为：  " << t1.Lo_Ixx << endl;
//	cout << "y方向抗弯惯性矩为：  " << t1.Lo_Iyy << endl;
//	cout << "z方向抗弯惯性矩为：  " << t1.Lo_Izz << endl;
//	cout << "y方向有效剪切面积：	" << t1.Lo_A / t1.Lo_Sy << endl;
//	cout << "z方向有效剪切面积：	" << t1.Lo_A / t1.Lo_Sz << endl;
//
//
//	system("pause");
//}