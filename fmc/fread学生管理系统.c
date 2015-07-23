# include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUMLONG 20
#define  NUM 5
 typedef struct
{
  char name[NUMLONG];
  int age;
 int studentid; 
}STU;

 int main ( int  argy , const char *argv[])
{
    FILE *fp = NULL;
    fp = fopen ("/Users/qingyun/Desktop/ 学生管理.txt","r");
    if( NULL == fp )
    {
       printf("cuo wo\n");
       exit(1);
    }
    STU stu[NUM] = {0};
    int cha = fread(stu,sizeof(STU),NUM,fp);
 /*   if (NUM != cha)
    {
     printf("du 学生管理");
     exit(1);
    }*/
    for (int i = 0; i< NUM;i ++)
    {
      printf("the[%d] student  namne:%s,sge%d,stuid%d\n",
             i, stu[i].name,stu[i].age,stu[i].studentid);
    }
    fclose(fp);

    return 0;
}

