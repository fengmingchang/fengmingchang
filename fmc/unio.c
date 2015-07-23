# include <stdio.h>
# include <stdbool.h>
bool isok();
 int main ( int  argy , const char *argv[])
{
    if(isok())
        printf (" this is samll edian\n");
    else 
        printf(" this is big edian\n");
    union
    {
      int age;
      char name;

    
    }mu;
    unsigned short int age = 0x1234 ;
    //
   if( ( * (char*) &age) == 12)
       printf (" this is big edian\n");
   else
       printf("this is sanll edian\n");
    return 0;
}
bool isok()
{
    union
    {
        
        int  age;
        char name;
    }mu;
    mu.age=1;
     return (isok != 1);
}
