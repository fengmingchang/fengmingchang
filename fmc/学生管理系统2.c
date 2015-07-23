# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define NAME 50

typedef struct student
{  
    int id;
    char name[NAME];
    char sex[10];
    int chengji;
 
}STU;
int jiemian();
int xuanze();
int myid=0;
int RegisterNewStudent(STU *newStudent);
void showAllStudentInfo(STU *student);
void fan();
STU *findStudentInfoWithName( const char *id);
  STU stu[100]= {'\0'};
 int main ( int  argc , const char *argv[])
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
 printf("\t               1.输入r注册新的学生信息 \n       ");
 printf("\t               2.输入s显示所有学生的信息\n      ");
 printf("\t               3.输入s＋学号则显示对应学生的信息 \n    ");
 printf("\t               4.输入d＋学号则删除对应学号的学生信息\n ");
 printf("\t               5.输入q则退出学生管理系统 \n ");
 printf("请选择:(\n");
char num,ch;
getchar();
 scanf("%c",&num);
 scanf("%c",&ch);
 if(ch == '+')
     scanf("%d",&myid);
 printf("功能生:%c   学号是:%d\n",num,myid);
 switch(num)
 {
   case 'r':RegisterNewStudent(0);break;
   case 'R':RegisterNewStudent(0);break;
   case's':showAllStudentInfo(0);break;
   case'S':showAllStudentInfo(0);break;
   case 'c':STU *findStudentInfoWithName( 0);break;
   default:xuanze();
 }

  return 0;
}



int RegisterNewStudent (STU *newStudent)
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
  for(int i = 0;i <shuliang;i++)
  {
      printf("输入的第%d学生信息",i+1);
      printf("请输入id\n");
      scanf("%d",&stu[i].id);
      printf("请输入 name\n");
      scanf("%s",stu[i].name);
      printf("请输入 sex\n");
      scanf("%s",stu[i].sex);
      printf("请输入chengji\n");
      scanf("%d",&stu[i].chengji);
      printf("输入完毕");
     
  } 
 size_t num = fwrite(stu,sizeof(STU),shuliang,fp);
 if(num == shuliang)
 {
    printf("保存成功");
 } 
 fan();
 fclose(fp);
  return 0;
}

void showAllStudentInfo(STU *student)
{
  FILE *wtp;
  wtp = fopen("/Users/qingyun/Desktop/学生管理系统.txt","r");
  if (NULL == wtp)
  {
    printf("打开wtp失败");
    exit (1);
   }
  STU stu[NAME]={'\0'};
  fread(stu,sizeof(STU),NAME,wtp);
  for (int i  = 0;i < NAME; i++)
  {
      if (stu[i].id  == NULL)
      {
          break;
      }
      printf("学号:%d,姓名: %s 性别:%s ,成绩:%d \n",stu[i].id,stu[i].name,stu[i].sex,stu[i].chengji);
      
  
  }
  fan();
  fclose(wtp);
}
STU *findStudentInfoWithName( const char *id)
{
  FILE *wtp;
  wtp = fopen("/Users/qingyun/Desktop/学生管理系统.txt","r");
  if (NULL == wtp)
  {
    printf("打开wtp失败");
    exit (1);
   }
  STU stu[NAME]={'\0'};
  fread(stu,sizeof(STU),NAME,wtp);
  printf("输入你要查询的学号");
  int a;
  scanf("%d",&a);

for(int i = 0;i<NAME;i ++ )
{
  
      if (stu[i].id  == 1 )
      {
         
     
      printf("学号:%d,姓名: %s 性别:%s ,成绩:%d \n",stu[i].id,stu[i].name,stu[i].sex,stu[i].chengji);
      }
}
  fan();
  fclose(wtp);
  return 0;
}
 

void fan()
{
    printf("是否进入选择界面:1.进入,0.退出程序\n");
    int fan ;
    scanf("%d",&fan);
    switch(fan)
    {
      case 1:xuanze();break;
      case 0:exit(1);break;
      default:;
    }


}
