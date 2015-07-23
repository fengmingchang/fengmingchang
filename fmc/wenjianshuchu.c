# include <stdio.h>
# include<stdlib.h>
 int main ( int  argy , const char *argv[])
{
    //声明一个文件指针，用于标示打开的文件
    FILE *fp = NULL;
    //声明一个long 变量，用于统计文件中的支付个数
     long int num  = 0;

    //声明一个变量   用于接收文件呃字符
    char ch;
    //判断用户的输入的是否是正确的格式
    if ( argy != 2)
    {
        printf("input formatis error\n");
       exit(1); 
    }
    //打开；路径
    fp = fopen(argv[1],"r");

    //检查文件是否被打开
    if ( NULL ==    fp)
    {
         printf ("open file %s error ",argv[1]);
         exit(1);
    }
    //读取文件
     ch =  fgetc(fp);
      while (ch != EOF)
      {
          num++;

          printf ("%c",ch);
          ch = fgetc(fp);
      }
       printf ("the file %s catain %ld char\n",argv[1],num);
      fclose(fp);

    return 0;
}
