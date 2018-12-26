#include<stdio.h>

//比较两个字符串，不要用strcopy函数(这里书上弄错了？应该是strcmp函数?)

int main()
{
	char a[80] = {"Workers in all countries can be trained."};
	char b[80] = {"Workers in cll countries aan be trained."};
	char c, d;	
	int i, j;
	i = 0;
	j = 0;
	while((c = a[i]) != '\0' && (d = b[i]) != '\0')
	{
		if(c != d)
		{
			j = c - d;
			break;
		}
		i++;
	}
	printf("a[]= %s\nb[]= %s\n", a, b);
	for(int k = 0; k < i+5; k++)
	{
		printf(" ");
	}
	printf("j=%d\n", j);
	return 0;
}
