/*将一个文件1.text中的内容复制到2.text中
一个指针 也可以实现     两个指针也可以
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    //FILE *f_p=NULL;
    char str[1000]={0};

    fp=fopen("1.txt","r+");
    if (fp==NULL)
    {
        perror("create");
        exit(0);
    }
    int i=0;   ///////在运行完上边的程序后i已经不是0了，得重新定义为0
    while((str[i]=getc(fp))!=EOF)
    {
        i++;
    }
    str[i] = '\0';
    printf("%s\n",str);
//    fclose(fp);
    fp=fopen("2.txt","w+");
    if (fp==NULL)
    {
        perror("create");
        exit(0);
    }
    i = 0;
    while(str[i]!='\0')
    {
        putc(str[i],fp);
        i++;
    }
    fclose(fp);
   // fclose(f_p);
    return 0;
}
