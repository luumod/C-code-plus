#include <stdio.h>
char* s_gets(char* str,int n);
int main(void){

}
char* s_gets(char* str,int n){
    char* ret_val;
    char* find;
    ret_val=fgets(str,n,stdin);
    if (ret_val){
        find=strchr(str,'\n');
        if (find)       //find=='\n'
            *find='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}