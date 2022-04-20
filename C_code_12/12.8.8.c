#include <stdio.h>
char color='A';     //全局变量
void first(void);
void second(void);
int main(void){
    extern char color;

    printf("color in main is %c\n",color);
    first();
    printf("color in main is %c\n",color);
    second();
    printf("color in main is %c\n",color);
    return 0;
}
void first(void){
    char color;
    color='R';
    printf("color in first is %c\n",color);
}
void second(void){
    color='G';
    printf("color in second is %c\n",color);
}