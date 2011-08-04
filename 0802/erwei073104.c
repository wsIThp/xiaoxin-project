//#include <stdio.h>
/*int main(int argc, const char *argv[])
{
    int i;
    int j;
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12,};
    
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {    
           // if((a[i][j])%4==0);
            printf("%5d",a[i][j]);
            //printf("\n");
        }
    }


    return 0;
}*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 10
#define N 8
int main(int argc, const char *argv[])
{
    int i;
    int j;
    int array[M][N];
    srand(time(NULL));
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            array[i][j]=rand()%(2*M);
        }
    }
    for (i = 0; i < M; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
        {
            printf("%4d",array[i][j]);
        }
    }
    printf("\n");
    printf("%p\n",&array[0][0]);
    printf("%p\n",&array[0]);
    printf("%p\n",array[0]);
    printf("%p\n",array);
    return 0;
    

}
