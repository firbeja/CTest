#include<stdio.h>

//求1+2+3+...+99+100，while()
int main()
{
	int sum, i;
	sum = 0;
	i = 1;
	while(i <= 100)
	{
		sum = sum +i;
		i++;
	}
	printf("i=%d\tsum=%d\n", i, sum);
	return 0;
}
