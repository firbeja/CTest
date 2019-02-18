#include<stdio.h>
#include<stdlib.h>

//这一小节没有例题，自己写个小sample。

struct Student
{
	char num[10];
	char name[20];
	float score[3];
};

void output();
void inpit();

void output()
{
	FILE *fp;
	struct Student s[3] = {{"140", "liubin", 87.6, 89, 76}
				,{"141", "firbeja", 67, 87, 56}
				,{"142", "dill", 89, 34.4, 87}};
	if((fp = fopen("things/10-3-3/1033", "w")) == NULL)
	{
		printf("\n   cannot open this file\n");
		exit(0);
	}
	fprintf(fp, "   NO.      name   score1   score2   score3\n");
	for(int i = 0; i < 3; i++)
	{
		fprintf(fp, "%5s%10s%9.2f%9.2f%9.2f\n", s[i].num, s[i].name, s[i].score[0],
							s[i].score[1], s[i].score[2]);
	}
	fclose(fp);
}

void input()
{
	//不好“读”回来啊
}

int main()
{
	output();
	return 0;
}
