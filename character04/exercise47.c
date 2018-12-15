#include<stdio.h>

//以下两个程序，请分析它们是否能实现题目要求

void fun1(int x);
void fun2(int x);

void fun1(int x)
{
	int y = -1;
	if(x != 0)
		if(x > 0)
			y = 1;
		else
			y = 0;
	printf("x=%d\ty=%d\n", x, y);
}

void fun2(int x)
{
	int y = 0;
	if(x >= 0)
		if(x > 0) y=1;
		else y=-1;
	printf("x=%d\ty=%d\n", x, y);
}

int main()
{
	int x;
	printf("输入x的值：");
	scanf("%d", &x);
	fun1(x);
	fun2(x);
	return 0;
}
