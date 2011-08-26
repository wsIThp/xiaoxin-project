#include <stdio.h>
int main(int argc, const char *argv[])
{
	int count	;
	int n;
	printf("input");
	scanf("%d",&count);
	 n = (count + 7) / 8;  
	    switch (count % 8)
		    {
			    case 0:    do { printf("*\n");
							    	case 7:    	printf("*\n"); 
			 					    case 6:    	printf("*\n");
							    	case 5:    	printf("*\n");
							        case 4:   	printf("*\n");
			       				    case 3:     printf("*\n");
			  	     			    case 2:     printf("*\n");
							        case 1:     printf("*\n");
	                           } while (--n > 0);
			 }
	return 0;
}
