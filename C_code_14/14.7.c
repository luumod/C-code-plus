//传递一个结构
#include <stdio.h>
#define FOUNDLEN 50

struct uid{
    double bankfund;
};
struct funds{
    char bank[FOUNDLEN];
    struct uid oto;
    char save[FOUNDLEN];
    double savefund;
};
double sum(struct funds* money);      //参数是一个结构

int main(void){
    //结构变量stan
    struct funds stan={
        "Garlic-Melon Bank",
        1000,
        "Luck's Saving and Laon",
        2000     
    };
    //调用函数，把结构变量的地址传给函数，进而使得指针指向结构变量
    printf("Stan has a total of $%.2f.\n",sum(&stan));
    return 0;
}

double sum(struct funds* money){
    return ((*money).oto.bankfund+money->savefund);
}