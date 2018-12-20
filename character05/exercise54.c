#include<stdio.h>

//输入一行字符，分别统计出其中英文字母、空格、数字和其他符号的个数。
int main()
{
	int l, s, num, o;
	l = 0;
	s = 0;
	num = 0;
	o = 0;
	char c;
	printf("输入一行字符:");
	while((c = getchar()) != '\n')
	{
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			l++;
		}
		else if(c == ' ')
		{
			s++;
		}
		else if(c >= '0' && c <= '9')
		{
			num++;
		}
		else
		{
			o++;
		}
	}
	printf("字母:%d\t空格:%d\t数字:%d\t其他字符:%d\n", l, s, num, o);
	return 0;
}
