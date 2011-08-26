#include <stdio.h>
#define N  20
int main(int argc, const char *argv[])
{
    char str[N];
    char *ptr;
    int i=0;

    ptr=str;

    for (i = 0; i < N; i++,ptr++)
   { 
        *ptr='a'+i;
    }
    *ptr='\0';//
    printf("str=%d\n",str[2]);//

    /*for (i = 0; i < N; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");*/
    return 0;
}
