#include<iostream>
using namespace std;

class Loop
{
public:
	Loop(double d,double tw):Lo_D(d),Lo_Tw(tw)

	{
		//�������
		Lo_A = 1.0 / 4.0 * PI * (Lo_D * Lo_D - pow(Lo_D - 2 * Lo_Tw, 2));

		//���㿹Ť���Ծ�
		Lo_Ixx = 1.0 / 32.0 * PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

		//����y��������Ծ�
		Lo_Iyy = 1.0 / 64.0 * PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

		//����z��������Ծ�
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
//	cout << "�����뻷�ͽ����ֱ�����ں�" << endl;
//	cin >>d >> tw ;
//	
//	double D = static_cast<double>(d);
//	double Tw = static_cast<double>(tw);
//
//	Loop t1(D, Tw);
//
//
//
//	cout << "���Ϊ��  " << t1.Lo_A << endl;
//	cout << "y���������״ϵ��Ϊ��  " << t1.Lo_Sy << endl;
//	cout << "z���������״ϵ��Ϊ��  " << t1.Lo_Sz << endl;
//	cout << "��Ť���Ծ�Ϊ��  " << t1.Lo_Ixx << endl;
//	cout << "y��������Ծ�Ϊ��  " << t1.Lo_Iyy << endl;
//	cout << "z��������Ծ�Ϊ��  " << t1.Lo_Izz << endl;
//	cout << "y������Ч���������	" << t1.Lo_A / t1.Lo_Sy << endl;
//	cout << "z������Ч���������	" << t1.Lo_A / t1.Lo_Sz << endl;
//
//
//	system("pause");
//}