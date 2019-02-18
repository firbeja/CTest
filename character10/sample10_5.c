#include<stdio.h>
#include<stdlib.h>

//有一个磁盘文件，内有一些信息。
//要求第一次将它的内容显示在屏幕上，第二次把它复制到另一个文件上。



int main()
{
	FILE *fp1, *fp2;
	char c;
	if((fp1 = fopen("things/10_5/105", "r")) == NULL)
	{
		printf("\n   cannot open file 105\n");
		exit(0);
	}
	if((fp2 = fopen("things/10_5/5a", "w")) == NULL)
	{
		printf("\n   cannot open file 5a\n");
		exit(0);
	}
	
	//输出文件内容
	c = fgetc(fp1);
	while(!feof(fp1))
	{
		printf("%c", c);
		c = fgetc(fp1);
	}
	
	//复制文件内容到另一个文件
	rewind(fp1);
	c = fgetc(fp1);
	while(!feof(fp1))
	{
		fputc(c, fp2);
		c = fgetc(fp1);
	}
	printf("\n--c=%c--\n", c);

	fclose(fp1);
	fclose(fp2);
	return 0;
}
