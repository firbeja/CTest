#include<stdio.h>

//a个学生，b门课，输入学号，输出全部成绩。用指针函数实现。

float *search(float (*p)[4], int num);
float *search(float (*p)[4], int num)
{
	p = p + num -1;
	return *p;
}

int main()
{
	float score[3][4] = {{76, 67, 87, 84}
				,{56, 67, 87, 82}
				,{65, 67, 76, 71}};
	int i, num;
	for(i = 0; i < 12; i++)
	{
		if(i % 4 == 0)
		{
			printf("\n");
		}
		printf("%2.1f ", *(*score+i));
	}
	printf("\n");
	float *p;
	printf("输入要查找的学号:");
	scanf("%d", &num);
	p = search(score, num);
	for(i = 0; i < 4; i++)
	{
		printf("%2.1f ", *(p+i));
	}
	printf("\n");
	return 0;
}
