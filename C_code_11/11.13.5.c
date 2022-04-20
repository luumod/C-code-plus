#include <stdio.h>   //从一个字符串中，查找一个指定的字符 strchr()
#include <string.h>
#define SIZE 80
char* string_char(char* str,char c);
int main(void){
    char ch[SIZE];          
    char desk;                                  //指定字符
    char *position;                            //指针变量
    printf("Enter a String:\n");
    fgets(ch,SIZE,stdin);                       //读取一个待检索的字符串
    while (desk!=EOF){
        printf("Enter a char to find (EOF to quit)\n");  
        while ((desk=getchar())=='\n')          //跳过输入行剩余部分,只读取首字符
            continue;
        if ((position=string_char(ch,desk))!=NULL)  //指针指向地址,地址不为空时，继续下列:
            printf("Found the char ---%c--- in the %p\n",*position,position);
        else                                    //如果为空，说明未找到此字符
            printf("Char %c not found.Try again.\n",desk);
    }

    return 0;
}
char* string_char(char* str,char c){            //指针函数,返回指针地址
    while (*str!='\0'){                          //循环条件:是否到达末尾?
        if (*str==c)                
            return str;                          //找到后，返回当前指针        
        else
            str++;                               //数组依次往下
    }
    return NULL;                    //未找到时返回空指针
}