# include <stdio.h>
void passAlong(int myVar);
void printMyVar(int myVAR);
    int myVar;
 int main ( int  argy , const char *argv[])
{
    myVar=10;
  passAlong(myVar);
    return 0;
}
void passAlong(myVar)
{
  printMyVar(myVar);
}
void printMyVar( myVar)
{
  printf("da yin :%d",myVar);
}
