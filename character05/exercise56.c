#include<stdio.h>

//1!+2!+3!+4!+...+20!

void fun1();
void fun2();
long int step(int n);

void fun1()
{
	long int i, j, s;
	j = 1;
	s = 0;
	for(i = 1; i <= 20; i++)
	{
		j = j * i;	//上一次是4的阶乘“1*2*3*4”，所以这一次求5的阶乘，直接在“1*2*3*4”的基础上乘以5就行了
		s = s + j;
		printf("j=%ld\ts=%ld\n", j, s);
	}
}

void fun2()
{
	long int i, j, s;
	j = 1;
	s = 0;
	for(i = 1; i <= 20; i++)
	{
		j = step(i);	//只是每一步都重头开始算阶乘，从1开始“1*2*3*4*5”
		s = s + j;
		printf("\ts=%ld\n", s);
	}
}

long int step(int n)
{
	int i;
	long int s = 1;
	printf("s=1");
	for(i = 1; i <= n; i++)
	{
		s = s * i;
		printf("*%d", i);
	}
	printf("\t%d!=%ld\t", i, s);
	return s;
}

int main()
{
	fun1();
	printf("\n**********************\n");
	fun2();
	return 0;
}
