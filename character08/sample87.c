#include<stdio.h>

//通过指针变量输出整型数组a的10个元素，书给出反面代码。

int main()
{
	int a[5], *p, i;
	p = a;
	for(i = 0; i < 5; i++)
	{
		printf("输入第%d个整数:", i+1);
		scanf("%d", p++);
	}
//p = a;
	for(i = 0; i < 5; i++, p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
	p = a;
	while(p < a+5)
	{
		printf("%d ", *p++);
	}
	printf("\n");
	return 0;
}
