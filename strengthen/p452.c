#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char *a[5]={"Beijing","Shanghai","Hangzhou","Wuhan","Qingdao"};
	int i,j,p;
	char *temp;
	for (i = 0; i < 4; i++) {
		for (j = i+1; j < 5; j++) {
			p=i;
			if (strcmp(a[p],a[j])>0) {
				p=j;
			}
			if (p!=1) {
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		for (i = 0; i < 5; i++) {
			printf("%s\n",a[i]);
		}
	}
	return 0;
}
