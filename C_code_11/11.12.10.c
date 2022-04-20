#include <stdio.h>
#include <string.h>
#define SIZE 80
char* Strlen(char *str);
char* s_gets(char* str,int n);
int main(void)
{
    char ch[SIZE];

    s_gets(ch,SIZE);
    int len=Strlen(ch[SIZE]);
    puts(len);
    return 0;
}
char* Strlen(char* str){
    int count=0;
    while (*str++!='\0')
        count++;
    return count;
}
char* s_gets(char* str,int n){   //用指针表示法替代数组表示法，可以省略i.
    char* ret_val;

    ret_val=fgets(str,n,stdin);
    if (ret_val){
        while (*str!='\n' && *str!='\0')
            str++;               
        if (*str=='\n')
            *str='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}