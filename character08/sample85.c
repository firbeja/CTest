#include<stdio.h>

//输入三个整数，由大到小输出，用函数实现。

void exchage(int *p1, int *p2, int *p3);
void swap(int *p1, int *p2);

void exchange(int *p1, int *p2, int *p3)
{
	if(*p1 < *p2)
	{
		swap(p1, p2);
	}
	if(*p1 < *p3)
	{
		swap(p1, p3);
	}
	if(*p2 < *p3)
	{
		swap(p2, p3);
	}
}

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a, b, c;
	int *p1, *p2, *p3;
	printf("输入三个整数:");
	scanf("%d%d%d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	exchange(p1, p2, p3);
	printf("a=%d\tb=%d\tc=%d\n", a, b, c);
	return 0;
}
