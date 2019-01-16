#include<stdio.h>
#include<stdlib.h>

//用指针数组处理上一题目，字符串不等长。

void sort(char **p, int n);
void print(char **p, int n);
int myStrcmp(char *p1, char *p2);

int main()
{
	char *a[10], **p=a;
	int i;
	for(i = 0; i < 10; i++)
	{
		*(p+i) = (char *)malloc(80*sizeof(char));
		printf("输入第%d个字符串:", i+1);
		gets(*(p+i));
	}
	sort(p, 10);
	print(p, 10);
	return 0;
}

void sort(char **p, int n)
{
	int i, j;
	char *temp, **min;
	for(i = 0; i <= n-2; i++)
	{
		min = p+i;
		for(j = i+1; j <= n-1; j++)
		{
			if(myStrcmp(*min, *(p+j)) > 0)
			{
				min = p+j;
			}
		}
		if(min != p+i)
		{
			temp = *(p+i);
			*(p+i) = *min;
			*min = temp;
		}
		print(p, 10);
	}
}

void print(char **p, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%s\n", *(p+i));
	}
	printf("-------\n");
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
