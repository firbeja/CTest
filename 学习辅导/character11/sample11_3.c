#include<stdio.h>
#define PI 3.1415926
#define S(r) PI*r*r

//用带参数的宏求圆面积。

int main()
{
	double r;
	printf("输入半径:");
	scanf("%lf", &r);
	printf("r=%10.4lf\ns=%10.4lf\n", r, S(r));
	return 0;
}
