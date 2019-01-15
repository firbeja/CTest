#include<stdio.h>

//将字符串a复制到字符串b，然后输出字符串b。

void fun_book();

void fun_book()
{
	char a[] = "members of social network.", b[80];
	int i;
	for(i = 0; *(a+i) != '\0'; i++)
	{
		*(b+i) = *(a+i);
	}
	*(b+i) = '\0';
	printf("a= %s\n", a);
	for(i = 0; *(b+i) != '\0'; i++)
	{
		printf("%c", *(b+i));
	}
	printf("\n");
}

int main()
{
	char a[80], b[80], c[80], *p1, *p2;
	gets(a);
	p1 = a;
	p2 = b;
	while(*p2++ = *p1++)
	{
		;
	}
	*p2 = '\0';
	printf("b= %s\n", b);

	p1 = a;
	p2 = c;
	while(*p1 != '\0')
	{
		*p2 = *p1;
		p2++;
		p1++;
	}
	*p2 = '\0';
	printf("c= %s\n", c);

	fun_book();
	return 0;
}
