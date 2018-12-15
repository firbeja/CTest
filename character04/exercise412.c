#include<stdio.h>

//有四个圆塔...，输入任一点坐标，求该点的建筑高度(塔外的高度为0)

int isInRange(float x, int lower, int upper);

int isInRange(float x, int lower, int upper)
{
	return (lower <= x && x <= upper);
}

int main()
{
	float x, y, h;
	printf("输入一个坐标x,y:");
	scanf("%f%f", &x, &y);
	h = -1;
	if(isInRange(x, 1, 3) || isInRange(x, -3, -1))
	{
		if(isInRange(y, 1, 3) || isInRange(y, -3, -1))
		{
			h = 10;
		}
		else
		{
			h = 0;
		}
	}
	else
	{
		h = 0;
	}
	printf("(%f, %f)\th=%f\n", x, y, h);
	return 0;
}
