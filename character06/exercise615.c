#include<stdio.h>

//复制字符串s2到s1，不要用strcopy函数

int main()
{
	char a[80] = {"to achieve radically higher productivity"};
	char b[80] = {"and,as a result,radically higher standards of living."};
	char c;
	int i;
	printf("a[]= %s\nb[]= %s\n", a, b);
	for(i = 0; (c = b[i]) != '\0'; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';
	printf("a[]= %s\nb[]= %s\n", a, b);
	return 0;
}
