 //数据被存储在那里？
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static_store=30;
const char* pcg="String literal";
int main(void){
    int auto_store=40;
    char auto_string[]="Auto char Array";
    int* pi;
    int* pcl;
    
    pi=(int*) malloc(sizeof(int));
    *pi=50;
    pcl=(int*) malloc(sizeof("Dynamic String")+1);
    strcpy(pcl,"Dynamic String");
    
    printf("static_store=%d at %p\n",static_store,&static_store);
    printf("auto_stroe=%d at %p\n",auto_store,&auto_store);
    printf("        *pi=%d at %p\n",*pi,pi);
    printf("%s at %p\n",pcg,&pcg);
    printf("%s at %p\n",auto_string,&auto_string);
    printf("%ls at %p\n",pcl,pcl);
    printf("%s at %p\n","Quoted string","Quoted string");

    return 0;
}