#include <stdio.h>
#define N 20
int main(int argc, const char *argv[])
{
    char a[N]="hello world!";
    char *ptr;
    ptr=a;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    while(ptr >= a)
    {
        printf("%c",*ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
