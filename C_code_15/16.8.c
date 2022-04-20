//可执行代码
#include <stdio.h>
#include "16.6.h"

int main(void){
    names canda;

    //函数调用
    get_names(&canda);
    printf("Let's welcome.\n");
    show_names(&canda);
    printf("to this program!\n");

    return 0;
}