#include<stdio.h>
#define SIZE 10

//10个整数由大到小排序，用指针方法。

void sort(int *p, int n);
void sort_book(int *x, int n);
void myPrint(int *p, int n);

void sort(int *p, int n)
{
	int *p1, *p2, *temp, t;
	p1 = p;
	while(p1 < p+n-1)
	{
		p2 = p1 + 1;
		temp = p1;
		while(p2 <= p+n-1)
		{
			if(*temp < *p2)
			{
				temp = p2;
			}
			p2++;
		}
		if(temp != p1)
		{
			t = *p1;
			*p1 = *temp;
			*temp = t;
		}
		p1++;
	}
}

void sort_book(int *x, int n)
{
	int i, j, k, t;
	for(i = 0; i < n-1; i++)
	{
		k = i;
		for(j = i+1; j < n; j++)
		{
			if(*(x+k) < *(x+j))
			{
				k = j;
			}
		}
		if(k != i)
		{
			t = *(x+i);
			*(x+i) = *(x+k);
			*(x+k) = t;
		}
	}
}

void myPrint(int *p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
}

int main()
{
	int a[10] = {12, 23, 8, 5, 46, 87, 54, 3, 65, 43};
	int *p;
	p = a;
	myPrint(a, SIZE);
	//sort(a, SIZE);
	sort_book(a, SIZE);
	myPrint(a, SIZE);
	return 0;
}
