#include<stdio.h>

//有3个学生的信息，放在结构体数组中，要求输出全部学生的信息。用指向结构体变量的指针来处理。

struct Student
{
	int num;
	char name[20];
}a[3] = {140, "dill", 142, "firbeja", 141, "jim"};

int main()
{
	struct Student *p;
	for(p = a; p < a+3; p++)
	{
		printf("num=%d name=%s\n", p->num, (*p).name);
	}
	printf("\n");
	for(p = (struct Student *)a->name; p < a+3; p++)
	{
		printf("name=%s\n", p);
	}
	printf("\n");
	p = a;
	while(p < a+3)
	{
		printf("name=%s\n", (p++)->name);
	}
	return 0;
}
