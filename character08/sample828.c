#include<stdio.h>

//使用指向指针数据的指针变量。

int main()
{
	char *s[] = {"In Arizona v. United States,"
			,"the majority overturned three of four"
			,"contested provisions"
			,"of Arizona's controversial plan"
			,"to have state and local police."};
	char **p = s;
	for(int i = 0; i < 5; i++)
	{
		printf("%s\n", *(p+i));
	}
	
	int r[] = {11, 43, 21, 43, 12}; 
	int *a[5], i;
	int **t;
	for(i = 0; i < 5; i++)
	{
		*(a+i) = r+i;
	}
	t = a;
	for(i = 0; i < 5; i++)
	{
		printf("%d ", **(t+i));
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%x ", *(t+i));
	}
	printf("\n");
	return 0;
}
