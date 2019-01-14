#include<stdio.h>

//例8.13后面的一个小程序分析

int main()
{
	int a[4] = {23, 43, 7, 89};
	int *p, (*t)[4];
	p = a;
	t = &a;
	for(int i = 0; i < 4; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	for(int i = 0; i < 4; i++)
	{
		printf("%d ", (*t)[i]);
	}
	printf("\n");
	printf("a[1]=%d\t*(p+1)=%d\tp[1]=%d\n", a[1], *(p+1), p[1]);
	printf("a[2]=%d\t*(*t+2)=%d\t(*t)[2]=%d\n", a[2], *(*t+2), (*t)[2]);
	return 0;
}
