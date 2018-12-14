#include<stdio.h>

//输入成绩等级，输出百分制分数段
int main()
{
	char grade;
	printf("输入成绩等级:");
	scanf("%c", &grade);
	switch(grade)
	{
		case 'A':printf("85~100\n");break;
		case 'B':printf("70~84\n");break;
		case 'C':printf("60~69\n");break;
		case 'D':printf("<60\n");break;
		default:printf("输入数据有误\n");
	}
	return 0;
}

