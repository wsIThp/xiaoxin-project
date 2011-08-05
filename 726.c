#include<stdio.h>
int main(int argc, const char *argv[])
{

    unsigned int a=0x445677;
    unsigned int mask = (1<<31);    
    int  i = 0 ;


    for (i = 0; i < 32; i++) {
        printf("%c",((a & mask)>0)?'1':'0');
        mask >> 1;
    }

    
    printf("\n");
    return 0;
}
