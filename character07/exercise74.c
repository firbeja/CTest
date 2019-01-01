//写一个函数，3*3二维数组转置，即行列互换。
#include<stdio.h>
#define SIZE 3

void fun(int a[][SIZE]);
void print_array(int a[][SIZE]);

int main()
{
	int a[SIZE][SIZE] = {{21, 2, 3, 34, 18},
			{15, 64, 2, 8, 10},
			{231, 7, 9, 11, 34},
			{13, 6, 76, 45, 98},
			{36, 65, 34, 786, 34}};
	print_array(a);
	fun(a);
	printf("\n");
	print_array(a);
	return 0;
}

void fun(int a[][SIZE])
{
	int i, j, temp;
	for(i = 0; i < SIZE; i++)
	{
		for(j = i+1; j < SIZE; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
			printf("i=%d j=%d\n", i, j);
			print_array(a);
		}
	}
}

void print_array(int a[][SIZE])
{
	int i, j;
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
