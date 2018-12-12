#include<stdio.h>

//华氏转摄氏
int main()
{
	float f, c;
	printf("输入华氏温度：");
	scanf("%f", &f);
	c = (5.0/9.0)*(f - 32);
	printf("c=%7.1f\n", c);
	return 0;
}

