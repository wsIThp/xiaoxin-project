 #include <stdio.h>  
 #define N 3  
 
 int a[N];    
 void perm(int); /*求数组的全排列 */  
 void print();  
 void swap(int, int);//交换前缀     
 
 int main()
 {  
     int i; 
     //int offset;  /* 从第offset个数开始排列 */  
     for(i = 0; i<N; i++){  
         a[i] = i + 97;  
     }  
     perm(0);  
 }  
 
 void perm(int offset)
 {  
    int i, temp;  
    if(offset == N-1)
	{ 
		print();  
        return;  
     }else{  
         for(i = offset;i < N; i++){  
             swap(i, offset);//交换前缀  
             getchar();
			 perm(offset + 1);//递归  
			 getchar();
             swap(i, offset);//将前缀换回来，继续做前一次排列  
         }  
     }  
 }     
 
 void print()
 {  
     int i;  
     for(i = 0; i < N; i++)  
     printf(" %c ",a[i]);  
     printf("\n");  
 }     
 
 void swap(int i, int offset){  
     int temp;  
     temp = a[offset];  
     a[offset] = a[i];  
     a[i] = temp;  
 } 
