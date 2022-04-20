#include <stdio.h>
#include <string.h>
#define SIZE 80
char* trim_str(char* str);
int main(void){
    char test_str[SIZE];
    char* p;

    printf("Enter a string now:");
    fgets(test_str,SIZE,stdin);
    while (*test_str!='\n'){    //用户输入一个空行，则结束
        p=trim_str(test_str);
        printf("The result string is : ");
        printf("%s\n",test_str);     
        printf("Enter a string now:");
        fgets(test_str,SIZE,stdin);
    }
    return 0;
}
char* trim_str(char* str){
    char* temp=str;         //用str和temp分别表示原子符和删除后的字符串
    int count=0;
    while (*str!='\0'){
        if (*str!=' ')      //不等于空格的时候
            //若字符串不是空格，两个指针往后移，并且从原子符串复制到删除后的temp数组
            *temp++=*str++; 
        else {               //当是空格的时候
            str++;          //原字符串指针往后移动，跳过此空格
            count++;        //记录空格数量
        }
    }
    while (count--)
        *temp++='\0';       //删除空格后，在末尾添加空字符
    return str;

}