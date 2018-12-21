#include<stdio.h>

//比赛名单
int main()
{
	char m, n, h, i, j, k;
	m = 'A';
	n = 'B';
	h = 'C';
	for(i = 'X'; i <= 'Z'; i++)
	{
//	printf("i=%c\tqqq\n", i);
		if(i == 'X') {continue;}

		for(j = 'X'; j <= 'Z'; j++)
		{
			if(j == i) {continue;}

			for(k = 'X'; k <= 'Z'; k++)
			{
//	printf("k=%c\tasa\n", k);
				if(k == i || k == j) {continue;}
				if(k == 'X' || k == 'Z') {continue;}
				printf("A\t%c\nB\t%c\nC\t%c\n", i, j, k);
			}
		}
	}
	return 0;
}
