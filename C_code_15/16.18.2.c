#include <stdio.h>
#define AV(x,y) (1/((1/(x))+(1/(y))/2))
int main(void){
    double f1,f2;
    puts("输入两个数字,计算调和平均数:");
    while (scanf("%lf %lf",&f1,&f2)==2){
        printf("%.2f和%.2f和调和平均数是:%.2f\n",f1,f2,AV(f1,f2));
    }

    return 0;
}