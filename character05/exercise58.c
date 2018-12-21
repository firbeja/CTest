#include<stdio.h>

//输出所有水仙花数
int main()
{
	int i, s, a, b, c;
	for(i = 100; i <= 999; i++)
	{
		a = i / 100;	//"237/100",得到百位数字
		b = i / 10 % 10;	//"237","237/10"求出百位和十位数字"23",再求余得到十位"3"
		c = i % 10;	//"237%10",得到个位数字
		s = a*a*a + b*b*b + c*c*c;
		printf("a=%d\tb=%d\tc=%d\ts=%d\ti=%d\t", a, b, c, s, i);
		if(i == s)
		{
			printf("***");
		}
		putchar('\n');
	}
	putchar("\n");
	return 0;
}
