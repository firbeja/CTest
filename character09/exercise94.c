#include<stdio.h>
#define N 3

//在第三题的基础上，编写一个函数input()，用来输入5个学生的数据记录。

struct Student
{
	int num;
	char name[20];
	float score[3];
};

void input(struct Student *p);
void print(struct Student *p);

void input(struct Student *p)
{
	for(int i = 0; i < N; i++)
	{
		printf("输入学号，姓名:");
		scanf("%d%s", &(p+i)->num, (p+i)->name);
		for(int j = 0; j < 3; j++)
		{
			printf("输入第%d门成绩:", j+1);
			scanf("%f", &(p+i)->score[j]);
		}
	}
}

void print(struct Student *p)
{
	for(int i = 0; i < N; i++)
	{
		printf("num=%d name=%s score=", (p+i)->num, (p+i)->name);
		for(int j = 0; j < 3; j++)
		{
			printf("%3.1f ", (p+i)->score[j]);
		}
		printf("\n");
	}
}

int main()
{
	struct Student a[N], *p=a;
	input(p);
	print(p);
	return 0;
}
