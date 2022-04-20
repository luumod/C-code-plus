/*摇骰子模拟程序  使用rand和srand函数 */
#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>     //提供rand函数原型

int roll_count=0;       //外部链接

static int rollem(int sides){    //该函数文件私有
    int roll;
    roll=rand()%sides+1;
    ++roll_count;
    
    return roll;
}
int roll_n_dice(int dics,int sides){
    int d;
    int total=0;
    if (sides<2){
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (sides<1){
        printf("Need at least 1 die.\n");
        return -1;
    }

    for (d=0; d<dics; d++)
        total+=rollem(sides);

    return total;
}