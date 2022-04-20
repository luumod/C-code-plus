#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
#define NUMBER 5

void show_menu(void);
void input_string(int number,int str[][SIZE]);
void printf_string(int number,int str[][SIZE]);
void ASCII_string(int number,int str[][SIZE]);
void lengh_string(int number,int str[][SIZE]);
void words_string(int number,int str[][SIZE]);
void sort(int number,int ch[][2]);  //一般排序函数
int get_words_lengh(char* input); //返回首单词的长度排序


int main(void){
    char test[NUMBER][SIZE];
    int select;
    input_string(NUMBER,test);      //输入元素
    show_menu();
    scanf("%d",&select);    //选择
    while (select!=5){
        switch(select){
            case 1:printf_string(NUMBER,test);break;
            case 2:ASCII_string(NUMBER,test);break;
            case 3:lengh_string(NUMBER,test);break;
            case 4:words_string(NUMBER,test);break;
            case 5:break;   //退出
            default:printf("Error select,try again.\n");
        }
        show_menu();
        scanf("%d",&select);
    }
    printf("All done.Thank you!\n");
    return 0;
}
void show_menu(void){   //打印菜单
    printf("=======================================================\n");
    printf("1.printf original strings.    2.printf ASCII strings.\n");
    printf("3.printf lenth by strings.    4.printf words lengh strings.\n");
    printf("5.quit\n");
    printf("=======================================================\n");
}        
void input_string(int number,int str[][SIZE]){
    //循环读取五个字符，并保存在二维数组中
    printf("Please input 5 strings in this:\n");
    for (int i=0; i<number; i++){
        fgets(str[i],SIZE,stdin);
    }
}
void printf_string(int number,int str[][SIZE]){
    //打印原字符串,无排序
    printf("print 5 strings in original mode.\n");
    for (int i=0; i<number; i++){
        printf("%d %s\n",i,str[i]);
    }
}
void ASCII_string(int number,int str[][SIZE]){
    //打印按ASCII码排序的字符串
    printf("print 5 strings in ASCII mode.\n");
    int order[number][2];       //number行，2列
    for (int i=0; i<number; i++){
        //ASCII排序需要提取首字符，保存至order临时数组中:
        order[i][0]=i;
        order[i][1]=str[i][0];
    }
    sort(NUMBER,order);   //导入排序函数
    //order经过排序，已经从小到大了
    for (int i=0; i<number; i++){
        printf("%d %s\n",i,str[order[i][0]]);
    }
}
void lengh_string(int number,int str[][SIZE]){
    //按长度排序，递增
    printf("print 5 strings in lengh mode.\n");
    int order[number][2];   //创建临时数组
    for (int i=0; i<number; i++){
        //将长度值放在order，然后传递给sort函数
        order[i][0]=i;
        order[i][1]=strlen(str[i]);
    }
    sort(number,order);
    //排序后，长度从小到大
    for (int i=0; i<number; i++){
        printf("%d %s\n",i,str[order[i][0]]);
    }
}
void words_string(int number,int str[][SIZE]){
    //按首单词的长度排序
    printf("print 5 strings in words mode.\n");
    int order[number][2];
    for (int i=0; i<number; i++){
        order[i][0]=i;
        order[i][1]=get_words_lengh(str[i]);    //得到第一个单词的长度
    }
    //将单词长度数值传入sort函数进行排序
    sort(number,order);
    //按首单词，从小到大
    for (int i=0; i<number; i++){
        printf("%d %\n",i,str[order[i][0]]);
    }
}
void sort(int number,int ch[][2]){
    //排序原理
    char temp[2];      //临时数组存储排序
    for (int i=0; i<number-1; i++){
        for (int j=0; j<number-i-1; j++){
            if (ch[j][1]>ch[j+1][1]){    //ch中[1]为首元素存储位置
            /*相当于 a>b;从小到大排序
                temp=a;
                a=b;
                b=temp;*/
                temp[0]=ch[j][0];
                temp[1]=ch[j][1];

                ch[j][0]=ch[j+1][0];
                ch[j][1]=ch[j+1][1];

                ch[j+1][0]=temp[0];
                ch[j+1][1]=temp[1];
            }
        }
    }
}
int get_words_lengh(char* input){
    //函数的功能是计算每一个字符串的第一个单词的长度
    char* str=input;
    int count=0;
    while (isalpha(*str)==0){
        //删除所有非字母元素
        str++;
    }
    while (isalpha(*str)!=0){
        //如果是字母，则计数递增；
        count++;
        str++;
    }
    return count;  //字母计数
}


