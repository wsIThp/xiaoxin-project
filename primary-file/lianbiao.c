#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int number;
    char name[10];
    struct student *p;
};
typedef struct student STU ;

int main(void)
{
    STU *ptr=NULL;
    ptr=malloc(sizeof(STU));
    if(ptr==NULL)
    {
        perror("malloc");
        exit(0);
    }
    ptr->number=1;
    strcpy(ptr->name,"liu");

    printf("%-5d      %s",ptr->number,ptr->name);
    printf("\n");
    return 0;
}
