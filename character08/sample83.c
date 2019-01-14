#include<stdio.h>

//同例8.2，现用函数处理，用指针类型的数据做函数参数。

void swap(int *p1, int *p2);
void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a, b, *p1, *p2;
	printf("输入两个整数:");
	scanf("%d%d", &a, &b);
	p1 = &a;
	p2 = &b;
	printf("a=%d\tb=%d\n*p1=%d\t*p2=%d\np1=%o\tp2=%o\n", a, b, *p1, *p2, p1, p2);
	if(a < b)
	{
		swap(p1, p2);
	}
	printf("\na=%d\tb=%d\n*p1=%d\t*p2=%d\np1=%o\tp2=%o\n", a, b, *p1, *p2, p1, p2);
	return 0;
}
