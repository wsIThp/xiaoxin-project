#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int age;
	//int sorce;
	//char sex;
	char name[10];
};

typedef struct student stu;

stu *create_node(stu *head)
{
	char n[10];
	//stu *p=NULL;
	head=malloc(sizeof(stu));
	if(head==NULL)
	{
		perror("create");
		exit(0);
	}
	printf("please input massage of the suedent :\n");
	printf("input the age :\n");
	fgets(n,10,stdin);

	n[strlen(n)-1]='\0';
	head->age=atoi(n);
	printf("input the name :\n");
	fgets(head->name,10,stdin);
	n[strlen(n)-1]='\0';

	return head;
}

int foo(stu *p)
{
	printf("%d\n",p->age);
	return 0;
}

int too(stu *p)
{
	printf("%s\n",p->name);
	return 0;
}

int main(int argc, const char *argv[])
{
	stu *head=NULL;
	int (*p[2])(stu *)={foo,too};
	char  n[10];
	int num;
	head=create_node(head);
	while(1)
	{
		printf("input the number :\n");
		fgets(n,10,stdin);
		n[strlen(n)-1]='\0';
		num=atoi(n);
		if (num>=2) {
			break;
		}
		p[num](head);
	}
	printf("\n");
	return 0;
}

