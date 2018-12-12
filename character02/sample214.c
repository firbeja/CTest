#include<stdio.h>

//求多项式
int main()
{
	double sum = 0;
	double deno = 1;
	double sign = -1;
	double term = 0;
	while(deno <= 100)
	{
		sign = -1 * sign;
		term = sign * (1 / deno);
		sum = sum + term;
		printf("sum=%12.8lf\tsign=%7.2lf\tdeno=%7.2lf\tterm=%13.8lf\n", sum, sign, deno, term);
		deno++;
	}
	printf("sum=%10.8lf\n",sum);

	return 0;
}

