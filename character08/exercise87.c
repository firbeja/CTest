#include<stdio.h>
#include<stdlib.h>

//把一个字符串，从第m个字符开始，复制到另一个字符串。

void myCopy(char *from, char *to, int m);

void myCopy(char *from, char *to, int m)
{
	char *temp = from+m-1;
	while(*to++ = *temp++);
}

int main()
{
	char *p = (char *)malloc(80*sizeof(char));
	char str[80];
	int m;
	printf("输入一个字符串:");
	gets(p);
	printf("输入从第几个字符开始复制:");
	scanf("%d", &m);
	myCopy(p, str, m);
	printf("p=%s\nstr=%s\n", p, str);
	return 0;
}
