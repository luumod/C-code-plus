#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
struct Month {
    char month[SIZE];
    char abmonth[6];
    int days;
    int num;
};
int main(void){
    struct Month months[12]={
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
    int month,total;
    puts("你选择一个月份:");
    scanf("%d",&month);
    for (int i=0; i<month; i++){
        total+=months[i].days;
    }
    printf("%d\n",total);


    return 0;
}