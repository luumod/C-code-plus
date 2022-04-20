//结构体初步认识-
#include <stdio.h>
#include <string.h>
char* s_gets(char* str,int n);
#define MAXTITLE 41 //书名最大长度
#define MAXAUTHOR 31 //作者名字最大长度
//结构体模板
struct book{   
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};

int main(void){
    struct book library;    //把library声明为book类型的变量
    printf("Please enter the book title:\n");
    s_gets(library.title,MAXTITLE);
    printf("Please enter the book author:\n");
    s_gets(library.author,MAXAUTHOR);
    printf("Please enter the prince:\n");
    scanf("%f",&library.value);

    printf("%s by %s:$%.2f\n",library.title,library.author,
    library.value);
    printf("%s: \"%s\" ($%.2f)\n",library.author,library.title,
    library.value);
    printf("\n");
    return 0;
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
            while (getchar()!='\n'){
                continue;
            }
    }
    return ret_val;
}
