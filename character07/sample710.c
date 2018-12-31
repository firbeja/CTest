#include<stdio.h>

//10个学生成绩，求平均成绩。

float average(float grade[]);
float average(float grade[])
{
	int i;
	float sum = grade[0];
	for(i = 1; i < 10; i++)
	{
		sum = sum + grade[i];
		printf("grade[%d]=%5.1f sum=%5.1f\n", i, grade[i], sum);
	}
	return sum/10;
}

int main()
{
	float grade[10] = {98.5, 69.5, 76, 65, 82, 83, 88.5, 75, 79, 90};
	float aver;
	aver = average(grade);
	printf("aver=%5.2f\n", aver);
	return 0;
}
