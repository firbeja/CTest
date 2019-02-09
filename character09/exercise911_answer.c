#include<stdio.h>
#include<stdlib.h>

//有两个链表，设结点中包括学号，姓名。从一个链表中删去与另一个链表中有相同学号的那些结点。

struct Student
{
	int num;
	char name[20];
	struct Student *b;
};

int n;

struct Student *creat(void);
struct Student *del(struct Student *ahead, struct Student *bhead);
void print(struct Student *head);

struct Student *creat(void)
{
	struct Student *head, *p, *temp;
	p = temp = (struct Student *)malloc(sizeof(struct Student));
	n = 0;
	head = NULL;
	printf("\ninput records of student:\n");
	scanf("%d%s", &p->num, p->name);
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
		scanf("%d%s", &p->num, p->name);
	}
	temp->b = NULL;
	return head;
}

struct Student *del(struct Student *ahead, struct Student *bhead)
{
	struct Student *p1, *p2, *t;
	for(p1 = ahead; p1 != NULL; )
	{
		p2 = bhead;
		while(p2->num != p1->num && p2->b != NULL)
		{
			p2 = p2->b;
		}
		if(p2->num == p1->num)
		{
			if(p1 == ahead)
			{
				ahead = p1->b;
				p1 = ahead;
			}
			else
			{
				t->b = p1->b;
				p1 = p1->b;
			}
		}
		else
		{
			t = p1;
			p1 = p1->b;
		}
	}
	return ahead;
}

void print(struct Student *head)
{
	struct Student *p;
	if(head != NULL)
	{
		printf("\n   NO.      name\n");
		for(p = head; p != NULL; p = p->b)
		{
			printf("%5d%10s\n", p->num, p->name);
		}
	}
	else
	{
		printf("   list NULL\n");
	}
	printf("\n");
}

int main()
{
	struct Student *ahead, *bhead, *head;
	printf("\ninput ahead:");
	ahead = creat();
	printf("\ninput bhead:");
	bhead = creat();
	printf("\nahead:\n");
	print(ahead);
	printf("\nbhead:\n");
	print(bhead);
	head = del(ahead, bhead);
	printf("\nafter del:\n");
	print(head);
	return 0;
}
