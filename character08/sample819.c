#include<stdio.h>

//用指针变量处理上一题问题。

int main()
{
	char a[] = "they can hijack media.", b[80], *p1, *p2;
	for(p1 = a, p2 = b; *p1 != '\0'; p1++, p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';
	printf("b= %s\n", b);
	return 0;
}
