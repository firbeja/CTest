#include<stdio.h>

//第三章一些零碎知识点
int main()
{
	printf("test\n");
	//const 变量存在期间其值不能改变
	//const int a = 1;
	//a = 3;
	//printf("a=%d\ta=%d\ta=%d\n", a, a+1, a);
	
	//sizeof()
	/*
	int numInt = 5000000;
	printf("numInt=%d\tsize=%d\n", numInt, sizeof(numInt));
	short numShort = 50000;
	printf("numShort=%d\tsize=%d\n", numShort, sizeof(numShort));
	long int numLongInt = 1;
	printf("numLongInt=%d\tsize=%d\n", numLongInt, sizeof(numLongInt));
	long long int numLLInt = 1;
	printf("numLLInt=%d\tsize=%d\n", numLLInt, sizeof(numLLInt));
	*/

	//unsigned int %u-无符号十进制数
	/*
	unsigned short price = 50;
	printf("price=%u\tsize=%lu\n", price, sizeof(price));
	*/

	//char
/*
	char c = 65;
	printf("c=%c\tc=%d\n", c, c);
	char c1 = '?';
	printf("c1=%c\tc1=%d\n", c1, c1);
*/

	//float sizeof()
/*
	float numFloat = 0.31415926123456;
	printf("numFloat=%18.15f\tsize=%lu\n", numFloat, sizeof(numFloat));
	double numDouble = 0.31415926123456;
	printf("numFloat=%18.15lf\tsize=%lu\n", numDouble, sizeof(numDouble));
	long double numLDouble = 0.31415926123456;
	printf("numLDouble=%18.15Lf\tsize=%lu\n", numLDouble, sizeof(numLDouble));
*/
	//负数
/*
	int d, e;
	d = -5/3;
	e = 5/3;
	printf("-5/3=%d\t5/3=%d\n", d, e);	
*/
	//%s
//	printf("%s", "string that will come\n");

	//%e
/*
	float f1, f2, f3, f4, f5;
	f1 = 0.31415926123456;
	f2 = 31.415926123456;
	f3 = 31415.926123456;
	f4 = 0.031415926123456;
	f5 = 3.1415926123456;
	printf("f1=%e\t%lf\nf2=%e\t%lf\nf3=%e\t%lf\nf4=%e\t%lf\nf5=%e\t%lf\n", f1, f1, f2, f2, f3,f3 , f4, f4, f5, f5);
*/

	//scanf()。getchar()把输入数据时按的回车键，从键盘缓冲区内给吸收掉。
/*
	float g, h, i;
	printf("输入:%%f%%f%%f\n");
	scanf("%f%f%f", &g, &h, &i);
	printf("输出:%f\t%f\t%f\n\n", g, h, i);
	getchar();
	
	float m, n, o;
	printf("输入:a=%%f, b=%%f, c=%%f\n");
	scanf("a=%f, b=%f, c=%f", &m, &n, &o);
	printf("a=%f, b=%f, c=%f\n\n", m, n, o);
	getchar();	

	char j, k, l;
	printf("输入:%%c%%c%%c\n");
	scanf("%c%c%c", &j, &k, &l);
	printf("%c%c%c\n\n", j, k, l);
*/

	//putchar()输出转义字符
	putchar('A');
	putchar('\101');
	putchar('\'');
	//putchar('\015');	//八进制15，十进制13，ASCII“回车”。输出回车，但不换行
				//使输出的当前位置移到本行开头
	putchar('A');
	printf("test\n");
	
	return 0;
}

