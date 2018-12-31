#include<stdio.h>

//给定b的值，输入a，m，求a*b，a^m。

//static int A;
int A;

int main()
{
	extern int fun1(int a);
	extern int fun2(int m);

	int b, m, k1, k2;
	printf("输入A,m的值:");
	scanf("%d%d", &A, &m);

	b = 3;
	k1 = fun1(b);
	printf("A=%d b=%d a*b=%d\n", A, b, k1);

	k2 = fun2(m);
	printf("A=%d m=%d a^m=%d\n", A, m, k2);
	return 0;
}
