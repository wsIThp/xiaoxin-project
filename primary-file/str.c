#include <stdio.h>
#include <string.h>
/*******************************************************************************memset函数(初始化)把s所指的内存地址开始的n个字节都填充为c的值。通常c的值为0，把一块内存区清零。例如定义char buf[10];，如果它是全局变量或静态变量，则自动初始化为0（位于.bss段），如果它是函数的局部变量，则初值不确定，可以用memset(buf, 0, 10)清零，由malloc分配的内存初值也是不确定的，也可以用memset清零。*/
/*int main(int argc, const char *argv[])
{
	char a[10]="ajsda";
	printf("%s\n",a);
	memset(a,'s',3);
	printf("%s\n",a);
	return 0;
}*/

/*******************************************************************************strlen函数（取字符窜长度）返回s所指的字符串的长度。该函数从s所指的第一个字符开始找'\0'字符，一旦找到就返回，返回的长度不包括'\0'字符在内。例如定义char buf[] = "hello";，则strlen(buf)的值是5，但要注意，如果定义char buf[5] = "hello";，则调用strlen(buf)是危险的，会造成数组访问越界。strlen函数返回s所指的字符串的长度。该函数从s所指的第一个字符开始找'\0'字符，一旦找到就返回，返回的长度不包括'\0'字符在内。例如定义char buf[] = "hello";，则strlen(buf)的值是5，但要注意，如果定义char buf[5] = "hello";，则调用strlen(buf)是危险的，会造成数组访问越界。*/
/*int main(int argc, const char *argv[])
{
	char a[]="askjfasklfjakls";
	int b;
	b=strlen(a);
	printf("%d\n",b);
	return 0;
}*/
/*********************************stcncpy*************************************/
/*int main(int argc, const char *argv[])
{
	char b[10];
	strncpy(b,"ajfhskjhfjksadhgkj",sizeof(b));
	printf("%d\n",sizeof(b));
	printf("%s\n",b);
	printf("%c\n",b[9]);///////stcncpy不保证最后一位是 \0
	return 0;
}*/

/***************************（拷贝字符窜）
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
memcpy函数从src所指的内存地址拷贝n个字节到dest所指的内存地址，和strncpy不同，memcpy并不是遇到'\0'就结束，而是一定会拷贝完n个字节。这里的命名规律是，以str开头的函数处理以'\0'结尾的字符串，而以mem开头的函数则不关心'\0'字符，或者说这些函数并不把参数当字符串看待，因此参数的指针类型是void *而非char *。

memmove也是从src所指的内存地址拷贝n个字节到dest所指的内存地址，虽然叫move但其实也是拷贝而非移动。但是和memcpy有一点不同，memcpy的两个参数src和dest所指的内存区间如果重叠则无法保证正确拷贝，而memmove却可以正确拷贝。假设定义了一个数组char buf[20] = "hello world\n";，如果想把其中的字符串往后移动一个字节（变成"hhello world\n"），调用memcpy(buf + 1, buf, 13)是无法保证正确拷贝的：
******************************/
/*int main(int argc, const char *argv[])
{
	char a[10]="asdhasf";
	char b[1];
	memcpy(b,a,10);
	memmove(a,a+1,5);
	printf("%s\n",a);
	//printf("%s\n",b);
	
	return 0;
}*/

/****************（链接字符窜）**************************
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
调用strcat函数后，缓冲区s的内容没变，缓冲区d中保存着字符串"foobar"，注意原来"foo"后面的'\0'被连接上来的字符串"bar"覆盖掉了，"bar"后面的'\0'仍保留。
strcat和strcpy有同样的问题，调用者必须确保dest缓冲区足够大，否则会导致缓冲区溢出错误。strncat函数通过参数n指定一个长度，就可以避免缓冲区溢出错误。注意这个参数n的含义和strncpy的参数n不同，它并不是缓冲区dest的长度，而是表示最多从src缓冲区中取n个字符（不包括结尾的'\0'）连接到dest后面。如果src中前n个字符没有出现'\0'，则取前n个字符再加一个'\0'连接到dest后面，所以strncat总是保证dest缓冲区以'\0'结尾，这一点又和strncpy不同，strncpy并不保证dest缓冲区以'\0'结尾。所以，提供给strncat函数的dest缓冲区的大小至少应该是strlen(dest)+n+1个字节，才能保证不溢出。
******************************************/
/*(比较字符窜)
int memcmp(const void *s1, const void *s2, size_t n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
memcmp从前到后逐个比较缓冲区s1和s2的前n个字节（不管里面有没有'\0'），如果s1和s2的前n个字节全都一样就返回0，如果遇到不一样的字节，s1的字节比s2小就返回负值，s1的字节比s2大就返回正值。

strcmp把s1和s2当字符串比较，在其中一个字符串中遇到'\0'时结束，按照上面的比较准则，"ABC"比"abc"小，"ABCD"比"ABC"大，"123A9"比"123B2"小。

strncmp的比较结束条件是：要么在其中一个字符串中遇到'\0'结束（类似于strcmp），要么比较完n个字符结束（类似于memcmp）。例如，strncmp("ABCD", "ABC", 3)的返回值是0，strncmp("ABCD", "ABC", 4)的返回值是正值。
*/

/*int main(int argc, const char *argv[])
{
	char a[10]="abcdefg";
	char b[10]="abcdefgh";
	printf("%d\n",memcmp(a,b,4));
	printf("%d\n",strcmp(a,b));
	printf("%d\n",strncmp(a,b,4));
return 0;
}*/

/********************************************(搜索字符窜)
	char *strchr(const char *s, int c);
	char *strrchr(const char *s, int c);
	strchr在字符串s中从前到后查找字符c，找到字符c第一次出现的位置时就返回，返回值指向这个位置，如果找不到字符c就返回NULL。strrchr和strchr类似，但是从右向左找字符c，找到字符c第一次出现的位置就返回，函数名中间多了一个字母r可以理解为Reverse。	strstr在一个长字符串中从前到后找一个子串（Substring），找到子串第一次出现的位置就返回，返回值指向子串的开头，如果找不到就返回NULL。这两个参数名很形象，在干草堆haystack中找一根针needle，按中文的说法叫大海捞针，显然haystack是长字符串，needle是要找的子串。
*********************************************/
/*int main(int argc, const char *argv[])
{
	char a[100]="abcdefghijklmn";
	char b;
	scanf("%c",&b);
	if(strchr(a,b))
	{
		printf("OK\n");
	}	
	if(strrchr(a,b))
	{
		printf("rok\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}*/

/*
char *strtok(char *str, const char *delim);
char *strtok_r(char *str, const char *delim, char **saveptr);
参数str是待分割的字符串，delim是分隔符，可以指定一个或多个分隔符，strtok遇到其中任何一个分隔符就会分割字符串
首次调用时，s指向要分解的字符串，之后再次调用要把s设成NULL。
　　strtok在s中查找包含在delim中的字符并用NULL('')来替换，直到找遍整个字符串i
每次调用strtok把str中的一个分隔符改成'\0'，分割出一个小字符串，并返回这个小字符串的首地址*/

int main(int argc, const char *argv[])
{
	char str[]="abc,def,a,dea,sad,adada,skjd";
	char *token;
	token=strtok(str,"a");
	if(token)
	printf("%s\n",token);
	//while((token=strtok(NULL,"a"))!=NULL)///这句代码可以将所有的分割后的字符窜打印出来。
	token=strtok(NULL,"a");
	printf("%s\n",token);

	token=strtok(NULL,"a");
	
	printf("%s\n",token);
	return 0;
}
