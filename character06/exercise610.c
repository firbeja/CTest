#include<stdio.h>

//有一篇文章共有三行文字，统计大写字母、小写字母、数字、空格以及其他字符的个数

void printArray(char a[][80]);
void printArray(char a[][80])
{
	int i, j;
	char c;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; (c = a[i][j]) != '\0'; j++)
		{
			putchar(c);
		}
		printf("\n");
	}
}

int main()
{
	char a[3][80] = {{"After all, it has an ad business too,"},
			{"which it says will comply with DNT request,"},
			{"though it is workinng out how."}};
	char c;
	int i, j, u, l, n, s, o;
	i = 0;
	j = 0;
	u = 0;
	l = 0;
	n = 0;
	s = 0;
	o = 0;
	printArray(a);
	for(i = 0; i < 3; i++)
	{
		for(j = 0; (c = a[i][j]) != '\0'; j++)
		{
			if(c >= 'A' && c <= 'Z') u++;
			else if(c >= 'a' && c <= 'z') l++;
			else if(c >= '0' && c <= '9') n++;
			else if(c == ' ') s++;
			else o++;
		}
		printf("i=%d,j=%d\tu=%d l=%d n=%d s=%d o=%d\n", i, j, u, l, n, s, o);
	}
	return 0;
}
