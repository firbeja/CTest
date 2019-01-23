#include<stdio.h>
#include<stdlib.h>

//综合本章例9.9、例9.10和本章习题第7题、第8题，
//再编写一个主函数，先后调用这些函数。
//用以上5个函数组成一个程序，实现链表的建立、输出、删除和插入，
//在主函数中指定需要删除和插入的结点的数据。

struct Student
{
	int num;
	float score;
	struct Student *b;
};

struct Student *creat(void);
struct Student *insert(struct Student *head, struct Student *pd);
struct Student *del(struct Student *head, int num);
void print(struct Student *head);

struct Student *creat(void)
{
	struct Student *head, *p, *temp;
	int w = 0;
	p = (struct Student *)malloc(sizeof(struct Student));
	temp = p;
	printf("输入学号，成绩:");
	scanf("%d%f", &p->num, &p->score);
	head = p;
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

struct Student *insert(struct Student *head, struct Student *pd)
{
	struct Student *p, *temp;
	temp = p = head;
//重点，好像不用head!=NULL也行啊。
//好像还是要的啊。不然的话，head==NULL，下面的p->NULL直接错误了。
//而且，head==NULL的时候，处理方法也不同了，要把新的内存空间的地址，赋给空值的*head。
	if(head != NULL)
	{
//重点，这个判断条件p->num，如果此时p==NULL，那么会直接中断。所以要先判断是否空。
		//while(pd->num > p->num)
		while(p != NULL && pd->num > p->num)
		{
			temp = p;
			p = p->b;
		}
		if(p == head)
		{
			pd->b = p;
			head = pd;
		}
		else
		{
			if(p == NULL)
			{
				temp->b = pd;
				pd->b = NULL;
			}
			else
			{
				pd->b = p;
				temp->b = pd;
			}
		}
	}
	else
	{
		head = pd;
		pd->b = NULL;
	}
	return head;
}

struct Student *del(struct Student *head, int num)
{
	struct Student *p, *temp;
	p = head;
	while(p != NULL)
	{
		if(num == p->num)
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
	struct Student *p=head;
//重点，好像不用do...while也行啊，直接while(p != NULL)也可以啊
//这里好像跟上面那个重点有点不一样，上面那个好像一定要有head!=NULL这个条件。
/*
	if(head != NULL)
	{
		do
		{
			printf("-----oooo---num=%d score=%3.1f\n", p->num, p->score);
			p = p->b;
		}while(p != NULL);
	}
*/
	while(p != NULL)
	{
		printf("num=%d score=%f\n", p->num, p->score);
		p = p->b;
	}
}

int main()
{
	int flag, n, k;
	char c;
	//如果是这样定义的话，只能插入这一个变量，
	//虽然可以改变这个变量的值d.num，但是他的内存空间地址不会改变。
	//而且链表是连的是一个一个的内存单元。
	//struct Student *head, d;
	struct Student *head, *pd;
	head = creat();
	flag = 1;
	n = 0;
	while(flag)
	{
		printf("1.输出链表\n2.增加结点\n3.删除结点\n4.结束\n");
		printf("输入一个选项:");
		getchar();
		scanf("%d", &n);
		printf("n=%d ", n);
		switch(n)
		{
			case 1:
				printf("-----11111111111-----------");
				print(head);
				break;
			case 2:
				//struct Student d;
//重点，每次都要开辟新的空间。
				pd = (struct Student *)malloc(sizeof(struct Student));
				printf("输入要插入的学号，成绩:");
				//scanf("%d%f", &d.num, &d.score);
				scanf("%d%f", &pd->num, &pd->score);
				head = insert(head, pd);
//				print(head);
				break;
			case 3:
				printf("输入要删除的学号:");
				scanf("%d", &k);
				head = del(head, k);
				print(head);
				break;
			case 4:
				flag = 0;
				break;
			default:	
				c = getchar();
				printf("---%%d=%d %%c=%c ---", c, c);
				printf("重新输入\n");
				break;
		}	
		n = 0;
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
		print(head);
		printf("enndendenndendnendendnenen\n");
	}
	return 0;
}
