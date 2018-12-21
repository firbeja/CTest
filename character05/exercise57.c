#include<stdio.h>

//Sum(1,100)k + Sum(1,50)k^2 + Sum(1,10)(1/k)
int main()
{
	int k1, k2, i, count;
	float k;
	k1 = 0;
	count = 1;
	printf("k1=0");
	for(i = 1; i <= 100; i++)
	{
		k1 = k1 + i;
		printf("+%d", i);
		count++;
		if(count % 10 == 0) putchar('\n');
	}
	printf("\nk1=%d\n", k1);

	printf("\n*************************\n");

	k2 = 0;
	count = 1;
	printf("k2^2=0");
	for(i = 1; i <= 50; i++)
	{
		k2 = k2 + i*i;
		printf("+%d", i*i);
		count++;
		if(count % 10 == 0) putchar('\n');
	}
	printf("\nk2^2=%d\n", k2);
	
	printf("\n*************************\n");

	float k3 = 0;
	count = 1;
	printf("1/k3=0");
	for(i = 1; i <= 10; i++)
	{
		k3 = k3 + 1.0 / i;
		printf("+%f", 1.0/i);
		if(count % 10 == 0) putchar('\n');
	}
	printf("\n1/k3=%f\n", k3);

	k = k1 + k2 + k3;
	printf("\nk=%f\n", k);
	return 0;
}
