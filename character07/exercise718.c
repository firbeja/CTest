#include<stdio.h>
//给出年月日，计算该日是该年的第几天。

int counts(int month, int sum);
int isLeap(int year);

int main()
{
	int year, month, day, m, sum, leap;
	leap = -1;
	printf("输入年份，月份，日:");
	scanf("%d%d%d", &year, &month, &day);
	m = counts(month-1, 0);
	sum = m + day;
	leap = isLeap(year);
	if(leap == 1)
	{
		sum = sum + 1;
	}
	printf("leap=%d sum=%d\n", leap, sum);
	return 0;
}

int counts(int month, int sum)
{
	if(month == 1)
	{
		sum = sum + 31;
	}
	else
	{
		sum = counts(month-1, sum);
		if(month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			sum = sum + 31;
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			sum = sum + 30;
		}
		else if(month == 2)
		{
			sum = sum + 28;
		}
	}
	return sum;
}

int isLeap(int year)
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
	return leap;
}
