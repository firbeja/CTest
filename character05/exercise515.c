#include<stdio.h>
#include<math.h>

//用二分法求下面方程在(-10,10)之间的根
int main()
{
	double x0, x1, x2, f0, f1, f2;
	x1 = -10.0;
	x2 = 10.0;
	f1 = 2.0*x1*x1*x1 - 4.0*x1*x1 + 3.0*x1 - 6.0;
	f2 = 2.0*x2*x2*x2 - 4.0*x2*x2 + 3.0*x2 - 6.0;
	f0 = 1.0;
	while(fabs(f0) >= 10e-6)
	{
		x0 = (x1 + x2) / 2.0;
		f0 = 2.0*x0*x0*x0 - 4.0*x0*x0 + 3.0*x0 - 6.0;
		if(f0*f1 < 0)
		{
			x2 = x0;
			f2 = f0;
		}
		else
		{
			x1 = x0;
			f1 = f0;
		}
		printf("x0=%f\tf0=%f\nx1=%f\tf1=%f\nx2=%f\tf2=%f\n\n", x0, f0, x1, f1, x2, f2);
	}
	return 0;
}
