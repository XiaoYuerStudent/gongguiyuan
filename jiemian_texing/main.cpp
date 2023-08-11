

#include "Loop.h"
#include"T.h"
#include"Rectangle.h"
#include"Box.h"
#include"I.h"
#include"L.h"
#include"invert_T.h"
#include"Circle.h"



void test_Loop()
{
	double d = 0.016;
	double tw = 0.016;
	cout << "�����뻷�ͽ����ֱ�����ں�" << endl;
	cin >> d >> tw;

	double D = static_cast<double>(d);
	double Tw = static_cast<double>(tw);

	Loop t1(D, Tw);



	cout << "���Ϊ��  " << t1.Lo_A << endl;
	cout << "y���������״ϵ��Ϊ��  " << t1.Lo_Sy << endl;
	cout << "z���������״ϵ��Ϊ��  " << t1.Lo_Sz << endl;
	cout << "��Ť���Ծ�Ϊ��  " << t1.Lo_Ixx << endl;
	cout << "y��������Ծ�Ϊ��  " << t1.Lo_Iyy << endl;
	cout << "z��������Ծ�Ϊ��  " << t1.Lo_Izz << endl;
	cout << "y������Ч���������	" << t1.Lo_A / t1.Lo_Sy << endl;
	cout << "z������Ч���������	" << t1.Lo_A / t1.Lo_Sz << endl;


}
void test_T()
{
	double h = 0.3;
	double b = 0.1;
	double tf = 0.016;
	double tw = 0.016;
	cout << "������T�ͽ���Ľ���ߡ����������Ե�񡢸����" << endl;
	cin >>h >> b >> tf >> tw;
	double B = static_cast<double>(b);
	double H = static_cast<double>(h);
	double Tf = static_cast<double>(tf);
	double Tw = static_cast<double>(tw);

	Tshape t1(H, B, Tf, Tw);



	cout << "���Ϊ��  " << t1.T_A << endl;
	cout << "y���������״ϵ��Ϊ��  " << t1.T_Sy << endl;
	cout << "z���������״ϵ��Ϊ��  " << t1.T_Sz << endl;
	cout << "��Ť���Ծ�Ϊ��  " << t1.T_Ixx << endl;
	cout << "y��������Ծ�Ϊ��  " << t1.T_Iyy << endl;
	cout << "z��������Ծ�Ϊ��  " << t1.T_Izz << endl;
	cout << "y������Ч���������	" << t1.T_A / t1.T_Sy << endl;
	cout << "z������Ч���������	" << t1.T_A / t1.T_Sz << endl;

}
void test_Rectangle()
{
	double b = 2;
	double h = 1;
	
	cout << "��������ν�����,�߶�" << endl;
	cin >> b >> h;
	

	double B = static_cast<double>(b);
	double H = static_cast<double>(h);
	Rectangle r1(B,H);

	

	cout << "r1�����Ϊ��  " << r1.re_A << endl;
	cout << "r1��y���������״ϵ��Ϊ��  " << r1.re_Sy << endl;
	cout << "r1��z���������״ϵ��Ϊ��  " << r1.re_Sz << endl;
	cout << "r1�Ŀ�Ť���Ծ�Ϊ��  " << r1.re_Ixx << endl;
	cout << "r1��y��������Ծ�Ϊ��  " << r1.re_Iyy << endl;
	cout << "r1��z��������Ծ�Ϊ��  " << r1.re_Izz << endl;
	cout << "y������Ч���������	" << r1.re_A / r1.re_Sy << endl;
	cout << "z������Ч���������	" << r1.re_A / r1.re_Sz << endl;
}
void test_Box()
{
	double h = 0.3;
	double b = 0.4;
	double tf = 0.016;
	double tw = 0.016;
	cout << "���������ͽ���Ľ���ߡ��������Ե�񡢸����" << endl;
	cin >>h >> b >> tf >> tw;
	double B = static_cast<double>(b);
	double H = static_cast<double>(h);
	double Tf = static_cast<double>(tf);
	double Tw = static_cast<double>(tw);
	
	Box t1(H, B, Tf, Tw);
	
	
	
	cout << "���Ϊ��  " << t1.B_A << endl;
	cout << "y���������״ϵ��Ϊ��  " << t1.B_Sy << endl;
	cout << "z���������״ϵ��Ϊ��  " << t1.B_Sz << endl;
	cout << "��Ť���Ծ�Ϊ��  " << t1.B_Ixx << endl;
	cout << "y��������Ծ�Ϊ��  " << t1.B_Iyy << endl;
	cout << "z��������Ծ�Ϊ��  " << t1.B_Izz << endl;
	cout << "y������Ч���������	" << t1.B_A / t1.B_Sy << endl;
	cout << "z������Ч���������	" << t1.B_A / t1.B_Sz << endl;
}
void test_I()
{
	double h = 0.3;
	double bt = 0.13;
	double bb = 0.13;
	double tt = 0.016;
	double tb = 0.016;
	double tw = 0.016;
	cout << "������I�ͽ���Ľ���ߡ�����Ե������Ե������Ե������Ե�񡢸����" << endl;
	cin >> h >> bt >> bb >> tt >> tb >> tw;
	double H = static_cast<double>(h);
	double Bt = static_cast<double>(bt);
	double Bb = static_cast<double>(bb);
	double Tt = static_cast<double>(tt);
	double Tb = static_cast<double>(tb);
	double Tw = static_cast<double>(tw);
	
	Ishape t1(H, Bt, Bb, Tt, Tb, Tw);
	
	
	
	cout << "���Ϊ��  " << t1.I_A << endl;
	cout << "y���������״ϵ��Ϊ��  " << t1.I_Sy << endl;
	cout << "z���������״ϵ��Ϊ��  " << t1.I_Sz << endl;
	cout << "��Ť���Ծ�Ϊ��  " << t1.I_Ixx << endl;
	cout << "y��������Ծ�Ϊ��  " << t1.I_Iyy << endl;
	cout << "z��������Ծ�Ϊ��  " << t1.I_Izz << endl;
	cout << "y������Ч���������	" << t1.I_A / t1.I_Sy << endl;
	cout << "z������Ч���������	" << t1.I_A / t1.I_Sz << endl;
}
void test_L()
{
	double h = 0.1;
	double b = 0.1;
	double tf1 = 0.016;
	double tf2 = 0.016;
	cout << "������L�ͽ���Ľ��������ߡ�֫1��֫2��" << endl;
	cin >>b >> h >> tf1 >> tf2;
	double B = static_cast<double>(b);
	double H = static_cast<double>(h);
	double Tf1 = static_cast<double>(tf1);
	double Tf2 = static_cast<double>(tf2);

	Lshape l1(H, B, Tf1, Tf2);



	cout << "���Ϊ��  " << l1.L_A << endl;
	cout << "y���������״ϵ��Ϊ��  " << l1.L_Sy << endl;
	cout << "z���������״ϵ��Ϊ��  " << l1.L_Sz << endl;
	cout << "��Ť���Ծ�Ϊ��  " << l1.L_Ixx << endl;
	cout << "y��������Ծ�Ϊ��  " << l1.L_Iyy << endl;
	cout << "z��������Ծ�Ϊ��  " << l1.L_Izz << endl;
	cout << "y������Ч���������	" << l1.L_A / l1.L_Sy << endl;
	cout << "z������Ч���������	" << l1.L_A / l1.L_Sz << endl;
	}
