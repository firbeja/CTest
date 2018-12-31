#include<stdio.h>

//求第5个学生年龄。

int age(int num);
int age(int num)
{
	int c = -1;
	printf("---num=%d c=%d\n", num, c);
	if(num ==1)
	{
		c = 10;
	}
	else
	{
		c = age(num - 1) + 2;
	}
	printf("num=%d c=%d\n", num, c);
	return c;
}

int main()
{
	int c;
	c = age(5);
	printf("第5个学生的年龄是:%d\n", c);
	return 0;
}
