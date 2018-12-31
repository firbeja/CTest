#include<stdio.h>

//观察局部变量的值。

int fun();

int fun()
{
	static num = 3;
	int other = 12;
	printf("num=%d\tother=%d\t", num++, ++other);
	return num;
}

int main()
{
	int i, m;
	
	for(i = 0; i < 10; i++)
	{
		m = fun();
		printf("m=%d\n", m);
	}
	return 0;
}
