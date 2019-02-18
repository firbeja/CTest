#include<stdio.h>
#include<stdlib.h>
#define N 5

//将第六题已排序的学生成绩文件进行插入处理。插入一个学生的三门课程成绩，
//程序先计算新插入学生的平均成绩，
//然后将它按成绩高低顺序插入，插入后建立一个新文件。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
};

float aver;

void getInfo(struct Student *stu, float *aver, FILE *fp);
void insert(struct Student *stu, struct Student *s);
void save(struct Student *stu, FILE *fp);
void print(struct Student *stu);

void getInfo(struct Student *stu, float *aver, FILE *fp)
{
	char *f = "%d,%s%f,%f,%f,%f";
	for(int i = 0; i < N; i++)
	{
		fscanf(fp, f, &stu[i].num, stu[i].name, &stu[i].score[0],
			&stu[i].score[1], &stu[i].score[2], &stu[i].average);
	}
	fscanf(fp, " aver=%f", aver);
}

void insert(struct Student *stu, struct Student *s)
{
	int i, j;
	i = 0;
	while(i < N && s->average < stu[i].average)
	{
		i = i + 1;
	}
	for(j = 5; j > i; j--)
	{
		stu[j] = stu[j-1];
	}
	stu[j] = *s;
}

void save(struct Student *stu, FILE *fp)
{
	char *f = "%7d,%9s,%7.2f,%7.2f,%7.2f,%9.2f\n";
	for(int i = 0; i < 6; i++)
	{
		fprintf(fp, f, stu[i].num, stu[i].name, stu[i].score[0],
			stu[i].score[1], stu[i].score[2], stu[i].average);
	}
	fprintf(fp, "\naver=%6.2f\n", aver);
}

void print(struct Student *stu)
{
	for(int i = 0; i < 6; i++)
	{
		printf("%7d%9s%7.2f%7.2f%7.2f%9.2f\n", stu[i].num, stu[i].name,
			stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
	}
	printf("   aver=%6.2f\n", aver);
}

int main()
{
	FILE *fp1, *fp2;
	struct Student stu[6] = {0}, s;
	if((fp1 = fopen("things/e10_7/stud_sort", "r")) == NULL)
	{
		printf("\n   cannot open file stud_sort\n");
		exit(0);
	}
	if((fp2 = fopen("things/e10_7/3a", "w")) == NULL)
	{
		printf("\n   cannot open file 3a\n");
		exit(0);
	}
	//获取文件内容
	getInfo(stu, &aver, fp1);
	print(stu);
	//输入要插入的数据
	printf("\n输入要插入学生数据:\n");
	scanf("%d%s %f%f%f", &s.num, s.name, &s.score[0], &s.score[1],
			&s.score[2]);
	s.average = (s.score[0] + s.score[1] + s.score[2]) / 3.0;
	aver = (aver*5 + s.average) / 6.0;
	//插入数据
	insert(stu, &s);
	//存放数据到新的文件
	save(stu, fp2);
	print(stu);

	fclose(fp1);
	fclose(fp2);
	return 0;
}
