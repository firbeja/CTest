#include<stdio.h>
#include<stdlib.h>

//将一个磁盘文件中的信息复制到另一个磁盘文件中。
//今要求将上例建立的“文件”中的内容复制到另一个磁盘文件中。

int main()
{
	FILE *in, *out;
	char ch, infile[80], outfile[80];
	printf("输入读入文件的名字:");
	scanf("%s", infile);
	printf("输入输出文件的名字:");
	scanf("%s", outfile);
	if((in = fopen(infile, "r")) == NULL)
	{
		printf("   in cannot open %s file\n", infile);
		exit(0);
	}
	if((out = fopen(outfile, "a")) == NULL)
	{
		printf("   out cannot open %s file\n", outfile);
		exit(0);
	}
/*
	//在用feof()判断文件时，复制会多产生一个字符。
	while(!feof(in))
	{
		ch = fgetc(in);
		fputc(ch, out);
		printf("%c", ch);
	}
*/
	//百度的解决方法
	ch = fgetc(in);
	while(!feof(in))
	{
		printf("%c", ch);
		fputc(ch, out);
		ch = fgetc(in);
	}
	printf("\n");
	fclose(in);
	fclose(out);
	return 0;
}
