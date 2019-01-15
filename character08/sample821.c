#include<stdio.h>

//改变指针变量的值。

int main()
{
	char *p = "By 1830 the former Spanish and Portuguese.";
	printf("p= %s\n", p);
	p = p + 7;
//	p[6] = *(p+6) - 32;	//非法
	printf("p= %s\n", p);
	printf("p[6]= %c\n", p[6]);

	char str[] = "colonies had become independent nations.";
//	str = str + 7;	//非法
	str[6] = *(str+6) - 32;
	printf("str= %s\n", str);

	char *temp = "p[8]= %c\t*(str+9)= %c\n";
	printf("temp= %s", temp);
	printf(temp, p[8], *(str+9));
	temp = "p[8]-32= %c\tstr[9]-32= %c\n";
	printf("temp= %s", temp);
	printf(temp, p[8]-32, str[9]-32);
	return 0;
}
