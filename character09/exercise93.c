#include<stdio.h>
#define N 3

//编写一个函数print()，打印一个学生的成绩数组，
//该数组中有5个学生的数据记录，每个记录包括num，name，score[3]，
//用主函数输入这些记录，用print()函数输出这些记录。

struct Student
{
	int num;
	char name[20];
	float score[3];
};

void print(struct Student stu[]);

void print(struct Student stu[])
{
	for(int i = 0; i < N; i++)
	{
		printf("num=%d name=%s score=", stu[i].num, stu[i].name);
		for(int j = 0; j < 3; j++)
		{
			printf("%f ", stu[i].score[j]);
		}
		printf("\n");
	}
}

int main()
{
	int i, j;
	struct Student a[N], *p=a;
	for(i = 0; i < N; i++)
	{
		printf("输入学号，姓名:");
		scanf("%d%s", &(p+i)->num, (p+i)->name);
		for(j = 0; j < 3; j++)
		{
			printf("输入第%d门成绩", j+1);
			scanf("%f", &(p+i)->score[j]);
		}
	}
	print(p);
	return 0;
}
