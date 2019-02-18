#include<stdio.h>
#include<stdlib.h>

//从键盘输入一个字符串，将其中的小写字母全部转换成大写字母，
//然后输出到一个磁盘文件“test”中保存，输入的字符串以“!”结束。

int main()
{
	FILE *fp;
	char str[30], *p = str;
	if((fp = fopen("things/e10_3/test", "w")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	printf("\n输入一个字符串:\n");
	gets(p);
	while(*p != '\0' && *p != '!')
	{
		if(*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32;
		}
		printf("%c", *p);
		fputc(*p, fp);
		p = p+1;
	}
	printf("\n");
	fclose(fp);
	return 0;
}
