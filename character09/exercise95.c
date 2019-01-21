#include<stdio.h>
#define N 2

//有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩，
//从键盘输入10个学生数据，
//要求输出3门课程总平均成绩，
//以及最高分的学生的数据（包括学号、姓名、3门课程成绩、平均分数）。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void input(struct Student stu[]);
void print(struct Student *p);

void input(struct Student *p)
{
	float sum;
	for(int i = 0; i < N; i++)
	{
		printf("输入学号，姓名:");
		scanf("%d%s", &(p+i)->num, (p+i)->name);
		sum = 0.0;
		for(int j = 0; j < 3; j++)
		{
			printf("输入第%d门成绩:", i+1);
			scanf("%f", &(p+i)->score[j]);
			sum = sum + (p+i)->score[j];
		}
		(p+i)->aver = sum/3;
	}
}

void print(struct Student *p)
{
	int a, b, i;
	float sum;
	a = 0;
	b = 0;
	sum = 0;
	for(i = 0; i < N; i++)
	{
		printf("num=%d name=%s score=", (p+i)->num, (p+i)->name);
		for(int j = 0; j < 3; j++)
		{
			printf("%f ", (p+i)->score[j]);
			sum = sum + (p+i)->score[j];
			if((p+a)->score[b] < (p+i)->score[j])
			{
				a = i;
				b = j;
			}
		}
		printf("aver=%f\n", (p+i)->aver);
	}
	printf("total aver=%f\n", sum/(3*N));
	printf("max: num=%d name=%s score=", (p+a)->num, (p+a)->name);
	for(int i = 0; i < 3; i++)
	{
		printf("%f ", (p+a)->score[i]);
	}
	printf("aver=%f\n", (p+a)->aver);
}

int main()
{
	struct Student a[N];
	input(a);
	print(a);
	return 0;
}
