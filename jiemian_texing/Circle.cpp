
#include "Circle.h"

Circle::Circle(double d) :ci_D(d)
{
		
	ci_A = 1.0 / 4.0 * M_PI * ci_D * ci_D;
	ci_Ixx = 1.0 / 32.0 * M_PI * pow(ci_D, 4);
	ci_Iyy= 1.0 / 64.0 * M_PI * pow(ci_D, 4);
	ci_Izz = 1.0 / 64.0 * M_PI * pow(ci_D, 4);
}
	