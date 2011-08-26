 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 int main(int argc,char **argv)
 {
         int i;
         char *token;
         char str[100];
         char max_str[100];
         char tmp_str[100];
         i=0;
         token=NULL;
         memset(str,0,100);
         memset(max_str,0,100);
         memset(tmp_str,0,100);
         while((str[i++]=getchar())!='\n')
         {
                 if(i>=100)
                 {
                         printf("超数组上限了！\n");
                         break;
                 }
         }
         if(i==100)
                 str[i-1]='\0';
         else
                 str[i]='\0';
         token=strtok(str," ");
         while((token=strtok(NULL," "))!=NULL)
         {
                 strcpy(tmp_str,token);
                 if(strlen(tmp_str)>strlen(max_str))
                 {
                         strcpy(max_str,tmp_str);
                         memset(tmp_str,0,100);
                 }
         }
         printf("%s\n",max_str);
         return 0;
		 }
