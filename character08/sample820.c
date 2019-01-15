#include<stdio.h>

//用函数调用实现字符串的复制。

void myCopy(char *p1, char *p2);
void copy_1(char to[], char form[]);
void copy_2(char to[], char form[]);
void copy_3(char *to, char *form);

void myCopy(char *p1, char *p2)
{
	//while(*p1++ = *p2++);
	while(*p2 != '\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
}

void copy_1(char to[], char form[])
{
	int i;
	for(i = 0; form[i] != '\0'; i++)
	{
		to[i] = form[i];
	}
	to[i] = '\0';
}

void copy_2(char to[], char form[])
{
	int i = 0;
	char c;
	while((c = form[i]) != '\0')
	{
		to[i] = c;
		i++;
	}
	to[i] = '\0';
}

void copy_3(char *to, char *form)
{
//	while(*to++ = *form++);
	for(;*to++ = *form++;);
}

int main()
{
	char a[] = "act on their own in rule-setting.", b[80], c[80], d[80], e[80] = "evade the pressure from their peers.keep away from political influence.";
	char *p1, *p2;
	
	myCopy(b, a);
	
	copy_1(c, a);
	
	p1 = a;
	p2 = d;
	copy_2(p2, p1);
	
	p1 = a;
	p2 = e;
	copy_3(p2, p1);
	
	printf("b= %s\n", b);
	printf("c= %s\n", c);
	printf("d= %s\n", d);
	printf("e= %s\n", e);
	return 0;
}
