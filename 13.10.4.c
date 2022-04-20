//自己输入数字计算算术平均值，或者计算一个文件里的数字的平均值
#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int main(int argc,char* argv[]){
    FILE* fp;
    double n,sum=0.0;
    int num=0;

    //无 命令行，使用标准输入作为输入
    if (argc==1){
        fp=stdin;
        printf("Enter the number(EOF to quit):");        
    }
    //有命令行，使用argc[1]作为文件名
    else if (argc==2){
        if ((fp=fopen(argv[1],"r"))==NULL){
            printf("Cann't open %s.\n",argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else{
        printf("Usaging: %s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    //从fp中读取数据到n
    while (!feof(fp) && (fscanf(fp,"%lf",&n))==1){
        num++;
        sum+=n;
    }
    if (num>0){
        printf("Average of data is %lf.\n",sum/num);
    }
    else
        printf("There is no number.\n");
    return 0;
}