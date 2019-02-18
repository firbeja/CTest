#include<stdio.h>
#include<stdlib.h>
#define N 3

//书上的示例

struct Student
{
	char name[20];
	int num;
	int age;
	//char class[20];
	char class[10];
};

void getInfo(struct Student *stu);
void save(struct Student *stu);
void load(struct Student *stu);
void print(struct Student *stu);

void getInfo(struct Student *stu)
{
	int i;
	struct Student *p = stu;
	printf("\n输入姓名，学号，年龄，班级:\n");
	for(i = 0; i < N; i++, p++)
	{
		scanf("%s%d%d%s", p->name, &p->num, &p->age, p->class);
	}
}

void save(struct Student *stu)
{
	int i;
	FILE *fp;
	struct Student *p = stu;
	if((fp = fopen("things/10_4/book", "wb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(i = 0; i < N; i++, p++)
	{
		if(fwrite(p, sizeof(struct Student), 1, fp) != 1)
		{
			printf("\n   file write error\n");
		}
	}
	fclose(fp);
}

void load(struct Student *stu)
{
	FILE *fp;
	struct Student *p = stu;
	if((fp = fopen("things/10_4/104", "rb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(int i = 0; i < N; i++, p++)
	{
		if(fread(p, sizeof(struct Student), 1, fp) != 1)
		{
			if(feof(fp))
			{
				fclose(fp);
				return;
			}
			else
			{
				printf("\n   file read error\n");
			}
		}
	}
	fclose(fp);
}

void print(struct Student *stu)
{
	struct Student *p = stu;
	printf("\nprint:\n");
	for(int i = 0; i < N; i++, p++)
	{
		printf("%10s%9d%9d%7s\n", p->name, p->num, p->age, p->class);
	}
}

int main()
{
	struct Student stu[N] = {0};
//	getInfo(stu);
//	save(stu);
	load(stu);
	print(stu);
	return 0;
}
