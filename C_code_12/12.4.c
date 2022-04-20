#include <stdio.h>
int units=0;          //外部变量
void cirtic(void);
int main(void){
    extern int units;   //引用式声明

    printf("How many pounds to a firken of butter?\n");
    scanf("%d",&units);
    while (units!=56)
        cirtic();       
    printf("You must have looked it up!\n");

    return 0;
}
void cirtic(void){

    //删除了可选的重复变量
    printf("No, My firend, Try again.\n");
    scanf("%d",&units);
}
