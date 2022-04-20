#include <stdio.h>
#define SIZE 10
int sum(int *ar,int n);   //声明数组地址与元素个数
int main(void){
	int marbles[SIZE]={10,20,30,50,11,30,19,26,50,30};
	long anwser;

	anwser=sum(marbles,SIZE);
	printf("数组元素的总和为:%ld\n",anwser);
	printf("marbles数组的字节大小是:%zd\n",sizeof marbles);

	return 0;
}
int sum(int *ar,int n){
	int i;
	int total;
	for (i=0; i<SIZE; i++)
		total+=*(ar+i);
	printf("ar数组的字节大小是:%zd\n",sizeof ar);
	return total;
}
