#include<stdio.h>
#include<stdlib.h>

//建立动态数组，输入5个学生的成绩，写另一个函数检查有无低于60分的，输出不合格的成绩。

void check(int *p);
void check(int *p)
{
	for(int i = 0; i < 5; i++)
	{
		if(*(p+i) < 60)
		{
			printf("%d ", *(p+i));
		}
	}
}

int main()
{
	int *p, i;
	p = (int *)malloc(5*sizeof(int));
	for(i = 0; i < 5; i++)
	{
		scanf("%d", p+i);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
	check(p);
	printf("\n");
	return 0;
}
