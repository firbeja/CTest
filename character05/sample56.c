#include<stdio.h>

//输出4*5的矩阵
//break
//continue

int main()
{
	int i, j, n;
	n = 5;
	for(i = 1; i <= 4; i++)
	{
		for(j = 1; j <= 5; j++, n++)
		{
			if(n % 5 == 0)
			{
				putchar('\n');
			}
			//if(i == 3 && j == 1) break;
			if(i == 3 && j == 1) continue;
			printf("%d\t", i*j);
		}
	}
	putchar('\n');
	return 0;
}
