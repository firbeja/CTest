#include<stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	printf("%d,%d\n", a, b);
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d,%d\n", a, b);
	return 0;
}