void test_invert_T()
{
	double h = 0.3;
	double b = 0.1;
	double tf = 0.016;
	double tw = 0.016;
	cout << "�����뵹T�ͽ���Ľ���ߡ��������Ե�񡢸����" << endl;
	cin >>h >> b >> tf >> tw;
	double B = static_cast<double>(b);
	double H = static_cast<double>(h);
	double Tf = static_cast<double>(tf);
	double Tw = static_cast<double>(tw);

	invert_T t1(H, B, Tf, Tw);



	cout << "���Ϊ��  " << t1.iT_A << endl;
	cout << "y���������״ϵ��Ϊ��  " << t1.iT_Sy << endl;
	cout << "z���������״ϵ��Ϊ��  " << t1.iT_Sz << endl;
	cout << "��Ť���Ծ�Ϊ��  " << t1.iT_Ixx << endl;
	cout << "y��������Ծ�Ϊ��  " << t1.iT_Iyy << endl;
	cout << "z��������Ծ�Ϊ��  " << t1.iT_Izz << endl;
	cout << "y������Ч���������	" << t1.iT_A / t1.iT_Sy << endl;
	cout << "z������Ч���������	" << t1.iT_A / t1.iT_Sz << endl;


}
void test_Circle()
{
	double d = 1;
	cout << "������Բ�ν���ֱ��" << endl;
	cin >> d;
	double D = static_cast<double>(d);
	Circle c1(D);

	cout << "c1�����Ϊ��  " <<c1.ci_A << endl;
	cout << "c1��y���������״ϵ��Ϊ��  " << c1.ci_Sy << endl;
	cout << "c1��z���������״ϵ��Ϊ��  " << c1.ci_Sz << endl;
	cout << "c1�Ŀ�Ť���Ծ�Ϊ��  " << c1.ci_Ixx << endl;
	cout << "c1��y��������Ծ�Ϊ��  " << c1.ci_Iyy << endl;
	cout << "c1��z��������Ծ�Ϊ��  " << c1.ci_Izz << endl;
	cout << "y������Ч���������	" << c1.ci_A / c1.ci_Sy << endl;
	cout << "z������Ч���������	" << c1.ci_A / c1.ci_Sz << endl;

}

int main()
{
	test_Loop();
	test_T();
	test_Rectangle();
	test_Box();
	test_I();
	test_L();
	test_invert_T();
	test_Circle();

	system("pause");
	return 0;
}