#include<stdio.h>
#define N 3

//编写一个函数print()，输出一个学生的成绩数组，
//该数组中有五个学生的数据记录，每个记录包括num，name，score[3]，
//用主函数输入这些记录，用print()函数输出这些记录。

struct Student
{
	char num[10];
	char name[20];
	int score[3];
}stu[N];

void print(struct Student stu[]);

void print(struct Student stu[])
{
	int i, j;
	printf("\n   NO.      name    score1   score2   score3\n");
	for(i = 0; i < N; i++)
	{
		printf("%5s%10s", stu[i].num, stu[i].name);
		for(j = 0; j < 3; j++)
		{
			printf("%9d", stu[i].score[j]);
		}
		printf("\n");
	}
}

int main()
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		printf("\ninput score of student: %d\n", i+1);
		printf("NO.: ");
		scanf("%s", stu[i].num);
		printf("name: ");
		scanf("%s", stu[i].name);
		for(j = 0; j < 3; j++)
		{
			printf("score %d: ", j+1);
			scanf("%d", &stu[i].score[j]);
		}
		printf("\n");
	}
	print(stu);
	return 0;
}
