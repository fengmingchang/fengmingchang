# include <stdio.h>
int main ( int argy, const char *argv[])
{
    int a,b,c;
    int h ;
    
    printf ("请输入h=");
    scanf ("%d",&h);
    for( a = 0; a < h;a++)
    {    printf(" ");
    
        for ( b = 0; b<a;b++)
            printf ("*");

    
    
    }


 return 0;

}
