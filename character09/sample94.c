#include<stdio.h>

//有n个学生的学号、姓名、成绩，要求按照成绩的高低顺序输出各学生的信息。

struct Student
{
	int num;
	char name[20];
	float score;
};

int main()
{
	struct Student a[5] = {{140, "john", 78.5}
				,{141, "dill", 85.0}
				,{142, "firbeja", 87.3}
				,{143, "kim", 91.2}
				,{144, "sour", 84}};
	struct Student temp;
	int i, j, max;
	const int n = 5;
	for(i = 0; i < n; i++)
	{
		printf("num=%d name=%s score=%f\n", a[i].num, (a+i)->name, (*(a+i)).score);
	}
	printf("\n");
	for(i = 0; i <= n-2; i++)
	{
		max = i;
		for(j = i+1; j <= n-1; j++)
		{
			if(a[max].score < a[j].score)
			{
				max = j;
			}
		}
		if(max != i)
		{
			temp = a[i];
			a[i] = a[max];
			a[max] = temp;
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("num=%d name=%s score=%f\n", a[i].num, (a+i)->name, (*(a+i)).score);
	}
	return 0;
}
