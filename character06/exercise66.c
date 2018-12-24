#include<stdio.h>

//输出杨辉三角

void printArray(int a[]);

void printArray(int a[])
{
	int i;
	for(i = 0; i < 20; i++)
	{
		if(a[i] == 0) break;
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[20] = {1, 1}, x1, x2;
	a[0] = 1;
	a[1] = 1;
	int i, j;
	for(i = 3; i<= 10; i++)
	{
		printf("i=%d--------------\n", i);
		x1 = a[0];
		x2 = a[1];
		for(j = 0; j < i-2; j++)
		{
			a[j+1] = x1 + x2;
			x1 = x2;
			x2 = a[j+2];
			printArray(a);
		}
		a[(j-1)+2] = 1;	//"(j-1)"，因为上面for循环执行了j++，导致多一次
		printArray(a);
	}
	return 0;
}
