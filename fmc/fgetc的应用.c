# include <stdio.h>
# include <stdlib.h>
char ch;
 int main ( int  argy , const char *argv[])
{
    char shuzu[211];
    char cw;
    int i=0;
    FILE *fp = NULL;
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




      ch= fgetc(fp);
   while(ch != EOF)
{
  shuzu[i] = ch;
  ch = fgetc(fp);
  i++;
}
for(i=5;i<35;i++)
{
printf("%c",shuzu[i]);
}

fclose(fp);

    return 0;
}
