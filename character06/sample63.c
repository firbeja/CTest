#include<stdio.h>

//冒泡排序
int main()
{
	int i, j, temp;
	int a[10] = {23, 32, 231, 11, 14, 23, 45, 33, 342, 234};
//	for(i = 0; i < 10; i++)
//	{
//		printf("输入第%d个数:", i);
//		scanf("%d", &a[i]);
//	}
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9-i; j++)
		{
			if(a[j] > a[j+1])
			{
				printf("%d>%d\t", a[j], a[j+1]);
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		putchar('\n');
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}
