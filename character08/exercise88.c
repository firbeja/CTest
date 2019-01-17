#include<stdio.h>
#include<stdlib.h>

//输入一行文字，找出其中大写字母，小写字母，空格，数字以及其它字符各有多少。

int main()
{
	char *p = (char *)malloc(80*sizeof(char));
	char c;
	int u, l, s, n, o;
	u=l=s=n=o=0;
	printf("输入一个字符串:");
//	gets(p);

//2019-1-17，周四，龙四，15:17
//《学习辅导》参考答案
	char *temp=p;
	//getchar() != '\n'，输入字符串的小技巧
	while((*temp++ = getchar()) != '\n');
	printf("get= %s", p);

	while(c = *p++)
	{
		if(c >= 'a' && c <= 'z')
		{
			l++;
		}
		else if(c >= 'A' && c <= 'Z')
		{
			u++;
		}
		else if(c == ' ')
		{
			s++;
		}
		else if(c >= '0' && c <= '9')
		{
			n++;
		}
		else
		{
			o++;
		}
	}
	printf("u=%d l=%d s=%d n=%d 0=%d\n", u, l, s, n, o);
	return 0;
}
