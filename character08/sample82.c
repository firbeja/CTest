#include<stdio.h>

//输入两个整数，按先大后小输出。

int main()
{
	int a, b;
	int *p1=&a, *p2=&b, *temp;
	printf("输入两个整数:");
	scanf("%d%d", p1, p2);
	printf("a=%d\tb=%d\n*p1=%d\t*p2=%d\n", a, b, *p1, *p2);
	if(*p1 < *p2)
	{
		//temp = p1;
		//p1 = p2;
		//p2 = temp;
		p1 = &b;
		p2 = &a;
	}
	printf("\na=%d\tb=%d\n*p1=%d\t*p2=%d\n", a, b, *p1, *p2);
	return 0;
}
