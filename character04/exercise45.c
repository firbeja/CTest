#include<stdio.h>
#include<math.h>

//输入小于1000的正数，输出它的平方根

int main()
{
	int num;
	printf("输入一个小于1000的正数:");
	scanf("%d", &num);
	while(1)
	{
		if(num < 1000)
		{
			printf("sqrt(num)=%5.0f\n", sqrt(num));
			break;
		}
		else
		{
			printf("输入一个小于1000的正数:");
			scanf("%d", &num);
		}
	}
	return 0;
}

