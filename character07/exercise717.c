#include<stdio.h>
//递归法，将整数n转换成字符串。例如输入483，应输出字符串“483”。n的位数不确定，可以是任意位数的整数。

int change(char str[], int num);

int main()
{
	int num, i;
	char str[20];
	printf("输入一个整数:");
	scanf("%d", &num);
	i = change(str, num);
	str[i] = '\0';
	printf("str=%s\n", str);
	return 0;
}

int change(char str[], int num)
{
	int temp, i;
	if(num > 0 && num <= 9)
	{
		i = 0;
		temp = num;
		str[i] = temp + 48;
		i = i + 1;
	}
	else
	{
		i = change(str , num/10);
		temp = num % 10;
		str[i] = temp + 48;
		i = i + 1;
	}
	return i;
}
