#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
	unsigned ID;
	char name[20];
	struct student *next;
};
typedef struct student stu;
stu *add_link(stu *p)
{
	stu *ptr=NULL;
	int i=0;
	char a[100]={0};
	p=ptr=malloc(sizeof(stu));
	if (p==NULL) {
		perror("create");
		exit(-1);
	}
	p->ID=1;
	strcpy(p->name,"wang");
	p->next=NULL;
	for (i = 1; i < 5; i++) {
		p->next=malloc(sizeof(stu));
		if (p->next==NULL) {
			perror("create");
			exit(-1);
		}
		p->next->ID=i+1;
		printf("please input the %d student name :\n",i+1);
		fgets(a,100,stdin);
		a[strlen(a)-1]='\0';
		strcpy(p->next->name,a);
		p->next->next=NULL;
		p=p->next;	
	}
	return ptr;
}

stu *delete_link(stu *ptr)
{
	char a[100];
	stu *head=ptr;
	stu *temp=NULL;
	printf("please input the delete student name\n");
	fgets(a,100,stdin);
	a[strlen(a)-1]='\0';
	while(ptr->next!=NULL)
	{
	//if (*(ptr->next->name)++==(*a)++) 
	if(strcmp(ptr->next->name,a)!=1)	
		{
			break;
		}
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=ptr->next->next;
	free(temp);
	return head;
}
void print_link(stu *head)
{
	if (head==NULL) {
		printf("NULL");
	}
	while(head!=NULL)
	{
		printf("%5d   %s\n",head->ID,head->name);
		head=head->next;
	}
}
int main(int argc, const char *argv[])
{
	stu *head=NULL;

	stu *p=delete_link(add_link(head));
	print_link(p);
	return 0;
}
