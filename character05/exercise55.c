#include<stdio.h>

//s=a+aa+aaa+aaaa+...,例:2+22+222+2222+...
int main()
{
	int n, i, a, j, s;
	printf("输入n和a:");
	scanf("%d%d", &n, &a);
	j = a;
	s = j;
	for(i = 1; i < n; i++)
	{
		a = a * 10;	//扩大a在“位数”上的大小“200”“2000”“20000”
		j = j + a;	//把已经变化的“位数”，套到旧的a上“200”+“22”=“222”
		s = s + j;	//把变化好的“222”加上
		printf("a=%d\tj=%d\ts=%d\n", a, j, s);
	}
	return 0;
}
