#include<stdio.h>

//输入两个学生的学号、姓名、成绩，输出成绩高的学号、姓名、成绩。

struct Student
{
	int num;
	char name[20];
	float score;
};

int main()
{
	struct Student s1, s2, max, *p;
	printf("连着输入学号，姓名，成绩:");
	scanf("%d%s%f", &s1.num, s1.name, &s1.score);
	printf("连着输入学号，姓名，成绩:");
	scanf("%d%s%f", &s2.num, s2.name, &s2.score);
	
	printf("num:%d name:%s score:%f\n", s1.num, s1.name, s1.score);
	max = s1.score > s2.score ?s1:s2;
	printf("num:%d name:%s score:%f\n", max.num, max.name, max.score);
	
	p = s1.score > s2.score ?&s1:&s2;
	printf("\nnum:%d name:%s score:%f\n", (*p).num, (*p).name, (*p).score);
	printf("num:%d name:%s score:%f\n", p->num, p->name, p->score);
	return 0;
}
