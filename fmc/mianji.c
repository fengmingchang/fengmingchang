# include <stdio.h>
# define PI 3.2425926
//在定义的时候，调用的时候可以解决计算的问题
# define ASB(X,Y)( X < Y) ? X : Y
# define AA(I,J) printf("长为"#I",宽为"#J"的长方形的面积是%d\n",((I)*(J)));
 int main ( int  argy , const char *argv[])
{
    //定义一个宏PI进行求圆的面积
  float r;
  printf ("shu ru ban jing:\n");
  scanf ("%f",&r);
  float  s = PI * r * r;
  printf ("s=:%f\n",s);
 
//输入两个数进行比较
 int a,b;
  printf ("please input is a :");
  scanf ("%d",&a);
  printf ("please input is b:");
  scanf ("%d",&b);
  
  int daan=ASB(a,b);
  printf ("shu chu zui xiao zhi :%d\n",daan);
  //定义一个宏进行求长方形的面积
  int z,x;
  printf ("please input is z:");
  scanf ("%d",&z);
  printf ("please input is x:");
  scanf ("%d",&x);
  AA(z,x);

    return 0;
    }
