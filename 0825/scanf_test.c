#include <stdio.h>
int main(int argc, const char *argv[])
{
	char str[100]="akaedu";
	int num ;
	char ch;

	//scanf("%s",str);
	//scanf("%c",&ch);
	//scanf("%d",&num);
	
	printf("%s",str);
	while(1)
	//printf("%c",ch);
	//printf("%d",num);
	return 0;
}
/**********************
 *输入输出先分别进入输入缓冲区  输出缓冲区   scanf函数在输入缓冲区里取数据   printf函数在输出缓冲区取数据   回车也输入到输入缓冲区里，字符型的可读取到\n，整形的读取不到\n
*************************/
