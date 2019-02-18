#include<stdio.h>
#include<stdlib.h>
#define N 5

//将第五题“stud”文件中的学生数据，按平均分进行排序处理，
//将已排序的学生数据存入一个新文件“stud_sort”中。

struct Student
{
	int num;
	char name[20];
	float score[3];
	float average;
};

void getInfo(struct Student *stu, float *aver, FILE *fp);
void sort(struct Student *stu);
void save(struct Student *stu, float aver, FILE *fp);
void print(struct Student *stu);

void getInfo(struct Student *stu, float *aver, FILE *fp)
{
	char *f = "%d,%s%f,%f,%f,%f";
	int i;
	for(i = 0; i < N; i++)
	{
		fscanf(fp, f, &stu[i].num, stu[i].name, &stu[i].score[0],
				&stu[i].score[1], &stu[i].score[2], &stu[i].average);
	}
	fscanf(fp, " aver=%f", aver);
}

void sort(struct Student *stu)
{
	int i, j, max;
	struct Student temp;
	for(i = 0; i < N-1; i++)
	{
		max = i;
		for(j = i+1; j < N; j++)
		{
			if(stu[max].average < stu[j].average)
			{
				max = j;
			}
		}
		if(max != i)
		{
			temp = stu[i];
			stu[i] = stu[max];
			stu[max] = temp;
		}
	}
}

void save(struct Student *stu, float aver, FILE *fp)
{
	char *f = "%7d,%9s%7.2f,%7.2f,%7.2f,%9.2f\n";
	for(int i = 0; i < N; i++)
	{
		fprintf(fp, f, stu[i].num, stu[i].name, stu[i].score[0],
			stu[i].score[1], stu[i].score[2], stu[i].average);
	}
	fprintf(fp, "\naver=%6.2f\n", aver);
}

void print(struct Student *stu)
{
	for(int i = 0; i < N; i++)
	{
		printf("%7d%9s%6.2f%6.2f%6.2f%6.2f\n", stu[i].num, stu[i].name,
			stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].average);
	}
}

int main()
{
	FILE *fp1, *fp2;
	struct Student stu[N] = {0};
	float aver;
	if((fp1 = fopen("things/e10_6/stud", "r")) == NULL)
	{
		printf("\ncannot open file stud\n");
		exit(0);
	}
	if((fp2 = fopen("things/e10_6/stud_sort", "w")) == NULL)
	{
		printf("\ncannot open file stud_sort\n");
		exit(0);
	}
	//获取文件内容
	getInfo(stu, &aver, fp1);
	print(stu);
	printf("\naver=%7.2f\n", aver);
	//将获取到的内容排序
	sort(stu);
	printf("\nsort:\n");
	print(stu);
	//将排序好的内容，存放到新文件中
	save(stu, aver, fp2);

	fclose(fp1);
	fclose(fp2);
	return 0;
}
