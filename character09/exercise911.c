#include<stdio.h>
#include<stdlib.h>

//有两个链表a和b，设结点中包含学号、姓名。从a链表中删去与b链表中有相同学号的那些结点。

struct Student
{
	int num;
	char name[20];
	struct Student *b;
};

struct Student *creat(void);
struct Student *fun(struct Student *headA, struct Student *headB);
void print(struct Student *head);

struct Student *creat(void)
{
	int w = 0;
	struct Student *head, *p, *temp;
	p = (struct Student *)malloc(sizeof(struct Student));
	printf("输入学号，姓名:");
	scanf("%d%s", &p->num, p->name);
//重点，要把head置为NULL，而不是置为变量p
	//head = p;
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
		printf("输入学号，姓名:");
		scanf("%d%s", &p->num, p->name);
	}
//重点，记得要把最后一个指向NULL，把它封口
	temp->b = NULL;
	return head;
}

//把do...while改成用while()写
/*
struct Student *fun(struct Student *headA, struct Student *headB)
{
	struct Student *pA, *pB, *head, *temp;
	head = headA;
	pA = head;
	pB = headB;
	do
	{
		pA = head;
		temp = pA;
		do
		{
			if(pB->num == pA->num)
			{
				if(pA == head)
				{
					head = pA->b;
					pA = head;
				}
				else
				{
					temp->b = pA->b;
					pA = temp->b;
				}
			}
			else
			{
				temp = pA;
				pA = pA->b;
			}
		}while(pA != NULL);
		pB = pB->b;
	}while(pB != NULL);
	return head;
}
*/

struct Student *fun(struct Student *headA, struct Student *headB)
{
	struct Student *pA, *pB, *head, *temp;
	head = headA;
	for(pB = headB; pB != NULL; pB = pB->b)
	{
		for(pA = head; pA != NULL; )
		{
			if(pB->num == pA->num)
			{
				if(pA == head)
				{
					head = pA->b;
					pA = head;
				}
				else
				{
					temp->b = pA->b;
					pA = temp->b;
				}
			}
			else
			{
				temp = pA;
				pA = pA->b;
			}
		}
	}
	return head;
}

void print(struct Student *head)
{
	struct Student *p=head;
	while(p != NULL)
	{
		printf("num=%d name=%s\n", p->num, p->name);
		p = p->b;
	}
}
int main()
{
	struct Student *headA, *headB, *head;
	headA = creat();
	headB = creat();
	printf("headA:\n");
	print(headA);
	printf("headB:\n");
	print(headB);
	printf("head:\n");
	head = fun(headA, headB);
	print(head);

	printf("\nheadA:\n");
	print(headA);
	printf("headB:\n");
	print(headB);
	printf("head:\n");
	print(head);
	return 0;
}
