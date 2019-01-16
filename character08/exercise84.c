#include<stdio.h>
#include<stdlib.h>

//有n个整数，前面的往后移m个位置，最后m个变成最前面m个。用函数实现，在主函数输入，输出。

void covrt(int *p, int n, int m);
void myScan(int *p, int n);
void myPrint(int *p, int n);

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
	covrt(p, n, m);
	myPrint(p, n);
	return 0;
}
