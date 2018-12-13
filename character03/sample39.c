#include<stdio.h>

//getchar()。从键盘输入BOY三个字符，然后把它们输出到屏幕
int main()
{
	char c1, c2, c3;
	printf("输入BOY这三个字符：");
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	putchar(c1);
	putchar(c2);
	putchar(c3);
	getchar();	//吸收掉上面输入字符最后按的“回车键”。不吸收的话，这个“回车”会在键盘缓冲			//区里，会影响下一次输入数据
	putchar('\n');

	printf("输入三个字符：");
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
	putchar('\n');
	return 0;
}

