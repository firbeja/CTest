#include<stdio.h>
//写一个函数，输入一个十六进制数，输出相应的十进制数。

int change(char a[]);

int main()
{
	char num[10];
	int d;
	printf("输入一个十六进制数:");
	gets(num);
	d = change(num);
	printf("d=%d\n", d);
	return 0;
}

int change(char a[])
{
	int n, i;
	char c;
	n = 0;
	for(i = 0; (c = a[i]) != '\0'; i++)
	{
		if(c >= '0' && c <= '9')
		{
			n = n*16 + (c-'0');
		}
		else if(c >= 'a' && c <= 'z')
		{
			n = n*16 + (c-'a') + 10;
		}
		else if(c >= 'A' && c <= 'Z')
		{
			n = n*16 + (c-'A') + 10;
		}
	}
	return n;
}
