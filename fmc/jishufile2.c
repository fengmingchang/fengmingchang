# include <stdio.h>
# include<stdlib.h>
 int main ( int  argy , const char *argv[])
{
    //声明一个指针
    FILE *fp = NULL;
    char ch;
    //声明一个long int行的变量
    long int conunt = 0;
    //判断用户输入的是否为正确的格式
    if ( argy !=2)
    {
    printf("input format is error\n");
    exit(1);
    }

    //打开文件
    fp = fopen(argv[1],"r");

    //判断文件是否为空文件
    if(NULL == argv[1])
    {
    printf(" please  agren iput:\n");
    exit(1);
    }
   
    //读出文件并计数
    ch = fgetc(fp);
   while(ch !=EOF)
   { 
       conunt++;
       printf("%c",ch);
       ch = fgetc(fp);
   
   }

    //关闭文件
    fclose(fp);
    return 0;
}
