#include<stdio.h>
#include<stdlib.h>

//编写一个输出链表的函数print()。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

struct Student *creat(void);
void print(struct Student *head);

struct Student *creat(void)
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
			w = 1;
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

void print(struct Student *head)
{
	struct Student *pt;
	pt = head;
	if(head != NULL)
	{
		do
		{
			printf("num=%d score=%3.1f\n", pt->num, pt->score);
			pt = pt->b;
		}while(pt != NULL);
	}
}

int main()
{
	struct Student *pt;
	pt = creat();
	print(pt);
	return 0;
}
