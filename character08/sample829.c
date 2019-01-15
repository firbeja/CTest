#include<stdio.h>

//指针数组，其元素指向一个整型数组的元素，用指向指针数据的指针变量，输出整型数组各元素的值。

void sort(int **p, int n);

void sort(int **p, int n)
{
	int i, j, min, *temp;
	for(i = 0; i <= 3; i++)
	{
		min = i;
		for(j = i+1; j <= 4; j++)
		{
			if(**(p+min)>**(p+j))
			{
				min = j;
			}
			if(min != i)
			{
				temp = *(p+i);
				*(p+i) = *(p+min);
				*(p+min) = temp;
			}
		}
	}
}

int main()
{
	int a[] = {23, 54, 3, 53, 2};
	int *b[] = {&a[0], a+1, a+2, &a[3], &*(a+4)};
	int **p = b;
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", **(p+i));
	}
	printf("\n");
	sort(p,5);
	printf("a[]= ");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\nb[]= ");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", **(b+i));
	}
	printf("\n");
	return 0;
}
