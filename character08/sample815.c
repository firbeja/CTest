#include<stdio.h>

//在上题基础上，查找有一门以上课程不及格的学生，输出他们的全部课程的成绩。

void search(float (*p)[4]);
void print_array(float (*p)[4]);

void search(float (*p)[4])
{
	int i, j, w;
	for(i = 0; i < 3; i++)
	{
		w = 0;
		for(j = 0; j < 4 && w == 0; j++)
		{
			if(*(*(p+i)+j) < 60)
			{
				w = 1;
			}
		}
		if(w == 1)
		{
			print_array(p+i);
		}
	}
}

void print_array(float (*p)[4])
{
	for(int i = 0; i < 4; i++)
	{
		printf("%2.1f ", *(*p+i));
	}
	printf("\n");
}

int main()
{
	float g[3][4] = {{78, 67, 98, 78}
			,{88, 89, 78, 87}
			,{67, 47, 99, 82}};
	search(g);
	return 0;
}
