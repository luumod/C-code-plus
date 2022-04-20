#include <stdio.h>
static int count=0;     //静态内部链接存储类型,或静态无链接
int run_count(void);
int main(void){
    for (int i=0;i <100; i++)
        printf("The function run %d times.\n",run_count());

    return 0;
}
int run_count(void){
    return ++count;
}