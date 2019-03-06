#include<stdio.h>
#define DEBUG


//小例子

int main()
{
	printf("---start---\n");
	//#ifdef DEBUG
	#ifndef DEBUG
		printf("DEBUG-ONE\n");
	#else
		printf("DEBUG-TWO\n");
	#endif
	printf("---end---\n");
	return 0;
}
