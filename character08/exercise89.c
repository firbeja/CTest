#include<stdio.h>

//写一个函数，将一个3*3的矩阵转置。

void covrt(int (*p)[3]);
void print(int (*p)[3]);

void covrt(int (*p)[3])
{
	int i, j, temp;
	for(i = 0; i < 3; i++)
	{
		for(j = i+1; j < 3; j++)
		{
			temp = *(*(p+i)+j);
			*(*(p+i)+j) = *(*(p+j)+i);
			*(*(p+j)+i) = temp;
		}
	}
}

void print(int (*p)[3])
{
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(p+i)+j));
		}
		printf("\n");
	}
}

int main()
{
	int a[3][3] = {{34, 12, 3}
			,{332, 4, 32}
			,{6, 87, 56}};
	print(a);
	covrt(a);
	print(a);
	return 0;
}
