#include<stdio.h>

//输入月份，输出英文月名，用指针数组处理。

int main()
{
	char *a[12] = {"January","February","March","April","May","June","July","August"
			,"September","October","November","December"};
	int n;
	printf("输入一个月份:");
	scanf("%d", &n);
	printf("%s\n", *(a+n-1));
	return 0;
}
