# include <stdio.h>
 int main ( int  argy , const char *argv[])
{
   
    int *zhizhen;
    int my = 200;
    zhizhen = &my;
    *zhizhen = 1000;
   printf ("da yin my:%d\n",my);
  printf ("%p",zhizhen); 
    return 0;
}
