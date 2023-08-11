#include"Loop.h"

Loop::Loop(double d,double tw):Lo_D(d),Lo_Tw(tw)
{	
	//�������
	Lo_A = 1.0 / 4.0 * M_PI * (Lo_D * Lo_D - pow(Lo_D - 2 * Lo_Tw, 2));

	//���㿹Ť���Ծ�
	Lo_Ixx = 1.0 / 32.0 * M_PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

	//����y��������Ծ�
	Lo_Iyy = 1.0 / 64.0 * M_PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

	//����z��������Ծ�
	Lo_Izz = 1.0 / 64.0 * M_PI * (pow(Lo_D, 4) - pow(Lo_D - 2 * Lo_Tw, 4));

}