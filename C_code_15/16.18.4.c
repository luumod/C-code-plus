//时间延迟函数
#include <stdio.h>
#include <time.h>

void delay(double second);
int main(void){
    double input;
    printf("Enter a second to delay:");
    scanf("%lf",&input);
    delay(input);
    return 0;
}
void delay(double second){
    //获得初始处理器的时间
    clock_t start=clock();
    printf("Now let's test %f second delay \n",second);
    //获得延迟后的处理器时间
    clock_t now=clock();
    while (((double)(now-start))/CLOCKS_PER_SEC <second){
        now=clock();
        printf("You delay %f second.\n",((double)(now-start))/CLOCKS_PER_SEC);
    }
}