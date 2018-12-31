#include<stdio.h>

//有两个班，35人和30人，调用average()，求平均成绩。

float average(float a[], int num);
float average(float a[], int num)
{
	int i;
	float sum = a[0];
	for(i = 1; i < num; i++)
	{
		sum = sum + a[i];
		printf("a[%d]=%5.2f sum=%5.2f\n", i, a[i], sum);
	}
	printf("\n");
	return sum/num;
}

int main()
{
	float class1[5] = {78, 76.5, 86, 88, 91.5};
	float class2[3] = {84, 86.5, 88};
	float aver1, aver2;
	aver1 = average(class1, 5);
	aver2 = average(class2, 3);
	printf("aver1=%5.2f\taver2=%5.2f\n", aver1, aver2);
	return 0;
}
