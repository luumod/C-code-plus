#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 256
int main(int argc,char* argv[]){
    //为打印行数的数组创建的动态内存
    char* line_one=(char* ) malloc(SIZE*sizeof(char));
    char* line_two=(char* ) malloc(SIZE*sizeof(char));
    int first_end=1;
    if (argc!=3){
        fprintf(stderr,"Using %s filename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    //打开两个文件
    FILE* fp1,*fp2;
    if ((fp1=fopen(argv[1],"r"))==NULL){
        fprintf(stderr,"无法打开文件:%s.\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fp2=fopen(argv[2],"r"))==NULL){
        fprintf(stderr,"无法打开文件:%s.\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    //开始打印独立行
    printf("开始打印行:\n");
    int i=1;
    //从fp文件中读取一行到line数组里
    while (fgets(line_one,SIZE,fp1)!=NULL){
        if (fgets(line_two,SIZE,fp2)){
            //两个文件逐一打印
            printf("文件1%d行:%s.\n",i,line_one);
            printf("文件2%d行:%s.\n",i,line_two);
            i++;
        }
        else{
            //如果第一个文件长于第二个文件时打印
            printf("文件1:%d行:%s.\n",i,line_one);
        }
    }//第一个文件读取到末尾时结束
    //如果第二个文件长于第一个文件，打印第二个文件
    while(fgets(line_two,SIZE,fp2)!=NULL){
        printf("文件2%d行:%s.\n",i++,line_two);
    }
    printf("打印合并的行:\n");
    //文件设置为开始处
    rewind(fp1);
    rewind(fp2);
    i=1;
    while (fgets(line_one,SIZE,fp1)!=NULL){
        if (fgets(line_two,SIZE,fp2)!=NULL){
            //fgets读取文件中保存的换行符
            printf("第%d行.\n",i);
            while (*line_one!='\n')
                putchar(*line_one);
            putchar('+');
            printf("%s",line_two);
            i++;
        }
        else{
            printf("第%d行: %s.\n",i,line_two);
            i++;
        }
    }
    while (fgets(line_two,SIZE,fp2)!=NULL){
        printf("第几行:%d %s.\n",i++,line_two);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}