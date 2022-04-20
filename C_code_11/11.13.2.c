#include <stdio.h>                  //输入n个字符存储在数组中，在读到空格时截断
#define SIZE 40
char* get_char(char* str,int n);
int main(void){
    char text[SIZE];
    puts("Start to test function,Enter a string.");
    get_char(text,SIZE);
    puts("The string your input:");
    puts(text);

    return 0;
}
char* get_char(char* str,int n){
    int i=0;
    do{
        str[i]=getchar();
        if (str[i]=='\n' || str[i]==' ' || str[i]=='\t')
            break;
    }while (str[i]!=EOF && ++i<n);
       // str[i]=getchar();
    return str;
}