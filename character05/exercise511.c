#include<stdio.h>
#define HIGH 100

//落地反弹
int main()
{
	int i;
	float h, s;
	s = 0.0;
	h = HIGH;
	for(i = 0; i < 10; i++)
	{
		s = s + h;	//球掉到地面时的路程
		printf("i=%d\th=%f\th/2=%f\ts=%f\n", i+1, h, h/2, s);
		h = h / 2.0;	//球反弹的高度
		s = s + h;	//再加上球回到下一次最高点的路程
	}
	return 0;
}
