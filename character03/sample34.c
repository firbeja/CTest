#include<stdio.h>
#include<math.h>

//给出三角形的三边长，求三角形的面积
int main()
{
	double a, b, c;
	double s;
	double area;
	printf("输入三角形的三边长:");
	scanf("%lf%lf%lf", &a, &b, &c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%lf\n", area);
	return 0;
}

