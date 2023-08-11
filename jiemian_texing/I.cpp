
#include"I.h"


Ishape::Ishape(double h,double bt,double bb,double tt,double tb,double tw):I_H(h),I_Bt(bt),I_Bb(bb),I_Tt(tt),I_Tb(tb),I_Tw(tw)

{
	//�������
	double A1 = I_Bt * I_Tt;
	double A2 = (I_H - I_Tt - I_Tb) * I_Tw;
	double A3 = I_Bb * I_Tb;
	I_A = A1 + A2 + A3;

	//����y���������״ϵ��
	I_Sy = I_A / (5.0 / 6.0 * I_Bt * I_Tt + 5.0 / 6.0 * I_Bb * I_Tb);
	//����z���������״ϵ��
	I_Sz = I_A / (I_H * I_Tw);

	//���㿹Ť���Ծأ�ע��Bt>=Tt,H>=Tw
	double Ixx1;
	double Ixx2;
	double Ixx3;
	Ixx1 = 1.0 / 3.0 * (1.0 - 0.63 * I_Tt / I_Bt * (1.0 - 1.0 / 12.0 * pow(I_Tt, 4) / pow(I_Bt, 4))) * I_Bt * pow(I_Tt, 3);
	Ixx2 = 1.0 / 3.0 * (1.0 - 0.63 * I_Tw / (I_H - I_Tt-I_Tb) * (1.0 - 1.0 / 12.0 * pow(I_Tw, 4) / pow(I_H - I_Tt-I_Tb, 4))) * (I_H - I_Tt-I_Tb) * pow(I_Tw, 3);
	Ixx3 = 1.0 / 3.0 * (1.0 - 0.63 * I_Tb / I_Bb * (1.0 - 1.0 / 12.0 * pow(I_Tb, 4) / pow(I_Bb, 4))) * I_Bb * pow(I_Tb, 3);
	I_Ixx = Ixx1 + Ixx2 + Ixx3;

	//����y��������Ծ�
	double z1 = I_H - I_Tt / 2;//������������ĵ���Ե����
	double z2 = (I_H - I_Tt - I_Tb) / 2 + I_Tb;//������������ĵ���Ե����
	double z3 = I_Tb / 2;//������������ĵ���Ե����
	double Sy1 = A1 * z1;//�����
	double Sy2 = A2 * z2;//�����
	double Sy3 = A3 * z3;//�����
	double Z = (Sy1 + Sy2 + Sy3) / I_A;//������
	double Iyy11 = A1 * pow(Z - z1, 2);
	double Iyy12 = 1.0 / 12.0 * I_Bt * pow(I_Tt, 3);
	double Iyy1 = Iyy11 + Iyy12;
	double Iyy21 = A2 * pow(Z - z2, 2);
	double Iyy22 = 1.0 / 12.0 * I_Tw * pow(I_H - I_Tt-I_Tb, 3);
	double Iyy2 = Iyy21 + Iyy22;
	double Iyy31 = A3 * pow(Z - z3, 2);
	double Iyy32 = 1.0 / 12.0 * I_Bb * pow(I_Tb, 3);
	double Iyy3 = Iyy31 + Iyy32;
	I_Iyy = Iyy1 + Iyy2 + Iyy3;

	//����z��������Ծ�,Ҫ��Bb>=Bt
	double y1 = I_Bb / 2;//������������ĵ�������
	double y2 = I_Bb / 2;//������������ĵ�������
	double y3 = I_Bb / 2;//������������ĵ�������
	double Sz1 = A1 * y1;//�����
	double Sz2 = A2 * y2;//�����
	double Sz3 = A3 * y3;//�����
	double Y = (Sz1 + Sz2 + Sz3) / I_A;//������
	double Izz11 = A1 * pow(Y - y1, 2);
	double Izz12 = 1.0 / 12.0 * I_Tt * pow(I_Bt, 3);
	double Izz1 = Izz11 + Izz12;
	double Izz21 = A2 * pow(Y - y2, 2);
	double Izz22 = 1.0 / 12.0 * (I_H - I_Tt - I_Tb) * pow(I_Tw, 3);
	double Izz2 = Izz21 + Izz22;
	double Izz31 = A3 * pow(Y - y3, 2);
	double Izz32 = 1.0 / 12.0 * I_Tb * pow(I_Bb, 3);
	double Izz3 = Izz31 + Izz32;
	I_Izz = Izz1 + Izz2 + Izz3;

}
