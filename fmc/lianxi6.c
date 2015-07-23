 # include <stdio.h>
int main ( int argv ,const char * argy [])
{
    int i;
    i=0;
    while ( i++ <3)
        printf  ( " i is value %d\n", i);
     printf ("jie shu\n");




     int num;
     int my;
     do

     {
          printf ("please input value:\n");
          scanf ("%d",&num);
     switch(num)
       {
           case 1:
               printf("1\n");
               break;
           case 2:
               printf("2\n");
               break;
           default:
                printf("meiyou\n");

        }   
           printf ("please  input value1.exit,0.continue:\n");
            scanf("%d",&my);

     }while(my != 1);

     return 0;
}
