#include <stdio.h>
int max(int *ar);
int main(void){
	int num[10]={100,5,160,127,8612,9,2,3,5,60};
	int a=max(num);
	printf("最大值:%d",a);
	return 0;
}

int  max(int *ar){
	int max_num=ar[0];
	for (int i=0; i<10; i++){	
		if (*(ar+i+1)>max_num)
			max_num=*(ar+i+1);
	}
	return max_num;
}
