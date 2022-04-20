//链表初步
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 45    //存储片名

struct film{
    char title[SIZE];
    int rating;
    struct film* next;
};
char* s_gets(char* str,int n);
int main(void){
    struct film* head=NULL;
    struct film* prev,* current;
    char input[SIZE];

    puts("Enter first movie title:");
    while (s_gets(input,SIZE)!=NULL && input[0]!='\0'){
        //为结构分配足够的空间
        current=(struct film*) malloc(sizeof(struct film));
        //head存储第一个结构的地址，其后每一个结构的地址都存储在前一个结构的next成员中
        if (head==NULL)
            //判断是否是第一个结构
            head=current;
        else
            //如果不是第一个结构，那么指针指向上一次分配的结构
            prev->next=current;
        //表明当前结构是链表的最后一个结构
        current->next=NULL;
        strcpy(current->title,input);
        puts("Enter your rating <0-10>:");
        scanf("%d",&current->rating);
        while (getchar()!='\n')
            continue;
        puts("Enter  the next movie title:");
        //指向当前结构，确保当前结构为新结构的上一个结构
        prev=current;
    }
    
    //显示电影列表
    if (head==NULL)
        printf("No data entered.");
    else
        printf("Here is the move list:\n");
    current=head;
    //到达末尾
    while (current!=NULL){
        printf("Movie: %s Rating: %d.\n",current->title,current->rating);
        current=current->next;
    }

    //完成任务，释放内存
    current=head;
    while (current!=NULL){
        head=current->next;
        free(current);
        current=head;
    }
    printf("Bye!\n");


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
            while (getchar()!=0)
                continue;      
    }
    return ret_val;
}
