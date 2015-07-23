# include <stdio.h>
void passAlong (void);
void printMyVar(void);

    int myVar;
 int main ( int  argy , const char *argv[])
{
    
    myVar = 30 ;
passAlong();
    return 0;
}
void passAlong (void)
{
    printMyVar();
}
void printMyVar(void)
{
    printf("myVar=:%d",myVar);
}
