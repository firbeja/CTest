#include<stdio.h>
#include<stdlib.h>
#define N 3

//在磁盘文件上存有10个学生的数据。
//要求将第1，3，5，7，9个学生数据输入计算机，并在屏幕上显示出来。

struct Student
{
	char name[20];
	int num;
	int age;
	char class[10];
};

int main()
{
	struct Student stu[N] = {0};
	FILE *fp;
	int i, j = 0;
	if((fp = fopen("things/10_6/106", "rb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(i = 0; i < N; i = i+2)
	{
		//fseek(fp, 10*sizeof(struct Student), SEEK_SET);
		fseek(fp, i*sizeof(struct Student), SEEK_SET);
		if(fread(&stu[j++], sizeof(struct Student), 1, fp) != 1)
		{
			if(feof(fp))
			{
				printf("\n   --feof(fp)=%d\n", feof(fp));
				fclose(fp);
				break;
			}
			else
			{
				printf("\n   file read error\n");
			}
		}
	}
	for(i = 0; i < 3; i++)
	{
		printf("%9s%7d%7d%9s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].class);
	}
	fclose(fp);
	return 0;
}
