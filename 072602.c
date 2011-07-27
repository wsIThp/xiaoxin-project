#include<stdio.h>

int main(int argc, const char *argv[])
{

    unsigned int a=0x556677;
    unsigned int mask = (1<<31);  


    for (;mask > 0 ; mask >>=1)
    {
        printf("%c",((a & mask) > 0) ? '1' : '0');
    }

    
    printf("\n");
    return 0;
}
