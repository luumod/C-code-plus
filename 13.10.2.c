//读取文件内容，如果是数字，则打印该数字
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc,char* argv[]){ //命令行模式
    int ch;
    FILE* fp;
    if (argc<2){
        exit(EXIT_FAILURE);
    }
    if ((fp=fopen(argv[1],"r"))==NULL){
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp))!=EOF){
        if (isdigit(ch)){
            putchar(ch);
        }
    }
    fclose(fp);

    return 0;
}
