#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int main(void){
    double numbers[SIZE];
    double value;
    const char* file="numbers.dat";
    int i;
    long pos;
    FILE* fp;
    //创建一组double类型的值
    printf("创建double值:\n");
    for (int i=0; i<SIZE; i++){
        numbers[i]=100.0*i+1.0/(i+1);
    }
    //尝试打开文件
    if ((fp=fopen(file,"wb"))==NULL){
        fprintf(stderr,"打开文件错误.\n");
        exit(EXIT_FAILURE);
    }
    //以二进制格式把数组写入文件
    fwrite(numbers,sizeof(double),SIZE,fp);
    fclose(fp); //关闭文件
    if ((fp=fopen(file,"rb"))==NULL){
        fprintf(stderr,"不能打开文件:%s\n",file);
        exit(EXIT_FAILURE);
    }
    //从文件读取选定的文件
    printf("输入一个长度以读取指定范围:0-%d.\n",SIZE-1);
    while (scanf("%d",&i)==1 && i>=0 && i<SIZE){
        pos=(long) i*sizeof(double);        //计算偏移量
        fseek(fp,pos,SEEK_CUR); //定位到此处
        fread(&value,sizeof(double),1,fp);
        printf("这个值是：%lf.\n",value);
        printf("请输入下一个索引:(跳过则退出):");
    }
    //完成
    fclose(fp);
    puts("再见！");
    return 0;
}