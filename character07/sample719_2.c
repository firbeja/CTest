#include<stdio.h>

int fun2(int m)
{
	extern int A;
	int i, z;
	z = A;
	printf("\n");
	for(i = 2; i <= m; i++)
	{
		z = z * A;
		printf("i=%d z=%d A=%d\n", i, z, A);
	}
	return z;
}
