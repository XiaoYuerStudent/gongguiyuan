#include<iostream>
using namespace std;


class Tshape
{
public:
	Tshape(double h, double b, double tf, double tw) :T_H(h), T_B(b), T_Tf(tf), T_Tw(tw)
	{
		//�������
		double A1 = T_B * T_Tf;
		double A2 = (T_H - T_Tf) * T_Tw;
		T_A = A1 + A2;

		//����y���������״ϵ��
		T_Sy = T_A / (5.0 / 6.0 * T_B * T_Tf);
		//����z���������״ϵ��
		T_Sz = T_A / (T_H * T_Tw);

		//���㿹Ť���Ծ�,Ҫ��B>=Tf,H>=Tw
		double Ixx1;
		double Ixx2;
		Ixx1 = 1.0 / 3.0 * (1.0 - 0.63 * T_Tf / T_B * (1.0 - 1.0 / 12.0 * pow(T_Tf, 4) / pow(T_B, 4))) * T_B * pow(T_Tf, 3);
		Ixx2 = 1.0 / 3.0 * (1.0 - 0.63 * T_Tw / (T_H - T_Tf) * (1.0 - 1.0 / 12.0 * pow(T_Tw, 4) / pow(T_H - T_Tf, 4))) * (T_H - T_Tf) * pow(T_Tw, 3);
		T_Ixx = Ixx1 + Ixx2;

		//����y��������Ծ�
		double z1 = T_H - T_Tf / 2;//������������ĵ���Ե����
		double z2 = (T_H - T_Tf) / 2;//������������ĵ���Ե����
		double Sy1 = A1 * z1;//�����
		double Sy2 = A2 * z2;//�����
		double Z = (Sy1 + Sy2) / T_A;//������
		double Iyy11 = A1 * pow(Z - z1, 2);
		double Iyy12 = 1.0 / 12.0 * T_B * pow(T_Tf, 3);
		double Iyy1 = Iyy11 + Iyy12;
		double Iyy21 = A2 * pow(Z - z2, 2);
		double Iyy22 = 1.0 / 12.0 * T_Tw * pow(T_H - T_Tf, 3);
		double Iyy2 = Iyy21 + Iyy22;
		T_Iyy = Iyy1 + Iyy2;

		//����z��������Ծ�
		double y1 = T_B / 2;//������������ĵ�������
		double y2 = T_B / 2;//������������ĵ�������
		double Sz1 = A1 * y1;//�����
		double Sz2 = A2 * y2;//�����
		double Y = (Sz1 + Sz2) / T_A;//������
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
//	cout << "������T�ͽ���Ľ���ߡ����������Ե�񡢸����" << endl;
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
//	cout << "���Ϊ��  " << t1.T_A << endl;
//	cout << "y���������״ϵ��Ϊ��  " << t1.T_Sy << endl;
//	cout << "z���������״ϵ��Ϊ��  " << t1.T_Sz << endl;
//	cout << "��Ť���Ծ�Ϊ��  " << t1.T_Ixx << endl;
//	cout << "y��������Ծ�Ϊ��  " << t1.T_Iyy << endl;
//	cout << "z��������Ծ�Ϊ��  " << t1.T_Izz << endl;
//	cout << "y������Ч���������	" << t1.T_A / t1.T_Sy << endl;
//	cout << "z������Ч���������	" << t1.T_A / t1.T_Sz << endl;
//
//
//
//	system("pause");
//}