#include "12.9.2.h"
int main(void){
    int n;
    printf("Enter 0 for metric mode,1 for US mode:");
    scanf("%d",&n);
    while (n>=0){
        set_mode(n);
        get_mode();
        show_mode();

        printf("Enter 0 for metric mode,1 for US mode");
        printf("(-1 to quit):");
        scanf("%d",&n); //重复输入
    }
    return 0;
}
void set_mode(int n){
    if (n>1){
        printf("Invalid mode specified.");
        if (mode==0){
            printf("Mode 0(metric) used.\n");
        }
        else{
            printf("Mode 1(US) used.\n");
        }
    }
    else 
        mode=n; 
}
void get_mode(void){
    if (mode==0)        
        printf("Enter distance travaled in kilometers:");
    else   
        printf("Enter disdtance travaled in milos:");
    scanf("%lf",&range); //输入距离数

    if (mode==0)
        printf("Enter fuel consumed int liters:");
    else
        printf("Enter fuel consumed int gallons:");
    scanf("%lf",&fuel); //输入油消耗量
}
void show_mode(void){
    if (mode==0)
        printf("Fuel consumed is %.2lf liters per 100km.\n",
        (fuel/range)*100);
    else
        printf("Fuel consumed is %.1lf liters per gallons.\n",
        range/fuel);
}
