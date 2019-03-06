#include<stdio.h>
#define PI 3.1415926
#define CIRCLE(R, L, S, V) L=2*PI*R;S=PI*R*R;V=4.0/3.0*PI*R*R*R
#define MAX(a, b) (a)>(b)?(a):(b)

//使用宏，求圆周长、圆面积和圆球体积。

int main()
{
	double r, l, s, v, t;
	printf("输入半径:");
	scanf("%lf", &r);
	CIRCLE(r, l, s, v);
	printf("r=%10.4lf\nl=%10.4f\ns=%10.4lf\nv=%10.4lf\n", r, l, s, v);
	printf("\nMAX=%d\n", MAX(23+230,295-30));
	return 0;
}
