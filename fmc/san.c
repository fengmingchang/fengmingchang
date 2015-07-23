# include <stdio.h>
 int main ( int  argy , const char *argv[])
{  
   int i,j,c;
   int h;
   printf ("please  input value:h=\n");
   scanf ("%d",&h);
  for(i = 1;i <= h;i ++)
  { 
      for( j=0; j < h - i ; j ++ )
       
         printf(" ");
        
      for( c = 1;c <= 2 * i - 1  ; c++)
         
         printf("*");
      
 
         printf("\n");
  }

  
    return 0;
}
