#include<stdio.h>
#include<stdlib.h>

//在第九章例9.9和例9.10的基础上，写一个函数del()，用来删除动态链表中指定的结点。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

struct Student *creat(void);
struct Student *del(struct Student *head, int num);
void print(struct Student *head);

struct Student *creat(void)
{
	int w = 0;
	struct Student *head, *p, *temp;
	p = (struct Student *)malloc(sizeof(struct Student));
	temp = p;
	printf("输入学号，成绩:");
	scanf("%d%f", &p->num, &p->score);
	head = NULL;
	while(p->num != 0)
	{
		if(w == 0)
		{
			w = 1;
			head = p;
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

struct Student *del(struct Student *head, int num)
{
	struct Student *p, *temp;
	p = head;
	temp = p;
	if(head != NULL)
	{
		do
		{
			if(p->num == num)
			{
				if(p == head)
				{
					head = p->b;
					p = head;
				}
				else
				{
					temp->b = p->b;
					p = temp->b;
				}
			}
			else
			{
				temp = p;
				p = p->b;
			}
		}while(p != NULL);
	}
	return head;
}

void print(struct Student *head)
{
	struct Student *p=head;
	if(head != NULL)
	{
		do
		{
			printf("num=%d score=%f\n", p->num, p->score);
			p = p->b;
		}while(p != NULL);
	}
}

int main()
{
	struct Student *head;
	head = creat();
	print(head);
	head = del(head, 3);
	print(head);
	return 0;
}
