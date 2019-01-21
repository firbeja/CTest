#include<stdio.h>
#include<string.h>

//有若干人员的数据，其中有学生和教师。
//学生的数据中包括：姓名、号码、性别、职业、班级。
//教师的数据中包括：姓名、号码、性别、职业、职务。
//要求用同一个表格来处理。

struct Person
{
	char name[20];
	char phone[20];
	char sex;
	char work[20];
	union
	{
		int cls;
		char position[20];
	}category;
};

int main()
{
	struct Person a[2];
	int i;
	for(i = 0; i < 2; i++)
	{
		printf("输入姓名、号码、性别、职业:");
		scanf("%s%s %c%s", a[i].name, a[i].phone, &a[i].sex, a[i].work);
		printf("a[%d]=%s\n", i, a[i].work);
		if(strcmp(a[i].work, "student") == 0)
		{
			printf("输入班级:");
			scanf("%d", &a[i].category.cls);
		}
		else if(strcmp(a[i].work, "teacher") == 0)
		{
			printf("输入职务:");
			scanf("%s", a[i].category.position);
		}
	}
	for(i = 0; i < 2; i++)
	{
		printf("name=%s phone=%s sex=%c work=%s ", a[i].name, a[i].phone, a[i].sex, a[i].work);
		if(strcmp(a[i].work, "student") == 0)
		{
			printf("class=%d\n", a[i].category.cls);
		}
		else if(strcmp(a[i].work, "teacher") == 0)
		{
			printf("position=%s\n", a[i].category.position);
		}
	}
	return 0;
}
