# include <stdio.h>

int  add(int frist,int second);
typedef  int (*fun)(int,int);
void diao(fun f);//声明一个函数指针作为diao的行参

 int main ( int  argy , const char *argv[])
{  
 //函数指针 f1 接受函数add的地址  
   fun f1 = add;
   int he = f1(3,7);
  printf ("1 %d\n",he); 

    fun f =add;
    diao(add);
  
    return 0;
}
int  add(int frist,int second)
{
   int sum = frist + second;
   printf ("2 %d\n",sum);
   return sum;
}
void diao(fun f)
{
f(3,5);
}
