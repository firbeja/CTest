#include<stdio.h>

//3*4矩阵，求最大值。

int max_value(int a[][4]);
void print_array(int a[][4]);

int max_value(int a[][4])
{
	int i, j, m;
	m = a[0][0];
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("m=%d a[%d][%d]=%d\n", m, i, j, a[i][j]);
			if(m < a[i][j])
			{
				m = a[i][j];
			}
		}
	}
	return m;
}

void print_array(int a[][4])
{
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int a[3][4] = {{23, 2, 19, 12}
			,{4, 45, 76, 21}
			,{84, 54, 111, 12}};
	int m;
	print_array(a);
	m = max_value(a);
	printf("m=%d\n", m);
	return 0;
}
