#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int num(void);
int main(void){
    int num1;
    int n;
    srand(time(0));
    num1=num();
    while (num1!=1+rand()%(5-1+1)){
        printf("不对哦,");
        num1=num();
    }
    printf("你真牛逼，猜对了!\n");
    return 0;
}
int num(void){
    int n;
    printf("猜个数字吧:");
    while ((scanf("%d",&n))!=1){     //输入字母
        while (getchar()!='\n')
            continue;
        printf("输入的不是整数哦,在输入一次:");
    }
}