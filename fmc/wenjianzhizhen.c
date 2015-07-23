# include <stdio.h>
# include <stdlib.h>
 int main ( int  argy , const char *argv[])
{
   FILE  *fp = NULL;
   char ch;
    fp = fopen("/Users/qingyun/Desktop/fmc/int.c","r") ;
    if (NULL==fp)
    {
    printf("cuo wu\n");
    exit(1);
  }
    ch = fgetc(fp);
    while (ch != EOF)
    {
    printf("%c",ch);
    ch = fgetc(fp);

    
     }
    fclose(fp);
    return 0;
}
