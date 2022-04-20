#include <stdio.h>
void critic(int* a);
int main(void){
    int unit;       //声明在块作用域
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&unit);
    while (unit!=56)
        critic(&unit);      //把地址赋给函数
    printf("You must have looled it up!\n");

    return 0;
}
void critic(int* a){    //指针指向地址
    printf("No,luck, Try again.\n");
    scanf("%d",a);  //修改指针地址指向的值
}