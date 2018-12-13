#include<stdio.h>
#include<math.h>

//求二次方程的根，设判别式大于0
int main()
{
	double a, b, c;
	double disc;
	double x1, x2;
	double p, q;
	printf("输入二次方程的系数a,b,c:");
	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b*b-4*a*c;
	printf("disc=%lf\n", disc);
	printf("sqrt(disc)=%lf\n", sqrt(disc));	//负数开不了平方
	if(disc > 0)
	{
		p = (-1)*(b/(2*a));
		q = sqrt(disc)/(2*a);
		x1 = p+q;
		x2 = p-q;
		printf("p=%lf\tq=%lf\nx1=%lf\tx2=%lf\n", p, q, x1, x2);
	}
	else if(disc == 0)
	{
		p = (-1)*(b/(2*a));
		printf("x1=x2=%lf\n", p);
	}
	
	return 0;
}

