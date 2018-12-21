#include<stdio.h>

//输出菱形图案
int main()
{
	int i, j, g;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3 - i; j++)
		{
			printf(" ");
		}
		for(g = 0; g < 2*i + 1; g++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < i + 1; j++)
		{
			putchar(' ');
		}
		for(g = 0; g < 2*(3 - i) - 1; g++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
