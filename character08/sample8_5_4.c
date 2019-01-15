#include<stdio.h>
#include<math.h>

//小例子，编写一个求定积分的通用函数，用它分别求以下五个函数的定积分。

double fun(double a, double b, double (*p)(double));
double f1(double x);
double f2(double x);
double f3(double x);
double f4(double x);
double f5(double x);

double fun(double a, double b, double (*p)(double))
{
	double k1, k2;
	k1 = (*p)(a);
	k2 = (*p)(b);
	return k2-k1;
}

double f1(double x)
{
	return x + x*x/2;
}

double f2(double x)
{
	return x*x + 3*x;
}

double f3(double x)
{
	return exp(x) + x;
}

double f4(double x)
{
	return (1/3.0)*x*x*x + x*x + x;
}

double f5(double x)
{
	return (1/4.0)*x*x*x*x;
}

int main()
{
	int a, b, num;
	double m, (*p)(double);
	printf("输入两个整数:");
	scanf("%d%d", &a, &b);
	printf("选择函数1~5:");
	scanf("%d", &num);
	if(num == 1)
	{
		p = f1;
	}
	else if(num == 2)
	{
		p = f2;
	}
	else if(num == 3)
	{
		p = f3;
	}
	else if(num == 4)
	{
		p = f4;
	}
	else if(num == 5)
	{
		p = f5;
	}
	m = fun(a, b, p);
	printf("m= %lf\n", m);
	return 0;
}
