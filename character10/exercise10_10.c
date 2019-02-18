#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//从第九题的“职工工资文件”中删去一个职工的数据，再存回原文件。

struct Mon
{
	char name[20];
	float wage;
};

void getInfo(struct Mon *a, FILE *fp);
void del(struct Mon *a);
void save(struct Mon *a, FILE *fp);
void print(struct Mon *a);

void getInfo(struct Mon *a, FILE *fp)
{
	char *f = "%s %f";
	for(int i = 0; i < 4; i++)
	{
		fscanf(fp, f, a[i].name, &a[i].wage);
	}
}

void del(struct Mon *a)
{
//	a[1].name = 0;
	strcpy(a[1].name, "0");
	a[1].wage = -1.0;
}

void save(struct Mon *a, FILE *fp)
{
	for(int i = 0; i < 4; i++)
	{
		if(strcmp(a[i].name, "0") != 0)
		{
			fprintf(fp, "%9s%9.2f\n", a[i].name, a[i].wage);
		}
	}
}

void print(struct Mon *a)
{
	for(int i = 0; i < 4; i++)
	{
		printf("%9s%9.2f\n", a[i].name, a[i].wage);
	}
	printf("\n");
}

int main()
{
	FILE *fp;
	struct Mon a[4] = {0};
	int i;
	if((fp = fopen("things/e10_10/money", "r")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	print(a);
	getInfo(a, fp);
	print(a);

	del(a);
	print(a);

//重新打开文件，以“只写”的模式
	fclose(fp);
	if((fp = fopen("things/e10_10/money", "w")) == NULL)
	{
		printf("\n   cannot open this file with w mode\n");
		exit(0);
	}
	save(a, fp);
	print(a);

	fclose(fp);
	return 0;
}
