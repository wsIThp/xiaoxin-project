#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[10]={11,8,2,4,3,5,9,77,44,25};  
    int i,j;
    int q;
    for (i = 0; i < 10; i++) 
    {
       for (j = 1; j < 10-i ; j++)
       {
           
       if (a[i]>a[j])
        {
            q=a[i];
            a[i]=a[j];
            a[j]=q;
            
            
          //  printf("%d\n",a[i]);
        }

//         printf("%d\n",a[i]);
    }
         printf("%d\n",a[i]);
    }

     //    printf("%d\n",a[i]);
    return 0;
}
