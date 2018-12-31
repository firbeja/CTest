#include<stdio.h>

//调用函数，求三个数最大的。

int main()
{
	void max1();
	void max2();
	void max3();
	extern int A, B, C;
	printf("输入3个整数:");
	scanf("%d%d%d", &A, &B, &C);
	printf("%d %d %d\n", A, B, C);

	max1();
	max2();
	max3();
	printf("%d %d %d\n", A, B, C);
	return 0;
}

void max1()
{
//	extern A, B, C, Temp;
	extern int A, B, C, Temp;
	printf("max1() A=%d B=%d\n", A, B);
	if(A > B)
	{
		Temp = A;
		A = B;
		B = Temp;
	}
}

void max2()
{
	extern int A, B, C, Temp;
	printf("max2() A=%d C=%d\n", A, C);
	if(A > C)
	{
		Temp = A;
		A = C;
		C = Temp;
	}
}

int A, B, C, Temp;

void max3()
{
	printf("max3() B=%d C=%d\n", B, C);
	if(B > C)
	{
		Temp = B;
		B = C;
		C = Temp;
	}
}
