/*getc从已有的文件中输出字符一个一个的输出*/
/*putc从字符窜输入到指定文件中*/
#include <stdio.h>
int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    char r_str[100]="abcd  ef  gja ";
    fp= fopen("open.txt","r+");/////参数可以改变
    if (fp==NULL)
    {
        perror("open");
        exit(0);
    }
    int i=0;
    //while((r_str[i]=getc(fp))!=EOF)
   // {
    //    i++;
   // }
    while(r_str[i]!='\0')
    {
        putc(r_str[i],fp);
        i++;
    }
   // r_str[i]='\0';
    printf("%s",r_str);
    close(fp);
    return 0;
}
