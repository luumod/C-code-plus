//不同的存储类型:下半部
#include <stdio.h>

extern int count;       //引用式声明,引用上一个程序的count值

static int total=0;     //静态定义,内部链接,只能此单元执行
void account(int t);        //函数原型,最好重复声明

void account(int t){
    static int subtotal=0;      //静态，无链接,只用于函数块作用域

    if (t<=0){          
        printf("loop cycle:%d\n",count);
        printf("subtotal=%d;total=%d\n",subtotal,total);
        subtotal=0;       //每次执行完while后重新赋值0
    }
    else{           //输入的值会依次递减相加
        subtotal+=t;        //统计每次while循环的和
        total+=t;           //统计所有传入while的累积和
    }
}