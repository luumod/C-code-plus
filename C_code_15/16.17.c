#include <stdio.h>
#include <stdlib.h>

#define NUM 40
void fillarray(double* ar,int n);
void showarray(const double* ar,int n);
int mycomp(const void* p1,const void * p2);

int main(void){

    double val[NUM];
    fillarray(val,NUM); //生成随机数
    puts("Random list:");
    showarray(val,NUM); //显示原始数据
    qsort(val,NUM,sizeof(double),mycomp);   //排序数据
    puts("\nSorted list:");
    showarray(val,NUM); //显示排序后的数据
    return 0;
}
void fillarray(double* ar,int n){
    //随机数生成
    int index;
    for (index=0; index<n; index++){
        ar[index]=(double) rand()/((double) rand()+0.1);
    }
}
void showarray(const double* ar,int n){
    //显示原始数据
    int index;
    for (index=0; index<n; index++){
        printf("%9.4f",ar[index]);
        if (index%6==5)
            putchar('\n');
    }
    if (index%6!=0)
        putchar('\n');
}
int mycomp(const void* p1,const void* p2){
    //从小到大排序
    //使用指向double的值来访问这两个值
    const double* a1=(const double*) p1;
    const double* a2=(const double*) p2;

    if (*a1<*a2)
        return -1;
    else if (*a1==*a2)
        return 0;
    else
        return 1;
}