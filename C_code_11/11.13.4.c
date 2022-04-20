#include <stdio.h>
#include <ctype.h>
#define SIZE 10
char *get_char(char *str,int n);   //指出可读取的最大字符
int main(void)
{
    char ch[SIZE];
    get_char(ch,SIZE);
    printf("First word your input is :%s\n",ch);

    return 0;
}
char *get_char(char *str,int n){
    char input[SIZE];
    char *in = input;
    int i=0;
    puts("Enter a string");
    fgets(input,SIZE,stdin);
   /* while (isalpha(*in)==0 && *in!='\0')  不是一个字符
        in++;
    while (isalpha(*in) && i<n)         设置可以读取的最大数量，自动截断
        *str++=*in++;
        i++;*/
    while ((*in=='\n' || *in=='\t' || *in==' ')&& *in!='\0')  //通过while删除前面的空白
        in++;
    while (*in!='\n' &&*in!='\0' &&*in!='\t' && *in!=' ' && i<n){   //到第二个空白为止
        *str++=*in++;  
        i++;
    }
    return str;
}