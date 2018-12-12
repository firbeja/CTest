#include<stdio.h>

// 判定闰年2000~2500

int main()
{
	int year = 2000;
	int w;		//用来标记是否为闰年
	int amount = 1;		//用来记录现在循环到第几年了，4年换行
	while(year <= 2500)
	{
		w = -1;		//起始标记，-1，0，1
		if(year % 4 == 0)
		{
			if(year % 100 != 0)
			{
				w = 1;
			}
			else
			{
				if(year % 400 == 0)
				{
					w=1;
				}
				else
				{
					w=0;
				}
			}
		}
		else
		{
			w = 0;
		}

		if(w == -1)
		{
			printf("程序出错,year= %d\t", year);
		}
		else if(w == 0)
		{
			printf("%d 不是闰年\t", year);
		}
		else if(w == 1)
		{
			printf("%d 是闰年\t", year);
		}
		year++;

		if(amount % 4 == 0)		//每4年，换行
		{
			putchar('\n');
		}
		amount++;
	}
	return 0;
}

