#include<stdio.h>

//写一个函数，对n个整数排序，用指针的指针，在主函数输入输出。

void sort(int **p);

int main()
{
	int a[10], *b[10], i;
	for(i = 0; i < 10; i++)
	{
		printf("输入第%d个整数:", i+1);
		scanf("%d", a+i);
		*(b+i) = a+i;
	}
	sort(b);
	for(i = 0; i < 10; i++)
	{
		printf("%d ", **(b+i));
	}
	printf("\n");
	return 0;
}

void sort(int **p)
{
	int i, j, *temp, **min;
	for(i = 0; i <= 8; i++)
	{
		min = p+i;
		for(j = i+1; j <= 9; j++)
		{
			printf("%d %d\n", **min, **(p+j));
			if(**min > **(p+j))
			{
				min = p+j;
			}
		}
		if(min != p+i)
		{
			temp = *(p+i);
			*(p+i) = *min;
			*min = temp;
		}
	}
}
