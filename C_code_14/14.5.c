#include <stdio.h>
#define FOUNDLEN 50

struct funds{
    char bank[FOUNDLEN];
    double bankfund;
    char save[FOUNDLEN];
    double savefund;
};
double sum(double,double);

int main(void){
    //结构变量stan
    struct funds stan={
        "Garlic-Melon Bank",
        4032.5,
        "Luck's Saving and Laon",
        85435.96
    };
    //创建结构指针
    struct funds* sid;
    sid=&stan;
    printf("Stan has a total of $%.2f.\n",
        sum(sid->bankfund,(*sid).savefund));


    return 0;
}
double sum(double x,double y){
    return x+y;
}