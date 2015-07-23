# include <stdio.h>
 int main ( int argv , const char *argy[])
{
  int myInt ,antherMyInt ;
  int my;
  do 

   {  
       printf("qingshuru liang geshu :\n");
       scanf ("%d,%d",&myInt,&antherMyInt);
  
   if( myInt > antherMyInt)
       printf("myInt more than antherMyInt");
   if(myInt < antherMyInt)
   {
       printf ("myInt dengyu antherMyInt");
   }else
       printf ("myInt dengyu antherMyInt");
  
      printf(" 请输入1.继续；!0.退出\n");
      scanf ("%d",&my);
  
  }while(my == 1);


}
