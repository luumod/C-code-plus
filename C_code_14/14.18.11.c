#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10
void transform(double* src,double* tar,int n,double (*func)(double));
int main(void){
    double source[SIZE],target[SIZE];
    for (int i=0; i<SIZE; i++){
        source[i]=1;
    }
    printf("The source data is: \n");
    for (int i=0; i<SIZE; i++){
        printf("%5g",source[i]);
    }
    printf("\n");

    transform(source,target,SIZE,sin);

    printf("The target sin data is:\n");
    for (int i=0; i<SIZE; i++){
        printf("%g",target[i]);
    }
    printf("\n");

    transform(source,target,SIZE,cos);

    printf("The target cos data is:\n");
    for (int i=0; i<SIZE; i++){
        printf("%g",target[i]);
    }
    printf("\n");

    return 0;
}
void transform(double* src,double* tar,int n,double (*func)(double)){
    for (int i=0; i<n; i++){
        tar[i]=func(src[i]);
    }
}