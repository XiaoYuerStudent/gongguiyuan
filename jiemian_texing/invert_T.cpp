
#include"invert_T.h"


invert_T::invert_T(double h, double b, double tf, double tw) :iT_H(h), iT_B(b), iT_Tf(tf), iT_Tw(tw)
{
	//�������
	double A1 = iT_B * iT_Tf;
	double A2 = (iT_H - iT_Tf) * iT_Tw;
	iT_A = A1 + A2;

	//����y���������״ϵ��
	iT_Sy = iT_A / (5.0 / 6.0 * iT_B * iT_Tf);
	//����z���������״ϵ��
	iT_Sz = iT_A / (iT_H * iT_Tw);

	//���㿹Ť���Ծ�,Ҫ��B>=Tf,H>=Tw
	double Ixx1;
	double Ixx2;
	Ixx1 = 1.0 / 3.0 * (1.0 - 0.63 * iT_Tf / iT_B * (1.0 - 1.0 / 12.0 * pow(iT_Tf, 4) / pow(iT_B, 4))) * iT_B * pow(iT_Tf, 3);
	Ixx2 = 1.0 / 3.0 * (1.0 - 0.63 * iT_Tw / (iT_H - iT_Tf) * (1.0 - 1.0 / 12.0 * pow(iT_Tw, 4) / pow(iT_H - iT_Tf, 4))) * (iT_H - iT_Tf) * pow(iT_Tw, 3);
	iT_Ixx = Ixx1 + Ixx2;

	//����y��������Ծ�
	double z1 = iT_H - iT_Tf / 2;//������������ĵ���Ե����
	double z2 = (iT_H - iT_Tf) / 2;//������������ĵ���Ե����
	double Sy1 = A1 * z1;//�����
	double Sy2 = A2 * z2;//�����
	double Z = (Sy1 + Sy2) / iT_A;//������
	double Iyy11 = A1 * pow(Z - z1, 2);
	double Iyy12 = 1.0 / 12.0 * iT_B * pow(iT_Tf, 3);
	double Iyy1 = Iyy11 + Iyy12;
	double Iyy21 = A2 * pow(Z - z2, 2);
	double Iyy22 = 1.0 / 12.0 * iT_Tw * pow(iT_H - iT_Tf, 3);
	double Iyy2 = Iyy21 + Iyy22;
	iT_Iyy = Iyy1 + Iyy2;

	//����z��������Ծ�
	double y1 = iT_B / 2;//������������ĵ�������
	double y2 = iT_B / 2;//������������ĵ�������
	double Sz1 = A1 * y1;//�����
	double Sz2 = A2 * y2;//�����
	double Y = (Sz1 + Sz2) / iT_A;//������
	double Izz11 = A1 * pow(Y - y1, 2);
	double Izz12 = 1.0 / 12.0 * iT_Tf * pow(iT_B, 3);
	double Izz1 = Izz11 + Izz12;
	double Izz21 = A2 * pow(Y - y2, 2);
	double Izz22 = 1.0 / 12.0 * (iT_H - iT_Tf) * pow(iT_Tw, 3);
	double Izz2 = Izz21 + Izz22;
	iT_Izz = Izz1 + Izz2;

}
	