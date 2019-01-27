#include<stdio.h>
#define N 13

//十三个人围成一圈，从第一个人开始顺序报号1，2，3.凡报到3者退出圈子。
//找出最后留在圈子中的人原来的序号。
//要求用链表处理。

struct Person
{
	int number;
	int b;
}a[N+1];

int main()
{
	int i, count, m, k;
	for(i = 1; i <= N; i++)
	{
		a[i].number = i;
		if(i == N)
		{
			a[i].b = 1;
		}
		else
		{
			a[i].b = i+1;
		}
	}
	count = 0; 
	k = N;
	printf("\nsequence that persons leave the circle:\n");
	while(count <= N-2)
	{
		m = 0;
		while(m != 3)
		{
			k = a[k].b;
			if(a[k].number != 0)
			{
				m = m+1;
			}
		}
		printf("%d ", a[k].number);
		a[k].number = 0;
		count++;
	}
	printf("\nThe last one is ");
	for(i = 1; i <= N; i++)
	{
		if(a[i].number != 0)
		{
			printf("%d\n", a[i].number);
		}
	}
	printf("\n");
	return 0;
}
