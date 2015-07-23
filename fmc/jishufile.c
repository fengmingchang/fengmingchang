# include <stdio.h>
# include <stdlib.h>
 int main ( int  argy , const char *argv[])
{
   //声明一个文件指针file
   FILE *fp = NULL;
   char ch;

   //打开文件
   fp = fopen("/Users/qingyun/Desktop/fmc/int.c","r");

   //判断文件是否为空文件
   if (fp ==NULL)
   {
       printf(" file wei kong\n");
       exit(1);
   }
   //操作fgetc 再文件里一次读出一个字符
   ch = fgetc(fp);
    while (ch != EOF)
    {
      printf ("%c",ch);
      ch = fgetc(fp);
    }
   //关闭文件
   fclose(fp);

    return 0;
}
