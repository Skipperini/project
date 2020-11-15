#include "funcs.h"
#include "math.h"

double Funcia1(double x, double y, double alpha)
{
	int a;
	const double pi = 3.14;
	a = ((2 * pow(cos(5 * x + pi / 3), 2)) / pow(sin(pow(y, 3)), 2)) + cos(((alpha + 105) * pi) / 180);

	return a;
}
double Funcia2(double x, double y, double z)
{
	double b = (sqrt(10 * pow(x, 2) - pow(y, 3) / 9 * x)) + (pow((pow(fabs(24 * z - 8 * y), 3)), 1 / 3)) / pow(z, 3);
	return b;

}
double Funcia3(double b)
{
	double k = --b;
	return k;

}