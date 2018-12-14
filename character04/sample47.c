#include<stdio.h>

//输入a或A，执行A操作；输入b或B，执行B操作

void action1(int a, int b);
void action2(int a, int b);

void action1(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a+b);
}

void action2(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a-b);
}

int main()
{
	char ch;
	int a=13, b=24;
	printf("输入一个字符，执行相应操作:");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
		case 'A':action1(a,b);break;
		case 'b':
		case 'B':action2(a,b);break;
		default:printf("输入字符有误\n");
	}
	return 0;
}

