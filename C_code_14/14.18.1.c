#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30
struct Month {
    char month[SIZE];
    char abmonth[6];
    int days;
    int num;
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
int num(char *name);
int main(void){
    char name[SIZE];
    struct Month* pst;
    puts("请输入月份:");
    scanf("%s",name);
    while (strlen(name)>3){
        printf("总天数是%d.\n",num(name));
        puts("请输入月份:");
        scanf("%s",name);
    }


    return 0;
}
int num(char* name){
    int total=0;
    for (int i=0; i<12; i++){
        if (strcmp(name,months[i].month)==0){
            return total;
        }
        else
            total+=months[i].days;
    }
    return -1;
}
