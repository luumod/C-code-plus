//在一个文件逐行查找指定字符，如果出现字符，则打印这行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256
int main(int argc,char* argv[]){
    FILE* fp;
    //动态分配内存
    char* line=(char* ) malloc(SIZE*sizeof(char));
    char seek;
    int n;
    int fg=0;

    if (argc!=3){
        printf("Using: %s character filename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    else{
        //如果给定字符的长度
        if (strlen(argv[1])<=1){
            printf("The second char should >2.\n");
            exit(EXIT_FAILURE);
        }
        if ((fp=fopen(argv[2],"r"))==NULL){
            printf("Cann't open file %s.\n",argv[2]);
            exit(EXIT_FAILURE);
        }
    }
    //指定待查找的字符是命令行第几个参数
    puts("你想查找第几个:");
    scanf("%d",&n);
    seek=argv[1][n];
    //把文件里的字符输出到line
    while (fgets(line,SIZE,fp)!=NULL){
        char* p=line;
        static char* g;
        //查找字符
        while (*p!='\0'){
            g=strchr(p,seek);
            if (g){
                fg=0;
                printf("FOUND %c in line:%s.\n",seek,p);
                break;
            }              
            else{
                break;
                /*fg=1;
                break;*/
            }
            p++;
        }   
    }
    /*if (fg==1){
        printf("NOT FOUND!\n");
    }*/
    return 0;
}