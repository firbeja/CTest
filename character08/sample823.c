#include<stdio.h>

//输入两个整数，选1调用max()，选2调用min()。

int max(int x, int y);
int min(int x, int y);

int max(int x, int y)
{
	return x>y?x:y;
}

int min(int x, int y)
{
	return x>y?y:x;
}

int main()
{
	int a, b, num, m;
	int (*p)(int, int);
	printf("输入两个整数:");
	scanf("%d%d", &a, &b);
	printf("选1或2:");
	scanf("%d", &num);
	if(num == 1)
	{
		p = max;
	}
	else if(num == 2)
	{
		p = min;
	}
	m = (*p)(a, b);
	printf("m= %d\n", m);
	return 0;
}
