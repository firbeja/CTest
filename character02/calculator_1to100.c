#include<stdio.h>

/*
*to calcuilate 1+2+3+4+...+99+100
*/

int main()
{

	int i = 1;
	int sum = 0;

	for(i=1; i<=100; i++)
	{
		sum = sum + i;
		printf("sum = %d \n", sum);
	}

	return 0;

}

