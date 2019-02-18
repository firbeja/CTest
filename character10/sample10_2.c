#include<stdio.h>
#include<stdlib.h>

//将一个磁盘文件中的信息复制到另一个磁盘文件中。
//今要求将上例建立的“文件”中的内容复制到另一个磁盘文件中。

int main()
{
	FILE *fp1, *fp2;
	char c;
	if((fp1 = fopen("things/10_1/10_1_1.txt", "r")) == NULL)
	{
		printf("   cannot open this file\n");
		exit(0);
	}
	if((fp2 = fopen("things/10_2/10_2_1.txt", "w")) == NULL)
	{
		printf("   cannot open this file\n");
		exit(0);
	}
	while((c = fgetc(fp1)) != -1)
	{
		fputc(c, fp2);
		printf("%c", c);
	}
	printf("\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
