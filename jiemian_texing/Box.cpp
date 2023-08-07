#include<iostream>
using namespace std;

class Box
{
public:
	Box(double h, double b, double tf, double tw) : B_H(h), B_B(b), B_Tf(tf), B_Tw(tw)
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


//
//int main()
//{
//	double h = 0.3;
//	double b = 0.4;
//	double tf = 0.016;
//	double tw = 0.016;
//	cout << "请输入箱型截面的截面高、截面宽、翼缘厚、腹板厚" << endl;
//	cin >>h >> b >> tf >> tw;
//	double B = static_cast<double>(b);
//	double H = static_cast<double>(h);
//	double Tf = static_cast<double>(tf);
//	double Tw = static_cast<double>(tw);
//
//	Box t1(H, B, Tf, Tw);
//
//
//
//	cout << "面积为：  " << t1.B_A << endl;
//	cout << "y方向剪切形状系数为：  " << t1.B_Sy << endl;
//	cout << "z方向剪切形状系数为：  " << t1.B_Sz << endl;
//	cout << "抗扭惯性矩为：  " << t1.B_Ixx << endl;
//	cout << "y方向抗弯惯性矩为：  " << t1.B_Iyy << endl;
//	cout << "z方向抗弯惯性矩为：  " << t1.B_Izz << endl;
//    cout << "y方向有效剪切面积：	" << t1.B_A / t1.B_Sy << endl;
//    cout << "z方向有效剪切面积：	" << t1.B_A / t1.B_Sz << endl;
//
//
//
//
//	system("pause");
//}