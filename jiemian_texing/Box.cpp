#include<iostream>
using namespace std;

class Box
{
public:
	Box(double h, double b, double tf, double tw) : B_H(h), B_B(b), B_Tf(tf), B_Tw(tw)
	{
		//�������
		double A1 = 2.0 * B_B * B_Tf;
		double A2 = 2.0 * (B_H - 2.0 * B_Tf) * B_Tw;
		B_A = A1 + A2;

		//����y���������״ϵ��
		B_Sy = B_A / (2.0* B_B * B_Tf);
		//����z���������״ϵ��
		B_Sz = B_A / (2.0 * B_H * B_Tw);
		
		//���㿹Ť���Ծ�
		B_Ixx = 2.0 * pow((B_B - B_Tw) * (B_H - B_Tf), 2) / ((B_B - B_Tw) / B_Tf + (B_H - B_Tf) / B_Tw);

		//����y��������Ծ�
		B_Iyy = 1.0 / 12.0 * B_B * pow(B_H, 3) - 1.0 / 12.0 * (B_B - 2.0 * B_Tw) * pow(B_H - 2.0 * B_Tf, 3);
		//����z��������Ծ�
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
//	cout << "���������ͽ���Ľ���ߡ��������Ե�񡢸����" << endl;
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
//	cout << "���Ϊ��  " << t1.B_A << endl;
//	cout << "y���������״ϵ��Ϊ��  " << t1.B_Sy << endl;
//	cout << "z���������״ϵ��Ϊ��  " << t1.B_Sz << endl;
//	cout << "��Ť���Ծ�Ϊ��  " << t1.B_Ixx << endl;
//	cout << "y��������Ծ�Ϊ��  " << t1.B_Iyy << endl;
//	cout << "z��������Ծ�Ϊ��  " << t1.B_Izz << endl;
//    cout << "y������Ч���������	" << t1.B_A / t1.B_Sy << endl;
//    cout << "z������Ч���������	" << t1.B_A / t1.B_Sz << endl;
//
//
//
//
//	system("pause");
//}