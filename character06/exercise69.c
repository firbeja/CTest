#include<stdio.h>

//数组由大到小存放，折半查找法，找出一个元素
void printArray(int a[]);
void printArray(int a[])
{
	int i;
	for(i = 0; i < 15; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[15] = {201, 200, 123, 121, 113, 108, 100, 78, 76, 75, 32, 30, 22, 19, 2};
	int num, x0, x1, x2, i, w;
	printArray(a);
	scanf("%d", &num);
	x1 = 0;
	x2 = 14;
	x0 = (x1 + x2) / 2;
	w = 0;
	printf("a[%d]=%d\n", x0, a[x0]);
	if(num == a[x1])
	{
		printf("a[%d]=%d\n", x1, a[x1]);
		return 0;
	}
	if(num == a[x2])
	{
		printf("a[%d]=%d\n", x2, a[x2]);
		return 0;
	}
	while(num != a[x0] && w == 0)
	{
		if(num > a[x0])
		{
			x2 = x0;
			x0 = (x1 + x2) / 2;
		}
		else
		{
			x1 = x0;
			x0 = (x1 + x2) / 2;
		}
		printf("a[%d]=%d\n", x0, a[x0]);
		if(x0 == x1)
		{
			w = 1;
		}
	}
	if(w == 0)
	{
		printf("w=%d\tx0=%d\ta[%d]=%d\n", w, x0, x0, a[x0]);
	}
	else
	{
		printf("w=%d\ta[%d]=%d\t无此数\n", w, x0, a[x0]);
	}
	return 0;
}
