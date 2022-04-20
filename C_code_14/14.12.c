//伸缩性数组成员
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct flex{
    //结构模块
    size_t count;
    double average;
    double scores[];    //伸缩性数组成员
};
void showflex(struct flex*);
int main(void){
    //声明指向结构的指针
    struct flex* fp1,*fp2;
    int n=3;
    int total;

    //为结构和数组分配存储空间
    fp1=malloc(sizeof(struct flex)+n*sizeof(double));
    fp1->count=n;
    for (int i=0; i<fp1->count; i++){
        fp1->scores[i]=20-i;
        total+=fp1->scores[i];
    }
    fp1->average=total/fp1->count;
    showflex(fp1);

    n=10;
    total=0;
    fp2=malloc(sizeof(struct flex)+n*sizeof(double));
    fp2->count=n;
    for (int i=0; i<fp2->count; i++){
        fp2->scores[i]=20-1/2.0;
        total+=fp2->scores[i];
    }
    fp2->average=total/fp2->count;
    showflex(fp2);

    //释放内存
    free(fp1);
    free(fp2);
    return 0;
}
void showflex(struct flex* pst){
    printf("Scores:\n");
    for (int i=0; i<pst->count; i++){
        printf("%.2lf ",pst->scores[i]);
    }
    printf("\nAverage:%.2lf \n",pst->average);
}