#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
typedef struct{
    int id;
    int book;
    char fname[SIZE];
    char lname[SIZE];
}list;
void show_menu(void);   //显示菜单
void get_empty(list*);  //显示剩余座位数量
void show_menu(list*);  //显示座位的编号信息
void show_booked(list*);    //显示已预定的座位信息和客户信息
void booked(list*);     //预定座位
void cancel_book(list*);    //取消预定
int main(void){
    char selected;
    show_menu();
    while ((selected=getchar())!='f'){
        switch(selected){
            case 'a':
                get_empty(list);
        }
    }

    return ;
}
void show_menu(void){
    puts("===========座位预定菜单========");
    puts("a.显示菜单");
    puts("b.显示剩余座位数量");
    puts("c.显示座位的编号信息");
    puts("d.显示已预定的座位信息和客户信息");
    puts("e.预定座位");
    puts("f.取消预定");
}
void get_empty(list* pst){
    int sum=0;
    for (int i=0; i<12; i++){
        if (pst[i].book==0)
            sum++;
    }
    printf("还有%d个座位是空的\n",sum);
}  
void show_empty(list* pst){
    printf("显示空余座位编号信息\n");
    for (int i=0; i<12; i++){
        if (list[i].booked==0)
            printf("%d",(i+1));
    }
    putchar('\n');
}
void show_booked(list* pst){
    list* temp;

}  
void booked(list*);     
void cancel_book(list*); 