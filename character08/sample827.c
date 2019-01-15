#include<stdio.h>
#include<string.h>

//将若干字符串，按字母顺序，由小到大输出。
void fun1();
void fun2();
void print_c(char *p);

void fun1()
{
	char *s[] = {"After all."
			,"it has an ad business too."
			,"w b hich is says will comply with DNT request."
			,"though it is still."
			,"w a orking out how."};
	int i, j, min;
	char *p, *temp;	
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", *(s+i));
	}
	printf("\n");
	for(i = 0; i <= 3; i++)
	{
		min = i;
		for(j = i+1; j <= 4; j++)
		{
			//if(**(s+min) > **(s+j))
			if(strcmp(*(s+min), *(s+j)) > 0)
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = *(s+i);
			*(s+i) = *(s+min);
			*(s+min) = temp;
		}
	}
	for(i = 0; i < 5; i++)
	{
		print_c(*(s+i));
	}
	printf("\n");
}

void fun2()
{
	char *s[] = {"After all."
		,"it has an ad business too."
		,"w b hich is says will comply with DNT request."
		,"though it is still."
		,"w a orking out how."};
	int i, j;
	char *temp, *t;
	printf("fun2():有错，用char *temp\n");
	for(i = 0; i <= 3; i++)
	{
		temp = *(s+i);
		for(j = i+1; j <= 4; j++)
		{
			if(strcmp(temp, *(s+j)) > 0)
			{
				temp = *(s+j);	//这里用char *temp是错误的，因为temp是一个变量，有自己的内存存储空间，并不位于要排序的数组内。
			}
			if(temp != *(s+i))
			{
				t = temp;	//因为temp是一个指针变量，有自己的内存空间，但排序是排的数组的顺序，所以这样用，就起不到交换数组元素的作用了。
				temp = *(s+i);
				*(s+i) = t;
			}
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", *(s+i));
	}
}

void print_c(char *p)
{
	while(*p != '\0')
	{
		printf("%c", *p);
		p++;
	}
	printf("\n");
}

int main()
{
	fun1();
	fun2();
	return 0;
}
