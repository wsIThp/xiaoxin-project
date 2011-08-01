/*#include <stdio.h>
struct date
{
    int a;
    char b;
    char c;
    int d;
};

int main(int argc, const char *argv[])
{
    struct date m ={11,'b','v',25};
    struct date *p=&m;
    printf("%d\n",sizeof (struct date));
    printf("%d\n",m.a); 
    printf("%d\n",(*p).a);
    printf("%d\n",p->a);
    printf("%d\n",m.b);
    printf("%d\n",m.c);
    printf("%d\n",m.d);
    return 0;
}*/

#include <stdio.h>
#include <string.h>

struct student
{
    int number;
    char name[20];
    struct student *p;  ///////
};


typedef struct student STU;
int main (void)
{
    STU m;
    STU n;          //////
    STU *ptr=NULL;//指向结构体student的指针

    ptr=&m;

    ptr->p=&n;///////////

    ptr->p->number=5;////////////////////
    strcpy(ptr->p->name,"wang");//////////////

    ptr->number=20;
    strcpy(ptr->name,"zhang" );

    printf(" n %-5d  %s\n",ptr->p->number,ptr->p->name);///////////////////
    printf("m  %-5d  %s\n",ptr->number,ptr->name);
    return 0;
}


