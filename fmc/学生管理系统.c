# include <stdio.h>
# include <stdlib.h>
# define NAME 10

int  jiemian();
int  xuanze();
int  input();
int  chaxun();
int  xiugai();
int  dele();
int  add();
int  tuichu();
typedef struct 
{  
    int id;
    char name[NAME];
    char sex[4];
    int chengji;
 
}STU;
  STU stu [100]= {0};
 int main ( int  argy , const char *argv[])
{
   jiemian();
    return 0;
}



int jiemian()//主界面
{ 
    int zhanghao,mima;
  printf("******************欢迎进入学生管理系统******************\n");
  printf("请输入账号:");
  scanf("%d",&zhanghao);
  printf("\n");
  printf ("请输入密码:");
  scanf ("%d",&mima);
  if(zhanghao == 123 && mima == 123)
  {
    xuanze();
  }else
  {
    jiemian();
  }
  return 0;
}




int xuanze()//选择界面
{
 printf(" ******************欢迎进入学生管理系统******************\n");
 printf("\n");
 printf("                1.学生信息的录入 \n                   ");
 printf("                2.学生信息的查询 \n                   ");
 printf("                3.学生信息的修改 \n                   ");
 printf("                4.学生信息的删除 \n                   ");
 printf("                5.学生信息的添加 \n                   ");
 printf("                6.学生信息的退出 \n                  ");
 printf("请选择:(0-6)\n");
 int num;
 scanf("%d",&num);
 switch (num)
 {
     case 1:
       input();
       break;
     case 2:
       chaxun();
       break;
     case 3:
       xiugai();
       break  ;  
     case 4:
       dele();
       break;
     case 5:
       add();
       break;
     case 6:
       tuichu();
       break;
   default:
       jiemian();   

 }
 return 0;
}



int input()// 信息的录入
{
  FILE *fp;
  fp = fopen ("/Users/qingyun/Desktop/学生管理系统.txt","a");
  if (NULL == fp )
  {
      printf("文件打开错误\n");
      exit (1);
  }
  int shuliang;
  printf("请输入你录入的人数:\n");
  scanf("%d",&shuliang);
  for(int i = 0;i < shuliang;i++)
  {
      printf("输入的第%d学生信息",i);
      printf("请输入id\n");
      scanf("%d",&stu[i].id);
      printf("请输入 name\n");
      scanf("%c",&stu[i].name);
      printf("请输入 sex\n");
      scanf("%c",&stu[i].sex);
      printf("请输入chengji\n");
      scanf("%d",&stu[i].chengji);
      printf("输入完毕");
     
  }
  
 fwrite(stu,sizeof(STU),shuliang,fp);
  fclose(fp);
  return 0;
}
int xiugai()
{
  return 0;
}
int chaxun()
{
   /* FILE *wtp = NULL;
    wtp = fopen ("/Users/qingyun/Desktop/学生管理系统.txt","r");
    if (NULL == wtp)
    {
     printf("打开wtp 错误\n");
     exit(1);
    }
//STU  stu[100] = {0};
//int char = fread(stu,sizeof(STU),100,fp);

    int xuehao
    printf("请输入你要查询的学生学号：\n");
  scanf ("%d",&xuehao);
if(xuehao == stu[100].id)
{
 printf("");
}*/
 return 0;
}
int dele()
{
  return 0; 
}
int add()
{
 return 0;
}
int tuichu ()
{
  return 0;
}
