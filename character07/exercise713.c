#include<stdio.h>
//用递归法求n阶勒让德多项式的值，递归公式为(看书)。

float fun(float x, int n);
void print_space(int n);

int main()
{
	int n, x;
	float p;
	printf("输入n，x的值:");
	scanf("%d%d", &n, &x);
	p = fun(x, n);
	return 0;
}

float fun(float x, int n)
{
	float p, a, b, c, t1, t2;
	if(n > 1)
	{
		t1 = fun(x, n-1);
		t2 = fun(x, n-2);
		a = (2*n - 1) * x;
		b = t1;
		c = (n-1) * t2;
		p = (a+b+c) / n;
		print_space(n);
		printf("n=%d p=%5.2f\n", n, p);
	}
	else
	{
		if(n == 0)
		{
			p = 1;
		}
		else if(n == 1)
		{
			p = x;
		}
		print_space(n);
		printf("n=%d p=%5.2f\n", n, p);
	}
	return p;
}

void print_space(int n)
{
	for(int j = 0; j < n; j++)
	{
		printf("   ");
	}
}
