#include <stdio.h>
#include <string.h>
#define SIZE 40
#define ANSWER "grant"
#define ANSWER2 "GRANT"
char *s_gets(char *str,int n);
void change(char *str,int n);
int main(void){
    char try[SIZE];
    int len;

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    len=strlen(try);    
    change(try,len);
    printf("%s\n",try);
    while ((strcmp(try,ANSWER)!=0)){   //两个字符串的比较，strcmp()函数，相等返回1，否则，返回0；
        puts("No, that's wrong,Try again.");
        s_gets(try,SIZE);
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
void change(char *str,int n){  //大小写互换
    for (int i=0; i<n; i++){
        if (str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
        else
            str[i]=str[i]-32;
    }
}