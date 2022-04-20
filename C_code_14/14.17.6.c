#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct lens{
    float folcen;
    float fstop;
    char name[30];
}LENS;

enum sex {男,女};
const cahr* nam[]={"男","女"};

double a(double,double);
double b(double,double);
double c(double,double);
double d(double,double);
double (*pt[4])(double,double)={a,b,c,d};
/*一个函数的指针数组,数组的每个元素都是指向函数的指针，分别指向上述四个函数，可以直接
函数指针的形式进行函数调用*/
typedef double (*ptf)(double ,double );
ptf[4]={a,b,c,d};
/*使用typedef简化函数指针数组的定义.将函数定义为*ptf,然后创建ptf类型的四个元素数组*/

int main(void){
    LENS bytes[10]; //声明一个10个结构数组
    bytes[2].folcen=500;
    bytes[2].fstop=2.0;
    strcpy(bytes[2].name,"Remarkata");    
    //使用待指定的初始化器
    LENS btra[10]={[2]={500,2.0,"Remarktata"}};

    enum sex people;

    //调用函数
    pt[1](10.0,2.5);
    (*pt[1])(10.0,2.5);
    (*(pf+1))(10.0,2.5);
    //可以使用下标与指针的方式进行函数的调用

    return 0;
}