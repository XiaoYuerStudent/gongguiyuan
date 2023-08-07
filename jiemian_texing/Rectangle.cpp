#include<iostream>
using namespace std;


//矩形截面类
class Rectangle
{
public:
	Rectangle(double b, double h) :re_B(b), re_H(h)
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
	
	double re_H ;//高
	double re_B ;//宽
	double re_A;
	double re_Sy = 1.2;//y方向剪切形状系数
	double re_Sz = 1.2;//z方向剪切形状系数
	double re_Ixx;
	double re_Iyy;
	double re_Izz;
};



//
//int main()
//{
//	double b = 2;
//	double h = 1;
//	
//	cout << "请输入矩形截面宽度,高度" << endl;
//	cin >> b >> h;
//	
//
//	double B = static_cast<double>(b);
//	double H = static_cast<double>(h);
//	Rectangle r1(B,H);
//
//	
//
//	cout << "r1的面积为：  " << r1.re_A << endl;
//	cout << "r1的y方向剪切形状系数为：  " << r1.re_Sy << endl;
//	cout << "r1的z方向剪切形状系数为：  " << r1.re_Sz << endl;
//	cout << "r1的抗扭惯性矩为：  " << r1.re_Ixx << endl;
//	cout << "r1的y方向抗弯惯性矩为：  " << r1.re_Iyy << endl;
//	cout << "r1的z方向抗弯惯性矩为：  " << r1.re_Izz << endl;
//	cout << "y方向有效剪切面积：	" << r1.re_A / r1.re_Sy << endl;
//	cout << "z方向有效剪切面积：	" << r1.re_A / r1.re_Sz << endl;
//
//	
//	system("pause");
//}