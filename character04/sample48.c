#include<stdio.h>

//判断闰年，书上给了4个程序以供分析
//1.用变量leap代表是否为闰年，if嵌套实现
//2.if...else if...嵌套实现
//3.用一个逻辑表达式包含所有闰年的条件
//4.C99提供的，<stdbool.h>，bool,true,false

void fun1(int year);
void fun2(int year);
void fun3(int year);
void fun4(int year);
void printLeap(int leap, int year);

void fun1(int year)
{
	int leap = -1;
	if(year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			leap = 1;
		}
		else
		{
			if(year % 400 == 0)
			{
				leap = 1;
			}
			else
			{
				leap = 0;
			}
		}
	}
	else
	{
		leap = 0;
	}

	printLeap(leap, year);
}

void fun2(int year)
{
	int leap = -1;
	if(year % 4 != 0)
	{
		leap = 0;
	}
	else if(year % 100 != 0)
	{
		leap = 1;
	}
	else if(year % 400 == 0)
	{
		leap = 1;
	}
	else
	{
		leap = 0;
	}

	printLeap(leap, year);
}

void fun3(int year)
{

}

void fun4(int year)
{

}

void printLeap(int leap, int year)
{
	if(leap == 1)
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
}

int main()
{
	int year;
	printf("输入年份:");
	scanf("%d", &year);
	fun1(year);
	fun2(year);
	fun3(year);
	fun4(year);
	return 0;
}

