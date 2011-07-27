#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a=161;
    int mask =( 1111<<4);
    int i = 0;

    for (i = 0; i < 2; i++) 
    {
        printf("%c",((a & mask) > 0 ) ? '1' : '0');
        mask >>4;
    }
    return 0;
}
