//使用泛型选择表达式
#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
    int :"int",\
    float :"float",\
    double :"double",\
    default :"other"\
)
int main(void){
    int d=5;
    printf("%s.\n",MYTYPE(d));  //int类型
    printf("%s.\n",MYTYPE(2.0*d));  //double类型
    printf("%s.\n",MYTYPE(3L));     //long类型
    printf("%s.\n",MYTYPE(&d));     //&d类型是 int*指针
}