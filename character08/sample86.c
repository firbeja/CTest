#include<stdio.h>
#define SIZE 5
//输出整型数组a的10个元素。

void fun1();	//a[i]
void fun2();	//a+i
void fun3();	//p+i

void fun1()
{
	int a[SIZE];
	int i;
	for(i = 0; i < SIZE; i++)
	{
		printf("输入第%d个数:", i+1);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void fun2()
{
	int a[SIZE];
	int i;
	for(i = 0; i < SIZE; i++)
	{
		printf("输入第%d个数:", i+1);
		scanf("%d", a+i);
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
}

void fun3()
{
	int a[SIZE], *p, i;
	p = a;
	for(i = 0; i < SIZE; i++)
	{
		printf("输入第%d个值:", i+1);
		scanf("%d", p+i);
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}

int main()
{
	fun1();
	fun2();
	fun3();
	return 0;
}
