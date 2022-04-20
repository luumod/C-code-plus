/*rand0.c 生成随机数*/
/*使用ANSI C 可移植算法*/
static unsigned long int next=1;    //内部链接，静态变量 种子

unsigned int rand(void){
    /*生成随机数的魔术公式*/
    next=next*1103515245+ 12345;
    return (unsigned int) (next/65536) % 32768;
}