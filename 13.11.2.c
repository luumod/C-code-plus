//把一个文件的内容复制到另一个文件
#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
int main(int argc,char* argv[]){//获取原始文件和复制后的文件
    FILE* fs,* fp;
    char temp[SIZE];
    if (argc!=3){
        printf("Using:%s strfile.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    else{
        //打开原始文件
        while ((fs=fopen(argv[1],"rb"))==NULL){
            fprintf(stderr,"Cann't open the orgin file:%s.\n",argv[1]);
            exit(EXIT_FAILURE);
        }
        //打开复制后的目标文件
        while ((fp=fopen(argv[2],"wb"))==NULL){
            fprintf(stderr,"Cann't open the dest file:%s.\n",argv[2]);
            exit(EXIT_FAILURE);
        }
        //把文件中的数据读出来,并且写入目标文件
        size_t bytes;
        while ((bytes=fread(temp,sizeof(char),SIZE,fs))>0){
            fwrite(temp,sizeof(char),SIZE,fp);
        }
    }
    fclose(fs);
    fclose(fp);
    return 0;
}