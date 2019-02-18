#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//程序分析，可以编写出以下的程序，从“文件”中读回字符串，并在屏幕上显示。

int main()
{
	FILE *fp;
	char strings[3][10];
	int i = 0;
	if((fp = fopen("things/10_3/3b", "r")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	i = 0;
	while(fgets(strings[i], 10, fp) != NULL)
	{
		printf("++%s++\n", strings[i]);
		i = i+1;
	}
	fclose(fp);
	return 0;
}
