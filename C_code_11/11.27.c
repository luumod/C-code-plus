#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
char *s_gets(char *str,int n);
int main(void){
    char qwords[LIM][SIZE];
    char temp[SIZE];   //原字符串
    int i=0;

    printf("Enter %d words begining with q:\n",LIM);
    while (i<LIM && s_gets(temp,SIZE)){
        if (strncmp(temp,"q",1)!=0)  //首字符是否是q
            printf("%s doesn't begin with q.\n",temp);
        else{
            strncpy(qwords[i],temp,TARGSIZE-1);
            qwords[i][TARGSIZE-1]='\0'; //最后字符为空字符,使得qwords成为一个真正的字符串
            i++;
        }
    }
    printf("Here are the wrods accepted:\n");
    for (int i=0; i<LIM; i++)
        printf("%s\n",qwords[i]);

    return 0;
}
char *s_gets(char *str,int n){
    int i;
    char *ret_val;

    ret_val=fgets(str,n,stdin);
    if (ret_val){
        i=0;
        while (str[i]!='\n' && str[i]!='\0')
            i++;
        if (str[i]=='\n')
            str[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}