#include<stdio.h>

//将密码译回原文，并输出密码和原文。第i个字母变成第(26-i+1)个字母
//c=c+(65-1) 最后要加上ACSII的位置

void printArray(char a[]);
void printArray(char a[])
{
	printf("%s\n", a);
}

int main()
{
	char a[80], b[80], d[80];
	char c;
	int i, j;
	gets(a);
	printf("a[]= %s\n", a);
	for(i = 0; (c = a[i]) != '\0'; i++)
	{
		printf("%c ", c);
		if(c >= 'A' && c <= 'Z') 
		{
			c = 26 - (c-65+1) + 1;
			c = c + (65-1);	//c=c+(65-1) 最后要加上ACSII的位置
		}
		else if(c >= 'a' && c <= 'z') 
		{
			c = 26 - (c-97+1) + 1;
			c = c + (97-1);	//c=c+(65-1) 最后要加上ACSII的位置
		}

		b[i] = c;
	}
	b[i] = '\0';
	printf("b[]= %s\n", b);
	for(i = 0; (c = b[i]) != '\0'; i++)
	{
		printf("%c ", c);
		if(c >= 'A' && c <= 'Z') 
		{
			c = 26 - (c-65+1) + 1;
			c = c + (65-1);	//c=c+(65-1) 最后要加上ACSII的位置
		}
		else if(c >= 'a' && c <= 'z') 
		{
			c = 26 - (c-97+1) + 1;
			c = c + (97-1);	//c=c+(65-1) 最后要加上ACSII的位置
		}
		d[i] = c;
	}
	d[i] = '\0';
	printf("d[]= %s\n", d);
	return 0;
}
