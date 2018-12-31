#include<stdio.h>

//Hanoi塔问题。

void hanoi(int num, char source, char help, char goal);
void move(int num, char this, char there);

void hanoi(int num, char source, char help, char goal)
{
	if(num == 1)
	{
		move(num, source, goal);
	}
	else
	{
		hanoi(num-1, source, goal, help);
		move(num, source, goal);
		hanoi(num-1, help, source, goal);
	}
}

void move(int num, char this, char there)
{
	int i;
	for(i = num; i < 10; i++)
	{
		printf("	");
	}
	printf("%d %c->%c\n", num, this, there);
}

int main()
{
	int n;
	printf("输入n:");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
