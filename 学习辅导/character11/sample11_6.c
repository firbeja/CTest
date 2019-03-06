#include<stdio.h>
#include"/Users/john/CTest/学习辅导/character11/sample11_6_header.h"

//将例11.5的格式宏做成头文件，把它包含在用户程序中。

int main()
{
	int a, b, c, d;
	char *str = "moring go to wash teech.";
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	PR(D NL, a);
	PR(D1, a);
	PR(D2, a, b);
	PR(D3, a, b, c);
	PR(D4, a, b, c, d);
	PR(S, str);
	return 0;
}
