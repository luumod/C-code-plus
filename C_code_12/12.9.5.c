#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void sort(int* hua,int n);   //排序函数
int main(void){
    int ch[SIZE];

    srand(time(0));
    for (int i=0; i<SIZE; i++){
        ch[i]=1+rand()%(10-1+1);     //1-10平均数
    }
    printf("The original data is:");
    for (int i=0; i<SIZE; i++){
        printf("%4d",ch[i]);    //打印数组
    }
    printf("\n");

    sort(ch,SIZE);
    printf("The sort ch is:");
    for (int i=0; i<SIZE; i++){
        printf("%4d",ch[i]);    //打印数组
    }
    printf("\n");

    return 0;
}
void sort(int* ch,int n){
    int temp;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (*(ch+i)>*(ch+j)){       //数组排序:通过整数比较，循环找出最大值，并交换至末尾
                temp=*(ch+i);
                *(ch+i)=*(ch+j);
                *(ch+j)=temp;
            }
        }
    }
}