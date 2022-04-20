/*一起编译随机数*/
#include <stdio.h>
#include <stdlib.h>
extern void srand(unsigned int x);
extern int rand(void); //引用式声明

int main(void){
    int count;
    unsigned seed;

    printf("Please enter a seed ( int ):\n");
    while ((scanf("%x",&seed))==1){
        srand(seed);                //根据你的输入重置种子
        for (count=0; count<5; count++){
            printf("%d\n",rand());  //rand函数来求随机数
        }
        printf("Please enter a seed:\n");
    }
    printf("Done!\n");
    return 0;
}