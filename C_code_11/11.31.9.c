#include <stdio.h>      //将输入的字符串 逆序 输出
#include <string.h>
#include <stdlib.h>
#define SIZE 80
char* invest_str(char* str);        //逆序输出函数原型
int main(void){
    char test_str[SIZE];
    char* p=NULL;
    printf("Enter a string (enter to quit):");
    fgets(test_str,SIZE,stdin);
    while (*test_str!='\n'){        //循环读取字符串，然后逆序排列
        p=invest_str(test_str);     //由一个char指针指向地址
        printf("Done!\nNow the invert string is:");
        printf("%s\n",p);
        printf("Enter a string:");
        fgets(test_str,SIZE,stdin);
    }
    free(p);
    return 0;
}
char* invest_str(char* str){
    int lengh=strlen(str);  //获得临时数组的大小
    char invest[lengh];     //创建临时数组存储逆序字符串
    //char* invest=(char*) malloc(lengh*sizeof(char));  动态内存分配
    for (int i=0; i<lengh; i++){
            *(invest+i)=*(str+lengh-i-1); //逆序排列
    }
    for (int i=0; i<lengh; i++){
        *(str+i)=*(invest+i);           //把逆序排列的结果 覆盖 原数组
    }
    return str;     //返回指针地址
}