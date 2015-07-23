# include <stdio.h>
void chang(int *number);
 int main ( int  argy , const char *argv[])
{
    int number ;
    number = 500;
    chang (&number);
    printf ("dayin number :%d",number);

    return 0;
}
void chang (int *number)
{
    *number = 250;
    printf ("da yin number:%d\n",*number);
}
