//使用指向结构的指针
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
    int sum;
    float income;
};
int main(void){
    struct guy fellow[2]={      //一个fellow数组有两个元素，每个元素都是一个guy结构
        {{"Ewen","Villard"},
        "grilled salmon",
        "peisonality coath",
        15,
        68112.00
        },
        {
            {"Rodeny","Swillbelly"},
            "Tripe",
            "Tabloid editor",
            20,
            432100.00
        }
    };

    //创建一个指向结构的指针
    struct guy* him;

    printf("address #1:%p,#2:%p.\n",&fellow[0],&fellow[1]);
    //指针指向结构变量
    him=&fellow[0];
    printf("pointer #1:%p,#2:%p.\n",him,him+1);
    printf("him->income:$%.2f: (*him).income:$%.2f\n",
        him->income,(*him).income);
    him++;  //指向&fellow[1]
    printf("him->income:$%.2f: (*him).income:$%.2f\n",
        him->income,(*him).income);
        
    return 0;
}