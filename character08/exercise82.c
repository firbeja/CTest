#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//输入三个字符串，由小到大输出。

int main()
{
	char *s[3], **p, *temp;
	int i, j;
	for(i = 0; i < 3; i++)
	{
		*(s+i) = (char *)malloc(80*sizeof(char));
	}
	p = s;
	for(i = 0; i < 3; i++)
	{
		printf("输入第%d个字符串:", i+1);
		gets(*(s+i));
	}
	for(i = 0; i <= 1; i++)
	{
		for(j = 0;j <= 1-i; j++)
		{
			if(strcmp(*(p+j), *(p+j+1)) > 0)
			{
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
	}
	for(i = 0; i < 3; i++)
	{
		printf("%s\n", *(p+i));
	}
	return 0;
}
