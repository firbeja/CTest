#include<stdio.h>

//输出魔方阵

void printXArray(int a[][5]);

void printXArray(int a[][5])
{
	int i, j;
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(a[i][j] == 0)
			{
				printf("*\t");
			}
			else
			{
				printf("%d\t", a[i][j]);
			}
		}
		printf("\n");
	}
}

int main()
{
	int n, i, j, w, row, col, r, c;
	int a[5][5] = {0};
	printf("输入魔方阵的阶数(必须为奇数):");
	scanf("%d", &n);
	w = n/2;
	a[0][w] = 1;
	row = 0;
	col = w;
	for(i = 2; i <= n*n; i++)
	{
		r = row;
		c = col;
		row = row - 1;
		col = col + 1;
		if(r == 0) row = n-1;
		if(c == (n-1)) col = 0;
		if(a[row][col] != 0 || (r == 0 && c == n-1))
		{
			row = r + 1;
			col = c;
		}
		a[row][col] = i;
		printXArray(a);
	}
	
	return 0;
}
