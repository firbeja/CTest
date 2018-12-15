#include<stdio.h>

//求Fibonacci数列的前40个数
//求兔子数

void fun1();
void fun2();

void fun1()
{
	int f1, f2, f3;
	f1 = 1;
	f2 = 1;
	for(int i = 0; i < 40; i++)
	{
		f3 = f1 + f2;
		printf("f3=%d\n", f3);
		f1 = f2;
		f2 = f3;
	}

}

void fun2()
{
	int f1, f2, n;
	f1 = 1;
	f2 = 1;
	n = 0;
	for(int i = 0; i < 20; i++, n++)
	{
		f1 = f1 + f2;
		f2 = f2 + f1;
		printf("%12d%12d", f1, f2);
		if((i+1) % 2 == 0) putchar('\n');
	}
}

int main()
{
	fun1();
	fun2();
	return 0;
}
