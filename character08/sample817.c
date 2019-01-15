#include<stdio.h>

//通过字符指针变量输出一个字符串。

void fun1();
void fun2();

void fun1()
{
	char str[80], *p=str;
	gets(p);
	printf("输入一个字符串:");
	while(*p != '\0')
	{
		printf("%c", *p++);
	}
	printf("\n");
	p = "deputy chief may be more willing to make jump without a net.";
	printf("%s\n", p);
}

void fun2()
{
	char *str = "As the first signs of recovery begin to take hold.";
	printf("%s\n", str);
}

int main()
{
	fun1();
	fun2();
	return 0;
}
