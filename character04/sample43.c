#include<stdio.h>

//输入三个数a,b,c,要求按由小到大的顺序输出
int main()
{
	float a, b, c, temp;
	printf("输入三个数：");
	scanf("%f%f%f", &a, &b, &c);
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%f\t%f\t%f\t\n", a, b, c);
	return 0;
}

