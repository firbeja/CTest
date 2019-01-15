#include<stdio.h>

//输入两个整数，选1求大，选2求小，选3求和。

int fun(int a, int b, int (*p)(int, int));
int max(int x, int y);
int min(int x, int y);
int add(int x, int y);

int fun(int a, int b, int (*p)(int, int))
{
	return (*p)(a, b);
}

int max(int x, int y)
{
	return x>y?x:y;
}

int min(int x, int y)
{
	return x>y?y:x;
}

int add(int x, int y)
{
	return x+y;
}

int main()
{
	int a, b, num, m;
	int (*p)(int, int);
	printf("输入两个整数:");
	scanf("%d%d", &a, &b);
	printf("选1或2或3:");
	scanf("%d", &num);
	if(num == 1)
	{
		p = max;
	}
	else if(num == 2)
	{
		p = min;
	}
	else if(num == 3)
	{
		p = add;
	}
	m = fun(a, b, p);
	printf("m= %d\n", m);
	return 0;
}
