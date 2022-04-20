//临时结构值，使用符合字面量
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31
struct book{
    //结构模块
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void){
    struct book readfirst;
    int score;
    printf("Enter text scores:");
    scanf("%d",&score);

    if (score>=84){
        readfirst=(struct book){
            "Crime and Punishment",
            "Fyodor Dostoryskl",
            11.25
        };
    }
    else{
        readfirst=(struct book){
            "Mr.Budhuwd;'da",
            "dawdaw",
            5.99
        };
    }
    printf("Your assigned reading:\n");
    printf("%s by %s:$%.2f\n",readfirst.title,
        readfirst.author,readfirst.value);
    return 0;
}