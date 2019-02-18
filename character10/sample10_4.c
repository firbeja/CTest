#include<stdio.h>
#include<stdlib.h>
#define N 3
//从键盘输入10个学生的有关数据，然后把它们转存到磁盘文件上去。

struct Student
{
	char name[20];
	int num;
	int age;
	char class[10];
};

void fun1();

void fun1()
{
	FILE *fp;
	struct Student stu[N], s[N];
	int i;
	printf("\n输入姓名，学号，年龄，班级:\n");
	for(i = 0; i < N; i++)
	{
		scanf("%s%d%d%s", stu[i].name, &stu[i].num, &stu[i].age, stu[i].class);
	}
	if((fp = fopen("things/10_4/104", "wb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
	}
	fclose(fp);
	
	//把数据从二进制文件读回来
	if((fp = fopen("things/10_4/104", "rb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(i = 0; i < N; i++)
	{
		fread(&s[i], sizeof(struct Student), 1, fp);
	}
	printf("\nfread:\n");
	for(i = 0; i < N; i++)
	{
		printf("%7s%9d%9d%10s\n", s[i].name, s[i].num, s[i].age, s[i].class);
	}
}

int main()
{
	fun1();
	return 0;
}
