#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[10]={11,8,2,4,3,5,9,77,44,25};  
    int i;
    //int *p;
    int q;
    //p=a;
    for (i = 0; i < 10; i++) 
    {
        if (a[i]>a[i+1])
        {
           // q=*p;
            //*p=a[i];
            //a[i]=q;
            q=a[i];
            a[i]=a[i+1];
            a[i+1]=q;
            
            
            
        }
        //else
        //{
          //  p++;
        //}
        printf("%d\n",a[i]);
    }
    return 0;
}
