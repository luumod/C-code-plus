//把一个文件的内容压缩并添加到另一个文件中
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 40
int main(void){
    FILE* in,* out;
    int ch;
    char name[LEN];      //存储输出的文件名
    int count=0;
    char input[LEN];    //源文件名

    printf("输入源文件名:");
    scanf("%s",input);
    //读取用户输入的文件名,只读模式
    if ((in=fopen(input,"r"))==NULL){
        fprintf(stderr,"无法打开此源文件:%s.\n",input);
        exit(EXIT_FAILURE);
    }

    strncpy(name,input,LEN-5);
    name[LEN-5]!='\0';
    strcat(name,".red");
    //设置完之后,输出文件名,以写模式
    if ((out=fopen(name,"w"))==NULL){
        fprintf(stderr,"无法打开目标文件:%s.\n",name);
        exit(3);
    }
    //显示目标文件内容
    while ((ch=getc(in))!=EOF){
        if (count++%3==0){
            putc(ch,out);
        }
    }
    if (fclose(in)!=0 || fclose(out)!=0){
        fprintf(stderr,"关闭文件错误.\n");
    }
    return 0;
}