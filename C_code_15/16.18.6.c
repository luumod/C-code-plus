#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 5
typedef struct {
    char fname[40];
    char lname[40];
}names;
names people[SIZE];
void set_name(names* list,int n);
void show_name(const names* list,int n);
int mycomp(const void* p1,const void* p2);

int main(void){
    set_name(people,SIZE);
    show_name(people,SIZE);
    qsort(people,SIZE,sizeof(names),mycomp);
    printf("Sorted list:\n");
    show_name(people,SIZE);

    return 0;
}
void set_name(names* list,int n){
    for (int i=0; i<n; i++){
        printf("Enter the No %d people name:",i+1);
        scanf("%s %s",list[i].fname,list[i].lname);
    }
}
void show_name(const names* list,int n){
    for (int i=0; i<n; i++){
        printf("people No %d %10s.%-10s \n",i+1,list[i].fname,list[i].lname);
    }
}
int mycomp(const void* p1,const void* p2){
    const names* ps1=(const names*) p1;
    const names* ps2=(const names*) p2;
    int res=strcmp(ps1->fname,ps2->fname);
    if (res!=0)
        return res;
    else
        return strcmp(ps1->lname,ps2->lname);
}