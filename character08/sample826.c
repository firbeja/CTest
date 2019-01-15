#include<stdio.h>

//在例8.25的学生里，找出不及格的学生和学号。

float *search(float (*p)[4]);
float *search(float (*p)[4])
{
	int i, flag;
	for(i = 0, flag = 0; i < 4 && flag ==0; i++)
	{
		if(*(*p+i) < 60)
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		return *p;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	float score[3][4] = {{76, 67, 87, 84}
				,{76, 67, 87, 82}
				,{45, 67, 76, 71}};
	int i, j, num;
	float *p = NULL;
	for(i = 0; i < 3; i++)
	{
		p = search(score+i);
		if(p != NULL)
		{
			printf("第%d位学生:", i+1);
			for(j = 0; j < 4; j++)
			{
				printf("%2.1f ", *(p+j));
			}
			printf("\n");
		}
	}
	return 0;
}
