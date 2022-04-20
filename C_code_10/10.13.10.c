#include <stdio.h>
void sum(int n,const int *ar,const int *br,int *cr);
int main(void){
	int num1[4]={2,4,5,8};
	int num2[4]={1,0,4,6};
	int num3[4];
	sum(4,num1,num2,num3);
	for (int j=0; j<4; j++)
		printf("%d",*(num3+j));
	return 0;

}
void sum(int n,const int *ar,const int *br,int *cr){
	for (int i=0; i<n; i++){
		*(cr+i)=*(ar+i)+*(br+i);
	}
}
