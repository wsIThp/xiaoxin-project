#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    char str[100]="i love you";
    char r_str[100]={0};
    fp=fopen("1.txt","w+");

    if (fp==NULL)
    {
        perror("create");
        exit(0);
    }

    int i=0;
    while(str[i]!='\0')
    {
        putc(str[i],fp);
        i++;
    }
    //rewind(fp);
   // fseek(fp,-2,SEEK_END);
    fseek(fp,0,SEEK_SET);
    i=0;
    while((r_str[i]=getc(fp))!=EOF)
    {   
        i++;
    }
    r_str[i]='\0';
    printf("%s",r_str);
    printf("\n");
    fclose(fp);
    return 0;
}
