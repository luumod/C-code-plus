#include <stdio.h>    
#include <stdlib.h>
#define SEED 10
#define SIZE 1000

int main(void){
    int num;
    int data_num[SEED+1];       //最后一位留给空字符

    for (int seed=1; seed<=10; seed++){         //10个种子，则运行十次
        printf("This is %d round to create data.\n",seed);
        srand(seed);    //每次循环设置不同的种子

        for (int i=0; i<=SEED; i++)
            data_num[i]=0;     //在每次重置种子之后把数组10个值计数初始化为 0,
        for (int j=0; j<SIZE; j++){
            num=1+rand()%(10-1+1);      //1-10随机数字
            data_num[num]++;            //以数字作为下标,出现一次,则增加一次
        }
        printf("Random data create,let's start it.\n");
        for (int i=1; i<=SEED; i++){        //1-10打印
            printf("The data_num %d created  %d times.\n",i,data_num[i]);
        }
    }
    return 0;
}
