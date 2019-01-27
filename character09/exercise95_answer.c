#include<stdio.h>
#define N 3

//有十个学生，每个学生的数据包括学号，姓名，三门课程的成绩，
//从键盘输入十个学生数据，要求输出三门课程总平均成绩，以及最高分的学生的数据
//（包括学号、姓名、三门课程成绩、平均分数）。

struct Student
{
	char num[10];
	char name[20];
	float score[3];
	float aver;
};

int main()
{
	struct Student a[N];
	int i, j, imax;
	float sum, max, average;
	for(i = 0; i < N; i++)
	{
		printf("\ninput score of student %d:\n", i+1);
		printf("NO. :");
		scanf("%s", a[i].num);
		printf("name :");
		scanf("%s", a[i].name);
		for(j = 0; j < 3; j++)
		{
			printf("score%d:", j+1);
			scanf("%f", &a[i].score[j]);
		}
	}
	max = 0;
	imax = 0;
	for(i = 0; i < N; i++)
	{
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			sum = sum + a[i].score[j];
		}
		a[i].aver = sum/3.0;
		average = average + sum/3.0;
		if(max < sum)
		{
			max = sum;
			imax = i;
		}
	}
	average /= N;
	printf("   NO.      name   score1   score2   score3  average\n");
	for(i = 0; i < N; i++)
	{
		printf("%5s%10s", a[i].num, a[i].name);
		for(j = 0; j < N; j++)
		{
			printf("%9.2f", a[i].score[j]);
		}
		printf("%9.2f", a[i].aver);
		printf("\n");
	}
	printf("average=%f\n", average);
	printf("The highest score is : student %s.%s\n", a[imax].num, a[imax].name);
	printf("his score are : %6.2f%6.2f%6.2f, average:%6.2f\n", a[imax].score[0],
		a[imax].score[1], a[imax].score[2], a[imax].aver);
	return 0;
}
