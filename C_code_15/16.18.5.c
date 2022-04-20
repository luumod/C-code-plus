//抽取随机数函数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void select1(int data[],int lengh,int number);
int main(void){
    int test[SIZE],number;
    printf("Enter number to selected: ");
    scanf("%d",&number);
    for (int i=0; i<SIZE; i++){
        test[i]=i;
    }
    select1(test,SIZE,number);

    return 0;
}
void select1(int data[],int lengh,int number){
    srand(time(0));
    printf("Start to select numbers:\n");
    //创建一个标记数组,检查是否有重合
    int* marks=(int*) malloc(lengh*sizeof(int));
    int index;
    while (number>0){
        index=rand()%lengh; //lengh以内的随机数
        //去重操作
        if (marks[index]!=0)
            continue;   //如果发现重复，结束本次循环
        else
            marks[index]=1;
        printf("Selected ID :%3d DATA: %3d \n",index,data[index]);
        number--;
    }
}