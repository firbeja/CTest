#include<stdio.h>

//计算存款利息
int main()
{
	float r1 = 0.0036;
	float r2 = 0.0225;
	float r3 = 0.0198;
	float p0=1000;
	float p1, p2, p3;
	p1 = p0*(1 + r1);
	p2 = p0*(1 + r2);
	p3 = p0*(1 + r3/2)*(1 + r3/2);
	printf("p0=%f\tp1=%f\tp2=%f\tp3=%f\t\n", p0, p1, p2, p3);
	return 0;
}

