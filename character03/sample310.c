#include<stdio.h>

//输入大写，输出小写，getchar(),putchar()
int main()
{
	char c;
	printf("输入一个大写字母:");
	c = getchar();
	c = c + 32;
	putchar(c);
	putchar('\n');
	printf("%c-%d\n", c, c);
	return 0;
}

