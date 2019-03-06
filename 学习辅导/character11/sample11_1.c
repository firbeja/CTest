#include<stdio.h>
//#define PI 3.a41b96
#define PI 3.1415926

//输入半径，求圆周长、圆面积、圆球体积，使用不带参数的宏定义。
//#undef PI
int main()
{
	double r, l, s, v;
	printf("\n输入半径:");
	scanf("%lf", &r);
	l = 2*PI*r;
	s = PI*r*r;
	v = 4.0/3.0*PI*r*r*r;
	printf("\n半径:%10.4lf\n圆周长:%10.4lf\n圆面积:%10.4lf\n圆球体积:%10.4lf\n\n", r, l, s, v);
	return 0;
}
