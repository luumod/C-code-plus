#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char *s_gets(char *str,int n);
int main(void){
    char flower[SIZE];
    char addon[]="s small like old shoes.";
    char bug[BUGSIZE];
    int available;
    puts("what is your favourite flower?");
    s_gets(flower,SIZE);                                //利用s_gets()来输入字符串
    if ((strlen(addon) + strlen(flower)+1)<SIZE)  //要把flower和addon合并，先检查flower长度够不够,最后预留'\0'；
        strcat(flower,addon);                   //合并, 若超出限制，则不合并
    puts(flower);                         //输出合并后的字符串
    puts("What is your favourite bug?");
    s_gets(bug,BUGSIZE);
    available=BUGSIZE-strlen(bug)-1;      //为strncat()添加最大的字符串数量
    strncat(bug,addon,available);       //合并,三个参数
    puts(bug);                          //输出合并字符串

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