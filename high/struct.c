#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct birthday
{
	int year;
	int month;
	int day;
}BIRTHDAY;

struct stu_info
{
	BIRTHDAY b;						/////BIRTHDA结构体的首地址跟stu_info结构体的首地址一样。可以将p转化访问birthday里的成员
	int num;						/////如果num跟BIRTHDAY卫士交换，则首地址不一样，下面这种写法则会出现错误
	char name[10];
};

int main(int argc, const char *argv[])
{
	struct stu_info *p=malloc(sizeof(struct stu_info));
	p->b.year=21;
	p->b.month=1;
	p->b.day=9;
	p->num=11;
	strcpy(p->name,"guo");
	printf("%d\n",p->b.year);
	printf("%d\n",((BIRTHDAY *)p)->year);
	printf("%d\n",p->num);
	free(p);
	return 0;
}
