#include<stdio.h>

//写两个函数，求最大公约数和最小公倍数。

int fun1(int m, int n);
int fun2(int m, int n);
int fun1(int m, int n)
{
	int r;
	r = m;
	while(r != 0)
	{
		printf("m=%d n=%d ", m, n);
		r = m%n;
		printf("r=%d\n", r);
		m = n;
		n = r;
	}
	return m;
}

int fun2(int m, int n)
{
	int a, p;
	p = m*n;
	a = fun1(m, n);
	return p/a;
}

int main()
{
	int m, n, j, k;
	printf("输入两个整数:");
	scanf("%d%d", &m, &n);
	j = fun1(m, n);
	k = fun2(m, n);
	printf("j=%d k=%d\n", j, k);
	return 0;
}
