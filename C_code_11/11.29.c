#include <stdio.h>   //对输入的字符串按首字母从小到大排序
#include <string.h>
#define SIZE 80
#define LIM 20
#define HALT ""
void start(char* strings[],int num);
char* s_gets(char* str,int n);  //指针函数,返回指针
int main(void){

    char input[LIM][SIZE];
    char* pastr[LIM];   //指针数组
    int ct=0;
    int k;

    printf("Input up to %d lines,and I will sort them.\n",LIM);
    printf("To stop,press the  enter key at a line's start.\n");
    while (ct<LIM && s_gets(input[ct],SIZE)!=NULL && input[ct][0]!='q'){
          //ct小于指定输入行,输入的不是空字符，并且不等于q，则进行输入阶段
        pastr[ct]=input[ct];
        ct++;
    }
    start(pastr,ct);            //字符串排序函数,  ct为用户输入的行数
    puts("\nHere's the sorted list:\n");
    for (k=0; k<ct; k++){
        puts(pastr[k]);
    }
    return 0;
} 
void start(char* strings[],int num){
    char* temp;   //一个临时存储指针
    int top,seek;
    for (top=0; top<num-1; top++){      //ct=5; top=0,1,2,3
        for (seek=top+1; seek<num; seek++){ //seek=1,2,3,4 
            if (strcmp(strings[top],strings[seek])>0){    //前值大于后值，并且不相等，进行循环，否则跳过
                temp=strings[top];          //string[0]=strings[1]..[2]...[3]...[4]; strings[1]=...
                strings[top]=strings[seek];  //首字母从小到大排序
                strings[seek]=temp;     //strings[top]指的是首元素,  strings[top][0]
            }
        }
    }
}
char* s_gets(char* str,int n){
    char* ret_val;
    int i=0;
    ret_val=fgets(str,n,stdin);
    if (ret_val){
        while (str[i]!='\n' && str[i]!='\0')
            i++;
        if (str[i]=='\n')
            str[i]=='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}