#include<stdio.h>
#include<math.h>

//求二次方程的根,disc<0 是有问题的
int main()
{
	double disc;
	int a, b, c;
	double p, q;
	printf("输入系数a,b,c:");
	scanf("%d%d%d", &a, &b, &c);
	disc = b*b - 4*a*c;
	p = -1*(b/(2*a));
	q = sqrt(disc);
	
	if(disc < 0)
	{
		printf("共轭复根:x1=%7.2f+%7.2fi,x2=%7.2lf-%7.2fi", p, q, p, q);
	}
	else if(disc == 0)
	{
		printf("两个相等实根:x1=%7.2lf,x2=%7.2lf", p, p);
	}
	else if(disc > 0)
	{
		printf("两个不相等实根:x1=%7.2lf,x2=%7.2lf", p+q, p-q);
	}
	putchar('\n');
	return 0;
}

