#include<stdio.h>

//输入三个整数，输出其中最大的数

int main()
{
	int a, b, c, max;
	max = 0;
	printf("输入三个整数：");
	scanf("%d%d%d", &a, &b, &c);
	max = (a > b) ? a : b;
	max = (c > max) ? c : max;
	printf("max=%d\n", max);
	return 0;
}

