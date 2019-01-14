#include<stdio.h>

//有一个3*4的二维数组，要求：用“指向元素”的“指针变量”，输出二维数组各元素的值。

void fun1();
void fun2();

void fun1()
{
	int a[3][4], *p, i, j;
	for(i = 0; i < 3; i++)
	{
		printf("连续输入第%d行的4个值:", i+1);
		for(p = *(a+i);p < *(a+i) + 4; p++)
		{
			scanf("%d", p);
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(p = *(a+i); p < *(a+i)+4; p++)
		{
			printf("%d ", *p);
		}
		printf("\n");
	}
}

void fun2()
{
	int a[3][4] = {{231, 24, 42, 76}
			,{43, 7, 43, 3}
			,{43, 654, 8, 96}};
	int *p = a[0];
	while(p < a[0]+12)
	{
		if((p-a[0]) % 4 == 0)
		{
			printf("\n");
		}
		printf("%d ", *p);
		p++;
	}
}

int main()
{
	fun1();
	fun2();
	printf("\n");
	return 0;
}
