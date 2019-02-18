#include<stdio.h>
#include<stdlib.h>

//重写。将第七题结果仍存入原有的“stud_sort”文件而不另建立新文件。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
};

float Aver;

void getInfo(struct Student *stu, FILE *fp);
void getStu(struct Student *s);
void insert(struct Student *stu, struct Student *s);
void save(struct Student *stu, FILE *fp);
void print(struct Student *stu);

void getInfo(struct Student *stu, FILE *fp)
{
	char *f = "%d,%s%f,%f,%f,%f";
	for(int i = 0; i < 5; i++)
	{
		fscanf(fp, f, &stu[i].num, stu[i].name, &stu[i].score[0],
				&stu[i].score[1], &stu[i].score[2], &stu[i].average);
	}
	fscanf(fp, " aver=%f", &Aver);
}

void getStu(struct Student *s)
{
	printf("输入要出入的学号，姓名，三门成绩:\n");
	scanf("%d%s%f%f%f", &s->num, s->name, &s->score[0], &s->score[1],&s->score[2]);
	s->average = (s->score[0] + s->score[1] + s->score[2]) / 3.0;
	Aver = (Aver*5 + s->average) / 6.0;
}

void insert(struct Student *stu, struct Student *s)
{
	int i = 0, j;
	while(i < 5 && s->average < stu[i].average)
	{
		i = i+1;
	}
	for(j = 5; j > i; j--)
	{
		stu[j] = stu[j-1];
	}
	stu[j] = *s;
}

void save(struct Student *stu, FILE *fp)
{
	char *f = "%7d,%9s%7.2f,%7.2f,%7.2f,%9.2f\n";
	for(int i = 0; i < 6; i++)
	{
		fprintf(fp, f, stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1],
				stu[i].score[2], stu[i].average);
	}
	fprintf(fp, "\naver=%6.2f\n", Aver);
}

void print(struct Student *stu)
{
	for(int i = 0; i < 6; i++)
	{
		printf("%7d%9s%6.2f%6.2f%6.2f%9.2f\n", stu[i].num, stu[i].name,
			stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
	}
	printf("   aver=%6.2f\n", Aver);
}

int main()
{
	FILE *fp;
	struct Student stu[6] = {0}, s;
	if((fp = fopen("things/e10_8/stud_sort", "r+")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}

	getInfo(stu, fp);
	print(stu);

	getStu(&s);

	insert(stu, &s);
	printf("\ninsert:\n");
	print(stu);

	rewind(fp);
	save(stu, fp);

	fclose(fp);
	return 0;
}
