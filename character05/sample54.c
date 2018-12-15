#include<stdio.h>
#define SUM 100000

//在1000名学生中募捐，当总数达到十万元时就结束
//1.统计捐款人数
//2.平均每人捐款的数目

int main()
{
	float amount, total, aver;
	total = 0;
	int i;
	for(i = 0; i < 1000; i++)
	{
		printf("输入第%d名学生捐款:", i+1);
		scanf("%f", &amount);
		total = total + amount;
		if(total >= SUM)
		{
			break;
		}
	}
	aver = total/(i+1);
	printf("捐款人数:%d\ttotal=%f\taver=%f\n", i+1, total, aver);
	return 0;
}
