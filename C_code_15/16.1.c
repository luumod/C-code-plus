#include <stdio.h>
#define TWO 2   //可以使用注释
#define OW "ADwdadwd aw dad awd awd ad a\
dawdaiw.d -dawdwada"    //反斜杠把定义延续到下一行

#define FOUR TWO*TWO
#define PX printf("X is %d.\n",x);
#define FMI "X is %d.\n"
#define NAME "于良浩"
#define SIGH 2 * 5  //记号字符串

//类函数宏
#define SQUARE(x) x*x   //加括号可以适当解决问题 
#define PD(x) printf("The result is %d.\n",x);

// #运算符
#define PQS(x) printf("The square of " #x " is %d.\n",((x)*(x)))

int main(void){
    int x=5;
    const char* str="woshi shuaige :%s\n";

    /* #运算
    PQS(x);
    PQS(x+5);*/
    /*PD(SQUARE(x+2));    //17
    PD(100/SQUARE(x));  //100
    PD(SQUARE(++x)); 危险*/

    /*printf("%d.\n",SIGH);
    printf(str,NAME);
    PX;     //用作打印
    x=FOUR;
    printf(FMI,x);
    printf("%s\n",OW);
    printf("TWO:OW\n");*/

    return 0;
}