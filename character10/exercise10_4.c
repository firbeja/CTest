#include<stdio.h>
#include<stdlib.h>

//有两个磁盘文件“A”和“B”，各存放一行字母，
//今要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件“C”中去。

char *getInfo(char *head, FILE *fp);
void sort(char *str);
void save(char *head, FILE *fp);

char *getInfo(char *head, FILE *fp)
{
	char *p = head, c;
	c = fgetc(fp);
	while(!feof(fp))
	{
		printf("--c=%c++\n", c);
		*p++ = c;
		c = fgetc(fp);
	}
	return p;
}

void sort(char *str)
{
	char *p1, *p2, *min, temp;
	p1 = str;
	while(*(p1+1) != '\0')
	{
		p2 = p1 + 1;
		min = p1;
		while(*p2 != '\0')
		{
			if(*min > *p2)
			{
				min = p2;
			}
			p2 = p2 + 1;
		}
		if(min != p1)
		{
			temp = *p1;
			*p1 = *min;
			*min = temp;
		}
		p1 = p1 + 1;
	}
}

void save(char *head, FILE *fp)
{
	fputs(head, fp);
}

int main()
{
	FILE *fpA, *fpB, *fpC;
	char str[80], *p = str;
	if((fpA = fopen("things/e10_4/A", "r")) == NULL)
	{
		printf("\n   cannot open A file\n");
		exit(0);
	}
	if((fpB = fopen("things/e10_4/B", "r")) == NULL)
	{
		printf("\n   cannot open B file\n");
		exit(0);
	}
	if((fpC = fopen("things/e10_4/C", "w")) == NULL)
	{
		printf("\n   cannot open C file\n");
		exit(0);
	}
	p = getInfo(p, fpA);
	getInfo(p, fpB);
	sort(str);
	save(str, fpC);
	
	fclose(fpA);
	fclose(fpB);
	fclose(fpC);
	return 0;
}
