/*链表的插入操作包含三种情况1.链表本身为空（返回添加的那个节点）2.正常的在中间插入（返回头节点）3.在头节点之前插入（返回添加的那个节点）
 *链表的删除操作包含四种情况1.
 *
 *
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define     N  20
struct student
{   
    int number;
    char name[10];
    struct student *next;
};
typedef struct student stu;
stu *init_link(int n)
{
    stu *head=NULL;
    stu *p=NULL;
    int i;
    head=p=malloc(sizeof(stu));
    if (p==NULL)
    {
        perror("create");
        exit(0);
    }
    p->number=1;
    strcpy(p->name,"wang");
    p->next=NULL;

    for (i = 1; i < N; i++) 
    {
        p->next=malloc(sizeof(stu));
        if (p->next==NULL)
        {
            perror("create");
            exit(0);
        }
        p->next->number=i+1;
        strcpy(p->next->name,"wang");
        p->next->next=NULL;
        p=p->next;
    }
    return head;
}
stu *add_link(stu *head)
{
    stu *p=head;
    stu *p_c=NULL;
    int i;
    p_c=malloc(sizeof(stu));
    if(p_c==NULL)
    {
        perror("create");
        exit(0);
    }
    printf("please input the number :\n");
    scanf("%d",&i);
    p_c->number=i;
    printf("please input the name :\n");
    scanf("%s",p_c->name);
    p_c->next=NULL;
    if(NULL==p)
    {
        return p_c;
    }
    if(p_c->number < head->number)
    {
        p_c->next=head;
        return p_c;
    }
    while ((p->next!=NULL)&&(p_c->number>p->next->number)) 
    {
        p=p->next;
    }
    p_c->next=p->next;
    p->next=p_c;
    return head;
}
stu *delete_link(stu *p)
{
    stu *h=p;
    stu *temp=NULL;
    int i;
    printf("please input the delete number :");
    scanf("%d",&i);
    if(p->number==i)
    {
        temp=h;
        h->next=h;
        free(h);
        return h;
    }
    if(p->next->number==i)
    {
        temp=h->next;
        h->next=h->next->next;
        free(temp);
        return h;
    }
    if(p->next==NULL)
    {
        printf("no date\n");
        return h;
    }
    if (p==NULL)
    {
        printf("empty");
        return p;
    }
}
void print_link(stu *p)
{
    if(p==NULL)
    {
        printf("no number");
        return;
    }
    while(p!=NULL)
    {
        printf("%d     %s\n",p->number,p->name);
        p=p->next;
    }
    return;
}
int main(int argc, const char *argv[])
{
    stu *head=NULL;
    int flag=1;
    int i=0;
    printf("请输入你的选项  1：add  2: delete  3: printf  4: save 5: exit\n");
    while(flag>0)
    {
        scanf("%d",&i);
        switch(i)
        {
            case 1:head=add_link(head);break;
            case 2:head=delete_link(head);break;
            case 3:print_link(head);break;
            //case 4:save_link(head);break;
            case 5:flag=0;break;
            default:break;
        }
    }
    printf("\n");
    return 0;
}
