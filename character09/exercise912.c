#include<stdio.h>
#include<stdlib.h>

//建立一个链表，每个结点包括：学号、姓名、性别、年龄。
//输入一个年龄，如果链表中的结点所包含的年龄等于此年龄，则将此结点删去。

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Student *b;
};

struct Student *creat(void);
struct Student *delAge(struct Student *head, int age);
void print(struct Student *head);

struct Student *creat(void)
{
	int w = 0;
	struct Student *head, *p, *temp;
	head = NULL;
	p = temp = (struct Student *)malloc(sizeof(struct Student));
	printf("输入学号、姓名、性别、年龄:");
	scanf("%d%s %c%d", &p->num, p->name, &p->sex, &p->age);
	while(p->num != 0)
	{
		if(w == 0)
		{
			head = p;
			w = 1;
		}
		else
		{
			temp->b = p;
		}
		temp = p;
		p = (struct Student *)malloc(sizeof(struct Student));
		printf("输入学号、姓名、性别、年龄:");
		scanf("%d%s %c%d", &p->num, p->name, &p->sex, &p->age);
	}
	temp->b = NULL;
	return head;
}

struct Student *delAge(struct Student *head, int age)
{
	struct Student *p, *temp;
	printf("age=%d\n", age);
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
	return head;
}

void print(struct Student *head)
{
	struct Student *p;
	for(p = head; p != NULL; p = p->b)
	{
		printf("num=%d name=%s sex=%c age=%d\n", p->num, p->name, p->sex, p->age);
	}
}

int main()
{
	int age;
	struct Student *head;
	head = creat();
	print(head);
	printf("输入要删除的年龄:");
	putchar(getchar());
	scanf("%d", &age);
	head = delAge(head, age);
	print(head);
	return 0;
}
