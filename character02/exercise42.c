#include<stdio.h>

//输入10个数，输出最大的数
int main()
{
	int num[10];
	int i = 0;
	int max = -1;
	printf("输入10个数字：\n");
	while(i < 10)
	{
		printf("%d:", i+1);
		scanf("%d", &num[i]);
		if(max < num[i])
		{
			max = num[i];
		}
		i++;
	}
	printf("max=%d\n", max);
	return 0;
}

