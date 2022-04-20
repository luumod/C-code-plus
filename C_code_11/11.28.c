#include <stdio.h>
#define MAX 20
char *s_gets(char *str,int n);
int main(void){
    char first[MAX];
    char last[MAX];
    char formal[2*MAX+10];
    double prize;
    
    puts("Enter your first name:");
    s_gets(first,MAX);
    puts("Enter your last name:");
    s_gets(last,MAX);
    puts("Enter your prize money:");
    scanf("%lf",&prize);
    sprintf(formal,"%s,%-19s:$%6.2f\n",last,first,prize);
    puts(formal);

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