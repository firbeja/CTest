#include<stdio.h>

//输入两个正整数，求最大公约数和最小公倍数
int main()
{
	int m, n, r, temp, p;
	printf("输入两个正整数:");
	scanf("%d%d", &m, &n);
	if(m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	p = m*n;
	do
	{
		r = m % n;
		m = n;
		n = r;
	}while(r != 0);
	printf("最大公约数:%d\n", m);
	printf("最小公倍数:%d\n", p/m);
	return 0;
}
