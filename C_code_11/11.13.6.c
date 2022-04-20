#include <stdio.h>   //从一个字符串中，查找一个指定的字符 strchr()
#include <string.h>
#define SIZE 80
int string_char(char* str,char c);
int main(void){
    char ch[SIZE];          
    char desk;
    int result;        
    printf("Enter a String:\n");
    fgets(ch,SIZE,stdin);    //读取一个待检索的字符串
    while (desk!=EOF){
        printf("Enter a char to find (EOF to quit)\n");  
        while ((desk=getchar())=='\n')        //跳过输入行剩余部分,只读取首字符
            continue;
        if ((string_char(ch,desk))!=0)  
            printf("Found the char ---%c---\n",desk);
        else
            printf("Char %c not found.Try again.\n",desk);
    }

    return 0;
}
int string_char(char* str,char c){        //函数,返回整形
    while (*str!='\0'){             //循环条件:是否到达末尾?
        if (*str==c)                
            return 1;             //找到后，返回1        
        else
            str++;                  //数组依次往下
    }
    return 0;                    //未找到时返回0
}