#include<stdio.h>

// 1*2*3*4*5

int main()
{
	int i=1;
	int t=1;
	while(i<=5)
	{
		t=t*i;
		printf("t=%5d\n", t);
		i++;
	}
	return 0;
}

