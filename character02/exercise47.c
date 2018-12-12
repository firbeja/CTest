#include<stdio.h>

//求两个数的最大公约数
int main()
{
	int m, n;
	int i = 1;
	int max = -1;
	printf("输入两个数：");
	scanf("%d%d", &m, &n);
	while(i < m && i < n)
	{
		if(m % i == 0 && n % i ==0)
		{
			printf("%d\t", i);
			max = i;
		}
		i++;
	}
	printf("max=%d\n",max);
	return 0;
}

