#include<stdio.h>

//企业发放的奖金根据利润提成

void fun1(double p, double r, int w);
void fun2(double p, double r, int w);

void fun1(double p, double r, int w)
{
	if(w <= 1)
	{
		r = w*0.1;
	}
	else if(w > 1 && w <= 2)
	{
		r = 1*0.1 + (w-1)*0.075;
	}
	else if(w > 2 && w <= 4)
	{
		r = 1*0.1 + 1*0.075 + (w-2)*0.05;
	}
	else if(w > 4 && w <= 6)
	{
		r = 1*0.1 + 1*0.075 + 2*0.05 + (w-4)*0.03;
	}
	else if(w > 6 && w <= 10)
	{
		r = 1*0.1 + 1*0.075 + 2*0.05 + 2*0.03 + (w-6)*0.015;
	}
	else if(w > 10)
	{
		r = 1*0.1 + 1*0.075 + 2*0.05 + 2*0.03 + 4*0.015 + (w-10)*0.01;
	}
	printf("p=%lf\tr=%lf\tr*100000=%lf\tw=%d\n", p, r, r*100000, w);

}

void fun2(double p, double r, int w)
{
	switch(w)
	{
		case 0: r = w*0.1;break;
		case 1: r = 1*0.1 + (w-1)*0.075;break;
		case 2: 
		case 3: r = 1*0.1 + 1*0.075 + (w-2)*0.05;break;
		case 4: 
		case 5: r = 1*0.1 + 1*0.075 + 2*0.05 + (w-4)*0.03;break;
		case 6: 
		case 7: 
		case 8: 
		case 9: r = 1*0.1 + 1*0.075 + 2*0.05 + 2*0.03 + (w-6)*0.015;break;
		case 10: r = 1*0.1 + 1*0.075 + 2*0.05 + 2*0.03 + 4*0.015 +(w-10)*0.01;break;
		default:printf("输入数据有误");break;
	}
	printf("p=%lf\tr=%lf\tr*100000=%lf\tw=%d\n", p, r, r*100000, w);
}

int main()
{
	double p;	//profit利润
	double r;	//reward奖金
	int w;
	printf("输入利润：");
	scanf("%lf", &p);
	w = p/100000;	//profit,单位从“元”转换成“十万元”
	fun1(p, r, w);
	printf("--------------\n");
	fun2(p, r, w);
	return 0;
}
