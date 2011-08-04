#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 20
int i;
int p[n];

void sort_array(int *p,int x,int y)
{
    int i=x;
    int j=y;
    int mid=p[(i+j)/2];
    int temp=0;
    
    do {
        while((p[i]<mid)&&(i<y)) i++;
        while((p[j]>mid)&&(j>x)) j--;

        if (i<=j) {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
            i++;
            j--;
        }
    } while (i<=j);
    if (x<j) {
        sort_array(p,x,j);
    }
    if (i<y) {
        sort_array(p,i,y);
    }
    printf("%5d",p[i]);
}


int main(int argc, const char *argv[])
{
    
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {   
        p[i]=rand()%(n*2);
        printf("%5d",p[i]);
    }
    printf("\n");
    sort_array(p,0,n);
    printf("%5d",p[i]);
    return 0;
}
