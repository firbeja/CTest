#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//综合前面例题，习题写的链表建立函数，输出函数，删除函数，插入函数，
//再编写一个主函数。用以上五个函数组成一个程序。
//在主函数中指定需要删除和插入的结点。

struct Student
{
	char num[10];
	char name[20];
	float score[3];
	struct Student *b;
};

int n;

struct Student *creat(void);
struct Student *insert(struct Student *head, struct Student *stu);
struct Student *del(struct Student *head, char *num);
void print(struct Student *head);

int main()
{
	int w, flag=1;
	char num[10];
	struct Student *head, *p;
	head = NULL;
	n = 0;
	while(flag)
	{
		printf("\n 1.creat\n 2.insert\n 3.del\n 4.print\n 5.end\n");
		scanf("%d", &w);
		getchar();
		switch(w)
		{
			case 1:
				head = creat();
				print(head);
				break;
			case 2:
				p = (struct Student *)malloc(sizeof(struct Student));
				printf("\ninsert score of student:\n");
				printf("NO.:");
				scanf("%s", p->num);
				printf("name:");
				scanf("%s", p->name);
				for(int i = 0; i < 3; i++)
				{
					printf("score %d:", i+1);
					scanf("%f", &p->score[i]);
				}
				head = insert(head, p);
				print(head);
				break;
//2019-1-31，周四，14：57接着上次写，上次是上周日了。
			case 3:
				printf("delete student NO.:\n");
				scanf("%s", num);
				head = del(head, num);
				print(head);
				break;
			case 4:
				print(head);
				break;
			case 5:
				flag = 0;
				break;
			default: printf("\n input 1~5\n");
		}
	}
	return 0;
}

struct Student *creat(void)
{
	n = 0;
	struct Student *head, *p, *temp;
	temp = p = (struct Student *)malloc(sizeof(struct Student));
	printf("\ninput score of student %d:\n", n+1);
	printf("NO.:");
	scanf("%s", p->num);
	printf("name:");
	scanf("%s", p->name);
	for(int i = 0; i < 3; i++)
	{
		printf("score %d:", i+1);
		scanf("%f", &p->score[i]);
	}
	head = NULL;
	while(strcmp(p->num, "0") != 0)
	{
		n = n + 1;
		if(n == 1)
		{
			head = p;
		}
		else
		{
			temp->b = p;
		}
		temp = p;
//2019-1-27，周日，20：39TOGO下一步开辟新的内存空间
//现在2019-1-31，周四，15：00，开始接着写
		p = (struct Student *)malloc(sizeof(struct Student));
		printf("input score of student %d:", n+1);
		printf("NO.:");
		scanf("%s", p->num);
		printf("name:");
		scanf("%s", p->name);
		for(int i = 0; i < 3; i++)
		{
			printf("score %d:", i+1);
			scanf("%f", &p->score[i]);
		}
	}
	temp->b = NULL;
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
		while((strcmp(pd->num, p->num) > 0) && p->b != NULL)
		{
			temp = p;
			p = p->b;
		}
		if(strcmp(pd->num, p->num) <= 0)
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

struct Student *del(struct Student *head, char *num)
{
	struct Student *p, *temp;
	if(head == NULL)
	{
		printf("\nlist NULL\n");
	}
	else
	{
		p = head;
		while(strcmp(num, p->num) != 0 && p->b != NULL)
		{
			temp = p;
			p = p->b;
		}
		if(strcmp(num, p->num) == 0)
		{
			if(p == head)
			{
				head = p->b;
			}
			else
			{
				temp->b = p->b;
			}
			n = n-1;
		}
		else
		{
			printf("\n   %s not been found.\n", num);
		}
	}
	return head;
}

void print(struct Student *head)
{
	struct Student *p;
	if(head != NULL)
	{
		printf("\n   NO.      name    score1   score2   score3\n");
		for(p = head; p != NULL; p = p->b)
		{
			printf("%5s%10s", p->num, p->name);
			for(int j = 0; j < 3; j++)
			{
				printf("%9.2f", p->score[j]);
			}
			printf("\n");
		}
		printf("   n=%d\n", n);
	}
	else
	{
		printf("\nlist NULL\n");
	}
}
