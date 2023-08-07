#include<iostream>
using namespace std;


class Tshape
{
public:
	Tshape(double h, double b, double tf, double tw) :T_H(h), T_B(b), T_Tf(tf), T_Tw(tw)
	{
		//计算面积
		double A1 = T_B * T_Tf;
		double A2 = (T_H - T_Tf) * T_Tw;
		T_A = A1 + A2;

		//计算y方向剪切形状系数
		T_Sy = T_A / (5.0 / 6.0 * T_B * T_Tf);
		//计算z方向剪切形状系数
		T_Sz = T_A / (T_H * T_Tw);

		//计算抗扭惯性矩,要求B>=Tf,H>=Tw
		double Ixx1;
		double Ixx2;
		Ixx1 = 1.0 / 3.0 * (1.0 - 0.63 * T_Tf / T_B * (1.0 - 1.0 / 12.0 * pow(T_Tf, 4) / pow(T_B, 4))) * T_B * pow(T_Tf, 3);
		Ixx2 = 1.0 / 3.0 * (1.0 - 0.63 * T_Tw / (T_H - T_Tf) * (1.0 - 1.0 / 12.0 * pow(T_Tw, 4) / pow(T_H - T_Tf, 4))) * (T_H - T_Tf) * pow(T_Tw, 3);
		T_Ixx = Ixx1 + Ixx2;

		//计算y方向抗弯惯性矩
		double z1 = T_H - T_Tf / 2;//各部分面积形心到底缘距离
		double z2 = (T_H - T_Tf) / 2;//各部分面积形心到底缘距离
		double Sy1 = A1 * z1;//面积矩
		double Sy2 = A2 * z2;//面积矩
		double Z = (Sy1 + Sy2) / T_A;//形心轴
		double Iyy11 = A1 * pow(Z - z1, 2);
		double Iyy12 = 1.0 / 12.0 * T_B * pow(T_Tf, 3);
		double Iyy1 = Iyy11 + Iyy12;
		double Iyy21 = A2 * pow(Z - z2, 2);
		double Iyy22 = 1.0 / 12.0 * T_Tw * pow(T_H - T_Tf, 3);
		double Iyy2 = Iyy21 + Iyy22;
		T_Iyy = Iyy1 + Iyy2;

		//计算z方向抗弯惯性矩
		double y1 = T_B / 2;//各部分面积形心到左侧距离
		double y2 = T_B / 2;//各部分面积形心到左侧距离
		double Sz1 = A1 * y1;//面积矩
		double Sz2 = A2 * y2;//面积矩
		double Y = (Sz1 + Sz2) / T_A;//形心轴
		double Izz11 = A1 * pow(Y - y1, 2);
		double Izz12 = 1.0 / 12.0 * T_Tf * pow(T_B, 3);
		double Izz1 = Izz11 + Izz12;
		double Izz21 = A2 * pow(Y - y2, 2);
		double Izz22 = 1.0 / 12.0 * (T_H - T_Tf) * pow(T_Tw, 3);
		double Izz2 = Izz21 + Izz22;
		T_Izz = Izz1 + Izz2;



	}



	double T_H;
	double T_B;
	double T_Tf;
	double T_Tw;
	double T_A;
	double T_Sy;
	double T_Sz;
	double T_Ixx;
	double T_Iyy;
	double T_Izz;

};









//
//int main()
//{
//	double h = 0.3;
//	double b = 0.1;
//	double tf = 0.016;
//	double tw = 0.016;
//	cout << "请输入T型截面的截面高、截面宽、上翼缘厚、腹板厚" << endl;
//	cin >>h >> b >> tf >> tw;
//	double B = static_cast<double>(b);
//	double H = static_cast<double>(h);
//	double Tf = static_cast<double>(tf);
//	double Tw = static_cast<double>(tw);
//
//	Tshape t1(H, B, Tf, Tw);
//
//
//
//	cout << "面积为：  " << t1.T_A << endl;
//	cout << "y方向剪切形状系数为：  " << t1.T_Sy << endl;
//	cout << "z方向剪切形状系数为：  " << t1.T_Sz << endl;
//	cout << "抗扭惯性矩为：  " << t1.T_Ixx << endl;
//	cout << "y方向抗弯惯性矩为：  " << t1.T_Iyy << endl;
//	cout << "z方向抗弯惯性矩为：  " << t1.T_Izz << endl;
//	cout << "y方向有效剪切面积：	" << t1.T_A / t1.T_Sy << endl;
//	cout << "z方向有效剪切面积：	" << t1.T_A / t1.T_Sz << endl;
//
//
//
//	system("pause");
//}