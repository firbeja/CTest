#include<stdio.h>
#include<string.h>

//有三个字符串，要求找出其中最大者

void fun1();
void fun2();

void fun1()
{
	char s[80], s1[80], s2[80], s3[80];
	scanf("%s%s%s", s1, s2, s3);
	printf("%s\n%s\n%s\n", s1, s2, s3);
	if(strcmp(s1, s2) > 0)
	{
		strcpy(s, s1);
	}
	else
	{
		strcpy(s, s2);
	}
	if(strcmp(s, s3) < 0)
	{
		strcpy(s, s3);
	}
	printf("s= %s\n", s);
}

void fun2()
{
	char str[3][80], string[80];
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("输入第%d个字符串:", i);
		gets(str[i]);
	}
	for(i = 0; i < 3; i++)
	{
		printf("str[%d]= %s\n", i, str[i]);
	}
	if(strcmp(str[0], str[1]) > 0)
	{
		strcpy(string, str[0]);
	}
	else
	{
		strcpy(string, str[1]);
	}
	if(strcmp(string, str[2]) < 0)
	{
		strcpy(string, str[2]);
	}
	printf("max= %s\n", string);
}

int main()
{
	fun1();
	fun2();
	return 0;
}
