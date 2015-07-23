#include <stdio.h>
int main (int argy ,const char *argv[])
{
    int myInt ;
    int l;
    myInt = 3 * 5 + 8;
    printf ("the  frist myInt is:%d\n",myInt);
    myInt = 3;
    l  =--myInt;
    printf (" this is myInt :%d \n",myInt);
    myInt = 3;
     l  =myInt++;
    printf (" this is myInt :%d \n,",myInt);

return 0;
}
