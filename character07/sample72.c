#include<stdio.h>

//输出两个数中较大的，用函数找大数。
int main()
{
	int my_max(int x, int y);
	int m, a, b;
	printf("输入两个整数:");
	scanf("%d%d", &a, &b);
	m = my_max(a, b);
	printf("m=%d\n", m);
	return 0;
}

int my_max(int x, int y)
{
	int z;
	if(x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
