#include<stdio.h>

int main()
{
	double r, h;
	double Ccircular, Scircular, Sball, Vball, Vcylinder;
	const double PI = 3.141592;
	r = 1;
	h = 3;
	Ccircular = 2*PI*r;
	Scircular = PI*r*r;
	Sball = 4*PI*r*r;
	Vball = (4.0/3)*PI*r*r*r;
	Vcylinder = PI*r*r*h;
	printf("圆周长：%7.2lf\n圆面积：%7.2lf\n球表面积：%7.2lf\n球体积：%7.2lf\n圆柱体体积%7.2lf\n", Ccircular, Scircular, Sball, Vball, Vcylinder);
	return 0;
}

