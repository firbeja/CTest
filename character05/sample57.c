#include<stdio.h>
#include<math.h>

//求PI的近似值。某一项绝对值小于10e-6为止。

int main()
{
	double sign, pi, n, term;
	sign = 1;
	pi = 0;
	n = 1;
	term = 1;
	while(fabs(term) >= 10e-8)
	{
		pi = pi + term;
		sign = -1*sign;
		n = n+2;
		term = sign/n;
		printf("term=%20.15lf\tn=%lf\tpi=%20.15lf\n", term, n, pi*4);
	}
	pi = pi*4;
	return 0;
}
