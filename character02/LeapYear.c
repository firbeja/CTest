#include<stdio.h>

/*
* to calculate leap year
*/

void isLeapYear(int year);
void printNotLeap(int year);

void isLeapYear(int year)
{
	int num1, num2, num3;
	num1 = year % 4;
	num2 = year % 100;
	num3 = year % 400;

	if(num1 == 0 && num2 != 0)
	{
		printf("%d is ordinary leap year\n", year);	
	}
	else
	{
		if(num3 == 0)
		{
			printf("%d is Century leap year\n", year);
		}
		else
		{
			printNotLeap(year);
		}
	}
}

void printNotLeap(int year)
{
	printf("%d is not.\n", year);
}

int main()
{
	int year = 2000;

	for(year = 2000; year <= 2500; year++)
	{
		isLeapYear(year);
	}	
	
	return 0;
}

