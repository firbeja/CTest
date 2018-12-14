#include<stdio.h>
#include<math.h>

//求二次方程的解
//1.a=0,不是二次方程
//2.disc<0,两个共轭复根
//3.disc=0,两个相等实根
//4.disc>0,两个不相等实根
int main()
{
	int a, b, c;
	double disc;
	double x1, x2;
	double realpart, imagepart;
	printf("输入二次方程的系数a,b,c:");
	scanf("%d%d%d", &a, &b, &c);
	if(a == 0)
	{
		printf("a=0,不是二次方程\n");
	}
	else
	{
		disc = b*b-4*a*c;
		if(fabs(disc) <= 1e-6)	//disc == 0
		{
			printf("disc=0\t两个相等实根:x1=x2=%lf\n", -b/(2.0*a));
		}
		else
		{
			if(disc > 0)	//disc > 0
			{
				x1 = (-b + sqrt(disc))/(2.0*a);
				x2 = (-b - sqrt(disc))/(2.0*a);
				printf("disc>0\t两个不相等实根:x1=%lf\tx2=%lf\n", x1, x2);
			}
			else if(disc < 0)	//disc < 0
			{
				realpart = -b/(2.0*a);
				imagepart = sqrt(-disc)/(2.0*a);
				printf("disc<0\t两个共轭复根:x1=%lf+%lfi\tx2=%lf-%lfi\n", realpart, imagepart, realpart, imagepart);
			}
		}
	}
	return 0;
}

