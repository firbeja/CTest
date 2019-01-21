#include<stdio.h>
#include<stdlib.h>

//写一函数，建立一个有3名学生数据的单向动态列表。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

void fun();
void fun2();
struct Student *creat();

void fun()
{
	int w;
	struct Student *head, *p, *temp;
	p = (struct Student *)malloc(sizeof(struct Student));
	temp = p;
	head = NULL;
	printf("（学号输入0，停止）输入学号，分数:");
	scanf("%d%f", &p->num, &p->score);
	w = 0;
	while(p->num != 0)
	{
		if(w == 0)
		{
			head = p;
		}
		else
		{
			temp->b = p;
		}
		w++;
		temp = p;
		p = (struct Student *)malloc(sizeof(struct Student));
		printf("（学号输入0，停止）输入学号，分数:");
		scanf("%d%f", &p->num, &p->score);
	}
	temp->b = NULL;
	p = head;
	if(head != NULL)
	{
		do
		{
			printf("num=%d score=%3.1f\n", p->num, p->score);
			p = p->b;
		}while(p != NULL);
	}
}

void fun2()
{
	struct Student *pt;
	pt = creat();
	if(pt != NULL)
	{
		do
		{
			printf("num=%d score=%f\n", pt->num, pt->score);
			pt = pt->b;
		}while(pt != NULL);
	}
}

struct Student *creat()
{
	int w = 0;
	struct Student *head, *p, *temp;
	p = (struct Student *)malloc(sizeof(struct Student));
	temp = p;
	head = NULL;
	printf("输入学号，成绩:");
	scanf("%d%f", &p->num, &p->score);
	while(p->num != 0)
	{
		if(w == 0)
		{
			head = p;
			w++;
		}
		else
		{
			temp->b = p;
		}
		temp = p;
		p = (struct Student *)malloc(sizeof(struct Student));
		printf("输入学号，成绩:");
		scanf("%d%f", &p->num, &p->score);
	}
	temp->b = NULL;
	return head;
}

int main()
{
	fun2();
	return 0;
}
