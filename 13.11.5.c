//利用命令行参数把源文件内容添加到目标文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256
#define BUFSIZE 4096
void append(FILE* source,FILE* dest);
int main(int argc,char* argv[]){
    FILE* fs,* fa;
    char ch;
    int files=0;
    printf("开始读写操作:\n");
    if (argc!=3){
        fprintf(stderr,"必须包含三个参数");
        exit(EXIT_FAILURE);
    }
    //以读写模式打开目标文件
    if ((fa=fopen(argv[2],"a+"))==NULL){
        fprintf(stderr,"不能打开目标文件: %s.\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    //为该文件创建一个4096字节缓冲区
    if (setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0){
        fprintf(stderr,"为%s创建缓冲区失败\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    //拷贝部分
    //如果目标文件和源文件内容相同
    if (strcmp(argv[1],argv[2])==0){
        fprintf(stderr,"两个文件相同\n");
    }
    else if ((fs=fopen(argv[1],"r"))==NULL){
        fprintf(stderr,"无法打开源文件:%s.\n",argv[1]);
    }
    else{
        if (setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0){
            fprintf(stderr,"为源文件创建缓冲区失败:%s.\n",argv[1]);
            //con信息
        if (ferror(fa)!=0){
            fprintf(stderr,"读写目标文件失败:%s.\n",argv[2]);
        }
        fclose(fs);
        files++;
        printf("读取工作以结束.\n");
        }
    }
    printf("目标文件内容是:\n");
    while ((ch=getc(fa))!=EOF){
        putc(ch,stdout);
    }
    printf("结束.\n");
    fclose(fa);
    return 0;
}
void append(FILE* source,FILE* dest){
    static char temp[SIZE];
    size_t bytes;
    while ((bytes=fread(temp,sizeof(char),SIZE,source))>0){
        fwrite(temp,sizeof(char),SIZE,dest);
    }
}