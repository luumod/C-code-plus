   //一个错误的程序
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define ANSWER "Grant"
char *s_gets(char *str,int n);
int main(void){
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    if (try!=ANSWER){
        puts("No, that's wrong,Try again.");
        s_gets(*try,SIZE);
    }
    puts("That's right");

    return 0;
}
char *s_gets(char *str,int n){          //替换空字符与换行符
    int i=0;
    char *ret_val;

    ret_val=fgets(str,n,stdin);
    if (ret_val){
        i=0;
        while (str[i]!='\n'&&str[i]!='\0')
            i++;
        if (str[i]=='\n')
            str[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}