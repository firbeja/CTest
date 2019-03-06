#include<stdio.h>
#define R 4.0
#define PI 3.1415926
#define L 2*PI*R
//#undef R
#define S PI*R*R

//在宏定义中引用已定义的宏名。

int main()
{
	printf("\n半径:%lf\n圆周长:%lf\n圆面积:%lf\n\n", R, L, S);
	return 0;
}
