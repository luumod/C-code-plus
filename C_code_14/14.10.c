//使用指针和malloc分配内存
//使用指向结构的指针
#include <stdio.h>
#include <string.h>
#include <stdlib.h>     //malloc free
#define NLEN 30
//创建结构体
struct namect{
    //使用指向char的指针
    char* fname;
    char* lname;
    int letters;
};
void getinfo(struct namect*);   //传递指针
void makeinfo(struct namect*);
void showinfo(struct namect*);
char* s_gets(char* str,int n);
//释放所分配的内存空间
void cleanup(struct namect*);

int main(void){
    struct namect people;   //创建结构变量

    getinfo(&people);
    makeinfo(&people);
    showinfo(&people);
    cleanup(&people);

    return 0;
}
void getinfo(struct namect* pst){
    //在使用指针存储存储字符串应该使用一个临时数组转换
    char temp[NLEN];
    printf("Please enter your first name.\n");
    s_gets(temp,NLEN);
    //为指针分配内存空间
    pst->fname=(char*) malloc(strlen(temp)+1);
    //把名字拷贝到以分配的内存中
    strcpy(pst->fname,temp);
    printf("Please enter your last name.\n");
    s_gets(temp,NLEN);
    pst->lname=(char*) malloc(strlen(temp)+1);
    strcpy(pst->lname,temp);

}
void makeinfo(struct namect* pst){
    //修改结构成员内容
    pst->letters=strlen(pst->fname)+strlen(pst->lname);
}
void showinfo(struct namect* pst){
    printf("%s %s,your name contains is:%d.\n",
        pst->fname,pst->lname,(*pst).letters);
}
//释放内存
void cleanup(struct namect* pst){
    free(pst->fname);
    free(pst->lname);
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