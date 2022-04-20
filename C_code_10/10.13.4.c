#include <stdio.h>
#define SIZE 10
int max_index(double *ar,int n);
int main(void){
	double num[SIZE]={1.1,1112.1,3.1,4.1,9.1,5.6,2.6,9.45,132.6,21.5};
	int index=max_index(num,SIZE);
	printf("数组最大值的下标是:%d\n",index);
	return 0;	
}
int max_index(double *ar,int n){
	int index=0;
	int max_num=*ar;
	for (int i=1; i<SIZE; i++){
		if (max_num<*(ar+i)){
			max_num=*(ar+i);
			index=i;
		}
	}
	return index;
}
			
