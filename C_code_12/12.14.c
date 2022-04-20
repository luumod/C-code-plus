/* 动态分配数组 */
#include <stdio.h>
#include <stdlib.h>             //malloc()  free()函数原型

int main(void){
    double* ptd;
    int max;
    int number;
    int i=0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d",&max)!=1){       //输入数组的大小
        puts("Number not correctly entered  --bye!");
        exit(EXIT_FAILURE);         //处理程序异常终止
    }
    ptd=(double*) malloc(max * sizeof(double));     //分配内存空间,并用指针记录这个地址的位置
    if (ptd==NULL){
        puts("Memory allocation failed.Goodbye!");
        exit(EXIT_FAILURE);
    }
    /*ptd指向有max元素的数组*/
    puts("Enter the values (q to quit)");
    while (i<max && scanf("%lf",&ptd[i])==1)
        ++i;
    printf("Here are your  %d entries:\n",number=i);
    for (i=0; i<number; i++){
        printf("%7.2f",*(ptd+i));
        if (i%7==6)
            putchar('\n');
    }
    if (i%7!=0)
        putchar('\n');
    puts("Done!");
    free(ptd);                      //free()参数是malloc返回的地址,释放内存地址

    return 0;
}
