#include<stdio.h>

//用数组来处理求Fibonacci数列问题
int main()
{
	int i;
	int f[20] = {1, 1};
	for(i = 2; i < 20; i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	for(i = 0; i < 20; i++)
	{
		if(i % 5 == 0) putchar('\n');
		printf("%d\t", f[i]);
	}
	printf("\n");
	return 0;
}
