#include<stdio.h>
#include<math.h>

//计算贷款
int main()
{
	double d = 300000;	//贷款数额
	double p = 6000;	//每月还款额
	double r = 0.01;	//月利率
	double x, y, z;
	double month;
	x = log10(p);
	y = log10(p-d*r);
	z = log10(1+r);
	month = (x-y)/z;
	printf("month=%lf\n", month);
	return 0;
}

