#include<stdio.h>
#include<string.h>

//从键盘读入若干个字符串，对他们按字母大小的顺序排序，
//然后把排好序的字符串送到磁盘文件中保存。

int main()
{
	FILE *fp;
	char strings[3][10]={'\0'}, temp[10];
	int i, j, min;
	for(i = 0; i < 3; i++)
	{
		gets(strings[i]);
	}
	for(i = 0; i <= 1; i++)
	{
		min = i;
		for(j = i+1; j <= 2; j++)
		{
			if(strcmp(strings[min], strings[j]) > 0)
			{
				min = j;
			}
		}
		if(min != i)
		{
			strcpy(temp, strings[min]);
			strcpy(strings[min], strings[i]);
			strcpy(strings[i], temp);
		}
	}
	if((fp = fopen("things/10_3/3b", "w")) == NULL)
	{
		printf("\n   cannot open this file\n");
	}
	for(i = 0; i < 3; i++)
	{
		fputs(strings[i], fp);
		fputc('-', fp);
	}
	fclose(fp);
	return 0;
}
