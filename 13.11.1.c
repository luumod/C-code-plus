//读取用户输入的信息
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80
char* s_gets(char *str,int n);
int main(void){
    FILE* fp;
    char name[SIZE];
    int count=0;
    char ch;
    puts("Enter the name of file:");
    s_gets(name,SIZE);
    while ((fp=fopen(name,"a+"))==NULL){
        fprintf(stderr,"Cann't open the file:%s.\n",name);
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp))!=EOF){
        putc(ch,stdout);    //putchar(ch)
        count++;
    }
    fclose(fp);
    printf("The text has %d character.\n",count);
    printf("OVER!\n");

    return 0;

}
char* s_gets(char * str,int n){
    char* ret_val;
    char* find;
    ret_val=fgets(str,n,stdin);
    if (ret_val){
        find=strchr(str,'\n');
        if (*find=='\n'){
            *find='\0';
        }
        else
            while (getchar()!='\n'){
                continue;
            }
    }
    return ret_val;
}