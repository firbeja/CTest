#include<stdio.h>
#include<string.h>

//有3个候选人，每个选民只能投票选一人，
//要求编一个统计选票的程序，
//先后输入被选人的名字，最后输出各人得票结果。

struct Person
{
	char name[20];
	int count;
};

int main()
{
	int i, j;
	char choose[20];
	struct Person a[3];
	for(i = 0; i < 3; i++)
	{
		printf("输入第%d位候选人姓名，得票数:", i+1);
		scanf("%s%d", a[i].name, &(a+i)->count);
	}
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		printf("name:%s count:%d\n", (*(a+i)).name, (a+i)->count);
	}

	for(i = 0; i < 10; i++)
	{
		printf("第%d位选民，投票:", i+1);
		scanf("%s", choose);
		for(j = 0; j < 3; j++)
		{
			if(strcmp(choose, (a+j)->name) == 0)
			{
				(a+j)->count++;
			}
		}
	}
	for(i = 0; i < 3; i++)
	{
		printf("name:%s count:%d\n", (*(a+i)).name, (a+i)->count);
	}
	return 0;
}
