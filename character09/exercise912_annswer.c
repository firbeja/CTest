#include<stdio.h>
#include<stdlib.h>

//建立一个链表，每个结点包括学号、姓名、性别、年龄。
//输入一个年龄，如果链表中的结点所包含的年龄等于此年龄，则将此结点删去。

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Student *b;
};

int n;

struct Student *creat(void);
struct Student *del(struct Student *head, int age);
void print(struct Student *head);

struct Student *creat(void)
{
	struct Student *head, *p, *temp;
	n = 0;
	head = NULL;
	p = (struct Student *)malloc(sizeof(struct Student));
	printf("\ninput num, name, sex, age\n");
	scanf("%d%s %c%d", &p->num, p->name, &p->sex, &p->age);
	getchar();
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
		scanf("%d%s %c%d", &p->num, p->name, &p->sex, &p->age);
		getchar();
	}
	temp->b = NULL;
	return head;
}

struct Student *del(struct Student *head, int age)
{
	struct Student *p, *temp;
	if(head != NULL)
	{
		for(p = head; p != NULL; )
		{
			if(p->age == age)
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
		}
	}
	else
	{
		printf("\n   list NULL\n");
	}
	return head;
}

void print(struct Student *head)
{
	struct Student *p;
	if(head != NULL)
	{
		printf("\n   NO.      name      sex      age\n");
		for(p = head; p != NULL; p = p->b)
		{
			printf("%5d%10s%9c%9d\n", p->num, p->name, p->sex, p->age);
		}
	}
	else
	{
		printf("\n   list NULL\n");
	}
	printf("\n");
}

int main()
{
	int age, flag = 1;
	struct Student *head;
	head = creat();
	print(head);
	while(flag)
	{
		printf("\ndelete age:");
		scanf("%d", &age);
		head = del(head, age);
		print(head);
		if(age == 0)
		{
			flag = 0;
		}
	}
	return 0;
}
