#include <stdio.h>
#include <string.h>
#include SIZE 80
char* mystrncpy(char* c1,char *c2,int n);
int main(void){

    return 0;
}
char* mystrncpy(char* dest,char* src,int n){
    int count=0;
    while (*src!='\0' && count<n){
        *(dest+count++)=*src++;
    }
    if (count<n){
        while (count<n)
            *(dest+count++)='\0';
    }
    return dest;
}