#include<stdio.h>
#include<stdlib.h>

//写一函数insert()，用来向一个动态链表插入结点。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

struct Student *creat(void);
//这里应该要传个地址进来，而不是值传递个形参d进来
//struct Student *insert(struct Student *head, struct Student d);
struct Student *insert(struct Student *head, struct Student *pd);
struct Student *del(struct Student *head, int num);
void print(struct Student *head);

struct Student *creat(void)
{
	int w = 0;
	struct Student *head, *p, *temp;
	p = (struct Student *)malloc(sizeof(struct Student));
	head = NULL;
	printf("输入学号，成绩:");
	scanf("%d%f", &p->num, &p->score);
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

struct Student *insert(struct Student *head, struct Student *pd)
{
	struct Student *p, *temp;
	p = head;
	if(head != NULL)
	{
		//这里要加个条件p != NULL，不然下面这个p->num里的p有可能是NULL。while
		//while(pd->num > p->num)
		while(p != NULL && pd->num > p->num)
		{
			temp = p;
			p = p->b;
		}
		if(p == head)
		{
			pd->b = p;
			head = pd;
		}
		else
		{
			if(p == NULL)
			{
				temp->b = pd;
				pd->b = NULL;
			}
			else
			{
				pd->b = p;
				temp->b = pd;
			}
		}
	}
	else
	{
		head = pd;
		pd->b = NULL;
	}
	return head;
}

//insert()的形参d，在函数结束时就会销毁的。所以把这个形参d，插入到链表中，是错误的。
//应该从main（）传一个地址进来，把这个地址插入，这样应该才对。
/*
struct Student *insert(struct Student *head, struct Student d)
{
	struct Student *p, *temp, d1;
	p = head;
	if(head != NULL)
	{
		while(d1.num > p->num)
		{
			printf("d1.num=%d p->num=%d ", d1.num, p->num);
			temp = p;
			p = p->b;
		}
		if(p == head)
		{
			d1.b = p;
			head = &d1;
		}
		else
		{
			if(p == NULL)
			{
				temp->b = &d1;
				d1.b = NULL;
			}
			else
			{
				d1.b = p;
				temp->b = &d1;
			}
		}
	}
	else
	{
		head = &d1;
		d1.b = NULL;
	}
	return head;
}
*/

struct Student *del(struct Student *head, int num)
{
	struct Student *p, *temp;
	p = head;
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
	printf("\n");
}

int main()
{
	struct Student *head, d;
	head = creat();
	print(head);
	head = del(head, 143);
	print(head);
	printf("输入要插入的学号，成绩:");
	scanf("%d%f", &d.num, &d.score);
	//这里应该要传个地址过去，直接传实参，是属于值传递，并没有把实参d插入。
	//插入的是，值传递之后，复制的形参d。
	//head = insert(head, d);
	head = insert(head, &d);
	print(head);
	return 0;
}
