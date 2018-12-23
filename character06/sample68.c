#include<stdio.h>

//输入一行字符，统计其中有多少个单词，单词之间用空格分隔开
int main()
{
	char str[80], c;
	int i, word, num;
	printf("输入一个字符串:");
	scanf("%[^\n]", str);
	printf("str=%s\nstr[2]=%c\n", str, str[2]);
	word = 0;
	num = 0;
	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		if(c == ' ')
		{
			word = 0;
		}
		else
		{
			if(word == 0)
			{
				word = 1;
				num++;
				printf("---word=%d\tnum=%d\n", word, num);
			}
		}
	}
	printf("word=%d\tnum=%d\n", word, num);
	return 0;
}
