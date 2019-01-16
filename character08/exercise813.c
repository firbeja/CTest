#include<stdio.h>
#include<math.h>

//写一个矩形法求定积分的通用函数，分别求sinx,cosx,e^x。

float fun(float a, float b, int n, float (*p)(float));
float fsin(float x);
float fcos(float x);
float fexp(float x);

int main()
{
	int n;
	float a, b, m1, m2, m3;
	float (*p)(float);
	a = 0;
	b = 1;
	n = 20;
	p = fsin;
	m1 = fun(a, b, n, p);
	p = fcos;
	m2 = fun(a, b, n, p);
	p = fexp;
	m3 = fun(a, b, n, p);
	printf("m1=%f\nm2=%f\nm3=%f\n", m1, m2, m3);
	return 0;
}

float fun(float a, float b, int n, float (*p)(float))
{
	int i;
	float t, q, sum, m;
	t = (b-a)/n;
	q = 0;
	sum = 0;
	i = 0;
	while(i < n)
	{
		q = q+t;
		m = (*p)(q);
		sum = sum + m*t;
		i++;
	}
	return sum;
}

float fsin(float x)
{
	return sin(x);
}

float fcos(float x)
{
	return cos(x);
}

float fexp(float x)
{
	return exp(x);
}
