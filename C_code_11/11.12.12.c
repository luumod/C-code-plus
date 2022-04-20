#include <stdio.h>
#include <math.h>
#define r1 0.015 //存款方式
#define r2 0.021
#define r3 0.0275
#define r5 0.03
#define rn 0.0035
int money(int num);
int main(void)
{
    int choice_way;
    double result;
    printf("请输入存款方式:(1.2.3.4.5):");
    scanf("%d", &choice_way);
    result = money(choice_way);
    printf("1000元在%d的方式下总利息是:%.2lf\n", choice_way, result);
    return 0;
}
int money(int num)
{
    int a;
    double p1, p;
    int n, n1, n2;
    switch (num)
    { //方式
    case 1:
        n = 5;
        p = 1000 * (1 + n * r5);
        break; //总共存5年
    case 2:
        n1 = 2, n2 = 3;
        p1 = 1000 * (1 + n1 * r2);
        p = p1 * (1 + n2 * r3);
        break; //先两年，后三年
    case 3:
        n1 = 3, n2 = 2;
        p1 = 1000 * (1 + n1 * r3);
        p = p1 * (1 + n2 * r2);
        break; //先三年，后两年
    case 4:
        n = 5;
        p = 1000 * (pow(1 + r1, n));
        break; //一年一年，存5年
    case 5:
        n = 20;
        p = 1000 * (pow(1 + rn / 4, n));
        break; //一季度
    default:
        printf("Enter way again.\n");
        break;
    }
    return p;
}