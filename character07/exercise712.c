#include<stdio.h>
#include<math.h>
//用牛顿迭代法求根。a*x^3+b*x^2+c*x+d=0，系数为1，2，3，4，由主函数输入。
//求x在1附近的一个实根，求出根后由主函数输出。

float fun(int a, int b, int c, int d);

int main()
{
	float x;
	x = fun(1, 2, 3, 4);
	printf("x=%f\n", x);
	return 0;
}

float fun(int a, int b, int c, int d)
{
	float x0, x1, f, f_d, w;
	x0 = 1;
//	x1 = -13;
	x1 = 1;
	do
	{
		x0 = x1;
		f = a*x0*x0*x0 + b*x0*x0 + c*x0 + d;
		f_d = 3*a*x0*x0 + 2*b*x0 + c;
		x1 = x0 - f/f_d;
		w = x0 - x1;
		printf("w=%f\tx0=%f\tx1=%f\n", w, x0, x1);
	}while(fabs(w) >= 10e-6);
	return x0;
}
