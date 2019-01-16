#include<stdio.h>
#include<stdlib.h>

//写一函数，求字符串长度，在main函数输入，输出。

int myStrlen(char *p);
int myStrlen(char *p)
{
	int count = 0;
	while(*p++)
	{
		count++;
	}
	return count;
}

int main()
{
	char *p;
	p = (char *)malloc(80*sizeof(char));
	printf("输入一个字符串:");
	gets(p);
	printf("length=%d\n", myStrlen(p));
	return 0;
}
