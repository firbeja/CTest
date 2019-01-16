#include<stdio.h>

//（1）编写一个函数new，对n个字符开辟连续空间，返回字符串开始的地址。
//（2）写一个函数free，free(p)p指向的单元以后的内存段释放。

char ZONE[100];
char *Temp = ZONE;

char *new(int n);
void free(char *p);
void print();

int main()
{
	int n;
	char *p1, *p2, *p3;
	for(int i = 0; i < 100; i++)
	{
		ZONE[i] = '0';
	}
	p1 = new(3);
	p2 = new(3);
	gets(p1);
	print();
	gets(p2);
	print();
	free(p2);
	p3 = new(3);
	gets(p3);
	print();
	print();
	return 0;
}

char *new(int n)
{
	char *p;
	if(Temp+n < ZONE+1000)
	{
		p = Temp + 1;
		Temp = Temp + n;
	}
	else
	{
		p = NULL;
	}
	return p;
}

void free(char *p)
{
	if(p < Temp)
	{
		Temp = p - 1;
	}
}

void print()
{
	for(int i = 0; i < 100; i++)
	{
		printf("%c", ZONE[i]);
	}
	printf("\n");
}
