#include<stdio.h>
//写一个函数，输入一个4位数字，输出这四个数字字符，每两个数字间空一个空格。如输入1990，输出“1 9 9 0”。

void fun(int num);
void fun(int num)
{
	int i, j, d;
	j = 1000;
	for(i = 0; i < 4; i++)
	{
		d = num/j;
		d = d%10;
		j = j/10;
		printf("%d", d);
		if(i < 3)
		{
			printf(" ");
		}
	}
}

int main()
{
	int num;
	printf("输入一个整数:");
	scanf("%d", &num);
	fun(num);
	printf("\n");
	return 0;
}
