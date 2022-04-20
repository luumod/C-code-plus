#include <stdio.h>
#include <string.h>
int main(void){
    printf("strcmp(\"A\",\"A\") is");   //0  相同
    printf("%d\n",strcmp("A","A"));

    printf("strcmp(\"A\",\"B\") is");   //-1 A在B的前面，则返回负数
    printf("%d\n",strcmp("A","B"));

    printf("strcmp(\"B\",\"A\") is");   //1  B大的在前面,正数
    printf("%d\n",strcmp("B","A"));

    printf("strcmp(\"C\",\"A\") is");    //1
    printf("%d\n",strcmp("C","A"));

    printf("strcmp(\"Z\",\"a\") is");   // -1   Z的ASCII位置在a前面，不相等，所以返回-1
    printf("%d\n",strcmp("Z","a"));

    printf("strcmp(\"apples\",\"apple\") is");   //1  s在\0的后面,为-1
    printf("%d\n",strcmp("apples","apple"));
    
    return 0;
}