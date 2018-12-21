#include<stdio.h>
#include<math.h>

//牛顿迭代法求下面方程在1.5附近的根
int main()
{
	int i;
	double x1, x2, f1, f1_d;
	x1 = 1.5;
	x2 = 0.0;
	while(fabs(x1 - x2) >= 10e-6 )
	{
		x2 = x1;
		f1 = 2.0*x1*x1*x1 - 4.0*x1*x1 + 3.0*x1 - 6.0;
		f1_d = 6.0*x1*x1 - 8.0*x1 + 3.0;
		x1 = x1 - f1 / f1_d;
		printf("x1=%f\tf1=%f\tf1_d=%f\tx2=%f\n", x2, f1, f1_d, x1);
	}
	return 0;
}
