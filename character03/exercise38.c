#include<stdio.h>

//char int getchar()
int main()
{
	char c1, c2;
	int x1, x2;
	c1 = getchar();
	c2 = getchar();
	x1 = getchar();
	x2 = getchar();
	printf("c1=%c\tc2=%c\n", c1, c2);
	printf("x1=%d\tx2=%d\n", x1, x2);
	x1 = c1;
	x2 = c2;
	printf("x1=%d\tx2=%d\n", x1, x2);

//T/ODO 要求输出c1,c2的ASCII码，用putchar()还是printf()
	putchar(c1);
	printf("\n");

	return 0;
}

