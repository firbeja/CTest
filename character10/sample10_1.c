#include<stdio.h>
#include<stdlib.h>

//从键盘输入一些字符，逐个把他们送到磁盘上去，直到用户输入一个'#'为止。

int main()
{
	FILE *fp;
	char c;
	if((fp = fopen("things/10_1/wb_mode2", "wb")) == NULL)
	{
		printf("   无法打开此文件\n");
		exit(0);
	}
	printf("输入一些字符，'#'停止\n");
	while((c = getchar()) != '#')
	{
		//fputc(c, fp);
		fwrite(&c, sizeof(char), 1, fp);
	}
	fclose(fp);
	return 0;
}
