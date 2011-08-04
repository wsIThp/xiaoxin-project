#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define m 20
void init_date(int *a , int n)
{
    srand(time(NULL));
    int i=0;
    for (i = 0; i < n; i++)
    {
        a[i]=rand()%(n*2);  //定义系统给的数值取余2n，n是20即值小于40，n是10值小于20.
        printf("%5d",a[i]);
    }
    printf("\n");
}
void delete_date(int *a,int n)
{
    //int a[n];
    int i;
    int j;
    for (i = 0; i < n-1; i++)
    {
        if(a[i]!=-1)
        {
             //for (j = n; j > n-i-1; j--)
            for (j = i+1; j < n; j++)
            {
                if(a[i]==a[j])
                a[j]=-1;
                //printf("%d",a[j]);
            }
        }
        //printf("%5d",a[i]);
        //printf("\n");
    }
    //printf("%d",a[n]);
}
void printf_date(int *a,int n)
{
     int j;
     for(j=0;j<n;j++)
         { 
            if(a[j]!=-1)     //if后面不能跟分号
            printf("%5d",a[j]);
         }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    int s[m];
    init_date(s,m);
    delete_date(s,m);
    printf_date(s,m);
    return 0;
}
