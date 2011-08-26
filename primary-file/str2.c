/*相关函数: bcopy(), memccpy(), memmove(), strcpy(), strncpy()
表头文件: #include <string.h>
定义函数: void *memcpy(void *dest, const void *src, size_t n)
函数说明: memcpy()用来拷贝src所指的内存内容前n个字节到dest所指的内存地址上。与strcpy()不同的是,memcpy()会完整的复制n个字节,不会因为遇到字符串结束'\0'而结束
返回值:   返回指向dest的指针
附加说明: 指针src和dest所指的内存区域不可重叠*/
#include <string.h>
#include <stdio.h>

int main()
{
    char a[30] = "string (a)";
	char b[30] = "hi\0zengxiaolong";
    int i;
	strcpy(a, b);             //a[30] = "hi\0ing (a)"strcpy遇到\0结束
	printf("strcpy():");
	for(i = 0; i < 30; i++)
	printf("%c", a[i]);   //hi ing (a)
	memcpy(a, b, 30);         //a[30] = "hi\0zengxiaolong"
    printf("\nmemcpy():");		////memcpy遇到\0不会停，也不复制\0这个字节
    for(i = 0; i < 30; i++)
	printf("%c", a[i]);   //hi zengxiaolong
	printf("\n i = %d\n", i); //30													
	}
