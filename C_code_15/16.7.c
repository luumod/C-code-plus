//源文件
#include <stdio.h>
#include "16.6.h"   //包含头文件

//函数定义
void get_names(names* pst){
    printf("Please enter your first name:");
    s_gets(pst->first,SIZE);
    printf("Please enter your last name:");
    s_gets(pst->lname,SIZE);
}
void show_names(names* pst){
    printf("%s %s .\n",pst->first,pst->lname);
}
char* s_gets(char* str,int n){
    char* ret_val;
    char* find;
    ret_val=fgets(str,n,stdin);
    if (ret_val){
        find=strchr(str,'\n');
        if (find){
            *find='\0';
        }
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}