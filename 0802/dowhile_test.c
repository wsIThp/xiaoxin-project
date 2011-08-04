#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a[100];
    int i=0;

    do
    {
        a[i]=i+1;
        
        
        printf("%4d",a[i]);
        i++;
    }
    while(i<100);
    printf("\n");
    return 0;
}
