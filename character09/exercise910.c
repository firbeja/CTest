#include<stdio.h>
#include<stdlib.h>

//已有a，b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

struct Student *creat(void);
struct Student *fun(struct Student *headA, struct Student *headB);
void print(struct Student *head);

struct Student *creat(void)
{
	int w = 0;
	struct Student *head, *p, *temp;
	p = temp = (struct Student *)malloc(sizeof(struct Student));
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
/*
//用另外一种方法，直接把headB的内存空间，连到headA上，看看笔记纸。
struct Student *fun(struct Student *headA, struct Student *headB)
{
	struct Student *head, *p1, *p2, *temp, *t;
	head = headA;
	p2 = headB;
	do
	{
//2019-1-22，周二，家里，23：13。重点，这里得开辟一个新的内存空间，然后是这个新的内存空间被连接，
		temp = (struct Student *)malloc(sizeof(struct Student));
		p1 = head;
//而不是，直接把p2复制给变量temp（struct Student temp）。这样的话，第一个是没问题的，第二个就会出问题。
//假如第二次循环，只是temp=p2，等于在同一个内存空间，把值给换了，然后又对这个内存空间进行链表插入。
		//temp = p2;
		*temp = *p2;
//		printf("sizeof(struct Student)=%o\n", sizeof(struct Student));
//		printf("-----temp->num=%d temp->score=%f &temp=%o\n", temp->num, temp->score, temp);
//		printf("-----p2->num=%d p2->score=%f &p2=%o\n", p2->num, p2->score, p2);
//2019-1-22，周二，家里，23：09。重点，这里应该先判断p1是否为NULL，是的话，会让程序直接中断的。
//也就是说，如果p1==NULL，p1->num会直接中短运行。
		//while(temp->num > p1->num)
		while(p1 != NULL && temp->num > p1->num)
		{
			t = p1;
			p1 = p1->b;
		}
		if(p1 == head)
		{
			temp->b = p1;
			head = temp;
		}
		else
		{
			if(p1 == NULL)
			{
				t->b = temp;
				temp->b = NULL;
			}
			else
			{
				temp->b = p1;
				t->b = temp;
			}
		}
		p2 = p2->b;
	}while(p2 != NULL);
	return head;
}
*/

struct Student *fun(struct Student *headA, struct Student *headB)
{
	struct Student *head, *p1, *p2, *temp, *t;
	head = headA;
	p1 = head;
	p2 = headB;
	do
	{
		p1 = head;
		temp = p2;
		p2 = p2->b;
		while(p1 != NULL && temp->num > p1->num)
		{
			t = p1;
			p1 = p1->b;
		}
		if(p1 == head)
		{
			temp->b = p1;
			head = temp;
		}
		else
		{
			if(p1 == NULL)
			{
				t->b = temp;
				temp->b = NULL;
			}
			else
			{
				temp->b = p1;
				t->b = temp;
			}
		}
	}while(p2 != NULL);
	return head;
}

void print(struct Student *head)
{
	struct Student *p=head;
	while(p != NULL)
	{
		printf("num=%d score=%3.1f\n", p->num, p->score);
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
