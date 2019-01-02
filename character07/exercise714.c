#include<stdio.h>
//输入十个学生五门课的成绩，分别用函数实现下列功能:
//(1) 计算每个学生的平均分;
//(2) 计算每门课的平均分;
//(3) 找出分最高的学生和对应的课;
//(4) 计算平均分方差:(公式看书).

void stuAver(float g[][5]);
void subAver(float g[][5]);
void high(float g[][5]);
void fangcha(float g[][5]);
float aver(int n, float g[][5]);
void print_array(float g[][5]);

int main()
{
	float g[10][5] = {{67, 76, 87, 56, 87},
			{98, 76, 67, 66, 68},
			{76, 78, 79, 80, 89},
			{68, 78, 87, 87, 97},
			{64, 53, 67, 87, 67},
			{82, 72, 65, 84, 81},
			{64, 62, 61, 73, 75},
			//{12345.12345, 55, 99, 75, 64},
			{68, 55, 99, 75, 64},
			{87, 97, 86, 76, 74},
			{73, 63, 74, 63, 85}};
	print_array(g);
	
	printf("\n每个学生的平均分:\n");
	stuAver(g);
	printf("\n");
	
	printf("每门课的平均分:\n");
	subAver(g);
	printf("\n");
	
	printf("分数最高的:\n");
	high(g);
	printf("\n");
	
	printf("平均分方差:\n");
	fangcha(g);
	printf("\n");
	return 0;
}

void stuAver(float g[][5])
{
	int i, j;
	float sum;
	for(i = 0; i < 10; i++)
	{
		sum = 0.0;
		printf("第%d个学生: ", i+1);
		for(j = 0; j < 5; j++)
		{
			sum = sum + g[i][j];
		}
		printf("aver=%4.2f\n", sum/5.0);
	}
}

void subAver(float g[][5])
{
	int i, j;
	float sum;
	for(i = 0; i < 5; i++)
	{
		sum = 0;
		printf("第%d门课: ", i+1);
		for(j = 0; j < 10; j++)
		{
			sum = sum + g[j][i];
		}
		printf("aver=%4.2f\n", sum/10.0);
	}
}

void high(float g[][5])
{
	int i, j, m, n;
	float max;
	max = g[0][0];
	m = 0;
	n = 0;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(max < g[i][j])
			{
				max = g[i][j];
				m = i;
				n = j;
			}
		}
	}
	printf("max=%4.2f 第%d个学生，第%d门课。\n", max, m+1, n+1);
}

void fangcha(float g[][5])
{
	float t1, t2, a, s, o;
	int i, j;
	t1 = 0;
	t2 = 0;
	for(i = 0; i < 10; i++)
	{
		a = aver(i, g);
		t1 = t1 + a*a;
		t2 = t2 + a;
		printf("a=%f t1=%f t2=%f\n", a, t1, t2);
	}
	o = t1/10.0 - (t2 / 10.0)*(t2 / 10.0);
	printf("o=%f", o);
}

float aver(int n, float g[][5])
{
	int i;
	float sum;
	sum = 0.0;
	for(i = 0; i < 5; i++)
	{
		sum = sum + g[n][i];
	}
	return sum/5.0;
}

void print_array(float g[][5])
{
	int i, j;
	for(i = 0; i < 10; i++)
	{
		printf("第%d个学生:\t", i+1);
		for(j = 0; j < 5; j++)
		{
			printf("%3.1f ", g[i][j]);
		}
		printf("\n");
	}
}
