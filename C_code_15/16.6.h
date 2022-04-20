//包含你所需要信息的头文件
#include <string.h>
#define SIZE 20
//结构声明
struct name_da{
    char first[SIZE];
    char lname[SIZE];
};

typedef struct name_da names;

//函数原型
void get_names(names*);
void show_names(names*);
char* s_gets(char* str,int n);
