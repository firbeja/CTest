#include<stdio.h>

//输入两个实数，用一个函数求出他们之和。
int main()
{
	float my_add(float a, float b);
	float a, b;
	float c;
	printf("输入两个实数:");
	scanf("%f%f", &a, &b);
	c = my_add(a, b);
	printf("c=%f\n", c);
	return 0;
}

float my_add(float x, float y)
{
	float z;
	z = x+y;
	return z;
}
