#include<stdio.h>

//往一个字符数组里放”I love China!“，输出该字符串和第八个字符。

int main()
{
	char str[80];
	gets(str);
	printf("%s\n", str);
	printf("%c\n", *(str+7));
	return 0;
}