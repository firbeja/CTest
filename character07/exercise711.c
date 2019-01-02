#include<stdio.h>
//写一个函数，起泡法，对10个字符排序，由小到大。

void scan_string(char str[]);
void print_string(char str[]);
void sort(char str[]);

int main()
{
	char str[11];
	scan_string(str);
	print_string(str);
	sort(str);
	print_string(str);
	return 0;
}

void scan_string(char str[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("输入第%d个字符:", i+1);
		scanf("%c", &str[i]);
		getchar();
	}
	str[10] = '\0';
}

void print_string(char str[])
{
	printf("%s\n", str);
}

void sort(char str[])
{
	int i, j, temp;
//	for(i = 0; i < 10; i++)//不用10次，因为第10次内循环“9-i”就变成“9-9”了。
	for(i = 0; i < 9; i++)
	{
		printf("i=%d ", i);
		for(j = 0; j < 9-i; j++)
		{
			printf("j=%d j+1=%d\t", j, j+1);
			if(str[j] > str[j+1])
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
		printf("\n");
	}
}
