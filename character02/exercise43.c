#include<stdio.h>

//三个数字a,b,c，大小顺序输出.
int main()
{
	int a, b, c, temp;
	printf("输入三个数字：");
	scanf("%d%d%d", &a, &b, &c);
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

