#include<stdio.h>

//输入4个整数，按由小到大的顺序输出

void swap(int *num1, int *num2);

void swap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int a, b, c, d;
	printf("输入4个整数：");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a > b) swap(&a, &b);
	if(a > c) swap(&a, &c);
	if(a > d) swap(&a, &d);

	if(b > c) swap(&b, &c);
	if(b > d) swap(&b, &d);

	if(c > d) swap(&c, &d);

	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}
