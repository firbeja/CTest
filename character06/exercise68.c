#include<stdio.h>

//找二维数组鞍点

void printArray(int a[][5]);
void printArray(int a[][5])
{
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int i, j, g, max, min;
	int a[5][5] = {{13, 15, 34, 2223, 21},
			{43, 32, 12, 1111, 9}, 
			{34, 76, 43, 643, 43}, 
			{12, 45, 43, 2412, 2}, 
			{65, 75, 57, 3422, 4}};
	for(i = 0; i < 5; i++)
	{
		max = 0;
		for(j = 0; j < 5; j++)
		{
			if(a[i][max] < a[i][j])
			{
				max = j;
			}
		}
		min = 0;
		for(g = 0; g < 5; g++)
		{
			if(a[min][max] > a[g][max])
			{
				min = g;
			}
		}
		if(min == i)
		{
			printf("i=%d\ta[%d][%d]=%d\n", i, min, max, a[min][max]);
		}
	}
	printArray(a);
	return 0;
}
