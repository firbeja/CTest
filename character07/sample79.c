#include<stdio.h>

//输入10个数，分别输出最大的数和它是第几个。

int max(int x, int y);
void print_array(int a[]);

int max(int x, int y)
{
	printf("x=%d y=%d\n", x, y);
	return (x > y ? x : y);
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

int main()
{
	int a[10], m, i, j;
	for(i = 0; i < 10; i++)
	{
		printf("输入第%d个数:", i);
		scanf("%d", &a[i]);
	}
	print_array(a);

	m = a[0];
	i = 0;
	j = 0;
	for(i = 0; i < 10; i++)
	{
		if(m < max(m, a[i]))
		{
			printf("i=%d ", i);
			m = max(m, a[i]);
			j = i;
		}
	}
	printf("m=%d j=%d\n", m, j);
	return 0;
}
