#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)

//在教材第九章例9.9和例9.10的基础上，写一个函数del()，用来删除动态链表中指定的结点。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

int n;

struct Student *creat(void);
struct Student *del(struct Student *head, int num);
struct Student *del_answer(struct Student *head, int num);
struct Student *insert(struct Student *head, struct Student *stu);
void print(struct Student *head);

struct Student *creat(void)
{
	struct Student *head, *p, *temp;
	temp = p = (struct Student *)malloc(LEN);
	printf("\ninput score of student:\n");
	scanf("%d%f", &p->num, &p->score);
	head = NULL;
	n = 0;
	while(p->num != 0)
	{
		n = n+1;
		if(n == 1)
		{
			head = p;
		}
		else
		{
			temp->b = p;
		}
		temp = p;
		p = (struct Student *)malloc(LEN);
		scanf("%d%f", &p->num, &p->score);
	}
	temp->b = NULL;
	return head;
}

struct Student *del(struct Student *head, int num)
{
	struct Student *p, *temp;
	if(head == NULL)
	{
		printf("list NULL\n");
		return head;
	}
	else
	{
		for(p = head; p != NULL; )
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
				n = n-1;
			}
			else
			{
				temp = p;
				p = p->b;
			}
		}
	}
	return head;
}

struct Student *del_answer(struct Student *head, int num)
{
	struct Student *p, *temp;
	if(head == NULL)
	{
		printf("list NULL\n");
		return head;
	}
	else
	{
		p = head;
		while(num != p->num && p->b != NULL)
		{
			temp = p;
			p = p->b;
		}
		if(p->num == num)
		{
			if(p == head)
			{
				head = p->b;
			}
			else
			{
				temp->b = p->b;
			}
			printf("delete : %d\n", num);
			n = n-1;
		}
		else
		{
			printf("%d not been fount.\n", num);
		}
	}
	return head;
}

struct Student *insert(struct Student *head, struct Student *stu)
{
	struct Student *p, *temp, *pd;
	pd = stu;
	if(head == NULL)
	{
		head = pd;
		pd->b = NULL;
	}
	else
	{
		p = head;
		while(pd->num > p->num && p->b != NULL)
		{
			temp = p;
			p = p->b;
		}
		if(pd->num <= p->num)
		{
			if(p == head)
			{
				pd->b = p;
				head = pd;
			}
			else
			{
				pd->b = p;
				temp->b = pd;
			}
		}
		else
		{
			p->b = pd;
			pd->b = NULL;
		}
	}
	n = n+1;
	return head;
}

void print(struct Student *head)
{
	struct Student *p=head;
	if(head != NULL)
	{	
		printf("\n   NO.    score\n");
		while(p != NULL)
		{
			printf("%5d%9.2f\n", p->num, p->score);
			p = p->b;
		}
		printf("             n=%d\n", n);
		printf("\n");
	}
	else
	{
		printf("list NULL\n");
	}
}

int main()
{	
//2019-1-27，周日，龙四，17：51。突然想到这里的n跟全局变量的n冲突了。
	int num, n, flag=1;
	struct Student *head, *p;
	head = creat();
	print(head);

	while(flag)
	{
		printf("1.del\n2.del_answer\n3.insert\n4.end\n");
		scanf("%d", &n);
		getchar();
		switch(n)
		{
			case 1:	
				printf("\n输入要删除的学号:");
				scanf("%d", &num);
				head = del(head, num);
				print(head); 
				break;
			case 2:	
				printf("\ndel_answer()，输入要删除的学号:");
				scanf("%d", &num);
				head = del_answer(head, num);
				print(head);
				break;
			case 3:
				printf("\n输入要插入的学号，成绩:");
				p = (struct Student *)malloc(LEN);
				scanf("%d%f", &p->num, &p->score);
				head = insert(head, p);
				print(head);
				break;
			case 4:
				flag = 0;
				break;
			default:printf("重新输入\n");break;
		}
	}
	return 0;
}
