#include<stdio.h>
#include<string.h>
//写一个函数，输入一行字符，将此字符串中最长的单词输出。

void fun(char str[]);
void print_string(char str[]);

int main()
{
	char str[80] = {"Instead, the claimant receive a time-limited allowance. "};//最后要加个空格，不然后面的for循环，执行到='\0'就结束了，但实际上这一次循环是要做的啊，所以输入的字符串最后加个空格。
	fun(str);
	return 0;
}

void fun(char str[])
{
	int i, w, length;
	char c;
	char word[20] = {'a'};
	char temp[20] = {'a'};
	length = 0;
	w = 0;
	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		if(c == ' ')
		{
			if(w == 1)
			{
				temp[length] = '\0';
				printf("word[]=");
				print_string(word);
				printf("temp[]=");
				print_string(temp);
				if(length > strlen(word))
				{
					strcpy(word, temp);
				}
				printf("\n");
			}
			w = 0;
			length = 0;
		}
		else
		{
			w = 1;
			temp[length] = c;
			length++;
//			printf("temp=");
//			print_string(temp);
		}
	}
}

void print_string(char str[])
{
	printf("%s\n", str);
}
