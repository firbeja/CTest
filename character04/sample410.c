#include<stdio.h>
#define D1 0
#define D2 0.02
#define D3 0.05
#define D4 0.08
#define D5 0.10
#define D6 0.15

//运输公司对用户计算运输费用
//	s<250	d=0
//250 <= s < 500 d=0.02
//500 <= s < 1000 d=0.05
//1000 <= s < 2000 d=0.08
//2000 <= s < 3000 d=0.10
//3000 <= s 	d=0.15
//总运费freight的计算公式:f=p*w*s*(1-d)
//fun1(),if...else if...嵌套
//fun2(),switch(){...}

void fun1(float s, float p, float w, float d, float f);
void fun2(float s, float p, float w, float d, float f);
float freight(float p, float w, float s, float d);

void fun1(float s, float p, float w, float d, float f)
{
	if(s < 250) {d = D1;}
	else if(250 <= s && s < 500) {d = D2;}
	else if(500 <= s && s < 1000) {d = D3;}
	else if(1000 <= s && s < 2000) {d = D4;}
	else if(2000 <= s && s < 3000) {d = D5;}
	else if(3000 <= s) {d = D6;}
	f = freight(p, w, s, d);
}

void fun2(float s, float p, float w, float d, float f)
{
	int c = s/250;
	printf("c=%d\t", c);
	if(c > 12)
	{
		c = 12;
	}
	switch(c)
	{
		case 0: d = D1; break;
		case 1: d = D2; break;
		case 2:
		case 3: d = D3; break;
		case 4:
		case 5:
		case 6:
		case 7: d = D4; break;
		case 8:
		case 9:
		case 10:
		case 11: d = D5; break;
		case 12: d = D6; break;
		default: printf("数据有误");
	}
	f = freight(p, w, s, d);
}

float freight(float p, float w, float s, float d)
{
	float f;
	f = p*w*s*(1-d);
	printf("d=%-10.2f\tf=%-10.2f\n", d, f);
	return f;
}

int main()
{
	float s;	//距离
	float p;	//price每吨每千米货物的基本运费
	float w;	//weight货物重量
	float d=0;	//discount折扣
	float f=0;	//freight总运费

	printf("输入单价，重量，距离：");
	scanf("%f%f%f", &p, &w, &s);
	fun1(s, p, w, d, f);
	fun2(s, p, w, d, f);

	return 0;
}

