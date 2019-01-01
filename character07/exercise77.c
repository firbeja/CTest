#include<stdio.h>
//写一个函数，将一个字符串的元音字母复制到另一字符串，然后输出。

void fun(char str[], char letter[]);
void print_string(char str[]);
int isVowel(char c);

int main()
{
	char str[80] = {"Finacial problems may bring about political problems."};
	char letter[200] = {"                                                          "};
	fun(str, letter);
	print_string(str);
	return 0;
}

void fun(char str[], char letter[])
{
	char c;
	int i, j;
	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		print_string(str);
		if(isVowel(c))
		{
			letter[i] = c;
			print_string(letter);
		}
	}
	letter[i] = '\0';
}

void print_string(char str[])
{
	printf("%s\n", str);
}

int isVowel(char c)
{
	int w = 0;
	if(c == 'A' || c == 'a') w = 1;
	if(c == 'E' || c == 'e') w = 1;
	if(c == 'I' || c == 'i') w = 1;
	if(c == 'O' || c == 'o') w = 1;
	if(c == 'U' || c == 'u') w = 1;
	return w;
}
