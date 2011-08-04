#include <stdio.h>
void hannuo(char a,char b,char c,int n)
{
    if(n==1)
    {
        printf("%c----->%c\n",a,c);
        return;
    }
    hannuo(a,c,b,n-1);
    printf("%c----->%c\n",a,c);
    hannuo(b,a,c,n-1);
}

int main(int argc, const char *argv[])
{
    int n=4;
    hannuo('A','B','C',n);
    return 0;
}
