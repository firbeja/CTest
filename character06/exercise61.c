#include<stdio.h>
#include<math.h>

//用筛选法求100之内的素数

void fun1();
void fun2();
void fun3();

void fun1()
{
	int a[100];
	int i, j, count;
	for(i = 0; i < 100; i++)
	{
		a[i] = i + 1;
	}
	a[0] = 0;	//把“1”直接排除在外了，不然之后的数都能被“1”整除，然后被变为0
	for(i = 0; i < 100; i++)
	{
		if(a[i] == 0) continue;
		for(j = i+1; j < 100; j++)
		{
			if(a[j] == 0) continue;
			if(a[j] % a[i] == 0)
			{
				printf("i=%d %d\t", a[i], a[j]);
				a[j] = 0;
			}
		}
	}
	printf("-------\n");
	count = 0;
	for(i = 0; i < 100; i++)
	{
		if(a[i] == 0) continue;
		printf("%d\t", a[i]);
		count++;
		if(count % 5 == 0) printf("\n");
	}
	printf("\n");
}

void fun2()
{
	int i, j, count=0;
	for(i = 1; i <= 100; i++)
	{
		for(j = 2; j < i; j++)
		{
			if(i % j ==0)
			{
				break;
			}
		}
		if(j == i)
		{
			printf("%d\t", i);
			count++;
			if(count % 5 == 0) printf("\n");
		}
	}
}

void fun3()
{
	int i, j, k, count=0;
	for(i = 2; i <= 100; i++)
	{
		k = sqrt(i);
		for(j = 2; j <= k; j++)
		{
			if(i % j ==0)
			{
				break;
			}
		}
		if(j > k)
		{
			printf("%d\t", i);
			count++;
			if(count % 5 == 0) printf("\n");
		}
	}
	
}

int main()
{
	fun1();
	fun2();
	fun3();
	return 0;
}
