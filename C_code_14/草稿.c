#include <stdio.h>
#include <stdlib.h>
//测试函数指针
int max(int a,int b);
int min(int a,int b);
void point(int (*pp)(int,int),int a,int b);
void point2(void);
int main(void){
    int a,b;
    //创建函数指针,(*标记符)代替函数名称，其余照抄
    int (*p1)(int,int)=NULL;
    int (*p2)(int,int)=NULL;
    //嵌套函数指针，作为型参
    //给函数指针赋初始值,指针名=函数
    point2();
    return 0;
}
int max(int a,int b){
    return (a>b)?a:b;
}
int min(int a,int b){
    int min=a;
    if (b<a)
        min=b;
    return min;
}
int sum(int a,int b){
    return a+b;
}
void print(int (*pp)(int,int),int a,int b){
    printf("%d\n",pp(a,b));
}
void point2(void){
    void (*pd)(int 1(*)(int,int))=print;
    pd(max(1,2));
    pd(min(1,2));
}