#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 30
#define CSIZE 4
typedef struct {
    char ming[SIZE];
    char xing[SIZE];
}FULL_NAME;
typedef struct {
    FULL_NAME name;
    float grade[3];
    float av[3];
}student;
/* 定义学生信息模板 */
void input_grade(student* info);    //输入学生信息
void get_av(student* info);       //计算平均分
void printf_info(student* info);    //打印学生信息
void get_al_av(student* info );     //计算全体平均分
int main(void){
    student people[CSIZE]={};
    input_grade(people);
    get_av(people);    
    printf_info(people); 
    get_al_av(people);   

    return 0;
}
void input_grade(student* info){
    char fname[SIZE],lname[SIZE];
    int i=0;
    while (i<SIZE){
        printf("请输入学生姓名:\n");
        scanf("%s %s",fname,lname);
        if (strlen(fname)<1 &&  strlen(lname)<1){
            printf("名称输入错误.");
            printf("请输入学生姓名:");
            scanf("%s %s",fname,lname);
            break;
        }
        strcpy(info[i].name.xing,fname);
        strcpy(info[i].name.ming,lname);
        //读取用户输入，输入到结构体变量中
        printf("输入三门成绩:\n");
        scanf("%f %f %f",&info[i].grade[0],&info[i].grade[1],&info[i].grade[2]);
        i++;
    }
}
void get_av(student* info){
    //计算平均分
    for (int i=0; i<CSZIE; i++){
        info[i].av=(info[i].grade[0]+info[i].grade[1]+info[i].grade[2])/3;
    }
}
void printf_info(student* info){
    
} 
void get_al_av(student* info );