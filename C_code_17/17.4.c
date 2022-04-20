/*使用抽象数据类型秒数ADT风格的链表*/
#include <stdio.h>
#include <stdlib.h>
#include "list.h"   //提供List Item

void showmovies(Item item);
char* s_gets(char *str, int n);
int main(void){
    List movies;
    Item temp;
    //初始化
    InitializeList(&movies);
    if (ListIsFull(&movies)){
        fprintf(stderr,"No memory available. Bye!.\n");
        exit(1);
    }

    //获取用户的输入并存储
    puts("Ener first movies title:");
    while (s_gets(temp.title,SIZE)!=NULL && temp.title[0]!='\0'){
        puts("Enter your rating <0-10>");
        scanf("%d",&temp.rating);
        while (getchar()!='\n')
            continue;
        if (AddItem(temp,&movies)==false){
            fprintf(stderr,"Problem allocating memory.\n");
            break;
        }
        if (ListIsFull(&movies)){
            //判断链表是否已满
            puts("The list is now full.");
            break;
        }
        puts("Enter next movies title (Empty to quit):");
    }

    /*显示*/
    if (ListIsEmpty(&movies)){
        //如果为空
        printf("No data entered.\n");
    }
    else{
        pritnf("Here is  the movies list:");
        Traverse(&movies,showmovies);
    }
    printf("You entered %d movies.\n",ListItemCount(&movies));

    /*清理*/
    EmptyTheList(&movies);{
        printf("Bye!\n");
    }

    return 0;
}
void showmovies(Item item){
    //显示链表信息
    printf("Movies:%s Rating: %d.n\n",item.title,item.rating);
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
            while (getchar()!=0)
                continue;      
    }
    return ret_val;
}
