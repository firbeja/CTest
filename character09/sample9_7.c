#include<stdio.h>

//9.7用typedef声明新类型名。都是些小例子。

typedef int Interge;
//typedef long Interge;
typedef float Real;
typedef int Count;
typedef struct
{
	int year;
	int month;
	int day;
}Date;
typedef int Num[10];
typedef int *PNum[10];
typedef int (*PEnum)[10];
typedef float (*PFun)(float, float);
typedef char *String;

float add(float x, float y);

float add(float x, float y)
{
	return x+y;
}

int main()
{
	Interge a;
	Real b;
	Count c;
	Date d, *pd;
	Num e;
	//Num *pe;//好像不行
	PNum pe;
	PEnum penum;
	PFun pfun;
	String g, h[3];

	a = 2;
	b = 2.3;
	c = 23;
	d.year = 2019;
	d.month = 1;
	d.day = 21;
	printf("a=%d b=%f c=%d\n", a, b, c);
	printf("d=%d %d %d\n", d.year, d.month, d.day);
	pd = &d;
	printf("*pd=%d %d %d\n", pd->year, pd->month, pd->day);
	
	for(int i = 0; i < 10; i++)
	{
		e[i] = i;
		//*pe = (e+i);
		*(pe+i) = e+i;
	}
	penum = &e;
	for(int i = 0; i < 10; i++)
	{
		//printf("e[%d]=%d **(pe+%d)=%d\n", i, e[i], i, **(pe+i));
		printf("e[%d]=%d **(pe+%d)=%d *(*penum+%d)=%d\n", i, e[i], i, **(pe+i), i, *(*penum+i));
	}

	pfun = add;
	printf("PFun=%f\n", (*pfun)(3.1, 4.23));

	g = "typedef char *String";
	printf("g=%s\n", g);
	g = "typedef char *String.Change 字符串。";
	printf("g=%s\n", g);
	h[0] = "Regardless of how influential ";
	h[1] = "ian indiviua ls locally,";
	h[2] = "he or she can exert global influence.";
	for(int i = 0; i < 3; i++)
	{
		printf("h[%d]=%-40s*(h+%d)=%-40s\n", i, h[i], i, *(h+i));
	}
	return 0;
}
