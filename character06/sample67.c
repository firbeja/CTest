#include<stdio.h>

//输出一个菱形
int main()
{
	char a[5][5] = {{"  *  "},
			{" * * "},
			{"*   *"},
			{" * * "},
			{"  *  "}};
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}