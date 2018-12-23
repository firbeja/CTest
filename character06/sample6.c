#include<stdio.h>
#include<string.h>

//字符串处理函数
int main()
{
	char c[10] = {"copyism"};
	char str[80];
	printf("%s\n", c);
	puts(c);
	printf("输入一个字符串:");
	gets(str);
	puts(str);
	printf("\t%s\n", str);

	printf("strcat():%s\n", strcat(str, c));

	char str1[80];
	strcpy(str1, str);
	printf("strcpy:%s\n", str1);
	printf("strcpy(str1, \"get out copy.\"):%s\n", strcpy(str1, "get out copy."));
	//str1 = "I in";
	strncpy(str1, str, 3);
	printf("strNcopy:%s\n", str1);

	char str2[] = {"somEthIng like this"};
	char str3[] = {"somEthIng like thaa"};
	printf("\nstrcmp:%d\n", strcmp(str3, str2));

	printf("strlen:%d\n", strlen(str2));
	printf("strlwr(): str1:%s\tstr3:%s\n", strlwr(str1), strupr(str3));

	return 0;
}
