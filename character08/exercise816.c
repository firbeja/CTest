#include<stdio.h>
#include<stdlib.h>

//输入一个字符串，把其中连续的数字字符作为一个整数，保存到一个数组中，并输出。

void getNum(char str[], char **p);
int covrt(char **p, int a[]);
void print(int a[], int n);

int main()
{
	char str[80], *c[20];
	int a[20], m;
	printf("输入一个字符串:");
	gets(str);
	printf("str= %s\n", str);
	getNum(str, c);
/*	for(int i = 0; i < 5; i++)
	{
		printf("%s\n", *(c+i));
	}*/
	m = covrt(c, a);
	print(a, m);
	return 0;
}

void getNum(char str[], char **p)
{
	int i, isnum, j, k;
	char *temp, c;
	i = 0;
	isnum = 0;
	j = 0;
	while((c = *(str+i)) != '\0')
	{
		if(c >= '0' && c <= '9')
		{
			if(isnum == 0)
			{
				if(j != 0){
				*(*(p+j-1)+k) = '\0';} 
				*(p+j) = (char *)malloc(80*sizeof(char));
				temp = *(p+j);
				k = 0;
				isnum = 1;
				*(temp + k) = c;
				j++;
			}
			else if(isnum == 1)
			{
				*(temp + k) = c;
			}
			k++;
		}
		else
		{
			isnum = 0;
		}
		i++;
	}
}

int covrt(char **p, int a[])
{
	int i, j, k, sum, temp, g;
	char *t;
	i = 0;
	while((t = *(p+i)) != NULL)
	{
		j = 0;
		while(*(t+j) != '\0')
		{
			j++;
		}
		sum = 0;
		k = j-1;
		g = 1;
		while(k >= 0)
		{
			temp = *(t+k)-48;
			temp = temp*g;
			sum = sum + temp;
			g = g*10;
			k--;
		}
		*(a+i) = sum;
		i++;
	}
	return i;
}

void print(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
}
