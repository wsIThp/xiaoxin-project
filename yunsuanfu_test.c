#include <stdio.h>
int i,j;
int a[100];
int *b;
int c=0;

  int  shushu(int *b ,int n)
  {
       int i = 0;
       int count = 0;
      for(i = 0;i < n ;i++)
      {
        if(b[i] % 10 ==9)
        {
           count++;
        }
      }
      return count;
   } 

int main(int argc, const char *argv[])
{   
    for (i = 0; i < 100; i++)
    {
        a[i]=i+1;
        printf("%5d", a[i]);
    }
    printf("\n");
    printf("%d\n",shushu(a , 100));
    //printf("%d",a[i]);
    //printf("\n");
    //shushu(a[i],j);  



    printf("\n");

    return 0;
}
 
