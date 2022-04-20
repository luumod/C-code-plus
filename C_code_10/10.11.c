#include <stdio.h>
#define SIZE 10
int sum(int *start,int *end);   //指针指向数组首元素与末尾元素
int main(void){
	int marbles[SIZE]={10,20,30,40,50,60,70,80,90,20};
	long anwser;

	anwser=sum(marbles,marbles+SIZE);
	printf("the total is %ld\n",anwser);
	return 0;
}

int sum(int *start,int *end)
{
	int total;
	while (start<end){
		total+=*(start++);  //   *start++ 让数组元素索引加1
	}
	return total;
}
