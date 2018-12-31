#include<stdio.h>

//有一字符串，现输入一字符，删去字符串中该字符。用外部函数实现。

extern void delete(char str[], char g);
void print_string(char str[]);
void scan_string(char str[]);

void scan_string(char str[])
{
	printf("输入字符串:");
	gets(str);
}

void print_string(char str[])
{
	printf("%s\n", str);
}

int main()
{
	char str[80];
	char g;
	scan_string(str);
	print_string(str);
	
	printf("输入要删去的字符:");
	scanf("%c", &g);
	delete(str, g);
	print_string(str);
	return 0;
}
