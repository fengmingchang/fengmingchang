# include <stdio.h>
 int main ( int  argy , const char *argv[])
{
   int a;
   char b;
   short int c;
   long int d;
   size_t  my1 = sizeof (a);
   printf ("%zu\n",my1);
   size_t my2 = sizeof(int );
   printf ("%zu\n",my2);
   size_t my3 = sizeof (char);
   printf("%zu\n",my3);
   size_t my4 = sizeof (short );
   printf ("%zu\n",my4);
   size_t my5 = sizeof (long );
   printf ("%zu\n",my5);

    return 0;
}
