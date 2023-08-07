#include<iostream>
using namespace std;


//圆型截面类
class Circle
{
public:
	Circle(double d) :ci_D(d)
	{
		ci_A = 1.0 / 4.0 * PI * ci_D * ci_D;
		ci_Ixx = 1.0 / 32.0 * PI * pow(ci_D, 4);
		ci_Iyy= 1.0 / 64.0 * PI * pow(ci_D, 4);
		ci_Izz = 1.0 / 64.0 * PI * pow(ci_D, 4);
	}
	const double PI = 3.14159265358979323846;
	double ci_D;
	double ci_A;
	double ci_Sy=10.0/9.0;
	double ci_Sz=10.0/9.0;
	double ci_Ixx;
	double ci_Iyy;
	double ci_Izz;
};

//int main()
//{
//	double d = 1;
//	cout << "请输入圆形截面直径" << endl;
//	cin >> d;
//	double D = static_cast<double>(d);
//	Circle c1(D);
//
//	cout << "c1的面积为：  " <<c1.ci_A << endl;
//	cout << "c1的y方向剪切形状系数为：  " << c1.ci_Sy << endl;
//	cout << "c1的z方向剪切形状系数为：  " << c1.ci_Sz << endl;
//	cout << "c1的抗扭惯性矩为：  " << c1.ci_Ixx << endl;
//	cout << "c1的y方向抗弯惯性矩为：  " << c1.ci_Iyy << endl;
//	cout << "c1的z方向抗弯惯性矩为：  " << c1.ci_Izz << endl;
//	cout << "y方向有效剪切面积：	" << c1.ci_A / c1.ci_Sy << endl;
//	cout << "z方向有效剪切面积：	" << c1.ci_A / c1.ci_Sz << endl;
//
//
//	system("pause");
//}
