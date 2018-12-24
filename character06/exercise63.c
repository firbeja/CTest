#include<stdio.h>

//求一个3*3的整型矩阵对角线元素之和

int main()
{
	int a[3][3] = {{23, 34, 2},
			{23, 54, 12},
			{83, 111, 92}};
	int i, j, sum;
	sum = 0;
	for(i = 0; i < 3; i++)
	{
		printf("a[%d][%d]=%d\n", i, i, a[i][i]);
		sum = sum + a[i][i];
	}
	printf("sum=%d\n", sum);
	return 0;
}
