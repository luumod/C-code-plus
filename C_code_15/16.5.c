#include <stdio.h>
//使用变参宏  ...与__VA__AEGS__
#define PR(x, ...) printf("message " #x ": is "__VA_ARGS__)
int main(void){
    double x=40;
    double y=2*x;

    PR(1,"x=%g\n",x);
    PR(2,"x=%.2f,y=%.4f\n",x,y);
    return 0;
}
