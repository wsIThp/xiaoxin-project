#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a=0x424588aa;
    int mask = 0x0f;
    int i = 0;
    int move = 28;
    char str[17]="0123456789abcdef";

    printf("0x");

    for (i = 0; i < 8; i++) 
    {
        printf("%d",str[((a >> move) & mask)]);
        move = move-4;
        
    }
    printf("\n");
    return 0;
}
