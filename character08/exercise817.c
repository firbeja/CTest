#include<stdio.h>
#include<stdlib.h>

//写一函数，实现两个字符串的比较，即自己写一个strcmp()。

int myStrcmp(char *p1, char *p2);

int main()
{
	int m;
	char *s[2];
	for(int i = 0; i < 2; i++)
	{
		printf("输入第%d个字符串:", i+1);
		*(s+i) = (char *)malloc(80*sizeof(char));
		gets(*(s+i));
	}
	m = myStrcmp(s[0], s[1]);
	printf("m=%d\n", m);
	return 0;
}

int myStrcmp(char *p1, char *p2)
{
	while(*p1 && *p2)
	{
		printf("*p1= %c\t*p2=%c\n", *p1, *p2);
		if(*p1 != *p2)
		{
			return *p1-*p2;
		}
		p1++;
		p2++;
	}
	printf("*p1= %c\t*p2=%c\n", *p1, *p2);
	return *p1-*p2;
}
