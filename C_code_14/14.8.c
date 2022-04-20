//使用指向结构的指针
#include <stdio.h>
#include <string.h>
#define NLEN 30
//创建结构体
struct namect{
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};
void getinfo(struct namect*);   //传递指针
void makeinfo(struct namect*);
void showinfo(struct namect*);
char* s_gets(char* str,int n);

int main(void){
    struct namect people;   //创建结构变量

    getinfo(&people);
    makeinfo(&people);
    showinfo(&people);

    return 0;
}
void getinfo(struct namect* pst){
    printf("Please enter your first name.\n");
    s_gets(pst->fname,NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname,NLEN);

}
void makeinfo(struct namect* pst){
    //修改结构成员内容
    pst->letters=strlen(pst->fname)+strlen(pst->lname);
}
void showinfo(struct namect* pst){
    printf("%s %s,your name contains is:%d.\n",
        pst->fname,pst->lname,(*pst).letters);
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
        else{
            while (getchar()!='\n')
                continue;
        }
    }
    return ret_val;
}