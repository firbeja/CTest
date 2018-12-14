#include<stdio.h>

//输入两个实数，按代数值由小到大的顺序输出这两个数
int main()
{
	float a, b, temp;
	printf("输入两个实数：");
	scanf("%f%f", &a, &b);
	if(a > b)
	{
		printf("%f\t%f\n", b, a);
		temp = a;
		a = b;
		b = temp;
	}
	printf("%f\t%f\n", a, b);
	return 0;
}

