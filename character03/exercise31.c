#include<stdio.h>

//计算十年后我国国民生产总值与现在相比增长多少百分比。
//计算公式: p=(1+r)^n

int main()
{
	double r = 0.09;
	int year = 1;
	double p = 1;
	double q = 1 + r;
	while(year <= 10)
	{
		p = p*q;
		printf("year=%d\tp=%lf\n", year, p);
		year++;
	}
	return 0;
}

