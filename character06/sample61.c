#include<stdio.h>

//循环赋值，逆序输出
int main()
{
	int a[10], i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	for(i = 9; i >= 0; i--)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");	
	return 0;
}
