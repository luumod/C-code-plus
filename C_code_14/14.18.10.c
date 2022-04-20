//利用函数指针实现switch选择
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun_a(char c);
void fun_b(char c);
void fun_c(char c);
int main(void)
{
    //创建函数指针
    void (*pt[3])(char);
    pt[0] = fun_a;
    pt[1] = fun_b;
    pt[2] = fun_c;
    char ch;
    printf("a. A   b. B  c. C (q to quit).\n");
    printf("Enter a b c or q.\n");
    scanf("%c", &ch);
    while (ch != 'q')
    {
        while (getchar()!='\n')
            continue;
        switch (ch)
        {
        case 'a':pt[0](ch); break;
        case 'b':pt[1](ch);break;
        case 'c':pt[2](ch);break;
        default:break;
        }
        printf("a. A   b. B  c. C (q to quit).\n");
        printf("Enter a b c or q.\n");
        scanf("%c", &ch);
    }
    puts("Done!");
    return 0;
}
void fun_a(char c){
    printf("This is :A.\n");
}
void fun_b(char c){
    printf("This is :B.\n");
}
void fun_c(char c){
    printf("This is :C.\n");
}