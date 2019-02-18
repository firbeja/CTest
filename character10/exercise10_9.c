#include<stdio.h>
#include<stdlib.h>
#define N 4

//有一磁盘文件“employee”，内存放职工的数据。
//每个职工的数据包括职工姓名、职工号、性别、年龄、住址、工资、健康状况、文化程度。
//今要求将职工名、工资的信息单独抽出来另建一个简明的职工工资文件。

struct Emp
{
	char name[20];
	char num[20];
	char sex;
	int age;
	char addr[80];
	float wage;
	char healthy[20];
	char eduation[20];
};

int main()
{
	FILE *fp1, *fp2;
	struct Emp stu[4];
	int i;
	char *f = "%s%s %c%d%s %f%s%s";
	if((fp1 = fopen("things/e10_9/employee", "r")) == NULL)
	{
		printf("\n   cannot open file employee\n");
		exit(0);
	}
	if((fp2 = fopen("things/e10_9/money", "w")) == NULL)
	{
		printf("\n   cannot open file money\n");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		fscanf(fp1, f, stu[i].name, stu[i].num, &stu[i].sex, &stu[i].age,
			stu[i].addr, &stu[i].wage, stu[i].healthy, stu[i].eduation);
	}
	for(i = 0; i < N; i++)
	{
		fprintf(fp2, "%9s%9.2f\n", stu[i].name, stu[i].wage);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
