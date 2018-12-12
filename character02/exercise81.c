#include<stdio.h>

//输出1900~2000年中是闰年的年份
//条件1：能被4整除但不能被100整除
//条件2：能被100整除且能被400整除

int fun1(int year);
int fun2(int year);

int fun1(int year)
{
	int w = -1;
	if(year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			w = 1;
		} 
		else
		{
			w = 0;
		}
	}
	else
	{
		w = 0;
	}
	return w;
}

int fun2(int year)
{
	int w = -1;
	if(year % 400 == 0)
	{
		w = 1;
	}
	else
	{
		w = 0;
	}
	return w;
}

int main()
{
	int year = 1900;
	while(year <= 2000)
	{
		if(fun1(year) || fun2(year))
		{
			printf("%d是闰年\n", year);
		}
		year++;
	}
	return 0;
}

