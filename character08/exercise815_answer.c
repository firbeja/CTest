#include<stdio.h>

//2019-1-17，周四，龙四，16:56
//《学习辅导》参考答案
//对之前自己写的，按照《学习辅导》改造一下

//有一个班4个学生，5门课。
//（1）求第一门课程的平均分；
//（2）找出两门以上不及格的学生，输出其学号，全部成绩，平均成绩；
//（3）找出平均分90以上的，或者全部成绩在85以上的。分别写三个函数实现。

//加一个课程名字
char *Course[5] = {"语文","数学","英语","计算机","政治"};
//char *Course[5] = {"Chinese","Math","English","Computer","Politica"};

void fun1(float (*p)[5]);
void fun2(float (*p)[5]);
void fun3(float (*p)[5]);
float average(float *p);
void print_stu(float *p);

int main()
{
	float a[4][5] = {{100, 57, 67, 56, 56},
			{78, 98, 99, 97, 94},
			{87, 98, 76, 45, 76},
			{85, 87, 87, 87, 86}};
	//输出学号，分数，头行
	printf("%-11s", "学号");
	for(int i = 0; i < 5; i++)
	{
		printf("%-11s", *(Course+i));
	}
	printf("\n");
	for(int i = 0; i < 4; i++)
	{
		printf("%-11d", i+1);
		for(int k = 0; k < 5; k++)
		{
			printf("%-11.2f", *(*(a+i)+k));
		}
		printf("\n");
	}
	fun1(a);
	fun2(a);
	fun3(a);
	return 0;
}

void fun1(float (*p)[5])
{
	int i;
	float sum = 0.0;
	for(i = 0; i < 4; i++)
	{
		sum = sum + *(*(p+i)+0);
	}
	printf("第一门课程的平均分:%4.2f\n", sum/4);
}

void fun2(float (*p)[5])
{
	int i, j, count;
	for(i = 0; i < 4; i++)
	{
		count = 0;
		for(j = 0; j < 5; j++)
		{
			if(*(*(p+i)+j) < 60)
			{
				count++;
			}
		}
		if(count >= 2)
		{
			printf("第%d位学生:", i+1);
			printf("平均分:%4.2f ", average(*(p+i)));
			print_stu(*(p+i));
		}
	}
}

void fun3(float (*p)[5])
{
	int i, j, w;
	float m;
	for(i = 0; i < 4; i++)
	{
		m = average(*(p+i));
		w = 1;
		for(j = 0; j < 5; j++)
		{
			if(*(*(p+i)+j) < 85)
			{
				w = 0;
			}
		}
		if(m >= 90 || w == 1)
		{
			printf("学号%d :", i+1);
			print_stu(*(p+i));
		}
	}
}

float average(float *p)
{
	int i;
	float sum = 0.0;
	for(i = 0; i < 5; i++)
	{
		sum = sum + *(p+i);
	}
	return sum/5;
}

void print_stu(float *p)
{
	for(int i = 0; i < 5; i++)
	{
		//改成%11.2f，好对齐
		printf("%11.2f ", *(p+i));
	}
	printf("\n");
}
