#include<stdio.h>

//将n个数按输入时顺序的逆序排列，用函数实现。

void sort_1(int **p, int n);
void sort_2(int a[], int n);
void print_1(int **p, int n);
void print_2(int *p, int n);

int main()
{
	int a[20], *b[20], i;
	for(i = 0; i < 5; i++)
	{
		printf("输入第%d个数:", i+1);
		scanf("%d", a+i);
		*(b+i) = a+i;
	}
	sort_1(b, 5);
	print_1(b, 5);
	print_2(a, 5);
	sort_2(a, 5);
	print_1(b, 5);
	print_2(a, 5);
	return 0;
}

void sort_1(int **p, int n)
{
	int **t1, **t2, *temp;
	t1 = p;
	t2 = p + n - 1;
	while(t1 < t2)
	{
		temp = *t1;
		*t1 = *t2;
		*t2 = temp;
		t1++;
		t2--;
	}
}

void sort_2(int a[], int n)
{
	int *p1, *p2, temp;
	p1 = a;
	p2 = a + n - 1;
	while(p1 < p2)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}

void print_1(int **p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", **(p+i));
	}
	printf("\n");
}

void print_2(int *p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}
