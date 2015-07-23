# include <stdio.h>
# include <stdlib.h>
 int main ( int  argy , const char *argv[])
{
    FILE *fp =NULL;
    FILE *wtf =NULL;

    char ch;

   fp = fopen ("/Users/qingyun/Desktop/学生管理.txt","r");
    wtf = fopen ("/Users/qingyun/Desktop/qy.txt","w");

    if(NULL == fp)
    {
        printf("打开失败");
        exit(1);
    }
    
    if(NULL == wtf)
    {
      printf("打开失败a");
      exit(1);
    }

    ch = fgetc(stdin);
    while (ch !=EOF)
    {
      fputc(ch,wtf);
     printf("%c",ch);
     ch =fgetc(fp);
    }
    fclose(fp);
    fclose(wtf);
    return 0;
}
