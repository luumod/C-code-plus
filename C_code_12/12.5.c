//不同的存储类型:上部分
#include <stdio.h>
void report_count();
void account(int t);
int count=0;            //文件作用域,外部链接

int main(void){
    int value;          //自动变量
    register int i;     //寄存器变量

    printf("Enter a positive integer (0 to quit)\n");
    while ((scanf("%d",&value))==1 && value>0){
        count++;        //使用文件作用域变量
        for (i=value; i>=0; i--)    //如果i-->=0，则重复执行account函数
            account(i);         //调用函数,下一部分
        printf("Enter a positive integer (0 to quit)\n");
    }   
    report_count();                 //不管进没进入while循环，都执行此函数

    return 0;
}
void report_count(){
    printf("Loop executed %d times.\n",count);          //统计用户执行的次数
}
