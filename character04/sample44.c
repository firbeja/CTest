#include<stdio.h>

//判断是否为大写。是，则转换成小写
int main()
{
	char c1;
	printf("输入一个字母：");
	scanf("%c", &c1);
	if(c1 >= 65 && c1 <= 90)
	{
		c1 = c1+32;
	}
	printf("%c\n", c1);
	getchar();

	//第二种方法，三目表达式，()?a:b
	char c2;
	printf("再输入一个字母：");
	scanf("%c", &c2);
	c2 = (c2 >= 'A' && c2 <= 'Z') ? c2+32 : c2;
	printf("%c\n", c2);
	return 0;
}

