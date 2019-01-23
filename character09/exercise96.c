#include<stdio.h>
#include<stdlib.h>

//13个人围成一圈，从第一个人开始顺序报号1，2，3。凡报到3者退出圈子。
//找出最后留在圈子中的人原来的序号。
//要求用链表实现。

struct Person
{
	int num;
	struct Person *b;
};

void fun(struct Person *head);
void print(struct Person *head);

void fun(struct Person *head)
{
	int m = 0;
	struct Person *p, *temp;
	p = head;
	temp = p;
	while(head->b != NULL)
	{
		m = m+1;
		printf("m=%d ", m);
		if(m == 3)
		{
			m = 0;
			if(p != head)
			{
				temp->b = p->b;
				p = temp->b;
			}
			else
			{
				head = p->b;
				p = head;
			}
		}
		else
		{
			temp = p;
			p = p->b;
		}
		if(p == NULL)
		{
			p = head;
		}
		print(head);
	}
	printf("head->num=%d\n", head->num);
}

void print(struct Person *head)
{
	struct Person *p=head;
	if(head != NULL)
	{
		do
		{
			printf("%d ", p->num);
			p = p->b;
		}while(p != NULL);
	}
	printf("\n");
}

int main()
{
	struct Person *head, *temp, *p;
	p = (struct Person *)malloc(sizeof(struct Person));
	p->num = 1;
	head = p;
	for(int i = 2; i <= 13; i++)
	{
		temp = p;
		p = (struct Person *)malloc(sizeof(struct Person));
		p->num = i;
		temp->b = p;
	}
	p->b = NULL;
	p = head;
	do
	{
		printf("%d ", p->num);
		p = p->b;
	}while(p != NULL);
	printf("\n");
	fun(head);
	return 0;
}
