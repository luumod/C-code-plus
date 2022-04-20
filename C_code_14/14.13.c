//传递数组名进函数
#include <stdio.h>
#define FOUNDLEN 50
#define N 5

struct funds{
    char bank[FOUNDLEN];
    char save[FOUNDLEN];
    double bankfund;
    double savefund;
};
double sum(const struct funds money[],int n);
void change(struct funds* info,int n);
int main(void){
    //定义结构体变量
    struct funds jones[N]={
        {"Galic-Melon Bank",
        "dawdaddawdad",
        40.32,
        28.62},
        {"Honesdwdkjnid da w",
        "dawdnawidanwd",
        56.978,
        123312.5}
    };
    //传递数组名
    printf("The jones have a total of %.2f.\n",sum(jones,N));
    for (int i=0; i<N; i++){
        printf("没修改前，我的钱:%.2f",jones[i].bankfund);
    }
    change(jones,N);
    for (int i=0; i<N; i++){
        printf("修改之后，我的钱:%.2f\n",jones[i].bankfund);
    }

    return 0;
}
double sum(const struct funds* money,int n){
    double total;
    int i;
    for (i=0,total=0; i<n; i++){
        /*total+=money->bankfund+money->savefund;
        money++;*/
        total+=money[i].bankfund+money[i].savefund;
    }
    return total;
}
void change(struct funds* info,int n){
    for (int i=0; i<n; i++){
        puts("输入:");
        scanf("%le",&info[i].bankfund);
    }
}