#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30
struct Month {
    char month_name[SIZE];
    char month_short[6];
    int days;
    int number;
}months[12]={
        {"January","Jan",31,1},
        {"February","Feb",28,2},
        {"March","Mar",31,3},
        {"April","Apr",31,4},
        {"May","May",31,5},
        {"June","Jun",30,6},
        {"July","Jul",31,7},
        {"August","Aug",31,8},
        {"September","Sep",30,9},
        {"October","Oct",31,10},
        {"Noverber","Nov",30,11},
        {"December","Dec",31,12}
    };
int num(char * month,int day);
int main(void){
    char month_name[SIZE];
    int year;
    int day;
    struct Month* pst;
    puts("请输入年 月 日:");
    scanf("%d %s %d",&year,month_name,&day);
    while (year>1000){
        int result=num(month_name,day);
        if (result<0){
            printf("输入错误;");
        }
        else
            printf("%d年%s月%d天 总共是%d天\n",year,month_name,day,result);
        puts("请输入年 月 日:");
        scanf("%d %s %d",&year,month_name,&day);
    }
    printf("Done!\n");
    return 0;
}
int num(char* month,int day){
    if (day<1 || day>31){
        return -1;
    }
    int total=0;
    int temp=atoi(month);
    for (int i=0; i<12; i++){
        if ((temp=months[i].number) || (strcmp(month,months[i].month_name)==0) || 
        (strcmp(month,months[i].month_short)==0)){
            if (day>months[i].days)
                return -1;
            return total+day;
        }
        else {
            total+=months[i].days;
        }
    }
    return -1;
}
