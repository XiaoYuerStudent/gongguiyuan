#include<iostream>
using namespace std;

//L型截面类
class Lshape
{
public:
	Lshape(double h, double b, double tf1, double tf2) :L_H(h), L_B(b), L_Tf1(tf1), L_Tf2(tf2)
	{
		//计算面积
		double A1 = L_B * L_Tf1;
		double A2 = (L_H - L_Tf1) * L_Tf2;
		L_A = A1 + A2;

		L_Sy = L_A / (5.0/ 6.0 * L_B * L_Tf1);//计算y方向剪切形状系数
		L_Sz = L_A / (5.0 / 6.0 * L_H * L_Tf2);//计算z方向剪切形状系数

		//计算抗扭惯性矩//要求B>=Tf1,H>=Tf2
		double Ixx1;
		double Ixx2;
		Ixx1 = 1.0 / 3.0 * (1.0 - 0.63 * L_Tf1 / L_B * (1.0 - 1.0 / 12.0 * pow(L_Tf1, 4) / pow(L_B, 4))) * L_B * pow(L_Tf1, 3);
		Ixx2 = 1.0 / 3.0 * (1.0 - 0.63 * L_Tf2 / (L_H - L_Tf1) * (1.0 - 1.0 / 12.0 * pow(L_Tf2, 4) / pow(L_H - L_Tf1, 4))) * (L_H - L_Tf1) * pow(L_Tf2, 3);
		L_Ixx = Ixx1 + Ixx2;

		//计算y方向抗弯惯性矩
		double z1 = L_H - L_Tf1 / 2;//各部分面积形心到底缘距离
		double z2 = (L_H - L_Tf1) / 2;//各部分面积形心到底缘距离
		double Sy1 = A1 * z1;//面积矩
		double Sy2 = A2 * z2;//面积矩
		double Z = (Sy1 + Sy2) / L_A;//形心轴
		double Iyy11 = A1 * pow(Z - z1, 2);
		double Iyy12 = 1.0 / 12.0 * L_B * pow(L_Tf1, 3);
		double Iyy1 = Iyy11 + Iyy12;
		double Iyy21 = A2 * pow(Z - z2, 2);
		double Iyy22 = 1.0 / 12.0 * L_Tf2 * pow(L_H - L_Tf1, 3);
		double Iyy2 = Iyy21 + Iyy22;
		L_Iyy = Iyy1 + Iyy2;

		//计算z方向抗弯惯性矩
		double y1 = L_B / 2;//各部分面积形心到左侧距离
		double y2 = L_Tf2 / 2;//各部分面积形心到左侧距离
		double Sz1 = A1 * y1;//面积矩
		double Sz2 = A2 * y2;//面积矩
		double Y = (Sz1 + Sz2) / L_A;//形心轴
		double Izz11 = A1 * pow(Y - y1, 2);
		double Izz12 = 1.0 / 12.0 * L_Tf1 * pow(L_B, 3);
		double Izz1 = Izz11 + Izz12;
		double Izz21 = A2 * pow(Y - y2, 2);
		double Izz22 = 1.0 / 12.0 * (L_H - L_Tf1) * pow(L_Tf2, 3);
		double Izz2 = Izz21 + Izz22;
		L_Izz = Izz1 + Izz2;

	}

	double L_H;
	double L_B;
	double L_Tf1;
	double L_Tf2;
	double L_A;
	double L_Sy;
	double L_Sz;
	double L_Ixx;
	double L_Iyy;
	double L_Izz;
};


//
//int main()
//{
//	double h = 0.1;
//	double b = 0.1;
//	double tf1 = 0.016;
//	double tf2 = 0.016;
//	cout << "请输入L型截面的截面宽、截面高、肢1厚、肢2厚" << endl;
//	cin >>b >> h >> tf1 >> tf2;
//	double B = static_cast<double>(b);
//	double H = static_cast<double>(h);
//	double Tf1 = static_cast<double>(tf1);
//	double Tf2 = static_cast<double>(tf2);
//
//	Lshape l1(H, B, Tf1, Tf2);
//
//
//
//	cout << "面积为：  " << l1.L_A << endl;
//	cout << "y方向剪切形状系数为：  " << l1.L_Sy << endl;
//	cout << "z方向剪切形状系数为：  " << l1.L_Sz << endl;
//	cout << "抗扭惯性矩为：  " << l1.L_Ixx << endl;
//	cout << "y方向抗弯惯性矩为：  " << l1.L_Iyy << endl;
//    cout << "z方向抗弯惯性矩为：  " << l1.L_Izz << endl;
//	cout << "y方向有效剪切面积：	" << l1.L_A / l1.L_Sy << endl;
//	cout << "z方向有效剪切面积：	" << l1.L_A / l1.L_Sz << endl;
//
//
//	system("pause");
//
//}