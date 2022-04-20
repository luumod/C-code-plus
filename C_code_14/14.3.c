//一封信，利用结构体嵌套
#include <stdio.h>
#define LEN 20
const char* str[5]={
    "    Thank you for the wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy.We must get together",
    "over a delicious ",
    "and have a few laughs"
};
struct names{       //结构体
    char first[LEN];
    char second[LEN];
};
struct guy{         //第二个体
    struct names handle;    //嵌套结构
    char favfood[LEN];
    char job[LEN];
    float income;
};
int main(void){
    struct guy fellow={
        {"Ewen","Villard"},
        "grilled salmon",
        "peisonality coath",
        68112.00
    };
    
    printf("Dear %s ,\n\n",fellow.handle.first);
    printf("%s%s.\n",str[0],fellow.handle.first);
    printf("%s%s\n",str[1],fellow.job);
    printf("%s\n",str[2]);
    printf("%s%s%s\n",str[3],fellow.favfood,str[4]);
    if (fellow.income>150000.0){
        puts("!!");
    }
    else if (fellow.income>75000.0){
        puts("!");
    }
    else{
        puts(".");
    }
    printf("\n%40s%s\n"," ","See you soon,");
    printf("%40s%s\n"," ","Shalala");
    return 0;
}