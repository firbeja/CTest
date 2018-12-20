#include<stdio.h>

//译密码
int main()
{
	char c;
	printf("输入电文:\n");
	while((c = getchar()) != '\n')
	{
		if((c >= 'A' && c <= 'V') || (c >= 'a' && c <= 'v'))
		{
			c = c + 4;
		}
		else if(c >= 'W' && c <= 'Z')
		{
			//c = 64 + (26 - (c - 65 + 1) + 1);
			//c = c - 26 + 1 + 4;
			c = c - 26 + 4;
		}
		else if(c >= 'w' && c <= 'z')
		{
			//c = 96 + (26 - (c - 97 + 1) + 1);
			//c = c - 26 + 1 + 4;
			c = c - 26 + 4;
		}
		putchar(c);
	}
	printf("\n");
	return 0;
}
