#include<stdio.h>

//输入一个不多于5位的正整数，要求：
//1.求出它是几位数
//2.分别输出每一位数字
//3.按逆序输出各位数字

int main()
{
	int num;
	int j = 10000;	//作为除数
	int w;	//作为每一位的数字
	int count = 0;
	printf("输入一个不多于5位的正整数:");
	scanf("%d", &num);
	for(int i = 5; i > 0; i--)
	{
		w = num/j;
		j = j/10;
		if(w == 0)
		{
			continue;
		}
		w = w%10;
		printf("第%d位:%d\n", i, w);
		count++;
	}
	printf("num=%d 是%d位数\n", num, count);

	int h = 1;	//作为除数
	for(int i = 1; i <= count; i++)
	{
		w = num/h;
		h = h*10;
		w = w%10;
		printf("第%d位:%d\n", i, w);
	}
	return 0;
}
