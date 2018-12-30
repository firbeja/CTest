#include<stdio.h>

//改造例7.2，函数返回值类型为int，但返回一个float，分析其处理方法。
int main()
{
	int my_max(float x, float y);
	int m;
	float a, b;
	printf("输入两个实数:");
	scanf("%f%f", &a, &b);
	m = my_max(a, b);
	printf("m=%d\n", m);
	return 0;
}

int my_max(float x, float y)
{
	float z;
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
