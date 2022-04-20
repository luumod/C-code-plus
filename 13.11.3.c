//将源文件所有小写字母转换为大写字母,并覆盖
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 80
int main(int argc,char* argv[]){
    FILE* fp;
    char file_name[SIZE];
    char ch;
    printf("Input the file_name:");
    scanf("%s",file_name);

    if ((fp=fopen(file_name,"r+"))==NULL){
        printf("Cann't open file %s.\n",file_name);
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp))!=EOF){
        //读取一个字符,保存到ch变量
        fseek(fp,-sizeof(char),SEEK_CUR);
        //从当前位置移动指针往回退
        putc(toupper(ch),fp);
        //写入转换后的字符，替换原字符
    }
    fclose(fp);
    return 0;
    /*char file_str[SIZE];
    char file_app[SIZE];
    char temp[SIZE];
    printf("请输入文本文件名:");
    scanf("%s",file_str);
    //打开输出文件
    while ((fs=fopen(argv[1],"r+"))==NULL){
        fprintf(stderr,"不能打开此文件:%s.\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    //打开目标文件
    while ((fp=fopen(argv[2],"w+"))==NULL){
        fprintf(stderr,"不能打开目标文件:%s.\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    //将内容转换为大写
    char upp[SIZE];
    fread(temp,sizeof(char),SIZE,fs);
    int lengh=strlen(temp);
    for (int i=0; i<lengh; i++){
        upp[i]=toupper(temp[i]);
    }
    //把大写内容复制到目标文件
    fwrite(upp,sizeof(char),SIZE,fp);

    fclose(fs);
    fclose(fp);*/
}