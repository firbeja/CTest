#include<stdio.h>

//输入四个整数，找出其中最大的数。用函数的嵌套调用来处理。

int max(int x, int y);
int max(int x, int y)
{
	printf("x=%d y=%d\n", x, y);
	return (x>y?x:y);
}

int main()
{
	int a, b, c, d, z;
	printf("输入四个整数:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	z = max(max(max(a, b), c), d);
	printf("z=%d\n", z);
	return 0;
}
