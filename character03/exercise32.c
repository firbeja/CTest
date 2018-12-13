#include<stdio.h>

//存款利息的计算。有1000元，想存5年，可按以下5种办法存
//1.一次存5年期
//2.先存两年期，到期后将本息再存3年期
//3.先存三年期，到期后将本息再存2年期
//4.存1年期，到期后将本息再存1年期，连续存5次
//5.存活期存款。活期利息每一季度结算一次

int main()
{
	double P;	//本息和
	double save = 1000;	//本金
	double rate_1, rate_2, rate_3, rate_5, rate_live;	//利率
	int year;	//存多少年

	rate_1 = 0.0414;
	rate_2 = 0.0468;
	rate_3 = 0.054;
	rate_5 = 0.0585;
	rate_live = 0.0072;

	//1.一次存5年期
	year = 5;
	P = save*(1+year*rate_5);
	printf("一次存5年期\tP=%lf\n", P);

	//2.先存两年期，到期后将本息再存3年期
	year = 2;
	P = save*(1+year*rate_2);
	year = 3;
	P = P*(1+year*rate_3);
	printf("先存两年期，到期后将本息再存3年期\tP=%lf\n", P);
	
	//3.先存三年期，到期后将本息再存2年期
	year = 3;
	P = save*(1+year*rate_3);
	year = 2;
	P = P*(1+year*rate_2);
	printf("先存三年期，到期后将本息再存2年期\tP=%lf\n", P);

	//4.存1年期，到期后将本息再存1年期，连续存5次
	year = 2;
	double r1 = (1+rate_1);
	P = save;
	printf("存1年期，到期后将本息再存1年期，连续存5次:\n");
	while(year <= 5)
	{
		r1 = r1*(1+rate_1);
		printf("P=%lf\tyear=%d\trate_1=%lf\n", P*r1, year, r1);
		year++;
	}
	P = save*r1;
	printf("P=%lf\n", P);

	//5.存活期存款。活期利息每一季度结算一次
	int i = 2;
	double r2 = (1 + rate_live/4);
	while(i <= 20)
	{
		r2 = r2*(1+rate_live/4);
		i++;
	}
	P = save*r2;
	printf("P=%lf\n", P);

	return 0;
}

