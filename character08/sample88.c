#include<stdio.h>
#define SIZE 6

//将数组a中n个整数反序存放。

void covrt(int *arr, int n);
void inv(int x[], int n);
void inv_1(int *x, int n);

void covrt(int *arr, int n)
{
	int *p1, *p2, temp;
	p1 = arr;
	p2 = arr + SIZE - 1;
	while(p1 < p2)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}

void inv(int x[], int n)
{
	int temp, i, j, m;
	m = (n-1)/2;
	for(i = 0; i <= m; i++)
	{
		j = n-1-i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
	}
}


void inv_1(int *x, int n)
{
	int *p, *i, *j, temp, m;
	i = x;
	j = x + n - 1;
	m = (n-1)/2;
	p = x + m;
	while(i <= p)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}
}

int main()
{
	int a[SIZE], *p, i;
	p = a;
	printf("输入%d个整数:", SIZE);
	while(p < a+SIZE)
	{
		scanf("%d", p++);
	}
	p = a;
	while(p < a+SIZE)
	{
		printf("%d ", *p++);
	}
	printf("\n");
	p = a;
	covrt(p, SIZE);
	while(p < a+SIZE)
	{
		printf("%d ", *p++);
	}
	printf("\n");
	p = a;
	inv(p, SIZE);
	while(p < a+SIZE)
	{
		printf("%d ", *p++);
	}
	printf("\n");

	p = a;
	inv_1(p, SIZE);
	while(p < a+SIZE)
	{
		printf("%d ", *p++);
	}
	printf("\n");
	return 0;
}
