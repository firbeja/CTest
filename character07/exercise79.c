#include<stdio.h>
//写一个函数，实参传字符串，统计字母，数字，空格和其他字符的个数，在主函数输入字符串以及输出上述结果。

int L=0, N=0, S=0, O=0;
void fun(char str[]);
int isLetter(char c);
int isNum(char c);
int isSpace(char c);

int main()
{
	char str[80] = {"1.finacial responsibility is an indicator of political status."};
	fun(str);
	printf("%s\n", str);
	printf("L=%d N=%d S=%d O=%d\n", L, N, S, O);
	return 0;
}

void fun(char str[])
{
	int i;
	char c;
	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		if(isLetter(c))
		{
			L++;
		}
		else if(isNum(c))
		{
			N++;
		}
		else if(isSpace(c))
		{
			S++;
		}
		else
		{
			O++;
		}
	}
}

int isLetter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int isNum(char c)
{
	return (c >= '0' && c <= '9');
}

int isSpace(char c)
{
	return (c == ' ');
}
