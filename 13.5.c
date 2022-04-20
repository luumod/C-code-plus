//把一个源文件的内容 添加到 一个目标文件的末尾
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096    //创建4096字节的缓冲区
#define SIZE 81
void append(FILE* source,FILE* dest);
char* s_gets(char* str,int n);
int main(void){
    FILE* fa,* fs;    //一个指向目标文件，一个指向源文件
    int files=0;      //附加的文件数量
    char file_app[SIZE];    //目标文件名
    char file_str[SIZE];    //源文件名
    int ch;

    puts("Enter name of destination file:");
    s_gets(file_app,SIZE);
    //错误打开目标文件  读写方式
    if ((fa=fopen(file_app,"a+"))==NULL){
        fprintf(stderr,"Cann't open %s\n",file_app);
        exit(EXIT_FAILURE);
    }
    /*setvbuf分配缓冲区，分别表示 待处理流,自动分配缓冲,缓冲类型,缓冲目标大小
    分配成功返回0，失败返回非零*/
    if (setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0){ //分配失败
        fprintf(stderr,"Cann't create output buffer.\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter name of first source file (empty to quit):");
    while (s_gets(file_str,SIZE) && file_str[0]!='\0'){
        if (strcmp(file_str,file_app) == 0){
            //拷贝顺序错误
            fputs("Cann't append file to itself.\n",stderr);
        }
        //错误打开源文件   只读模式
        else if ((fs=fopen(file_str,"r"))==NULL){
            fprintf(stderr,"Cann't open.\n");
        }
        else{
            //分配失败
            if (setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0){
                fputs("Cann't create output buffer.\n",stderr);
                continue;
            }
            append(fs,fa);
            if (ferror(fs)!=0){
                //源文件读取错误
                fprintf(stderr,"Error in reading file %s.\n",file_str); 
            }
            if (ferror(fa)!=0){
                //目标文件写入错误
                fprintf(stderr,"Error in writing file %s.\n",file_app);
            }
            fclose(fs); //关闭源文件
            files++;
            printf("File %s is appended.\n",file_str);
            puts("Next fiel (empty to quit):");
        }
    }
    printf("Done appended. %d files appended.\n",files);
    rewind(fa);     //回到目标文件最开始位置
    printf("%s conernts:\n",file_app);
    //打开目标文件
    while ((ch=getc(fa))!=EOF){
        putchar(ch);
    }      
    puts("\nDone displaying.");
    fclose(fa);

    return 0;
}
void append(FILE* source,FILE* dest){   //具体添加函数
    static char temp[BUFSIZE];      //创建临时数组
    size_t bytes;

    //把source源文件末尾读取到temp中
    while ((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0){
        //再把tmep 临时元素读取到dest 目标文件中
        fwrite(temp,sizeof(char),BUFSIZE,dest);
    }
}

char* s_gets(char* str,int n){    //输入字符串，并把换行符换为空字符，或者省略多余输入
    char* ret_val;
    char* find;
    ret_val=fgets(str,n,stdin);
    if (ret_val){
        //查找换行符
        find=strchr(str,'\n');
        if (find!=NULL){
            //如果不是空指针，则在此处放入一个空字符
            *find='\0';
        }
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}