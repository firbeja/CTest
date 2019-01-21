#include<stdio.h>

//口袋中有红、黄、蓝、白、黑5种颜色的求若干个。
//每次从口袋中先后取出3个球，
//问得到3种不同颜色的球的可能取法，输出每种排列的情况。

enum Ball{red, yellow, blue, white, black};

void printColor(enum Ball n);

void printColor(enum Ball n)
{
	if(n == red)
	{
		printf("%s ", "red");
	}
	else if(n == yellow)
	{
		printf("%s ", "yellow");
	}
	else if(n == blue)
	{
		printf("%s ", "blue");
	}
	else if(n == white)
	{
		printf("%s ", "white");
	}
	else if(n == black)
	{
		printf("%s ", "black");
	}
}

int main()
{
	int count = 0;
	enum Ball a, b, c, temp;
	for(a = red; a <= black; a++)
	{
		for(b = red; b <= black; b++)
		{
			if(a == b)
			{
				continue;
			}
			for(c = red; c <= black; c++)
			{
				if(a == c || b == c)
				{
					continue;
				}
				//printf("a=%d b=%d c=%d\n", a, b, c);
/*
				printColor(a);
				printColor(b);
				printColor(c);
				printf("\n");
*/
				count = count + 1;
				printf("第%d次:", count);
				for(int i = 0; i < 3; i++)
				{
					switch(i)
					{
						case 0: temp = a;break;
						case 1: temp = b;break;
						case 2: temp = c;break;
					}
					switch(temp)
					{
						case red: printf("%-10s", "red");break;
						case yellow: printf("%-10s", "yellow");break;
						case blue: printf("%-10s", "blue");break;
						case white: printf("%-10s", "white");break;
						case black: printf("%-10s", "black");break;
					}
				}
				printf("\n");
			}
		}
	}	
	return 0;
}
