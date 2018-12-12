#include<stdio.h>

//求1+2+3+...+99+100
int main()
{
	int sum = 0;
	int i = 1;
	while(i <= 100)
	{
		printf("%7d + %7d =", sum, i);
		sum = sum + i;
		printf("%7d\n", sum);
		i++;
	}
	printf("%7d\n", sum);
	return 0;
}

