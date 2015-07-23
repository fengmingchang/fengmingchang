# include <stdio.h>
//枚举的第一种表示的方法和后面的enum  studyweek num；结合
  // enum studyweek{ Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
  // 第二种表示枚举方法 的表示
  // enum studyweek{ Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday}num;
  // 第三种方式
   enum { Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday}num;
 int main ( int  argy , const char *argv[])
{
    int  flag;
    // enum studyweek num ;
 do
 {
   printf ("请输入一个数：0-6\n");
   scanf("%d",&num);
   switch (num)
   {
    case Monday:
        printf("study var type\n");
           break;
    case Tuesday:
           printf("study function\n");
           break;
    case Wednesday:
           printf ("play game\n");
           break;
    case Thursday:
           printf ("studay scop var\n");
           break;
    case Friday:
           printf ("studay statemen\n");
    case Saturday:
           printf("wan va \n");
            break;
    case   Sunday:
           printf (" play si mi pai\n");
           break;
   
    default:printf("qing  shu ru ");
   }
   printf ("zai shu ru :1:jixu; 2:tuichu\n");
   scanf("%d",&flag);
   }while(1==flag);




    return 0;
}
