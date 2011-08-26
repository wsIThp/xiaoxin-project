#include <stdio.h>/////指针练习
#define N  20
int main(int argc, const char *argv[])
{
    char str[N]="abcdefghijklmn";
    char *ptr;
  
    ptr=str;
    /*for (i = 0; i < N; i++,ptr++)
    {
        *ptr='a'+i;
    }
    *ptr='\0';//
    printf("str=%s\n",str);//

    for (i = 0; i < N; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");*/
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}
