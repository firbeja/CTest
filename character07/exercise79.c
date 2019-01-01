#include<stdio.h>
//写一个函数，实参传字符串，统计字母，数字，空格和其他字符的个数，在主函数输入字符串以及输出上述结果。

int L, N, S, O;
L = 0;
N = 0;
S = 0;
O = 0;

void fun(char str[]);
void fun(char str[])
{
	int i;
	char c;
	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		if(c >= )
	}
}

int main()
{
	char str[80] = {"finacial responsibility is an indicator of political status."};
	fun(str);
	printf("L=%d N=%d S=%d O=%d\n", L, N, S, O);
	return 0;
}
