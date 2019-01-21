#include<stdio.h>
#include<string.h>

//通过指向结构体变量的指针变量，输出结构体变量中成员的信息。

struct Student
{
	int num;
	char name[20];
	char sex;
	float score;
};

int main()
{
	struct Student s, *p;
	p = &s;
	s.num = 140;
//	s.name = "firbeja";	//不能这样写
	strcpy(s.name, "firbeja");
	s.sex = 'M';
	s.score = 87.5;
	printf("num=%d name=%s sex=%c score=%f\n", p->num, (*p).name, s.sex, p->score);
	return 0;
}
