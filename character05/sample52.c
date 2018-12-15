#include<stdio.h>

//求1+2+3+...+99+100，do...while()
int main()
{
	int sum, i;
	sum = 0;
	i = 1;
	do
	{
		sum = sum + i;
		i++;
	}while(i <= 100);
	printf("i=%d\tsum=%d\n", i, sum);
	return 0;
}
