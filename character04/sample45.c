#include<stdio.h>

//有一函数...,输入一个x值，输出相应的y值
int main()
{
	int x, y;
	double w;
	printf("输入一个指数，例3.14159e+03(用来试试指数形式行不行):");
	scanf("%lf", &w);
	printf("%lf\n", w);
	printf("输入一个x值:");
	scanf("%d", &x);
	if(x < 0)
	{
		y = -1;
	}
	else if(x == 0)
	{
		y = 0;
	}
	else if(x > 0)
	{
		y = 1;
	}
	printf("x=%d\ty=%d\n", x, y);
	return 0;
}

