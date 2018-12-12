#include<stdio.h>

//判断能否同时被3和5整除
int main()
{
	int num;
	printf("输入一个数：");
	scanf("%d", &num);
	if(num % 3 == 0 && num % 5 == 0)
	{
		printf("%d能同时被3和5整除\n", num);
	}
	else
	{
		printf("不能\n");
	}
	return 0;
}

