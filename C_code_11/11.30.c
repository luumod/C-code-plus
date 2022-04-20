#include <stdio.h>
#include <string.h>
#include <ctype.h>      //用来处理字符
#define SIZE 80
void Toupper(char *);
int count(const char* str);
int main(void){
    char line[SIZE];
    char* find;

    puts("Please enter a line.");
    fgets(line,SIZE,stdin); 
    find=strchr(line,'\n');         //查找换行符,利用  strchr()
    if (find){            //如果指针地址不是NULL,说明有 \n 存在
        *find='\0';         //换行符转换成空字符
    }
    Toupper(line);
    puts(line);
    printf("That line %d puncatin characters.\n",count(line));
    return 0;
}
void Toupper(char *str){            //转换大写
    while (*str){      //*str!=NULL  指向每个字符
        *str=toupper(*str);
        str++;
    }
}
int count(const char* str){             //统计标点符号数量
    int ct=0;
    while (*str){
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}