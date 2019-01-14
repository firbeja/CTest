#include<stdio.h>
#include<stdlib.h>

//有一个班，三个学生，四门课，计算总平均分数，计算第n个学生成绩。

void average(float (*p)[4], int n);
void search(float (*p)[4], int num, float (*grade)[4]);
void print_1(float (*p)[4]);
void print_2(float *p);

void average(float (*p)[4], int n)
{
	int i, j;
	float sum  = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			sum = sum + *(*(p+i)+j);
		}
		printf("\n");
	}
}

void search(float (*p)[4], int num, float (*grade)[4])
{
	p = p + num - 1;
	for(int i = 0; i < 4; i++)
	{
		*(*grade+i) = *(*p+i);
	}
}

void print_1(float (*p)[4])
{
	for(int i = 0; i < 4; i++)
	{
		printf("%f ", *(*p+i));
	}
	printf("\n");
}

void print_2(float *p)
{
	for(int i = 0; i < 4; i++)
	{
		printf("%f ", *(p+i));
	}
	printf("\n");
}

int main()
{
	float g[3][4];
	float (*p)[4], (*grade)[4];
	int i, j, num;
	printf("连续输入3*4的成绩:");
	for(p = g; p < g+3; p++)
	{
		for(i = 0; i < 4; i++)
		{
			scanf("%f", *p+i);
		}
	}
	for(i = 0, p = g; i < 3; i++)
	{
		printf("第%d位学生成绩:", i+1);
		for(j = 0; j < 4; j++)
		{
			printf("%f ", *(*(p+i)+j));
		}
		printf("\n");
	}
	average(g, 12);
	printf("输入学号:");
	scanf("%d", &num);
	p = g;
	grade = (float (*)[4])malloc(4*sizeof(float));
	search(p, num, grade);
	print_1(grade);
	print_2(*grade);
	free(grade);
	return 0;
}
