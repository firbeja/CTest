#include<stdio.h>

//输入十个整数，将最小的与第一个交换，把最大的与最后一个交换。写三个函数:（1）输入十个数；（2）进行处理；（3）输出10个数。

void myScan(int *p, int n);
void myPrint(int **p, int n);
void covrt(int **p, int n);

void myScan(int *p, int n)
{
	int i = 0;
	while(i < n)
	{
		printf("输入第%d个数:", i+1);
		scanf("%d", p+i);
		i++;
	}
}

void myPrint(int **p, int n)
{
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", **(p+i));
	}
	printf("\n");
}

void covrt(int **p, int n)
{
	int i, **min, **max, *temp;
	min = p;
	max = p;
	for(i = 0; i < 10; i++)
	{
		if(**min > **(p+i))
		{
			min = p + i;
		}
		if(**max < **(p+i))
		{
			max = p + i;
		}
	}
	temp = *p;
	*p = *min;
	*min = temp;

	//《学习辅导》，加一个判断，解决冲突
	if(max == p)
	{
		max = min;
	}
	temp = *(p+n-1);
	*(p+n-1) = *max;
	*max = temp;
}

int main()
{
	int a[10], *b[10], **p, i;
	p = b;
	for(i = 0; i < 10; i++)
	{
		*(p+i) = &a[i];
	}
	myScan(a, 10);
	myPrint(b, 10);
	covrt(b, 10);
	myPrint(b, 10);
	return 0;
}
