#include<stdio.h>
#include<stdlib.h>

//案例三，电话订餐信息处理。

typedef struct guest_info
{
	int num;
	char name[20];
	char time[20];
	int person;
	struct guest_info *b;
}Guest;

int total;

Guest *insert(Guest *head);
void search(Guest *head, int number);
void update(Guest *head, int number);
Guest *myDele(Guest *head, int number);
void show(Guest *head);
Guest *read();
void save(Guest *head);

int main()
{
	Guest *head = NULL;
	int number, flag=1, w;
	do
	{
		w = 0;
		printf("\n 1.读入文件\n 2.插入\n 3.查询\n 4.修改\n 5.删除\n 6.显示\n 7.保存\n 8.退出\n");
		scanf("%d", &w);
		getchar();
		switch(w)
		{
			case 1:
				head = read();
				show(head);
				break;
			case 2:
				head = insert(head);
				break;
			case 3:
				printf("\n输入要查询的编号:");
				scanf("%d", &number);
				search(head, number);
				break;
			case 4:
				printf("\n输入要修改的编号:");
				scanf("%d", &number);
				update(head, number);
				break;
			case 5:
				printf("\n输入要删除的编号:");
				scanf("%d", &number);
				head = myDele(head, number);
				break;
			case 6:
				show(head);
				break;
			case 7:
				save(head);
				break;
			case 8:
				flag = 0;
				break;
			default:
				printf("\n---输入有误---\n");
				break;
		}
	}while(flag);
	return 0;
}

Guest * insert(Guest *head)
{
	Guest *p, *temp;
	int number, w=1;
	printf("\n输入要添加的编号:");
	scanf("%d", &number);
	if(head != NULL)
	{
		p = head;
		while(p != NULL)
		{
			if(p->num != number)
			{
				temp = p;
				p = p->b;
			}
			else
			{
				printf("\n---此号重复---\n");
				return head;
			}
		}
		p = (Guest *)malloc(sizeof(Guest));
		p->num = number;
		printf("输入要添加的姓名，时间，人数:");
		scanf("%s %s %d", p->name, p->time, &p->person);
		temp->b = p;
		p->b = NULL;
	}
	else
	{
		p = (Guest *)malloc(sizeof(Guest));
		p->num = number;
		printf("输入要添加的姓名，时间，人数:");
		scanf("%s %s %d", p->name, p->time, &p->person);
		p->b = NULL;
		head = p;
	}
	return head;
}

void search(Guest *head, int number)
{
	Guest *p = head;
	while(p != NULL)
	{
		if(p->num != number)
		{
			p = p->b;
		}
		else
		{
			printf("%5d%9s%9s%9d", p->num, p->name, p->time, p->person);
			return;
		}
	}
	printf("\n---无此编号---\n");
}

void update(Guest *head, int number)
{
	Guest *p = head;
	while(p != NULL)
	{
		if(p->num != number)
		{
			p = p->b;
		}
		else
		{
			printf("输入要修改的姓名，时间，人数:");
			scanf("%s %s %d", p->name, p->time, &p->person);
			return;
		}
	}
	printf("---无此编号---\n");
}

Guest *myDele(Guest *head, int number)
{
	Guest *p = head, *temp;
	int w = 1;
	while(p != NULL && w == 1)
	{
		if(p->num != number)
		{
			temp = p;
			p = p->b;
		}
		else
		{
			if(p == head)
			{
				head = p->b;
			}
			else
			{
				temp->b = p->b;
			}
			w = 0;
		}
	}
	if(w == 1)
	{
		printf("\n---无此编号---\n");
	}
	else
	{
		printf("\n---删除成功---\n");
	}
	return head;
}

void show(Guest *head)
{
	Guest *p = head;
	printf("\n  编号     姓名     时间    人数\n");
	while(p != NULL)
	{
		printf("%5d%9s%9s%7d\n", p->num, p->name, p->time, p->person);
		p = p->b;
	}
}

Guest *read()
{
	total = 0;
	FILE *fp;
	Guest *head = NULL, *p, *temp;
	if((fp = fopen("143", "rb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	p = (Guest *)malloc(sizeof(Guest));
	while(fread(p, sizeof(Guest), 1, fp) != 0)
	{
		total++;
		if(total == 1)
		{
			head = p;
		}
		else
		{
			temp->b = p;
		}
		temp = p;
		p = (Guest *)malloc(sizeof(Guest));
	}
	temp->b = NULL;
	return head;
}

void save(Guest *head)
{
	Guest *p = head;
	FILE *fp;
	if((fp = fopen("143", "wb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	while(p != NULL)
	{
		if(fwrite(p, sizeof(Guest), 1, fp) == 1)
		{
			p = p->b;
		}
		else
		{
			printf("\n   write error\n");
			fclose(fp);
			return;
		}
	}
	fclose(fp);
}
