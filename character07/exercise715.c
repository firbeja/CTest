#include<stdio.h>
#define SIZE 20
#define NUM 5
//写几个函数:
//(1)输入十个职工的姓名和学生号；
//(2)按职工号排序，由小到大，姓名顺序也随之调整；
//(3)输入一个职工号，用折半查找法找出姓名，从主函数输入	职工号，然后输出姓名。

void scanInfo(char info[][SIZE]);
void sortNo(char info[][SIZE]);
int find(char info[][SIZE], char num);

void change(char info[][SIZE], int min, int i);
void scan_name(char info[][SIZE], int i);
void print_array(char info[][SIZE]);

int main()
{
	char info[NUM][SIZE] = {'a'};
	char num;
	int z;

	scanInfo(info);
	print_array(info);
	printf("\n");
	
	printf("排序:\n");
	sortNo(info);
	printf("排序后:\n");
	print_array(info);
	
	printf("输入要查找的职工号:");
	scanf("%c", &num);
	z = find(info, num);
	printf("姓名:%s\n", info[z]);
	return 0;

}

void scanInfo(char info[][SIZE])
{
	int i, j;
	for(i = 0; i < NUM; i++)
	{
		printf("输入工号:");
		scanf("%c", &info[i][0]);
		getchar();
		printf("输入姓名:");
		scan_name(info, i);
	}
}

void sortNo(char info[][SIZE])
{
	int i, j, temp, min;
	for(i = 0; i < NUM-1; i++)
	{
//		printf("i=%d\n", i);
		min = i;
		for(j = i+1; j < NUM; j++)
		{
			if(info[min][0] > info[j][0])
			{
				min = j;
			}
		}
		change(info, min, i);
	}
}

int find(char a[][SIZE], char num)
{
	int i, j, w, x1, x2, t, z;
	z = -1;
	if(a[0][0] == num)
	{
		z = 0;
	}
	else if(a[NUM-1][0] == num)
	{
		z = NUM-1;
	}
	else
	{
		x1 = 0;
		x2 = NUM-1;
		w = (x1 + x2)/2;
		i = 0;
		while(a[w][0] != num && w != x1)
		{
			if(num > a[w][0])
			{
				x1 = w;
			}
			else
			{
				x2 = w;
			}
			w = (x1 + x2)/2;
		}
		if(a[w][0] == num)
		{
			z = w;
		}
		else
		{
			z = -1;
		}
	}
	return z;
}

void change(char info[][SIZE], int min, int i)
{
	if(min != i)
	{
		int k;
		char temp;
//注意！！！！下面那个表达式"() || ()"，如果前面为“真”，后面就不执行了。
		for(k = 0; (info[min][k] != '\0') || (info[i][k] != '\0'); k++)
		{
			temp = info[min][k];
			info[min][k] = info[i][k];
			info[i][k] = temp;
//			print_array(info);
//			printf("\n");
		}
		info[min][k] = '\0';
		info[i][k] = '\0';
	}
	else
	{
		return ;
	}
}

void scan_name(char info[][SIZE], int n)
{
	int i;
	char c;
	for(i = 1; (c = getchar()) != '\n'; i++)
	{
		info[n][i] = c;
	}
	info[n][i] = '\0';
}

void print_array(char info[][SIZE])
{
	int i;
	for(i = 0; i < NUM; i++)
	{
		printf("%s\n", info[i]);
	}
}
