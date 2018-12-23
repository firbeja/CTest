#include<stdio.h>

//将一个二维数组行和列互换，存到另一个二维数组中
int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int b[3][2];
	int i, j;
	printf("a:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			b[j][i] = a[i][j];
		}
		putchar('\n');
	}
	printf("b:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
