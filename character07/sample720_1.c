#include<stdio.h>
static void print_string(char str[])
{
	printf("%s\n", str);
}

void delete(char str[], char g)
{
	int i, j;
	char c;
	i = 0;
	j = 0;
	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		if(c != g)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}
