#include <stdio.h>
#include <string.h>
#include <ctype.h>
int mystoi(char* str);
int main(void){
    char text[8];
    printf("Enter  a number of int:");
    scanf("%s",text);
    printf("you input it is:%d\n",mystoi(text));

    return 0;
}
int mystoi(char* str){
    int result=0;
    int bit_mark=1;
    int lengh=strlen(str);
    for (int i=lengh; i>0; i--){
        if (isdigit(*(str+lengh-1))==0){
            printf("Error in character.\n");
            return 0;
        }
        result += (*(str+i-1)-'\0')*bit_mark;
        bit_mark*=10;
    }
    return result;
}