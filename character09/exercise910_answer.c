#include<stdio.h>
#include<stdlib.h>

//已有两个链表，每个链表中的结点包括学号，成绩。要求把两个链表合并，并按学号升序排列。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

int n;

struct Student *creat(void);
struct Student *insert(struct Student *ahead, struct Student *bhead);
struct Student *insert_answer(struct Student *ahead, struct Student *bhead);
void print(struct Student *head);

struct Student *creat(void)
{
	struct Student *head, *p, *temp;
	temp = p = (struct Student *)malloc(sizeof(struct Student));
	n = 0;
	head = NULL;
	printf("\ninput score of student %d:\n", n+1);
	printf("NO.:");
	scanf("%d", &p->num);
	printf("score:");
	scanf("%f", &p->score);
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
		printf("\ninput score of student %d:\n", n+1);
		printf("NO.:");
		scanf("%d", &p->num);
		printf("score:");
		scanf("%f", &p->score);
	}
	temp->b = NULL;
	return head;
}

//把之前“原书”自己写的，跟“学习辅导”结合一下，写成下面这个
struct Student *insert(struct Student *ahead, struct Student * bhead)
{
	struct Student *p1, *p2, *t, *temp;
	p1 = ahead;
	p2 = bhead;
	while(p1 != NULL && p2 != NULL)
	{
		temp = p2;
		p2 = p2->b;
		while(p1 != NULL && temp->num > p1->num)
		{
			t = p1;
			p1 = p1->b;
		}
		if(p1 == ahead)
		{
			temp->b = p1;
			ahead = temp;
		}
		else
		{
			if(p1 == NULL)
			{
				t->b = temp;
			}
			else
			{
				temp->b = p1;
				t->b = temp;
			}
		}
		t = temp;
	}
	return ahead;
}

//2019-1-31，周四，龙四，20：00。这个“学习辅导”上的答案好像有点问题啊？
struct Student *insert_answer(struct Student *ahead, struct Student *bhead)
{
	struct Student *p1, *p2, *t, *temp;
	p1 = t = ahead;
	p2 = temp = bhead;
	do
	{
		while(p2->num > p1->num && p1->b != NULL)
		{
			t = p1;
			p1 = p1->b;
		}
		if(p2->num <= p1->num)
		{
			if(p1 == ahead)
			{
				ahead = p2;
			}
			else
			{
				t->b = p2;
			}
			p2 = p2->b;
			temp->b = p1;
			t = temp;
			temp = p2;
		}
//这个循环条件是不是有问题啊？假如，我要插入最后一个结点的前面，不就出问题了吗？
	}while(p1->b != NULL || (p1 == NULL && p2 != NULL));
	if((p2 != NULL) && (p2->num > p1->num) && (p1->b == NULL))
	{
		p1->b = p2;
	}
	return ahead;
}

void print(struct Student *head)
{
	struct Student *p;
	if(head != NULL)
	{
		p = head;
		printf("\n   NO.    score\n");
		while(p != NULL)
		{
			printf("%5d%9.2f\n", p->num, p->score);
			p = p->b;
		}
	}
	else
	{
		printf("\n   list NULL\n");
	}
}

int main()
{
	struct Student *ahead, *bhead;
	printf("\nahead:\n");
	ahead = creat();
	printf("\nbhead:\n");
	bhead = creat();
	printf("\nahead:\n");
	print(ahead);
	printf("\nbhead:\n");
	print(bhead);
//	ahead = insert(ahead, bhead);
	ahead = insert(ahead, bhead);
	printf("\nafter insert:\n");
	print(ahead);
	return 0;
}
