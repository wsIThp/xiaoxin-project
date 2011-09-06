#include <stdio.h>
int main(int argc, const char *argv[])
{	
	char a[10];
	int year;
	int day;
	int month;

	printf("please input month \n");
	fgets(a,sizeof(a),stdin);
	a[1]='\0';
	month=atoi(a);
	printf("please input day \n");
	fgets(a,sizeof(a),stdin);
	a[1]='\0';
	day=atoi(a);
	printf("please input year \n");
	fgets(a,sizeof(a),stdin);
	a[1]='\0';
	year=atoi(a);

	printf("%d\t%d\t%d\t",year,month,day);
	printf("\n");
	return 0;
}
