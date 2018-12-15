#include<stdio.h>

//输出100~200之间不能被3整除的数
int main()
{
	int i;
	for(i = 100; i <= 200; i++)
	{
		if(i % 3 == 0)
		{
			continue;
		}
		printf("%d不能被3整除\n", i);
	}
	return 0;
}
