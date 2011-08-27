//////用添加节点的方法构建一个10个节点的链表起初链表为空
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student 
{
    char name[20];
    int number;
    struct student *next;
};
typedef struct student stu;
stu *create_link(stu *p)
{
    int i=0;
    stu *ptr=NULL;
    stu *head = p;
   

    ptr = malloc(sizeof(stu));
    if (ptr==NULL)
    {
        perror("create");
        exit(0);
    }
    printf("input a number :");
    scanf("%d" ,&ptr->number);
    printf("input a name :");
    scanf("%s" ,ptr->name);
    ptr->next = NULL;
    if(p == NULL)
    {
      return ptr;
    }
    if(p->number > ptr->number)
    {
       ptr->next = p;
       head = ptr ;
    }
    while(p->next != NULL)
    {
       if(p->number > ptr->number)
       {
          break;
       }
       p = p->next;
    }
    ptr->next =p->next;
    p->next = ptr;
    return head;
}
void printf_link(stu *p)
{
    while(p!=NULL)
    {
    printf("%d     %s",p->number,p->name);
    p=p->next;
    }
}
int main(int argc, const char *argv[])
{
    stu *head=NULL;
    int i =0;
    for(i = 0;i < 10;i++)
    {
       head=create_link(head);
    }
    printf_link(head);
    return 0;
}


