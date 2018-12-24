#include<stdio.h>

//逆序重新存放数组

void printArray(int a[]);

void printArray(int a[])
{
	int i;
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[5] = {8, 4, 13, 11, 23};
	int i, j, temp;
	printArray(a);
	j = 4;
	for(i = 0; i < 5/2; i++)
	{
		temp = a[i];
		a[i] = a[i+j];
		a[i+j] = temp;
		j = j - 2;
		printArray(a);
	}
	return 0;
}
