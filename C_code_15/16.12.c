#include <stdio.h>
#line 10000 "cool.c"         //把当前行号重置为一个数字,从此开始,重置文件名
//#pragma c9x on  
#define PRAGMA(x) _Pragma(#x)

void why_me();
int main(void){
    /*printf("The file is %s.\n",__FILE__);   //文件名
    printf("The data is %s.\n",__DATE__);   //当前日期年月日
    printf("The time is %s.\n",__TIME__);   //当前时间
    printf("The version is %ld.\n",__STDC_VERSION__);   //是否支持C99标准
    printf("This is line %d.\n",__LINE__);  //显示当前行号的整形常量
    printf("This funcation is %s.\n",__func__); //显示当前函数名的字符串
    why_me();*/
/*#if __STDC_VERSION__!=201112L    
#error Not C11
#endif*/
    return 0;
}
void why_me(void){
    printf("This is funcation is %s.\n",__func__); ////显示当前函数名的字符串
    printf("This is line %d.\n",__LINE__);  //显示当前行号的整形常量
}