#include<stdio.h>

//用选择法对10个整数排序(由小到大)

void printArray(int a[]);

void printArray(int a[])
{
	int i;
	printf("\t");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[10] = {23, 45, 13, 14, 3, 342, 54, 56, 23, 34}, i, j, count, min, temp;
/*	for(i = 0; i < 10; i++)
	{
		printf("输入第%d个数:", i);
		scanf("%d", &a[i]);
	}*/
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		printf("i=%d ", i);
		min = i;
		for(j = i+1; j < 10; j++)
		{
			if(a[min] > a[j])
			{
				min = j;
				printf("j=%d a[j]=%d\t", j, a[j]);
			}
		}
		if(min != i)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		printArray(a);
		printf("\n");
	}
	return 0;
}
