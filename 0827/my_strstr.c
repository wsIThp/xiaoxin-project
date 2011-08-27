#include <stdio.h>
#include <string.h>

char *my_strstr(char *src,char *dest)
{
	int num=0;
	char *temp = dest;
	int i=strlen(dest);
	int j=strlen(src);
	while(*src!='\0')
	{
		if(*src==*dest)
		{	
			src++;
			dest++;
			num++;
			if(num==i)
			{
				printf("ok");
				return src-num;				
			}
			continue;
		}
		if(num > 0)
		{				
			src-=num;
			num=0;
			dest = temp;
		}
		src++;

	}	
}

int main(int argc, const char *argv[])
{
	char a[100]="tai yuan gong ye xue yuan";
	char b[10];
	char *p=NULL;
	printf("input the str :");
	fgets(b,10,stdin);
	b[strlen(b)-1]='\0';
	p=my_strstr(a,b);
	if (p==NULL) {
		printf("NULL");
	}
	if (p!=NULL) {
		printf("%s",p);
	}
	printf("\n");
	return 0;
}
