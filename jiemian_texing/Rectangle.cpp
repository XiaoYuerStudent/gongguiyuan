#include<iostream>
using namespace std;


//���ν�����
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

		re_A = re_H * re_B;//���

		//ע�⣡������Ť���Ծ�,Ҫ��H>=B!!!
		re_Ixx = 1.0 / 3.0 * (1.0 - 0.63 * B / H * (1.0 - 1.0 / 12.0 * pow(B, 4) / pow(H, 4))) * H * pow(B, 3);
		re_Iyy = 1.0 / 12.0 * re_B * pow(re_H, 3);//y��������Ծ�
		re_Izz = 1.0 / 12.0 * re_H * pow(re_B, 3);//z��������Ծ�
	}
	
	double re_H ;//��
	double re_B ;//��
	double re_A;
	double re_Sy = 1.2;//y���������״ϵ��
	double re_Sz = 1.2;//z���������״ϵ��
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
//	cout << "��������ν�����,�߶�" << endl;
//	cin >> b >> h;
//	
//
//	double B = static_cast<double>(b);
//	double H = static_cast<double>(h);
//	Rectangle r1(B,H);
//
//	
//
//	cout << "r1�����Ϊ��  " << r1.re_A << endl;
//	cout << "r1��y���������״ϵ��Ϊ��  " << r1.re_Sy << endl;
//	cout << "r1��z���������״ϵ��Ϊ��  " << r1.re_Sz << endl;
//	cout << "r1�Ŀ�Ť���Ծ�Ϊ��  " << r1.re_Ixx << endl;
//	cout << "r1��y��������Ծ�Ϊ��  " << r1.re_Iyy << endl;
//	cout << "r1��z��������Ծ�Ϊ��  " << r1.re_Izz << endl;
//	cout << "y������Ч���������	" << r1.re_A / r1.re_Sy << endl;
//	cout << "z������Ч���������	" << r1.re_A / r1.re_Sz << endl;
//
//	
//	system("pause");
//}