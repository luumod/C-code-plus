//倒序显示文件内容
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032' //文件结尾标识
#define SIZE 81
int main(void){
    FILE* fp;    //文件指针
    char ch;
    char file[SIZE];
    long count,last;

    puts("Enter the name of the file to be processed:");
    scanf("%80s",file);  //输入文件名 
    //处理错误参数
    if ((fp=fopen(file,"r"))==NULL){    //只读文件
        fprintf(stderr,"reverse cann't open  %s\n",file);
        exit(EXIT_FAILURE);
    }
    //定位到文件结尾
    fseek(fp,0L,SEEK_END);
    last=ftell(fp);  //fp指向当前位，距离开始处的字节数
    for (count=1L; count<=last; count++){
        //回退文件内容，实现倒序输出
        fseek(fp,-count,SEEK_END);
        ch=getc(fp);
        if (ch!=CNTL_Z && ch!='\r'){  // \r是为了MS-DOS
            putchar(ch);
        } 
    }
    putchar('\n');
    fclose(fp);

    return 0;
}