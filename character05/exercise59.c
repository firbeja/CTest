#include<stdio.h>

//完数:一个数等于它的因子之和。例:6=1+2+3
//编程找出1000之内的所有完数
int main()
{
	int i, j, s;
	for(i = 2; i <= 1000; i++)
	{
		s = 0;
		for(j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
				s = s + j;
			}
		}
		if(i == s)
		{
			printf("%d\tits factors are\t", i);
			for(j = 1; j < i; j++)
			{
				if(i % j == 0)
				{
					printf("%d\t",j);
				}
			}
			putchar('\n');
		}
	}
	return 0;
}
