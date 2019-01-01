#include<stdio.h>
#include<math.h>

//写一个函数，判断素数。

int fun(int num);

int main()
{
	int num, w;
	w = -1;
	printf("输入一个整数:");
	scanf("%d", &num);
	w = fun(num);
	switch(w)
	{
		case 0:
			printf("%d不是素数\n", num);
			break;
		case 1:
			printf("%d是素数\n", num);
			break;
		default:
			printf("出错");
			break;
	}
	return 0;
}

int fun(int num)
{
	int i, k, m;
	m = 1;
	k = sqrt(num);
	for(i = 2; i <= k; i++)
	{
		if(num % i == 0)
		{
			m = 0;
			printf("%d ", i);
		}
	}
	printf("\n");
	return m;
}
