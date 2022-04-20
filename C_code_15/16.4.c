#include <stdio.h>
// ##运算符
#define XNAME(n) x ##n  // 相当于 x+一个标识符 => x1/x2/x3
#define PRINTF(n) printf("x" #n " =%d\n",x ## n)

int main(void){
    int XNAME(1)=14;
    int XNAME(2)=20;
    int x3=30;
    PRINTF(1);
    PRINTF(2);
    PRINTF(3);

    return 0;
}
