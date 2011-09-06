#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int *exise_array(int *a,int n)
{
	srand(time(NULL));
	int i=0;
	int j=0;
	int flag[10] = {0};

	while(i<n) 
	{
		
		a[i]=rand()%10;
		if (flag[a[i]]==1) {
			continue;
		}
		if (a[0]==0) {
			continue;
		}
		else
		{
			flag[a[i]]=1;	
		}
		//		printf("%5d\n",a[i]);
		i++;
	}
	return a;
}

int compar_array(int *a)
{
	char number[10]={0};
	int i=0;
	int j=0;
	int k=1;
	char quit[]="quit";
	while(k>0)
	{
		int i=0;
		printf("please input four number :\n");
		fgets(number,10,stdin);
		number[strlen(number)-1]='\0';
		//printf("%d\n",*(number++));
		if (strlen(number)!=4) {
			printf("please input create number(four):\n");
			continue;
		}
		for (i = 0; i < 4; i++) 
		{
			if((number[i]) < '0'|| (number[i]) > '9') 
			{
				printf("can not seiet char data\n");
				return compar_array(a);
			}
		}
		if (strcmp(number,quit)==0) {
			exit(-1);
		}
		if (strlen(number)==4) 
		{
			for (i = 0; i < 4; i++) 
			{
				for (j = 0; j < 4; j++)
				{
					if ((number[i]==number[j])&&(i!=j))
					{
						printf("can not seist same data,please input again:");
						return compar_array(a);
					}
					if ((number[i]!=number[j])&&(i!=j)) 
					{
						k=0;
						correct_game(number,a);
					}
				}
			}
		}	
	}
}

int correct_game(char *number,int *a)
{
	int i=0;
	int j=0;
	int countA=0;
	int countB=0;

	for (i = 0; i < 4; i++) 
	{
		if ((a[i]+'0')==number[i]) 
		{
			countA++;
		}
		for (j = 0; j < 4; j++) 
		{
			if (((a[i]+'0')==number[j])&&(i!=j)) 	
			{
				countB++;
			}
		}
	}
	if (countA==4) {
		printf("you are very clever,you WIN:\n");
		return 0;
	}
	else
	{
		printf("%dA%dB\n",countA,countB);
		printf("go on :come on\n");
		compar_array(a)	;
	}
}

int main(int argc, const char *argv[])
{
	int a[4];
	exise_array(a,4);
	compar_array(a);	
	return 0;
