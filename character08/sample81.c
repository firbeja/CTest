#include<stdio.h>

//通过指针变量访问整型变量

int main()
{
	int a=9, b=13;
	int *pointer_1 = &a, *pointer_2 = &b;
	printf("a=%d\tb=%d\n", a, b);
	printf("*pointer_1=%d\t*pointer_2=%d\n", *pointer_1, *pointer_2);
	printf("*pointer_1=%o\t*pointer_2=%o\n", pointer_1, pointer_2);
	pointer_1 = &b;
	pointer_2 = &a;
	printf("*pointer_1=%d\t*pointer_2=%d\n", *pointer_1, *pointer_2);
	printf("*pointer_1=%o\t*pointer_2=%o\n", pointer_1, pointer_2);
	return 0;
}
