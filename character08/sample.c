#include<stdio.h>

//小例子8.4.3

int main()
{
	char *p, *t;
	printf("t= %s\n", t);
	p = "these upstart entrepreneurs cannot buy.";
	printf("p= %s\n", p);
	p = "their prizes the prestige of the Nobels.";
	printf("p= %s\n", p);

	char str[80]= "You cannot buy class.";
	//str = "as the old saying goes.";
	printf("str= %s\n", str);
	t = str;
	printf("输入一个字符串:");
	scanf("%s", t);
	printf("t= %s\n", t);
	printf("str= %s\n", str);
	return 0;
}
