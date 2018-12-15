#include<stdio.h>

//输入一百分制成绩，输出成绩等级

void fun1(int score);
void fun2(int score);

void fun1(int score)
{
	char grade;
	if(score >= 90 && score <= 100)
	{
		grade = 'A';
	}
	else if (score >= 80 && score <= 89)
	{
		grade = 'B';
	}
	else if (score >= 70 && score <= 79)
	{
		grade = 'C';
	}
	else if (score >= 60 && score <= 69)
	{
		grade = 'D';
	}
	else if (score < 60)
	{
		grade = 'E';
	}
	printf("score=%d\tgrade=%c\n", score, grade);
}

void fun2(int score)
{
	int w;
	char grade;
	w = score/10;
	if(w < 6)
	{
		w = 5;
	}
	switch(w)
	{
		case 10:
		case 9: grade = 'A';break;
		case 8: grade = 'B';break;
		case 7: grade = 'C';break;
		case 6: grade = 'D';break;
		case 5: grade = 'E';break;
		default: printf("输入数据有误\n");
	}
	printf("score=%d\tgrade=%c\n", score, grade);
}

int main()
{
	int score;
	char grade;
	printf("输入百分制成绩：");
	scanf("%d", &score);
	fun1(score);
	fun2(score);
	return 0;
}
