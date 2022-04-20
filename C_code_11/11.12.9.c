#include <stdio.h>
#define SIZE 80
char* s_gets(char* str,int n);
int main(void){
    char ch[SIZE];
    s_gets(ch,SIZE);
    printf("%s\n",ch);
    return 0;
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