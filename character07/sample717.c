#include<stdio.h>

//输出1到5的阶乘值。

int main()
{
	int fun(int n);
	int i, m;
	for(i = 1; i <= 5; i++)
	{
		m = fun(i);
		printf("i=%d m=%d\n", i, m);
	}
	return 0;
}

int fun(int n)
{
	static int fac = 1;
//	int fac = 1;
	printf("fac=%d n=%d -- ", fac, n);
	fac = fac * n;
	return fac;
}
