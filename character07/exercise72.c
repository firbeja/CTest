#include<stdio.h>
#include<math.h>

//求二次方程的根，>0,<0,=0，三种情况用三个函数。

void fun1(float a, float b, float c);
void fun2(float a, float b, float c);
void fun3(float a, float b, float c);

int main()
{
	float a, b, c, disc;
	printf("输入a,b,c:");
	scanf("%f%f%f", &a, &b, &c);
	disc = b*b - 4.0*a*c;
	printf("disc=%f\n", disc);
	if(disc < 0)
	{
		fun1(a, b, c);
	}
	else if(disc == 0)
	{
		fun2(a, b, c);
	}
	else if(disc > 0)
	{
		fun3(a, b, c);
	}
	return 0;
}

void fun1(float a, float b, float c)
{
	float disc, p, q;
	disc = b*b - 4*a*c;
	p = -1*(b/(2*a));
	q = sqrt(-disc)/(2*a);
	printf("x1=%5.2f + %5.2fi\n", p, q);
	printf("x2=%5.2f - %5.2fi\n", p, q);
}

void fun2(float a, float b, float c)
{
	printf("x1=x2=%f\n", -b/(2*a));
}

void fun3(float a, float b, float c)
{
	float disc, x1, x2, p, q;
	disc = b*b - 4*a*c;
	p = -b/(2*a);
	q = sqrt(disc)/(2*a);
	x1 = p + q;
	x2 = p - q;
	printf("p=%f q=%f x1=%f x2=%f\n", p, q,x1, x2);
}
