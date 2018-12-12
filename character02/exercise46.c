#include<stdio.h>
#include<math.h>

//将100~200之间的素数输出

void fun1();
void fun2();
void isPrime(int num);
void isPrime1(int num);

//遍历100~200的每一个数，这个数被2~n-1除
void fun1()
{
	int i = 100;
	while(i <= 200)
	{
		isPrime(i);
		i++;
	}
	
}

//遍历100~200的每一个数，但是遇到偶数不计算，跳下一个循环
//这个数会被2~（根号n）除
void fun2()
{
	int i = 100;
	while(i <= 200)
	{
		if(i % 2 == 0)
		{
			//printf("%5d %% 2 == 0\n", i);
			printf("\n");
			i++;
			continue;
			printf("reaaaaaaaa");
		}
		isPrime1(i);
		i++;
	}
}

//遍历2~n-1，每一个数作为除数
void isPrime(int num)
{
	int i = 2;
	printf("%5d\t", num);
	while(i <= num -1)
	{
		if(num % i == 0)
		{
			printf("%5d", i);
		}
		i++;
	}
	putchar('\n');
}

void isPrime1(int num)
{
	int i = 2;
	int k;
	k = sqrt(num);
	printf("%5d\t", num);
	printf("k%-5d",k);
	while(i <= k)
	{
		if(num % i == 0)
		{
			printf("%5d", i);
		}
		i++;
	}
	putchar('\n');
}

int main()
{
	fun1();
	printf("---------------\n");
	fun2();
	return 0;
}

