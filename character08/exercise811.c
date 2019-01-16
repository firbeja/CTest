#include<stdio.h>

//输入10个等长的字符串，用另一函数排序，在主函数输出。

void sort(char (*p)[80], int n);
void print(char (*p)[80], int n);
int myStrcmp(char *p1, char *p2);
void myStrcpy(char *p1, char *p2);

int main()
{
	char a[10][80];
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("输入第%d个字符串:", i+1);
		gets(*(a+i));
	}
	sort(a, 10);
	print(a, 10);
	return 0;
}

void sort(char (*p)[80], int n)
{
	int i, j;
	char *min, temp[80];
	for(i = 0; i <= n-2; i++)
	{
		min = *(p+i);
		for(j = i+1; j <= n-1; j++)
		{
			if(myStrcmp(min, *(p+j)) > 0)
			{
				min = *(p+j);
			}
		}
		if(min != *(p+i))
		{
			myStrcpy(temp, *(p+i));
			myStrcpy(*(p+i), min);
			myStrcpy(min, temp);
		}
	}
}

void print(char (*p)[80], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%s\n", *(p+i));
	}
}

int myStrcmp(char *p1, char *p2)
{
	while(*p1 && *p2)
	{
		if(*p1 != *p2)
		{
			return *p1-*p2;
		}
		p1++;
		p2++;
	}
	return *p1-*p2;
}

void myStrcpy(char *to, char *form)
{
	while((*to++ = *form++));
}
