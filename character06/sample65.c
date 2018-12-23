#include<stdio.h>

//3*4的矩阵，输出最大值以及行号列号
int main()
{
	int a[4][4] = {{1, 2, 142, 23},
			{224, 23, 42, 43},
			{32, 75, 65, 352},
			{242, 3654, 56, 87}};
	int i, j, max, cow ,column;
	max = a[0][0];
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(max < a[i][j]) 
			{
				printf("%d\t", max);
				max = a[i][j];
				printf("%d\t", max);
				cow = i;
				column = j;
			}
		}
	}
	printf("max=%d\tcow=%d\tcolumn=%d\n", max, cow, column);
	return 0;
}
