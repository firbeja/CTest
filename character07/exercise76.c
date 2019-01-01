#include<stdio.h>
//写一个函数，将两个字符串连接。

void stringCat(char str1[], char str2[]);
void print_string(char str[]);

int main()
{
	char str1[80] = {"Finacial risks tend to "};
	char str2[30] = {"overweigh political risks."};
	stringCat(str1, str2);
	print_string(str1);
	return 0;
}

void stringCat(char str1[], char str2[])
{
	char a,b;
	int i, j;
	i = 0;
	while(str1[i] != '\0')
	{
		i++;
	}
	for(j = 0; (b = str2[j]) != '\0'; j++, i++)
	{
		str1[i] = str2[j];
		print_string(str1);
	}
	str1[i] = '\0';
	printf("\n");
}

void print_string(char str[])
{
	printf("%s\n", str);
}
