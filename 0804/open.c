#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp=NULL;
    //char str[1024]="I love you ";
    char r_str[1024]={0};
    //printf("%s\n",str);
    fp=fopen("open.txt","w");
    //////////fp=fopen("open.txt","r");
    if (fp==NULL)
    {
        perror("open");
        exit(0);
    }
    ////fscanf(fp,"%s\n",r_str);  //把fp的内容读到r_str中 读的时候 以空格和回车键为结束符这是他的一个缺陷。
    //fprintf(fp,"%s\n",r_str); //意思是把str的内容复制到fp中
    //fgets(r_str,1023,stdin);// 遇到回车键结束可以输出空格
    printf("%s\n",r_str);
    fclose(fp);
    return 0;
}


/*fgets可以读取空格并保存     stdin是标准输入流    stdout是标准输出流
fprintf------>printf  
fscanf------->scanf

fputs-------->puts
fgets-------->gets

stdin
stdout

*/





