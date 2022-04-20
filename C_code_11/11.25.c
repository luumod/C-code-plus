#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
char *s_gets(char *str,int n);
int main(void){

    char qwords[LIM][SIZE];         //创建的临时数组
    char temp[SIZE];          //在此数组中输入内容，经过下列程序拷贝到  qwords数组
    int i=0;

    printf("Enter %d words begining with q:\n",LIM);
    while (i<LIM && s_gets(temp,SIZE)){     //输入temp数组值
        if (strncmp(temp,"q",1)!=0)    //temp数组第一个元素是 q 时:
            printf("%s doesn't begin with q.\n",temp);
        else{
            strcpy(qwords[i],temp);   //将temp数组拷贝到另一个数组qwords
            i++; 
        }
    }
    puts("Here are the words accepted:");
    for (i=0; i<LIM; i++)
        puts(qwords[i]);
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