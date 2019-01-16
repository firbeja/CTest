#include<stdio.h>
#include<stdlib.h>

//有n个人围成一圈，顺序排号，从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下来的是原来第几号的那位。

void print(int *p, int n);
void print(int *p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}

int main()
{
	int i, n, m, t, count, *p;
	printf("输入有几个人:");
	scanf("%d", &n);
	p = (int *)malloc(n*sizeof(int));
	for(i = 0; i < n; i++)
	{
		*(p+i) = 1;
	}
	m = 0;
	count = 0;
	i = 0;
	while(count < n)
	{
		if(*(p+i) != 0)
		{
			m = m + 1;
			if(m % 3 == 0)
			{
				t = i;
				count++;
				m = 0;
				*(p+i) = 0;
			}
		}
		i++;
		printf("i=%d m=%d ", i, m);
		print(p, n);
		if(i == n)
		{
			i = 0;
		}
	}
	printf("t=%d\n", t);
	return 0;
}
