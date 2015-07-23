# include <stdio.h>
int add(int frist,int second);
 int main ( int  argy , const char *argv[])
{
   int my;
   int frist;
   int second;
   printf ("  please :\n");
   scanf ("%d",&frist);
   printf(" please :\n");
   scanf ("%d",&second);
   my = add(frist ,second);
printf("dayin :%d\n",my);
  
    return 0;
}
int add (int frist,int second)
{
   
int result =frist + second;
 return result;

}

