#include<stdio.h>

//通例8.12，指针类型由“int *p”改为“int (*p)[4]”。

void print_1(int (*p)[4]);
void print_2(int (*p)[4]);

void print_1(int (*p)[4])
{
	int (*t)[4]=p, *temp;
	while(p < t+3)
	{
		temp = *p;
		while(temp < *p+4)
		{
			printf("%d ", *temp);
			temp++;
		}
		p++;
		printf("\n");
	}
}

void print_2(int (*p)[4])
{
	int (*t)[4]=p, i;
	while(p < t + 3)
	{
		for(i = 0; i < 4; i++)
		{
			printf("%d ", *(*p+i));
		}
		p++;
		printf("\n");
	}
}

int main()
{
	int a[3][4], (*p)[4], *temp, i;
	printf("连续输入12个整数:\n");
	for(p = a; p < a+3; p++)
	{
		for(temp = *p; temp < *p+4; temp++)
		{
			scanf("%d", temp);
		}
	}
	print_1(a);
	print_2(a);
	
	int j, k;
	printf("输入j,k:");
	scanf("%d%d", &j, &k);
	p = a;
	printf("a[j][k]=%d\n", *(*(p+j)+k));
	return 0;
}
