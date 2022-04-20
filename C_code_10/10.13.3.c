#include <stdio.h>
#define SIZE 10
int max(int *ar,int n);
int main(void){
	int num[SIZE]={1,2,3,4,5,56,8,9,10};
	int max_num=max(num,SIZE);
	printf("数组最大值:%d\n",max_num);
	return 0;
}
int max(int *ar,int n){
	int max_num=*ar;
	for (int i=1; i<n; i++){
		if (max_num<*(ar+i))
			max_num=*(ar+i);
	}
	return max_num;
}
