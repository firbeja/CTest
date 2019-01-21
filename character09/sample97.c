#include<stdio.h>

//有n个结构体变量，内含学生学号，姓名和3门课程的成绩。要求输出平均成绩最高的学生的信息。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void fun1();
void fun2();
void myScan(struct Student s[], int n);
struct Student max(struct Student s[], int n);
void myPrint(struct Student s);

void fun1()
{
	const int n = 2;
	struct Student a[n], *p;
	int i, j, max;
	float sum;
	p = a;
	for(i = 0; i < n; i++)
	{
		printf("输入第%d位学生的学号，姓名:", i+1);
		scanf("%d%s", &(p+i)->num, (p+i)->name);
		for(j = 0; j < 3; j++)
		{
			printf("连着输入第%d门课程的成绩:", j+1);
			scanf("%f", (p+i)->score+j);
		}
	}
	for(i = 0; i < n; i++)
	{
		sum = 0.0;
		for(j = 0; j < 3; j++)
		{
			sum = sum + *((p+i)->score+j);
		}
		(p+i)->aver = sum/3;
	}
	max = i;
	for(i = 0; i < n; i++)
	{
		if((p+max)->aver < (p+i)->aver)
		{
			max = i;
		}
	}
	printf("max: num=%d name=%s score=", (p+max)->num, (p+max)->name);
	for(i = 0; i < 3; i++)
	{
		printf("%3.1f ", (p+max)->score[i]);
	}
	printf("aver=%f", p[max].aver);
	printf("\n");
}

void fun2()
{
	const int n = 2;
	struct Student a[n], *p, m;
	p = a;
	myScan(p, n);
	m = max(p, 5);
	myPrint(m);
}

void myScan(struct Student s[], int n)
{
	int i, j;
	float sum;
	struct Student *p = s;
	for(i = 0; i < n; i++)
	{
		printf("输入学号，姓名:");
		scanf("%d%s", &(p+i)->num, (p+i)->name);
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			printf("输入第%d门成绩:", i+1);
			scanf("%f", &(p+i)->score[j]);
			sum = sum + *((p+i)->score + j);
		}
		(p+i)->aver = sum/3;
	}
}

struct Student max(struct Student s[], int n)
{
	int i, max;
	struct Student *p;
	max = i;
	p = s;
	for(i = 0; i < n; i++)
	{
		if((p+max)->aver < (p+i)->aver)
		{
			max = i;
		}
	}
	return *(p+max);
}

void myPrint(struct Student s)
{
	printf("max: num=%d name=%s score=", s.num, s.name);
	for(int i = 0; i < 3; i++)
	{
		printf("%3.1f ", s.score[i]);
	}
	printf("aver=%f\n", s.aver);
}

int main()
{
	fun2();
	return 0;
}
