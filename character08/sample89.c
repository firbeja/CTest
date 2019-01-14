#include<stdio.h>
#define SIZE 6

//改写例8.8，用指针变量作实参。

void myScan(int *p, int n);
void myPrint(int *p, int n);
void covrt(int *p, int n);

void myScan(int *p, int n)
{
	for(int i = 0; i < SIZE; i++)
	{
		printf("输入第%d个整数:", i+1);
		scanf("%d", p+i);
	}
}

void myPrint(int *p, int n)
{
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d ", *p++);
	}
	printf("\n");
}

void covrt(int *p, int n)
{
	int *p1, *p2, *t, temp, m;
	m = (n-1)/2;
	p1 = p;
	p2 = p + n -1;
	t = p + m;
	while(p1 < t)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}

int main()
{
	int a[5];
	myScan(a, 5);
	myPrint(a, 5);
	covrt(a, 5);
	myPrint(a, 5);
	return 0;
}
