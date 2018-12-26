#include<stdio.h>

//连接两个字符串，不要用strcat函数

int main()
{
	char a[80] = "The findings of a research institution";
	char b[80] = "have consistenly shown.";
	char c;
	int i, j;
	printf("a[]= %s\nb[]= %s\n", a, b);
	i = 0;
	while((c = a[i]) != '\0')
	{
		i++;
	}
	printf("i=%d\n", i);
	for(j = 0; (c = b[j]) != '\0'; j++, i++)
	{
		a[i] = c;
	}
	printf("a[]= %s\n", a);
	a[i] = '\0';
	printf("i=%d, j=%d\n", i, j);
	printf("a[]= %s\n", a);
	return 0;
}
