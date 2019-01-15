#include<stdio.h>

//指针数组作main()函数的形参。

int main(int m, char *s[])
{
	int i;
	while(m-- > 1)
	{
		printf("%s", *++s);
		printf("%c", m>1?' ':'\n');
	}
	return 0;
}
