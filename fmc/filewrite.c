# include <stdio.h>
#include <stdlib.h>
 int main ( int  argy , const char *argv[])

{
     // 声明一个文件指针
     FILE *fp = NULL;
     //打开一个文件
     fp = fopen ("/Users/qingyun/Desktop/file.txt","w");
     char ch;
     //判断文件是否正常打开，如果正常打开 那么退出程序
     if ( NULL == fp)
     {
         printf ("open file error \n");
         exit(1);
     }
     //在键盘设备输入字符，然后把字符写到文件里去
     ch = fgetc (stdin);//stdio stdout //标准输出 stderr 使系统自动打开的文件流
     //eof    时表示再文件中最后的结束符号   control＋d
     while ( ch != EOF)
     {
         fputc(ch,fp);
         ch = fgetc(stdin);

     }
     //关闭文件，
     fclose (fp);

    return 0;
}
