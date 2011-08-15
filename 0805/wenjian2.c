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
    fwrite(str,1,strlen(str),fp);//将str的内容写到fp所指的文件中   1指打印的时候以一个字节一个字节打印。。   strlen 求出str的长度
    fseek(fp,0,SEEK_SET);
    n=fread(r_str,1,1023,fp);///fread函数是将fp所指文件中的内容读到r_str中，n=是求出r_str的长度，没有赋值给n时此函数也可以将fp的内容读到r_str中，但是如果r_str中以前有内容并且比fp所指文件内容多的话，会将之后的内容都读出来，在这种情况下如果只想读fp 的内容，就得先求出fp中内容的长度，最后给r_str[n]赋空就像下面的代码一样，
    r_str[n]='\0';//////假如没有这据代码，读出来的会加上aaaaaa   这句就是说读到r_str[n]的结尾就结束不往下读了
    printf("%s\n",r_str);
    return 0;
}
