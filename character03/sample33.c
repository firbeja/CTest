#include<stdio.h>

//给定一个大写字母，要求用小写字母输出
int main()
{
	char letter;
	printf("输入一个大写字母:");
	scanf("%c", &letter);
	printf("大写:%c-%d\t小写:%c-%d\n", letter, letter, letter + 32, letter + 32);
	return 0;
}

