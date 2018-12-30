#include<stdio.h>

//输出以下结果，用函数调用实现。

void print_line();
void print_word();
void print_line()
{
	printf("*************\n");
}

void print_word()
{
	printf("How do you do!\n");
}

int main()
{
	print_line();
	print_word();
	print_line();
	return 0;
}
