# include <stdio.h>
# include <stdlib.h>
char ch;
 int main ( int  argy , const char *argv[])
{
    char shuzu[211];
    char cw;
    int i=0;
   // 声明一个指针
    FILE *fp = NULL;
    //打开文件
    fp = fopen ("/Users/qingyun/Desktop/qy.txt","r");

    if (NULL == fp)
    {
    printf (" cuo wu\n");
    exit(1);
    }
          
/*    ch = fgetc(stdin);
   while (ch != EOF)
{
  
      fputc(ch ,fp);
      ch = fgetc(stdin) ;
      
} */



//用char 一次读出文件的字符，并吧读出的字符 存放到shuzu里面
      ch= fgetc(fp);
   while(ch != EOF)
{
  shuzu[i] = ch;
  ch = fgetc(fp);
  i++;
}
//利用for循环 打印出来第五个字符，和后面30个字节的内容
for(i=5;i<35;i++)
{
printf("%c",shuzu[i]);
}

fclose(fp);

    return 0;
}
