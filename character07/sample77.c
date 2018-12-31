#include<stdio.h>

//用递归方法求n的阶乘。

long int fac(int num);
long int fac(int num)
{
	long int c = -1;
	printf("---num=%d c=%ld\n", num, c);
	if(num == 1)
	{
		c = 1;
	}
	else
	{
		c = num * fac(num - 1);
	}
	printf("num=%d c=%ld\n", num, c);
	return c;
}

int main()
{
	long int c;
	int n;
	printf("输入n:");
	scanf("%d", &n);
	c = fac(n);
	printf("%d!=%ld\n", n, c);
	return 0;
}
