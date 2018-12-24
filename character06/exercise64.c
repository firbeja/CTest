#include<stdio.h>

//按原来排序的规律插入一个数到数组中

void printArray(int a[]);

void printArray(int a[])
{
	int i;
	printf("\n");
	for(i = 0; i < 16; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[16] = {13, 17, 23, 24, 28, 39, 80, 100, 112, 121, 123, 123, 130, 131, 132};
	int i, j, num;
	printf("输入要插入的数:");
	scanf("%d", &num);
	for(i = 0; i < 16; i++)
	{
		if(a[i] > num) break;
	}
	printArray(a);
	for(j = 15; j > i; j--)
	{
		a[j] = a[j-1];
		printArray(a);
	}
	if(i == 16)
	{
		i = 15;
	}
	a[i] = num;
	printArray(a);
	return 0;
}
