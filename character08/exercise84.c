#include<stdio.h>
#include<stdlib.h>

//有n个整数，前面的往后移m个位置，最后m个变成最前面m个。用函数实现，在主函数输入，输出。

void covrt(int *p, int n, int m);
void covrt_answer(int array[], int n, int m);
void myScan(int *p, int n);
void myPrint(int *p, int n);

//2019-1-17，周四，龙四，14:57
//《学习辅导》参考答案
//小技巧，形参名为*array，在定义一个*p
void covrt_answer(int array[], int n, int m)
{
	int *p, temp;
	temp = *(array+n-1);
	//就可以这样使用”array“
	for(p = array+n-1; p > array; p--)
	{
		*p = *(p-1);
	}
	*array = temp;
	//这里是递归调用。我自己写的是循环
	m--;
	if(m > 0)
	{
		covrt_answer(array, n, m);
	}
}

void covrt(int *p, int n, int m)
{
	int temp, i, j;
	for(i = 0; i < m; i++)
	{
		temp = *(p+n-1);
		for(j = n-1; j > 0; j--)
		{
			*(p+j) = *(p+j-1);
		}
		*p = temp;
	}
}

void myScan(int *p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("输入第%d个数:", i+1);
		scanf("%d", p+i);
	}
}

void myPrint(int *p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}

int main()
{
	int n, m, *p;
	printf("输入有多少个整数:");
	scanf("%d", &n);
	printf("输入要后移多少个位置:");
	scanf("%d", &m);
	p = (int *)malloc(n*sizeof(int));
	myScan(p, n);
	myPrint(p, n);
	//covrt(p, n, m);
	covrt_answer(p, n, m);
	myPrint(p, n);
	return 0;
}
