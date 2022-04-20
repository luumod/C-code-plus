//在一个文件中添加你输入的字符，如果没有文件，则直接创建一个
#include <stdio.h>
#include <stdlib.h>
#define SIZE 500
int main(int argc,char* argv[]){
    FILE* p;    //文件指针
    char words[SIZE];
    int ch;
    //检查命令行参数
    if ((p=fopen("wordy","a+"))==NULL){     //a+可以完整保存上一次修改，并且在末尾安全添加字符
        fprintf(stderr,"Cann't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    
    puts("Enter words to add to the files :");
    puts("Key at the beginings of a line to teiminate.");
    //把你输入的内容传入到文件中
    //先作为标准输入，输入内容
    while ((fscanf(stdin,"%39s",words))==1 && (words[0]!='#')){
        //再把内容写入文件
        fprintf(p,"%s\n",words);
    }

    puts("File conternts:");
    //返回文件开始处
    rewind(p);
    //打印此文件，显示文件内容
    //从一个文件中读取数据
    while (fscanf(p,"%s",words)==1){
        puts(words);
    }
    puts("Done!");
    if (fclose(p)!=0){
        fprintf(stderr,"Error closing file.\n");
    }
    return 0;
}
