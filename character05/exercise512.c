#include<stdio.h>

//猴子吃桃问题
int main()
{
	int i, s;
	s = 1;
	for(i = 9; i >= 1; i--)
	{
		printf("i=%d\ts=%d\t", i, s);
		s = (s + 1) * 2;
		printf("s=%d\n", s);
	}
	return 0;
}
