#include<stdio.h>

//有一个函数...，输入x的值，输出y相应的值

int main()
{
	int x, y;
	printf("输入x的值：");
	scanf("%d", &x);
	if(x < 1)
	{
		y = x;
	}
	else if(x >= 1 && x < 10)
	{
		y = 2*x-1;
	}
	else if(x >= 10)
	{
		y = 3*x-11;
	}
	printf("x=%d\ty=%d\n", x, y);
	return 0;
}
