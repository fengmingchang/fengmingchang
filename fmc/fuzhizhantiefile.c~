# include <stdio.h>
# include <stdlib.h>
#define BUFSIZE 32
 int main ( int  argy , const char *argv[])
{
    FILE *fp = NULL;
    FILE *wtp=  NULL;

    char buffer [BUFSIZE] = {"\0"};
//    if (NULL !=fgets(buffer,BUFSIZE,stdin) )
  //      printf ("%s\n",buffer);
    fp = fopen ("/etc/passwd","r");
    if (NULL  == fp)
    {
      printf ("打开错误\n");
      exit(1);

    }
    wtp = fopen ("/Users/qingyun/Desktop/fmc.txt","w");
    if (NULL == wtp)
    {
     printf ("%s\n",wtp);
     exit(1);
    }
   while (fgets(buffer,BUFSIZE,fp) != NULL)
   {
      fputs(buffer,stdout);
      fputs(buffer,wtp);
   
   }



    return 0;
}
