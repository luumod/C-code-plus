#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct user{
    char name[15];
    char and[15];
    char last[15];
};
struct user_id {
    char sid[30];
    struct user name;
}user_list[5]={
    {"302039823",
    {"Filkead","Mike","Diedale"}}
};
void printf_user_id(struct user_id*,int n);
int main(void){
    printf("Test to printf struct contents:\n");
    printf_user_id(user_list,5);

    return 0;
}
void printf_user_id(struct user_id* list,int n){
    for (int i=0; i<n; i++){
        if (strlen(list[i].sid)<9)
            break;
        printf("No : %d %s,",i+1,list[i].name.last);
        printf("%s ",list[i].name.name);
        if (strlen(list[i].name.and)>0)
            printf("%c.",list[i].name.and[0]);
        printf("-- %s",list[i].sid);
        printf("\n");
    }
}