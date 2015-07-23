 # include <stdio.h>
  
 int main ( int  argy , const char * argv [])
{
    int myValue = 0;
    int   anthermy=100;
    if ( myValue >=1 && myValue <= 100)
        printf ("the myValue's value:%d\n",myValue);
    if (myValue >= 1 && anthermy++)
        printf ("the myValue's value:%d\n",myValue);
        printf ("the anthermy's value:%d\n",anthermy);

       
     
      return 0;
}
