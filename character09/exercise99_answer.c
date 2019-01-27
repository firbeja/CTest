#include<stdio.h>
#include<stdlib.h>

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
	int num, w, flag=1;
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
				scanf("%s", name);
				for(int i = 0; i < 3; i++)
				{
					printf("score %d:", i+1);
					scanf("%f", p->score[i]);
				}
				head = insert(head, p);
				print(head);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
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
	p = (struct Student *)malloc(sizeof(struct Student));
	printf("\ninput score of student:\n");
	printf("NO.");
	scanf("%s", p->num);
	printf("name:");
	scanf("%s", p->name);
	for(int i = 0; i < 3; i++)
	{
		printf("score %d:", i+1);
		scanf("%f", p->score[i]);
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
//TOGO下一步开辟新的内存空间
	}
	return head;
}

struct Student *insert(struct Student *head, struct Student *stu)
{
	return head;
}

struct Student *del(struct Student *head, char *num)
{
	return head;
}

void print(struct Student *head)
{
	struct Student *p;
	if(head != NULL)
	{
		printf("\n   NO.      name    score1   score2   score3\n");
		for(p = head; p != NULL; )
		{
			printf("%5s%10s", p->num, p->name);
			for(j = 0; j < 3; j++)
			{
				printf("%9.2f", p->score[j]);
			}
			printf("\n");
		}
		printf("   n=%d\n", n);
	}
}
