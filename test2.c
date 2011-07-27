#include<stdio.h>
int main(int argc, const char *argv[])
{
    char a=0x32;
    char y=0x3c;
    char b=0;
    b=(a & y);
    b >>=2;
    printf("%u\n",b);
    return 0;
}
