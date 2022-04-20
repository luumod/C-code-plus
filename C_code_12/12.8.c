/*12.7.c 一起编译*/
#include <stdio.h>
extern unsigned int rand(void);     //引用式声明

int main(void){
    int count;

    for (count=0; count<5; count++)
        printf("%d\n",rand());

    return 0;
}