#include<stdio.h>

//计算改日在本年是第几天。

struct Date
{
	int year;
	int month;
	int day;
}d;

void fun1(struct Date d);
void fun2(struct Date d);

void fun1(struct Date d)
{
	int days;
	switch(d.month)
	{
		case 1: days = d.day; break;
		case 2:	days = d.day + 31; break;
		case 3: days = d.day + 59; break;
		case 4: days = d.day + 60; break;
		case 5: days = d.day + 120; break;
		case 6: days = d.day + 151; break;
		case 7: days = d.day + 181; break;
		case 8: days = d.day + 212; break;
		case 9: days = d.day + 243; break;
		case 10: days = d.day + 273; break;
		case 11: days = d.day + 304; break;
		case 12: days = d.day + 334; break;
		default:break;
	}
	if(((d.year%4==0 && d.year%100!=0) || d.year%400==0) && (d.month >= 3))
	{
		printf("year is leap. ");
		days = days + 1;
	}
	printf("%d/%d is the %dth day in the %d\n", d.month, d.day, days, d.year);
}

void fun2(struct Date d)
{
	int i, days = 0;
	int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(i = 1; i < d.month; i++)
	{
		days = days + day_tab[i];
	}
	days = days + d.day;
	if(((d.year%4==0 && d.year%100!=0) || (d.year%400==0)) && (d.month >= 3))
	{
		printf("year is leap. ");
		days = days + 1;
	}
	printf("%d/%d is the %dth day in the %d\n", d.month, d.day, days, d.year);
}

int main()
{
	printf("输入年，月，日:");
	scanf("%d%d%d", &d.year, &d.month, &d.day);
	fun1(d);
	fun2(d);
	return 0;
}
