# include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME 20
#define STUNUM  5
//声明一个数组
typedef struct student
{ 
    char name[NAME];
    int age ;
    int studyid;
}STU;
//创建名字的初始化
 char student[STUNUM][NAME] =
 {
   "zhangsan",
   "lishi",
   "zhaowu",
   "wangliu",
   "jingqi"
 };
 int main ( int  argy , const char *argv[])
{
    //声明一个指针
    FILE *fp =NULL;
    //打开一个文件，并写入
     fp= fopen("/Users/qingyun/Desktop/学生管理.txt","w");
     //判断 fp 是否为空
     if (NULL == fp)
     {
     puts("打开错误");
     exit(1);
     }
    // 生命一个缓冲区，用于存放
     STU stu[STUNUM] = {0};
 // 构造学生信息
     for( int i = 0;i < STUNUM; i++ )
     {
         //把 student的名字  传给stu数组变量的名字
      strncpy(stu[i].name ,student[i],NAME);
      stu[i].age = 30 + i;
      stu[i].studyid =i;

     }
     size_t xieru = fwrite(stu,sizeof(STU),STUNUM,fp);
     //目的是确认，是否正确写入到文件里
     if (xieru ==STUNUM )
     { 
         printf("cheng gong");

     }
     else
     {
         printf ("shibai");
     }
       fclose(fp);

    return 0;
}
