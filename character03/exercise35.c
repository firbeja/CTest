#include<stdio.h>

//用下面的scanf()函数输入数据。问在键盘上如何输入？

int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%db=%d", &a, &b);
	scanf("%f%e", &x, &y);
	scanf("%c%c", &c1, &c2);
	printf("a=%d\tb=%d\nx=%f\ty=%e\nc1=%c\tc2=%c\n", a, b, x, y, c1, c2);
	return 0;
}

