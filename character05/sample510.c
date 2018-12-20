#include<stdio.h>
#include<math.h>

//输入一个大于3的整数n，判定它是否为素数(prime，又称质数)
//2~n-1, 2~n/2, 2~sqrt(n)

void fun1(int n);
void fun2(int n);
void fun3();

void fun1(int n)
{
	int i = 2;
	while(i < n)
	{
		if(n % i == 0) break;
		i++;
	}
	printf("i=%d\t", i);
	if(i < n)
	{
		printf("%d不是素数\n", n);
	}
	else
	{
		printf("%d是素数\n", n);
	}
}

void fun2(int n)
{
	int i;
	int k;
	k = sqrt(n);
	for(i = 2; i <= k; i++)
	{
		if(n % i == 0) break;
	}
	printf("i=%d\t", i);
	if(i <= k)
	{
		printf("%d不是素数\n", n);
	}
	else
	{
		printf("%d是素数\n", n);
	}
}

void fun3()
{
	int n, i, k, m=0;
	for(n = 101; n <= 200; n = n + 2)
	{
		k = sqrt(n);
		for(i = 2; i <= k; i++)
		{
			if(n % i == 0) break;
		}
		if(i >= k+1)
		{
			printf("%d\t", n);
			m++;
		}
		if(m % 10 == 0)
		{
			putchar('\n');
		}
	}
	printf("\n");
}

int main()
{
	int n;
	printf("输入一个大于3的整数：");
	scanf("%d", &n);
	fun1(n);
	fun2(n);
	fun3();
	return 0;
}
