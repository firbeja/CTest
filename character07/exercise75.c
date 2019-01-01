#include<stdio.h>

//写一个函数，输入字符串按反序存放。

void fun(char str[]);
void print_string(char str[]);

int main()
{
	char str[80];
	gets(str);
	fun(str);
	print_string(str);
	return 0;
}

void fun(char str[])
{
	int i, j, w;
	char c, temp;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	w = i/2;
	i = i-1;
	for(j = 0; j <= w; j++, i--)
	{
		printf("i=%d\t", i);
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		print_string(str);
	}
}

void print_string(char str[])
{
	printf("%s\n", str);
}
