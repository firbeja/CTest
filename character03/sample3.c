#include<stdio.h>

//第三章一些零碎知识点
int main()
{
	//const 变量存在期间其值不能改变
	//const int a = 1;
	//a = 3;
	//printf("a=%d\ta=%d\ta=%d\n", a, a+1, a);
	
	//sizeof()
	/*
	int numInt = 5000000;
	printf("numInt=%d\tsize=%d\n", numInt, sizeof(numInt));
	short numShort = 50000;
	printf("numShort=%d\tsize=%d\n", numShort, sizeof(numShort));
	long int numLongInt = 1;
	printf("numLongInt=%d\tsize=%d\n", numLongInt, sizeof(numLongInt));
	long long int numLLInt = 1;
	printf("numLLInt=%d\tsize=%d\n", numLLInt, sizeof(numLLInt));
	*/

	//unsigned int %u-无符号十进制数
	/*
	unsigned short price = 50;
	printf("price=%u\tsize=%lu\n", price, sizeof(price));
	*/

	//char
/*
	char c = 65;
	printf("c=%c\tc=%d\n", c, c);
	char c1 = '?';
	printf("c1=%c\tc1=%d\n", c1, c1);
*/

	//float sizeof()
	float numFloat = 1;
	printf("");

	return 0;
}

