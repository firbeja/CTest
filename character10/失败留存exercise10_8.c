#include<stdio.h>
#include<stdlib.h>
#define N 5

//将第七题结果仍存入原有的“stud_sort”文件而不另建立新文件。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
};

float Aver;
long Location;

void getStu(struct Student *stu);
void insert(struct Student *stu, FILE *fp);
int fun(int i, struct Student *stu, FILE *fp);

void getStu(struct Student *stu)
{
	printf("输入要插入的学号，姓名，三门成绩:");
	scanf("%d%s %f%f%f", &stu->num, stu->name, &stu->score[0], 
			&stu->score[1], &stu->score[2]);
	stu->average = (stu->score[0] + stu->score[1] + stu->score[2]) / 3.0;
}

void insert(struct Student *stu, FILE *fp)
{
	printf("\ninsert----ftell=%o----\n", ftell(fp));
	char *f = "%7d,%8s,%6.2f,%6.2f,%6.2f,%9.2f\n";
	fseek(fp, Location, SEEK_SET);
	fprintf(fp, f, stu->num, stu->name, stu->score[0], stu->score[1],
			stu->score[2], stu->average);
	printf("\n+++insert----ftell=%o----\n", ftell(fp));
}

int fun(int i, struct Student *stu, FILE *fp)
{
	struct Student s;
	char *f = "%d,%s%f,%f,%f,%f";
	fscanf(fp, f, &s.num, s.name, &s.score[0], &s.score[1],
		&s.score[2], &s.average);
	printf("--%7d%9s%6.2f%6.2f%6.2f%9.2f--\n", s.num, s.name, s.score[0],
				s.score[1], s.score[2], s.average);
	if(i < 5 && stu->average < s.average)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	FILE *fp;
	int i;
	struct Student stu;
	if((fp = fopen("things/e10_8/stud_sort", "r+")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	getStu(&stu);
	i = 0;
	while(fun(i, &stu, fp))
	{
		i = i + 1;
		printf("\n----ftell=%o----\n", ftell(fp));
		Location = ftell(fp);
	}
	insert(&stu, fp);
	fclose(fp);
	return 0;
}
