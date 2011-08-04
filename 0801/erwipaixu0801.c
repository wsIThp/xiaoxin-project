#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define m 8
#define n 8

void init_array(int (*a)[m],int n)
{
    int i,j;
    int a[i][j];
    srand(time(NULL));
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j]=rand()%40;
            printf("%5d",a[i][j]);
        }
     }
    return 0;
}

int main(int argc, const char *argv[])
{
    int array[m][n];
    init_array(array,n);
    return 0;
}
