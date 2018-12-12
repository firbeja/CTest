#include<stdio.h>
#define COUNT 5   //学生人数
//50名学生，成绩高于80分的，输出学号，成绩。

int main()
{
	int i = 0;
	int grade[COUNT];
	while(i < COUNT)
	{
		printf("请输入学号为%d的成绩：", i+1);
		scanf("%d",&grade[i]);
		i++;
	}

	for(int i=0; i < COUNT; i++)
	{
		if(grade[i] >= 80)
		{
			printf("学号:%d  %d\n", i+1 , grade[i]);
		}
	}
	return 0;
}

