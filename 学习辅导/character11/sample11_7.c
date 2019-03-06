#include<stdio.h>
#define LETTER -1

//输入一行字母字符，根据需要设置条件编译，使之能将字母全改为大写输出，或全改为小写字母输出。

int main()
{
	char str[20] = "In a MoVe.-->", *p;
	for(p = str; *p != '\0'; p++)
	{
		#if LETTER
			if(*p >= 'a' && *p <= 'z')
			{
				*p = *p - 32;
			}
		#else
			if(*p >= 'A' && *p <= 'Z')
			{
				*p += 32;
			}
		#endif
	}
	printf("%s\n", str);
	return 0;
}
