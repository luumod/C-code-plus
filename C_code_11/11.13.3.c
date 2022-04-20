#include <stdio.h>                  //只读取一个单词
#include <ctype.h>
#define SIZE 80
char* chr(char* str);
int main(void){
    char ch[SIZE];
    chr(ch);
    puts(ch);

    return 0;
}
char* chr(char* str){
    char strcpy[SIZE];
    char* in=strcpy;
    int i=0;
    fgets(strcpy,SIZE,stdin);
    while ((*in=='\n' || *in=='\t' ||*in==' ') && *in!='\0'){          //跳过非空格
        in++;
    }
    while (*in!='\n'&&*in!='\0'&&*in!=' '&&*in!='\t'){
        *str++=*in++;
    }
    return str;
}