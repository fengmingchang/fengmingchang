# include <stdio.h>
 int main ( int  argy , const char *argv[])
{
    int i,j;
    int h;
    printf(" please input value:h=\n");
    scanf ("%d",&h);
    for(i = 1 ;i <= h ; i++)
    {
      for(j = h; j > i; j --)
          printf (" ");
      { 
          for ( j = 1 ; j <= 2 * i -1 ;j ++)
              printf ("*");
      }
       printf("\n");
    
    
    
    }


    return 0;
}
