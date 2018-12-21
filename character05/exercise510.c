#include<stdio.h>

//求一个分数数列
int main()
{
	int i; 
	float s, x1, x2, temp;
	s = 0.0;
	x1 = 1.0;
	x2 = 2.0;
	printf("s=0\n");
	for(i = 1; i <= 20; i++)
	{
		s = s + x2/x1;
		printf("+%5.0f/%5.0f\n", x2, x1);
		temp = x2;
		x2 = x1 + x2;
		x1 = temp;
	}
	printf("\ns=%f\n", s);
	return 0;
}
