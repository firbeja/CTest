#include<stdio.h>

//输入三个整数，由小到大输出。

int main()
{
	int i, j, temp, *p;
	p = (int *)malloc(3*sizeof(int));
	for(i = 0; i < 3; i++)
	{
		printf("输入第%d个整数:", i+1);
		scanf("%d", p+i);
	}
	for(i = 0; i <= 1; i++)
	{
		for(j = 0; j <= 1-i; j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
	}
	for(i = 0; i < 3; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
	return 0;
}
