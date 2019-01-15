#include<stdio.h>

//输出两个整数中大的。

int max(int x, int y);
int max(int x, int y)
{
	return x>y?x:y;
}

int main()
{
	int a, b, m;
	int (*p)(int, int);
	p = max;
	printf("输入两个整数:");
	scanf("%d%d", &a, &b);
	m = (*p)(a, b);
	printf("max= %d\n", m);
	return 0;
}
