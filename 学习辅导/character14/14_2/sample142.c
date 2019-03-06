#include<stdio.h>
#include<math.h>
#define BIG 11

//案例二，学生试卷分数统计。

typedef struct stu_info
{
	int num;
	float score[3];
}Student;

//全局变量
Student s[300];
int total;
int normal[11] = {0};
int final[11] = {0};
int all[11] = {0};
float Average[3], Stddev[3];
float Passrate, Maxscore, Minscore;

void getStu();
void work();
void draw();
void printOther();
void fun1();
void fun2();
void fun3();
void fun4();
void fun3_aver();
void fun3_std();
void printStu();

void getStu()
{
	total = 0;
	printf("输入学号，平时成绩，期末成绩:");
	scanf("%d%f%f", &s[0].num, &s[0].score[0], &s[0].score[1]);
	for(int i = 1; i < 300 && s[i-1].num != -1; i++)
	{
		total = total + 1;
		printf("输入学号，平时成绩，期末成绩:");
		scanf("%d%f%f", &s[i].num, &s[i].score[0], &s[i].score[1]);
	}
}

void work()
{
	fun1();
	fun2();
	fun3();
	fun4();
}

void draw()
{
	char screen[BIG][BIG*4+1];
	int i, j, m, w;
	float max = final[0];
	for(i = 0; i < BIG; i++)
	{
		for(j = 0; j < BIG*4+1; j++)
		{
			screen[i][j] = 0;
		}
	}
	for(i = 0; i < BIG; i++)
	{
		screen[i][0] = '|';
	}
	for(i = 0; i < BIG*4+1; i++)
	{
		screen[BIG-1][i] = '-';
	}
	for(i = 0; i < 11; i++)
	{
		if(max < final[i])
		{
			max = final[i];
		}
	}
	for(m = 0, w = 1; m < 11; m++, w = w+4)
	{
		for(i = 0; i < (int)10.0*(final[m]/max); i++)
		{
			for(j = 0; j < 4; j++)
			{
				screen[BIG-1-1-i][w+j] = '*';
			}
		}
	}

	for(i = 0; i < BIG; i++)
	{
		for(j = 0; j < BIG*4+1; j++)
		{
			if(screen[i][j] != 0)
			{
				printf("%c", screen[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf(" 0  10  20  30  40  50  60  70  80  90  100\n");
}

void printOther()
{

}

void fun1()
{
	for(int i = 0; i < total; i++)
	{
		s[i].score[2] = 0.2*s[i].score[0] + 0.8*s[i].score[1];
	}
}

void fun2()
{
	int i, temp;
	for(i = 0; i < total; i++)
	{
		temp = s[i].score[0] / 10;
		normal[temp] = normal[temp] + 1;
		temp = s[i].score[1] / 10;
		final[temp] = final[temp] + 1;
		temp = s[i].score[2] / 10;
		all[temp] = all[temp] + 1;
	}
}

void fun3()
{
	fun3_aver();
	fun3_std();
}

void fun4()
{
	int i;
	float max, min, count;
	count = 0;
	max = s[0].score[1];
	min = s[0].score[1];
	for(i = 0; i < total; i++)
	{
		if(max < s[i].score[1])
		{
			max = s[i].score[1];
		}
		if(min > s[i].score[1])
		{
			min = s[i].score[1];
		}
		if(s[i].score[1] >= 60.0)
		{
			count++;
		}
	}
	Maxscore = max;
	Minscore = min;
	Passrate = count / total * 100.0;
}

void fun3_aver()
{
	int i, j;
	float sum;
	for(i = 0; i < 3; i++)
	{
		sum = 0;
		for(j = 0; j < total; j++)
		{
			sum = sum + s[j].score[i];
		}
		Average[i] = sum / total;
	}
}

void fun3_std()
{
	int i, j;
	double sum;
	for(i = 0; i < 3; i++)
	{
		sum = 0;
		for(j = 0; j < total; j++)
		{
			sum = sum + (s[j].score[i]-Average[i])*(s[j].score[i]-Average[i]);
		}
		sum = sum / total;
		Stddev[i] = sqrt(sum);
	}
}

void printStu()
{
	printf("\n学生成绩:\n");
	printf("  学号   平时成绩   期末成绩   总评成绩\n");
	for(int i = 0; i < total; i++)
	{
		printf("%5d%11.2f%11.2f%11.2f\n", s[i].num, s[i].score[0], s[i].score[1], s[i].score[2]);
	}
	printf("总人数:%d\n", total);
	printf("\n平时成绩:");
	for(int i = 0; i < 11; i++)
	{
		printf("%3d", normal[i]);
	}
	printf("\n期末成绩:");
	for(int i = 0; i < 11; i++)
	{
		printf("%3d", final[i]);
	}
	printf("\n总评成绩:");
	for(int i = 0; i < 11; i++)
	{
		printf("%3d", all[i]);
	}
	printf("\n\n平均分:");
	for(int i = 0; i < 3; i++)
	{
		printf("%6.2f", Average[i]);
	}
	printf("\n标准差:");
	for(int i = 0; i < 3; i++)
	{
		printf("%6.2f", Stddev[i]);
	}
	printf("\n\n最高分:%6.2f   最低分:%6.2f   通过率:%6.2f%%\n", Maxscore, Minscore, Passrate);
	printf("\n");
}

int main()
{
	getStu();
	work();
	printStu();
	draw();
	printOther();
	return 0;
}
