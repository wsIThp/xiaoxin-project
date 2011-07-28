#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i=0;
    int a[100];
     while(i < 100)
    {
        a[i] =  i+1 ;
        printf("%4d",a[i]);
        i<100;
        i++;
    }
    printf("\n");
    return 0;
}
