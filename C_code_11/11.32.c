#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){        //，命令行参数
    int i,times;

                        //如果输入的数字小于1，那么输入无效，执行printf
    if (argc<2 || (times=atoi(argv[1]))<1)  //atoi函数把字母数字转换为整数 
        printf("Using:%s psitive-number\n",argv[0]);
    else
        for (i=0; i<times; i++)     //否则，根据你输入的数字打印相应的行数
            puts("Hello, good looking!");
    
    return 0;
}