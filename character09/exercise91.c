#include<stdio.h>

//定义一个结构体变量（包括年，月，日）。计算该日在本年中是第几天，注意闰年问题。

struct Date
{
	int year;
	int month;
	int day;
};

int is31(int m);
int is30(int m);

int is31(int m)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int is30(int m)
{
	if(m==4||m==6||m==9||m==11)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int leap, i, sum;
	struct Date t;
	leap = 0;
	sum = 0;
	printf("输入年,月,日:");
	scanf("%d%d%d", &t.year, &t.month, &t.day);
	printf("%d %d %d\n", t.year, t.month, t.day);
	if((t.year%4==0 && t.year%100!=0) || t.year%400==0)
	{
		leap = 1;
	}
	for(i = 1; i < t.month; i++)
	{
		if(is31(i))
		{
			sum = sum + 31;
		}
		else if(is30(i))
		{
			sum = sum + 30;
		}
		else if(i == 2)
		{
			sum = sum + 28;
		}
	}
	sum = sum + t.day;
	if(leap == 1)
	{
		sum = sum + 1;
	}
	printf("sum=%d\n", sum);
	return 0;
}
