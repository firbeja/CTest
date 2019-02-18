#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//从键盘读入若干个字符串，对他们按字母大小的顺序排序，
//然后把排好序的字符串送到磁盘文件中保存。

struct Strings
{
	char *a;
	struct Strings *b;
};

struct Strings *creat(void);
struct Strings *sort(struct Strings *head);
void output(struct Strings *head);
void print(struct Strings *head);

struct Strings *creat(void)
{
	struct Strings *head, *p, *temp;
	FILE *fp;
	char *c = NULL;
	int n = 0;
	if((fp = fopen("things/10_3/103", "r")) == NULL)
	{
		printf("\n  cannot open file\n");
		exit(0);
	}
	head = NULL;
	temp = p = (struct Strings *)malloc(sizeof(struct Strings));
	p->a = (char *)malloc(100*sizeof(char));
	c = fgets(p->a, 100, fp);
	while(c != NULL)
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
		p = (struct Strings *)malloc(sizeof(struct Strings));
		p->a = (char *)malloc(100*sizeof(char));
		c = fgets(p->a, 100, fp);
	}
	temp->b = NULL;
	fclose(fp);
	return head;
}

struct Strings *sort(struct Strings *head)
{
	struct Strings *p1, *p2, *t1, *t2, *max, *tmax;
	p1 = t1 = head;
	while(p1->b != NULL)
	{
		t2 = p1;
		p2 = p1->b;
		max = p1;
		while(p2 != NULL)
		{
//		printf("p2->a=%s\n", p2->a);
			if((strcmp(max->a, p2->a)) > 0)
			{
				tmax = t2;
				max = p2;
			}
			t2 = p2;
			p2 = p2->b;
		}
		if(max != p1)
		{
			tmax->b = max->b;
			max->b = p1;
			if(p1 == head)
			{
				head = max;
			}
			else
			{
				t1->b = max;
			}
			t1 = max;
		}
		else
		{
			t1 = p1;
			p1 = p1->b;
		}
	}
	return head;
}

void output(struct Strings *head)
{
	FILE *fp = fopen("things/10_3/3a", "w");
	struct Strings *p = head;
	while(p != NULL)
	{
		fputs(p->a, fp);
		p = p->b;
	}
	fclose(fp);
}

void print(struct Strings *head)
{
	struct Strings *p;
	if(head == NULL)
	{
		printf("\n   list is NULL\n");
	}
	else
	{
		p = head;
		printf("\n");
		while(p != NULL)
		{
			printf("%s\n", p->a);
			p = p->b;
		}
		printf("\n");
	}
}

int main()
{
	struct Strings *head;
	head = creat();
	print(head);
	head = sort(head);
	printf("排序后:\n");
	print(head);
	output(head);
	return 0;
}
