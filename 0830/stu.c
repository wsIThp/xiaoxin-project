#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int number;
	char name[10] ;
	char sex;
};

typedef struct student stu;

int add_msg(stu *q)
{
	int n=0;
	FILE *fp=fopen("8.txt","a+");
	int num=0;
	char m[10]={0};
	char name[10]={0};
	char sex[100]={0};
	char number[10]={0};

	q=malloc(sizeof(stu));
	if(q==NULL)
	{
		perror("eror input \n");
		exit(-1);
	}
	printf("input num of student:\n");
	fgets(m,100,stdin);
	num=atoi(m);

	while(num)
	{
	printf("intput number\n");
	fgets(number,sizeof(number),stdin);
	number[strlen(number)-1]='\0';
	q->number=atoi(num);

	printf("input name\n");
	fgets(q->name,sizeof(q->name),stdin);
	q->name[strlen(q->name)-1]='\0';
	//strcpy(q->name,name);
	
	printf("input sex as m or w\n");
	fgets(sex,sizeof(sex),stdin);
	q->sex=sex[0];
	
	fwrite("\t",1,1,fp);
	fwrite(num,1,strlen(num),fp);
	fwrite("\t",1,1,fp);
	fwrite(q->name,1,strlen(q->name),fp);

	fwrite("\t",1,1,fp);
	//fwrite(sex,1,sex[0],fp);
	fwrite(&q->sex,1,1,fp);
	fwrite("\t",1,1,fp);
	num--;
	}
	return 0;	
}

int main(int argc, const char *argv[])
{
	stu *p;
	add_msg(p);
	printf("\n");
	return 0;
}







