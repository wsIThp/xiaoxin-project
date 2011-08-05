/*strlen():求一段字符窜的实际长度
 fwrite:
 fread:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    char str[100]="i love you";
    char r_str[100]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    fp=fopen("1.txt","w+");
    if (fp==NULL)
    {
        perror("create");
        exit(0);
    }
 
    int n=0;
    fwrite(str,1,strlen(str),fp);//将fpstr的内容写到fp所指的文件中   1指打印的时候以一个字节一个字节打印。。   strlen 求出str的长度
    fseek(fp,0,SEEK_SET);
    n=fread(r_str,1,1023,fp);///
//    r_str[n]='\0';//////假如没有这据代码，读出来的会加上aaaaaa   这句就是说读到r_str[n]的结尾就结束不往下读了
    printf("%s",r_str);
    return 0;
}
