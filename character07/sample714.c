#include<stdio.h>

//十个成绩放一数组，调用一个函数，得到平均分， 最高分，最低分。

void fun(float a[]);

void fun(float a[])
{
	extern float Max, Min, Aver;
	int i;
	float sum, temp;
	sum = 0;
	Max = a[0];
	Min = a[0];
	for(i = 0; i < 10; i++)
	{
		temp = a[i];
		sum = sum + temp;
		printf("sum=%5.2f a[%d]=%5.2f\n", sum, i, temp);
		if(Max < temp)
		{
			Max = temp;
		}
		if(Min > temp)
		{
			Min = temp;
		}
	}
	Aver = sum/10;
}

float Max, Min, Aver;

int main()
{
	float a[10] = {67, 87, 88, 87.5, 72, 68, 90, 91, 83, 77};
	fun(a);
	printf("Max=%5.2f Min=%5.2f Aver=%5.2f\n", Max, Min, Aver);
	return 0;
}
