#include<stdio.h>
#include<string.h>

//建立一个简单的链表，它由3个学生数据的结点组成，要求输出各结点中的数据。

struct Student
{
	int num;
	char name[20];
	struct Student *b;
};

int main()
{
	struct Student a, b, c, *head;
	a.num = 140;
	strcpy(a.name, "jim");
	b.num = 141;
	strcpy(b.name, "dill");
	c.num = 142;
	strcpy(c.name, "firbeja");
	head = &a;
	a.b = &b;
	b.b = &c;
	c.b = NULL;
	while(head != NULL)
	{
		printf("num=%d name=%s\n", head->num, head->name);
		head = head->b;
	}
	return 0;
}
