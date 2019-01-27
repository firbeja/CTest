#include<stdio.h>
#define N 3

//把第三题的“输入”部分，抽出来写成input()。

struct Student
{
	char num[10];
	char name[20];
	int score[3];
};

void input(struct Student stu[]);
void print(struct Student stu[]);

void input(struct Student stu[])
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		printf("\ninput score of student: %d\n", i+1);
		printf("NO. :");
		scanf("%s", stu[i].num);
		printf("name :");
		scanf("%s", stu[i].name);
		for(j = 0; j < N; j++)
		{
			printf("score %d:", j+1);
			scanf("%d", &stu[i].score[j]);
		}
		printf("\n");
	}
}

void print(struct Student stu[])
{
	int i, j;
	printf("\n   NO.      name    score1   score2   score3\n");
	for(i = 0; i < N; i++)
	{
		printf("%5s%10s", stu[i].num, stu[i].name);
		for(j = 0; j < N; j++)
		{
			printf("%9d", stu[i].score[j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	struct Student a[N];
	input(a);
	print(a);
	return 0;
}
