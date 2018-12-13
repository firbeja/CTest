#include<stdio.h>

//putchar()输出BOY
//先后输出BOY三个字符
int main()
{
	char c1, c2, c3;
	c1 = 'B';
	c2 = 'O';
	c3 = 'Y';
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar('\n');
	
	int a, b, c;
	a = 65+2-1;
	b = 65+15-1;
	c = 65+25-1;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	
	return 0;
}

