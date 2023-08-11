
#include "Box.h"

Box::Box(double h, double b, double tf, double tw) : B_H(h), B_B(b), B_Tf(tf), B_Tw(tw)
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