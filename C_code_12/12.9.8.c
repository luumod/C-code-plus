#include <stdio.h>
#include <stdlib.h>
int* make_array(int len,int val); //num为规定的数组元素的个数, n为指定的每个元素的值
void show_array(const int* ch,int n); //显示数组内容
int main(void){
    int* pt;
    int size;
    int value;
    printf("Enter the number of num:");
    while (scanf("%d",&size)==1 && size>0){ //输入元素个数
        printf("Enter the initialzation value:");
        scanf("%d",&value);                 //输入元素值
        pt=make_array(size,value);  //指针指向 指针函数返回的int的指针地址
        if (pt){                    //如果pt不是NULL
            show_array(pt,size);    //打印数组
            free(pt);               //释放内存
        }
        printf("Enter the number of num:");
    }
    return 0;
}
int* make_array(int len,int val){
    int* p=(int* ) malloc(len*sizeof(int)); //malloc动态分配 创建一个len*4的数组
    if (p==NULL)
        return NULL;
    for (int i=0; i<len; i++){
        *(p+i)=val;             //对数组元素初始化赋值
    }
    return p;       //返回一个指针，编译器把他理解为地址
}
void show_array(const int* ch,int n){
    for (int i=0; i<n; i++){
        printf("%d",*(ch+i));
        if ((i+1)%4==0)             //每四个元素换一行
            putchar('\n');
    }
    putchar('\n');
}