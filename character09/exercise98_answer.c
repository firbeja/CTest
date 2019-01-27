#include<stdio.h>
#include<stdlib.h>

//写一个函数insert()，用来向一个动态链表插入结点。

struct Student
{
	long num;
	float score;
	struct Student *b;
};

int n;

struct Student *creat(void);
struct Student *insert(struct Student *head, struct Student *stu);
struct Student *insert_answer(struct Student *head, struct Student *stu);
struct Student *del(struct Student *head, long num);
void print(struct Student *head);

int main()
{
	int num, w, flag=1;
	struct Student *head, *p;
	head = creat();
	while(flag)
	{
		printf("\n  1.print\n  2.insert\n  3.insert_answer\n  4.del\n  5.end\n");
		scanf("%d", &w);
		getchar();
		switch(w)
		{
			case 1:
				print(head);
				break;
			case 2:
				printf("\ninsert num,score:\n");
				p = (struct Student *)malloc(sizeof(struct Student));
				scanf("%ld%f", &p->num, &p->score);
				head = insert(head, p);
				print(head);
				break;			
			case 3:
				printf("\ninsert_answer num,score:\n");
				p = (struct Student *)malloc(sizeof(struct Student));
				scanf("%ld%f", &p->num, &p->score);
				head = insert(head, p);
				print(head);
				break;			
			case 4:
				printf("\ndelete num:\n");
				scanf("%d", &num);
				head = del(head, (long)num);
				print(head);
				break;			
			case 5:
				flag = 0;
				break;
			default:printf("\ninput 1~5\n");break;
		}
	}
	return 0;
}

struct Student *creat(void)
{
	n = 0;
	struct Student *head, *p, *temp;
	p = (struct Student *)malloc(sizeof(struct Student));
	printf("\ninput num, score:\n");
	scanf("%ld%f", &p->num, &p->score);
	head = NULL;
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
		p = (struct Student *)malloc(sizeof(struct Student));
		scanf("%ld%f", &p->num, &p->score);
	}
	temp->b = NULL;
	return head;
}

//2019-1-27，周日，龙四，18：02，写完这个插入函数
struct Student *insert(struct Student *head, struct Student *stu)
{
	struct Student *p, *temp, *pd;
	pd = stu;
	if(head == NULL)
	{
		head = pd;
		pd = NULL;
	}
	else
	{
		for(p = head; p!=NULL && pd->num > p->num; )
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
	n = n+1;
	return head;
}

//2019-1-27，周日，龙四，19：43。吃完饭回来看完美世界，然后开始写这个。
struct Student *insert_answer(struct Student *head, struct Student *stu)
{
	struct Student *p, *temp, *pd;
	p = head;
	pd = stu;
	if(head == NULL)
	{
		head = pd;
		pd = NULL;
	}
	else
	{
		while(pd->num > p->num && p->b != NULL)
		{
			temp = p;
			p = p->b;
		}
		if(pd->num <= p->num)
		{
			if(p == head)
			{
				head = pd;
			}
			else
			{
				temp->b = pd;
			}
			pd->b = p;
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

struct Student *del(struct Student *head, long num)
{
	struct Student *p, *temp;
	if(head == NULL)
	{
		printf("list NULL");
		return head;
	}
	else
	{
		p = head;
		while(p->num != num && p->b != NULL)
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
			printf("delete: %ld\n", num);
			n = n-1;
		}
		else
		{
			printf("%ld not been fount\n", num);
		}
	}
	return head;
}

void print(struct Student *head)
{
	struct Student *p;
	if(head != NULL)
	{
		printf("\n   NO.    score\n");
		for(p = head; p != NULL; )
		{
			printf("%5ld%9.2f\n", p->num, p->score);
			p = p->b;
		}
		printf("  n=%d\n", n);
	}
	else
	{
		printf("\n   list NULL\n");
	}
}
