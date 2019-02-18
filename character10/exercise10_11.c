#include<stdio.h>
#include<stdlib.h>

//从键盘输入若干行字符（每行长度不等），输入后把它们存储到一磁盘文件中。
//再从该文件中读入这些数据，将其中小写字母转换成大写字母后在显示屏上输出。

int main()
{
	FILE *fp;
	char str[80], w, *p;
	int flag = 1;
	if((fp = fopen("things/e10_11/1011", "w+")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	while(flag)
	{
		printf("\n输入字符串:\n");
		gets(str);
		fprintf(fp, "%s\n", str);
		printf("   y/n?\n");
		scanf("%c", &w);
		getchar();
		if(w == 'n')
		{
			flag = 0;
		}
	}
	rewind(fp);
//	while(fscanf(fp, "%s", str) != EOF)
	while(fgets(str, 80, fp) != NULL)
	{
		p = str;
		while(*p != '\0')
		{
			if(*p >= 'a' && *p <= 'z')
			{
				*p = *p - 32;
			}
			printf("%c", *p++);
		}
	}
	fclose(fp);
	return 0;
}
