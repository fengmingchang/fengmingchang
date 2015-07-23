# include <stdio.h>
#include <stdlib.h>
 int main ( int  argy , const char *argv[])
{
  FILE *fp = NULL;
  FILE *wtp =NULL;
  char cw, ch;
  fp = fopen ("/Users/qingyun/Desktop/fmc/int.c","r");
  if (NULL == fp)
  {
      printf ("cuowo\n");
      exit (1);
  }
  wtp = fopen("/Users/qingyun/Desktop/qy.txt","w");
  if(NULL  ==  wtp)
  {
  printf("dakai  cuowo\n");
  exit(1);
  }

  ch = fgetc(fp);
  while(ch != EOF)
  {
     printf("%c",ch);
    // cw = ch;
     fputc(ch,wtp);
     ch = fgetc(fp);
  }
  fclose(fp);
  fclose(wtp);
    return 0;
}
