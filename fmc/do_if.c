# include <stdio.h>
int i();
int j();
 int main ( int  argy , const char *argv[])

{
    j();
   
    return 0;
}
   int j()
   {
       int fenshu;
       int chishu =0;
       do 
    {
        if  ( ++ chishu > 3)
        {
        printf("chishu taiduo");
        return 1;
        }
        
        printf("请输入正确的数:<o--100>\n");
        scanf ("%d",&fenshu);
    }while(fenshu >100  && fenshu < 0);
    if(fenshu > 90)
    {
       printf("优秀");
       i();
    }else if( fenshu >80 && fenshu <89)
    {
        printf ("良");
        i();
    }else if( fenshu >70 && fenshu < 79)
    { 
        printf ("中等");
        i();
    }else if ( fenshu >60 && fenshu < 69)
    {
        printf ("及格");
        i();

     }else
         printf ("不及格");
     i();
   }
int i()
{
  int a ;
  printf ("是否再次输入：1.输入 2.退出\n");
  scanf ("%d",&a);
  if (a ==1)
  {
      j();
  }else
  {
      exit(0);
  }

  return 0;

}
