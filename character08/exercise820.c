#include<stdio.h>
#include<string.h>

//五个字符串排序，用指针的指针。

int main()
{
	char *a[5] = {"to encourage"
			,"innovation"
			,"and"
			,"competition"
			,"innovaral"};
	char **min, *temp;
	int i, j;
	for(i = 0; i <= 3; i++)
	{
		min = a+i;
		for(j = i+1; j <= 4; j++)
		{
			printf("-=-=-=-=%s\t%s\n", *min, *(a+j));
			if(strcmp(*min, *(a+j)) > 0)
			{
				min = a+j;
			}
		}
		if(min != a+i)
		{
			temp = *min;
			*min = *(a+i);
			*(a+i) = temp;
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", *(a+i));
	}
	return 0;
}
