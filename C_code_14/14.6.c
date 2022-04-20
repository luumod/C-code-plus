//传递指向结构的指针
#include <stdio.h>
#define FOUNDLEN 50

struct funds{
    char bank[FOUNDLEN];
    double bankfund;
    char save[FOUNDLEN];
    double savefund;
};
double sum(const struct funds*,const struct funds*);      //参数是一个指针

int main(void){
    //结构变量stan
    struct funds stan[2]={
        {"Garlic-Melon Bank",
        4032.5,
        "Luck's Saving and Laon",
        85435.96
        },
        {"Garlic-Melon Bank",
        5555.5,
        "Luck's Saving and Laon",
        25782.96
        }
    };
    //调用函数，把结构变量的地址传给函数，进而使得指针指向结构变量
    printf("Stan has a total of $%.2f.\n",sum(&stan[0],&stan[1]));
    return 0;
}

double sum(const struct funds* money,const struct funds* money2){
    return (money->bankfund+money2->savefund);
}