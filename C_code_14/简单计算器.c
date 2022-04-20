#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 20
double max(double,double);      //返回最大值
double min(double,double);      //返回最小值
double add(double,double);      //返回加法
double shut(double,double);     //返回减法
double cheng(double,double);      //返回乘法
double chu(double,double);        //返回除法
int main(void){
    puts("选择: a b c d e f g h i (q to quit).");
    char ch;
    double num1,num2;
    double (*pf[6])(double,double)={max,min,add,shut,cheng,chu};
    scanf("%c",&ch);
    while (ch!='q'){
        switch (ch)
        {
        case 'a':puts("输入两个数字: 返回最大值:");
        scanf("%lf %lf",&num1,&num2);
            printf("%.2lf\n",pf[0](num1,num2));
            break;
        case 'b':puts("输入两个数字: 返回最小值:");
        scanf("%lf %lf",&num1,&num2);
            printf("%.2lf\n",pf[1](num1,num2));
            break;
        case 'c':puts("输入两个数字: 返回加法:");
        scanf("%lf %lf",&num1,&num2);
            printf("%.2lf\n",pf[2](num1,num2));
            break;
        case 'd':puts("输入两个数字: 返回减法");
        scanf("%lf %lf",&num1,&num2);
            printf("%.2lf\n",pf[3](num1,num2));
            break;
        case 'e':puts("输入两个数字: 返回乘法:");
        scanf("%lf %lf",&num1,&num2);
            printf("%.2lf\n",pf[4](num1,num2));
            break;
        case 'f':puts("输入两个数字: 返回除法:");
        scanf("%lf %lf",&num1,&num2);
            printf("%.2lf\n",pf[5](num1,num2));
            break;
        
        default:
            break;
        }
        scanf("%c",&ch);
    }

    return 0;
}
double max(double a,double b){
    return (a>b)?a:b;
}      //返回最大值
double min(double a,double b){
    int min=a;
    if (b<a)
        min=b;
    return min;
}      //返回最小值
double add(double a,double b){
    return a+b;
}      //返回加法
double shut(double a,double b){
    return a-b;
}     //返回减法
double cheng(double a,double b){
    return a*b;
}      //返回乘法
double chu(double a,double b){
    return a/b;
}
