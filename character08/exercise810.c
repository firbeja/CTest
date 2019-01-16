#include<stdio.h>

//将一个5*5的矩阵中，最大的放中间，4个角分别放最小的。

void fun1();
void covrt(int (*p)[5]);
void print(int (*p)[5]);
void pmin(int **min);
void fun2();
void covrt_2(int (*p)[5]);
void add(int **min, int *temp);
void change(int *max, int **min, int (*p)[5]);

void fun1()
{
	int a[5][5] = {{23, 76, 45, 5, 87},
			{13, 13, 45, 1, 35},
			{67, 87, 5, 87, 4},
			{23, 45, 876, 435, 433},
			{465, 6, 54, 32, 53}};
	print(a);
	covrt(a);
	print(a);
}

void covrt(int (*p)[5])
{
	int i, j, t, o;
	int *max, *temp, *min[4];
	max = *p;
	temp = *p;
	*(min+0)=*(min+1)=*(min+2)=*(min+3)=*p;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(*max < *(*(p+i)+j))
			{
				max = *(p+i)+j;
			}
			if(*temp > *(*(p+i)+j))
			{
				temp = *(p+i)+j;
				if(*temp < **(min+2))
				{
					if(*temp < **(min+1))
					{
						if(*temp < **(min+0))
						{
							*(min+3) = *(min+2);
							*(min+2) = *(min+1);
							*(min+1) = *(min+0);
							*(min+0) = temp;
						}
						else
						{
							*(min+3) = *(min+2);
							*(min+2) = *(min+1);
							*(min+1) = temp;
						}				
					}
					else
					{
						*(min+3) = *(min+2);
						*(min+2) = temp;
					}
				}
				else
				{
					*(min+3) = temp;
				}
			}
			temp = *(min+3);
			pmin(min);
		}
	}

	t = *(*(p+2)+2);
	*(*(p+2)+2) = *max;
	*max = t;
	//加一个判断
	for(int k = 0; k < 4; k++)
	{
		if(*(min+k) == max)
		{
			*(min+k) = *(p+2)+2;
		}
		else if(*(min+k) == *(p+2)+2)
		{
			*(min+k) = max;
		}
	}

	t = *(*(p+0)+0);
	*(*(p+0)+0) = **(min+0);
	**(min+0) = t;
	//加一个判断
	for(int k = 1; k < 4; k++)
	{
		if(*(min+k) == *(p+0)+0)
		{
			*(min+k) = *(min+0);
		}
		else if(*(min+k) == *(min+0))
		{
			*(min+k) = *(p+0)+0;
		}
	}

	t = *(*(p+0)+4);
	*(*(p+0)+4) = **(min+1);
	**(min+1) = t;
	//加一个判断
	for(int k = 2; k < 4; k++)
	{
		if(*(min+k) == *(p+0)+4)
		{
			*(min+k) = *(min+1);
		}
		else if(*(min+k) == *(min+1))
		{
			*(min+k) = *(p+0)+4;
		}
	}

	t = *(*(p+4)+0);
	*(*(p+4)+0) = **(min+2);
	**(min+2) = t;
	printf("%o %o[][]\n", *p, *(min+2));
	printf("t=%d == **---*(*(p+0)+0)=---%d\n", t, *(*(p+0)+0));
	for(int k = 3; k < 4; k++)
	{
		if(*(min+k) == *(p+4)+0)
		{
			*(min+k) = *(min+2);
		}
		else if(*(min+k) == *(min+2))
		{
			*(min+k) = *(p+4)+0;
		}
	}

	t = *(*(p+4)+4);
	*(*(p+4)+4) = **(min+3);
	**(min+3) = t;
}

void print(int (*p)[5])
{
	int i, j;
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", *(*(p+i)+j));
		}
		printf("\n");
	}
}

void pmin(int **min)
{
	for(int i = 0; i < 4; i++)
	{
		printf("%d ", **(min+i));
	}
	printf("-=-=--=-=\n");
}

void fun2()
{
	int a[5][5] = {{23, 76, 45, 5, 87},
			{13, 13, 45, 1, 35},
			{67, 87, 5, 87, 4},
			{23, 45, 876, 435, 433},
			{465, 6, 54, 32, 53}};
	print(a);
	covrt_2(a);
	print(a);
}

void covrt_2(int (*p)[5])
{
	int i, j, t, o, *max, *temp, *min[4];
	max = temp = *p;
	min[0]=min[1]=min[2]=min[3]=*p;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(*max < *(*(p+i)+j))
			{
				max = *(p+i)+j;
			}
			if(*temp > *(*(p+i)+j))
			{
				temp = *(p+i)+j;
				add(min, temp);
			}
			temp = min[3];
		}
	}
	change(max, min, p);
}

void add(int **min, int *temp)
{
	int i, j;
	i = 0;
	while(*temp > **(min+i))
	{
		i++;
	}
	for(j = 0; j < 3-i; j++)
	{
		*(min+3-j) = *(min+3-j-1);
	}
	*(min+i) = temp;
}

void change(int *max, int **min, int (*p)[5])
{
	int i, k, t, m, n;
	t = *(*(p+2)+2);
	*(*(p+2)+2) = *max;
	*max = t;
	//判断有没有冲突
	for(k = 0; k < 4; k++)
	{
		if(min[k] == max)
		{
			min[k] = *(p+2)+2;
		}
		else if(min[k] == *(p+2)+2)
		{
			min[k] = max;
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		if(i == 0)
		{
			m = 0;
			n = 0;
		}
		else if(i == 1)
		{
			m = 0;
			n = 4;
		}
		else if(i == 2)
		{
			m = 4;
			n = 0;
		}
		else if(i == 3)
		{
			m = 4;
			n = 4;
		}
		t = *(*(p+m)+n);
		*(*(p+m)+n) = **(min+i);
		**(min+i) = t;
		//加一个判断
		for(int k = i+1; k < 4; k++)
		{
			if(*(min+k) == *(p+m)+n)
			{
				*(min+k) = *(min+i);
			}
			else if(*(min+k) == *(min+i))
			{
				*(min+k) = *(p+m)+n;
			}
		}
	}
}

int main()
{
	//fun1();
	fun2();
	return 0;
}
