/*rand和srand 生成随机数*/
/*使用ANSI C 可移植算法*/
#include <time.h>
static unsigned long int next=1;    //内部链接，静态变量 种子

int rand(void){
    /*生成随机数的魔术公式*/
    next=next*1103515245+ 12345;
    return (unsigned int) (next/65536) % 32768;
}

void srand0(unsigned int seed){
    next=seed;              //next被输入的数字重置
}