/*open 函数参数的区别  fputs函数的使用*/
/*输出printf不会自动换行   puts会自动换行*/
/*函数gets：一种流*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    char str[1024]="I love you ";
    char r_str[1024]={0};    
    //fp=fopen("open.txt","a+");////a+的意义是在txt文本后边上次结束的地方直接写入字符窜的内容。。
    fp=fopen("open.txt","w+");///参数可变动
    //fp=fopen("open1.txt","w+");// 在不存在open1.txt的情况下“w+”会自动创建文件进行写入
    //fp=fopen("open1.txt","r+");// 在不存在open1.txt的情况下“r+”不会创建文件会报错 
    if (fp==NULL)
    {
        perror("open");
        exit(0);
    }
    
   //// fputs(str,fp);///////打印到fp所指的文件中
    puts(str);  ////输出会自动换行 会直接打印到屏幕
    gets(r_str);  /////一种输入 流 不会换行 得自己从屏幕上输入这个函数会自己记录到所指的字符窜中，这个函数会记录空格。
    printf("%s",r_str);
    fclose(fp);
    return 0;
}
