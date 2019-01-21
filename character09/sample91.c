#include<stdio.h>
#include<string.h>

//把一个学生的学号、姓名、性别、住址，放在一个结构体变量中，然后输出这个学生的信息。
struct Date
{
	int year;
	int month;
	int day;
};

struct Student
{
	int num;
	char name[20];
	char sex;
	char addr[80];
	struct Date birthday;
//}a = {928, "Firbeja", 'M', "ZhongGuo South"};
};

int main()
{
	//struct Student a = {928, "Firbeja", 'M', "ZhongGuo South"};
/*	struct Student a;
	printf("输入学号:");
	scanf("%d", &a.num);
	
	printf("输入姓名:");
	scanf("%s", a.name);
	
	printf("输入性别:");
	getchar();
	scanf("%c", &a.sex);

	printf("输入地址:");
	scanf("%s", a.addr);
*/

	struct Student a = {.name="Firbeja", .birthday={1991, 05, 23}};
	struct Student b;
	b = a;
	strcpy(b.name, "Dill");
	b.num = 555;

	printf("num=%d name=%s sex=%c addr=%s\n", a.num, a.name, a.sex, a.addr);
	printf("birthday:%d %d %d\n", a.birthday.year, a.birthday.month, a.birthday.day);
	printf("num=%d name=%s sex=%c addr=%s\n", b.num, b.name, b.sex, b.addr);
	printf("birthday:%d %d %d\n", b.birthday.year, b.birthday.month, b.birthday.day);
	return 0;
}
