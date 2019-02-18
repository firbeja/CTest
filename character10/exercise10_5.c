#include<stdio.h>
#include<stdlib.h>
#define N 5

//有5个学生，每个学生有三门课程的成绩，
//从键盘输入学生数据（包括学号，姓名，3门课程成绩），
//计算出平均成绩，
//将原有数据和计算出的平均分数存放在磁盘文件“stud”中。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
};

void save(struct Student *stu, float aver, FILE *fp);

void save(struct Student *stu, float aver, FILE *fp)
{
	char *f = "%7d,%9s,%6.2f,%6.2f,%6.2f,%9.2f\n";
	int i;
	for(i = 0; i < N; i++)
	{
		fprintf(fp, f, stu[i].num, stu[i].name, stu[i].score[0],
			stu[i].score[1], stu[i].score[2], stu[i].average);
	}
	fprintf(fp, "\naver=%6.2f\n", aver);
}

int main()
{
	FILE *fp;
	struct Student stu[N];
	int i, j;
	float aver = 0, sum;
	if((fp = fopen("things/e10_5/stud", "w")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		printf("输入学号，姓名:\n");
		scanf("%d%s", &stu[i].num, stu[i].name);
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			printf("成绩%d:", j);
			scanf("%f", &stu[i].score[j]);
			sum = sum + stu[i].score[j];
		}
		stu[i].average = sum/3.0;
		aver = aver + stu[i].average;
	}
	aver = aver/N;
	save(stu, aver, fp);
	fclose(fp);
	return 0;
}
