#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

//案例一，个人所得税计算。

typedef struct tax_tb
{
	long left;
	long right;
	int tax;
	long deduct;
}TAX_L;

void save();
void read(TAX_L list[]);
double cal(TAX_L list[]);

void save()
{
	FILE *fp;
	int i;
	TAX_L list[SIZE];
	if((fp = fopen("tax_table", "wb")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("输入第%d个区间的下限，上限，税率，扣除数:", i);
		scanf("%ld %ld %d %ld", &list[i].left, &list[i].right, &list[i].tax, &list[i].deduct);
	}
	for(i = 0; i < SIZE; i++)
	{
		if(fwrite(&list[i], sizeof(TAX_L), 1, fp) != 1)
		{
			printf("\n   file write erroe\n");
		}
		printf("%ld~%ld %d %ld\n", list[i].left, list[i].right, list[i].tax, list[i].deduct);
	}
	fclose(fp);
}

void read(TAX_L list[])
{
	FILE *fp;
	int i;
	if((fp = fopen("tax_table", "rb")) == NULL)
	{
		printf("\n   cannot read this file\n");
		exit(0);
	}
	printf("\ntax table:\n");
	printf("    上限 ~   下限      税率     扣除数\n");
	for(i = 0; i < SIZE; i++)
	{
		if(fread(&list[i], sizeof(TAX_L), 1, fp) != 0)
		{
			printf("%7ld  ~%7ld%9d%9ld\n", list[i].left, list[i].right,
							list[i].tax, list[i].deduct);
		}
	}
	fclose(fp);
}

double cal(TAX_L list[])
{
	int i, w;
	double salary, start, sum, s;
	i = 0;
	w = 1;
	start = 1600;
	sum = 0;
	printf("\n输入你的工资:");
	scanf("%lf", &salary);
	s = salary - start;
	if(s < 0)
	{
		return 0;
	}
	while(i <= 7 && w == 1)
	{
		if(s > list[i].left && s <= list[i].right)
		{
			sum = s * list[i].tax/100.0 - list[i].deduct;
			w = 0;
		}
		if(s > list[8].left)
		{
			sum = s * list[SIZE].tax/100.0 -list[SIZE].deduct;
			w = 0;
		}
		i++;
	}
	return sum;
}

int main()
{
	TAX_L list[SIZE];
	int i, flag = 1;
	double sum;
	do
	{
		i = -1;
		printf("\n   1.存储税率表\n   2.计算税额\n   3.结束\n");
		scanf("%d", &i);
		getchar();
		switch(i)
		{
			case 1:
				save();
				break;
			case 2:
				read(list);
				sum = cal(list);
				printf("\n   税额:%lf\n", sum);
				break;
			case 3:
				flag = 0;
				break;
			default:
				printf("\n   输入1，2，3\n");
		}
	}while(flag);
	return 0;
}
