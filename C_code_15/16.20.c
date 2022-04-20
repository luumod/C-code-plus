#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
void show_array(const int* ar,int n);
//断言测试
_Static_assert(sizeof(double)==2*sizeof(int),"double not twice int size");
int main(void){
    int val[SIZE]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[SIZE];   //空数组
    double curious[SIZE/2]={ 2.0, 2.0e5, 2.0e10, 2.0e15, 2.0e20};

    puts("memcpy() used:");
    puts("value(original) data:");
    show_array(val,SIZE);
    //复制数组元素
    memcpy(target,val,SIZE*sizeof(int));
    puts("target(copy) data:");
    show_array(target,SIZE);

    puts("\nUSing memmove() with overlapping ranges:");
    //指定打印的数组元素个数，及开始打印的初始位置
    memmove(val+2,val,5*sizeof(int));
    puts("val--elements 0-4 copied to 2-6:");
    show_array(val,SIZE);

    puts("\nUsing memcpy() to copy double to int:");
    memcpy(target,curious,(SIZE/2)*sizeof(double));
    puts("target--5double into 10 int positions:");
    show_array(target,SIZE/2);
    show_array(target+5,SIZE/2);


    return 0;
}
void show_array(const int* ar,int n){
    //显示数组内容
    for (int i=0; i<n; i++){
        printf("%d",ar[i]);
    }
    putchar('\n');
}