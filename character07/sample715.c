#include<stdio.h>

//若外部变量与局部变量同名，分析结果。

int a=3, b=5;

int main()
{
	int max(int a, int b);
	int c;
	c = max(3, 4);
	printf("c=%d\n", c);
	int a = 121;
	c = max(a, b);
	printf("c=%d\n", c); 
	return 0;
}

int max(int a, int b)
{
	int c;
	c = a>b? a:b;
	return c;
}
