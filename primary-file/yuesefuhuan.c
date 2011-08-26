#include <stdio.h>
#define N 20
int main(int argc, const char *argv[])
{
    char array[N] = {0};
    int i = 0;
    int interval = 4;
    int out_counter = 0;
        
    for (i = 0; ; i++)
    {
        if (i==N)
        {
            i=0;
        }
        if (array[i]==0)
        {
            out_counter++;
            if (out_counter==interval)
            {
               out_counter=0;
               array[i]=1;
               printf("%4d(out)\n",i+1);
              /* array[i]=1;
                printf("%4d",i);*/
            }
            else
            {
               printf("%4d",i+1);
               /* array[i]=0;*/
            }
        }
       
    }

    return 0;
}
