#include<stdio.h>

//10个数，选择排序，由小到大。

void scan_array(int a[]);
void print_array(int a[]);
void sort(int a[]);

void scan_array(int a[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("输入第%d个数:", i+1);
		scanf("%d", &a[i]);
		print_array(a);
	}
}

void print_array(int a[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void sort(int a[])
{
	int i, j, min, temp;
	for(i = 0; i < 10; i++)
	{
		min = i;
		for(j = i+1; j < 10; j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		if(min > i)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		print_array(a);
	}
}

int main()
{
	int a[10];
	scan_array(a);
	sort(a);
	printf("-----");
	print_array(a);
	return 0;
}
