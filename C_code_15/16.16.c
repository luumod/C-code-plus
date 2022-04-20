/*#include <stdio.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

int main(void){
    int n;

    atexit(sign_off);   //注册sign_off函数
    puts("Enter an integer :");
    if (scanf("%d",&n)!=1){
        puts("That's no integer!");
        atexit(too_bad);    //注册too_bad函数
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n",n,(n%2==0)?"even":"odd");


    return 0;
}
void sign_off(void){
    puts("dawdadadawdawdad");
    puts("dawdwadadadawdad");
}
void too_bad(void){
    puts("wfryuwyuwyduwy");
    puts("wwyruiqyruiwryqiu");
}*/